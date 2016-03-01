/*
 * Copyright (C) the libgit2 contributors. All rights reserved.
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */

#ifndef INCLUDE_ssh_h__
#define INCLUDE_ssh_h__

/**
 * Initializes the libssh2 library, if used.
 *
 * @return Zero on success;
 */
int git_ssh_global_init();

/**
 * Deinitializes the libssh2 library, if used.
 */
void git_ssh_global_shutdown();

#endif
