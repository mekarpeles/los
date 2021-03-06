/*
 * Copyright (c) 2000 University of Utah and the Flux Group.
 * All rights reserved.
 * 
 * This file is part of the Flux OSKit.  The OSKit is free software, also known
 * as "open source;" you can redistribute it and/or modify it under the terms
 * of the GNU General Public License (GPL), version 2, as published by the Free
 * Software Foundation (FSF).  To explore alternate licensing terms, contact
 * the University of Utah at csl-dist@cs.utah.edu or +1-801-585-3271.
 * 
 * The OSKit is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GPL for more details.  You should have
 * received a copy of the GPL along with the OSKit; see the file COPYING.  If
 * not, write to the FSF, 59 Temple Place #330, Boston, MA 02111-1307, USA.
 */

#include <oskit/types.h>
#include <oskit/c/stdio.h>
#include <oskit/c/stdarg.h>
#include <oskit/c/errno.h>
#include <oskit/debug.h>
#include <oskit/c/semaphore.h>

sem_t *
sem_open(const char *name, int oflag, ...)
{
#ifdef  THREAD_SAFE
	oskit_error_t	rc;
	oskit_mode_t mode;
	unsigned int value;
	va_list pvar;
	sem_t *sem;

	va_start(pvar, oflag);
	mode = va_arg(pvar, oskit_mode_t);
	value = va_arg(pvar, unsigned int);
	va_end(pvar);

	rc = oskit_sem_open(name, oflag, &sem, mode, value);

	if (rc) {
		errno = rc;
		return NULL;
	}
	return sem;
#else
	panic("sem_open: no single-threaded semaphore implementation");
	return 0;
#endif
}
