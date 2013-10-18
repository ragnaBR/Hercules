// Copyright (c) Hercules Dev Team, licensed under GNU GPL.
// See the LICENSE file
// Base Author: Haru @ http://hercules.ws

#ifndef	_COMMON_SYSINFO_H_
#define _COMMON_SYSINFO_H_

/**
 * Provides various bits of information about the system Hercules is running on
 * (note: on unix systems, to avoid runtime detection, most of the data is]
 * cached at compile time)
 */

#include "../common/cbasetypes.h"

/**
 * sysinfo.c interface
 **/
struct sysinfo_interface {
	void (*platform) (char *out, size_t len);
	void (*osversion) (char *out, size_t len);
	void (*cpu) (char *out, size_t len);
	void (*arch) (char *out, size_t len);
	bool (*is64bit) (void);
	void (*compiler) (char *out, size_t len);
	void (*cflags) (char *out, size_t len);
	void (*vcstype) (char *out, size_t len);
	void (*vcsrevision_src) (char *out, size_t len);
	void (*vcsrevision_scripts) (char *out, size_t len);
	void (*vcsrevision_reload) (void);
};

struct sysinfo_interface *sysinfo;

void sysinfo_defaults(void);

#endif /* _COMMON_SYSINFO_H_ */
