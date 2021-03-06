// 
// (c) 2015-2018 WLAC. For details refers to LICENSE.md
//

/*
 *	File: <sys/syslog.h> For WINDOWS MFC
 *
 *	Created on: Aug 14, 2016
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */

#ifndef __win_sys_syslog_h___
#define __win_sys_syslog_h___


/*
 * priorities/facilities are encoded into a single 32-bit quantity, where the
 * bottom 3 bits are the priority (0-7) and the top 28 bits are the facility
 * (0-big number).  Both the priorities and the facilities map roughly
 * one-to-one to strings in the syslogd(8) source code.  This mapping is
 * included in this file.
 *
 * priorities (these are ordered)
 */
#define	LOG_EMERG	0	/* system is unusable */
#define	LOG_ALERT	1	/* action must be taken immediately */
#define	LOG_CRIT	2	/* critical conditions */
#define	LOG_ERR		3	/* error conditions */
#define	LOG_WARNING	4	/* warning conditions */
#define	LOG_NOTICE	5	/* normal but significant condition */
#define	LOG_INFO	6	/* informational */
#define	LOG_DEBUG	7	/* debug-level messages */

#include <first_includes/common_include_for_headers.h>
#include <sdef_gem_windows.h>

__BEGIN_C_DECLS

void syslog(int __pri, __const char *__fmt, ...);

__END_C_DECLS


#endif  // #ifndef __win_sys_syslog_h___
