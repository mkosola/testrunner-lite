/* * This file is part of testrunner-lite *
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 * All rights reserved.
 *
 * Contact: Sampo Saaristo <test-tools-dev@projects.maemo.org>
 *
 * This software, including documentation, is protected by copyright
 * controlled by Nokia Corporation. All rights are reserved. Copying,
 * including reproducing, storing, adapting or translating, any or all of
 * this material requires the prior written consent of Nokia Corporation.
 * This material also contains confidential information which may not be
 * disclosed to others without the prior written consent of Nokia.
 *
 */

#ifndef REMOTE_EXECUTOR_H
#define REMOTE_EXECUTOR_H

/* ------------------------------------------------------------------------- */
/* INCLUDES */
#include "testrunnerlite.h"

/* ------------------------------------------------------------------------- */
/* CONSTANTS */
/* None */

/* ------------------------------------------------------------------------- */
/* MACROS */
/* None */

/* ------------------------------------------------------------------------- */
/* DATA TYPES */
/* ------------------------------------------------------------------------- */
/* None */

/* ------------------------------------------------------------------------- */
/* FORWARD DECLARATIONS */
/* None */

/* ------------------------------------------------------------------------- */
/* STRUCTURES */
/* None */

/* ------------------------------------------------------------------------- */
/* FUNCTION PROTOTYPES */
/* ------------------------------------------------------------------------- */
void ssh_executor_init ();
/* ------------------------------------------------------------------------- */
int ssh_execute (const char *hostname, const char *command);
/* ------------------------------------------------------------------------- */
int ssh_kill (const char *hostname, pid_t id);
/* ------------------------------------------------------------------------- */
void ssh_clean (const char *hostname, pid_t id);
/* ------------------------------------------------------------------------- */
void ssh_executor_close (const char *hostname);
/* ------------------------------------------------------------------------- */
#endif                          /* REMOTE_EXECUTOR_H */
/* End of file */
