/*
 * This file is part of the cdlog Library.
 *
 * Copyright (C) 2011 by Hardy Simpson <HardySimpson1984@gmail.com>
 *
 * Licensed under the LGPL v2.1, see the file COPYING in base directory.
 */

#ifndef __cdlog_record_table_h
#define __cdlog_record_table_h

#include "zc_defs.h"
#include "record.h"

zc_hashtable_t *cdlog_record_table_new(void);
void cdlog_record_table_del(zc_hashtable_t * records);
void cdlog_record_table_profile(zc_hashtable_t * records, int flag);

#endif
