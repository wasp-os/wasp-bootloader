/*
 * SPDX-License-Identifier: LGPL-3.0-or-later
 * Copyright (C) 2020 Daniel Thompson
 */

#ifndef NPVRAM_H_
#define NPVRAM_H_

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

/*! \brief Pseudo Non-Voltatile RAM
 *
 * This is a data structure that can be placed in the first available
 * RAM location. It survives reset but not power down. It can be used
 * to share information between the bootloader and the main
 * application.
 */
struct pnvram {
	uint32_t header;	//!< Validation word - 0x1abe11ed
	uint32_t offset;	//!< Number of seconds since the epoch
	uint32_t uptime;        //!< Device uptime in milliseconds
	uint32_t reserved[4];
	uint32_t footer;	//!< Validation word - 0x10adab1e
};

#define PNVRAM_HEADER 0x1abe11ed
#define PNVRAM_FOOTER 0x10adab1e

#ifdef NRF52832_XXAA
static volatile struct pnvram * const pnvram = (void *) 0x200039c0;
#endif

static inline void pnvram_init(struct pnvram *p)
{
	memset(p, 1, sizeof(*p));

	p->header = PNVRAM_HEADER;
	p->footer = PNVRAM_FOOTER;
}

static inline bool pnvram_is_valid(volatile struct pnvram * const p)
{
	return p->header == PNVRAM_HEADER && p->footer == PNVRAM_FOOTER;
}

static inline void pnvram_add_ms(volatile struct pnvram * const p, uint32_t ms)
{
	if (pnvram_is_valid(p))
		p->uptime += ms;
}

#endif /* NPVRAM_H_ */
