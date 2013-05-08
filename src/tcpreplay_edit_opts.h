/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (tcpreplay_edit_opts.h)
 *  
 *  It has been AutoGen-ed  May  8, 2013 at 01:38:26 PM by AutoGen 5.16.2
 *  From the definitions    tcpreplay_opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 36:5:11 templates.
 *
 *  AutoOpts is a copyrighted work.  This header file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the tcpreplay-edit author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The tcpreplay-edit program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2000-2010 Aaron Turner, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 3 or later
 *      <http://gnu.org/licenses/gpl.html>
 *
 *  tcpreplay-edit is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  tcpreplay-edit is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the tcpreplay-edit program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_TCPREPLAY_EDIT_OPTS_H_GUARD
#define AUTOOPTS_TCPREPLAY_EDIT_OPTS_H_GUARD 1
#include "config.h"
#include <autoopts/options.h>

/*
 *  Ensure that the library used for compiling this generated header is at
 *  least as new as the version current when the header template was released
 *  (not counting patch version increments).  Also ensure that the oldest
 *  tolerable version is at least as old as what was current when the header
 *  template was released.
 */
#define AO_TEMPLATE_VERSION 147461
#if (AO_TEMPLATE_VERSION < OPTIONS_MINIMUM_VERSION) \
 || (AO_TEMPLATE_VERSION > OPTIONS_STRUCT_VERSION)
# error option template version mismatches autoopts/options.h header
  Choke Me.
#endif

/*
 *  Enumeration of each option:
 */
typedef enum {
    INDEX_OPT_PORTMAP            =  1,
    INDEX_OPT_SEED               =  2,
    INDEX_OPT_PNAT               =  3,
    INDEX_OPT_SRCIPMAP           =  4,
    INDEX_OPT_DSTIPMAP           =  5,
    INDEX_OPT_ENDPOINTS          =  6,
    INDEX_OPT_SKIPBROADCAST      =  7,
    INDEX_OPT_FIXCSUM            =  8,
    INDEX_OPT_MTU                =  9,
    INDEX_OPT_MTU_TRUNC          = 10,
    INDEX_OPT_EFCS               = 11,
    INDEX_OPT_TTL                = 12,
    INDEX_OPT_TOS                = 13,
    INDEX_OPT_TCLASS             = 14,
    INDEX_OPT_FLOWLABEL          = 15,
    INDEX_OPT_FIXLEN             = 16,
    INDEX_OPT_SKIPL2BROADCAST    = 17,
    INDEX_OPT_DLT                = 18,
    INDEX_OPT_ENET_DMAC          = 19,
    INDEX_OPT_ENET_SMAC          = 20,
    INDEX_OPT_ENET_VLAN          = 21,
    INDEX_OPT_ENET_VLAN_TAG      = 22,
    INDEX_OPT_ENET_VLAN_CFI      = 23,
    INDEX_OPT_ENET_VLAN_PRI      = 24,
    INDEX_OPT_HDLC_CONTROL       = 25,
    INDEX_OPT_HDLC_ADDRESS       = 26,
    INDEX_OPT_USER_DLT           = 27,
    INDEX_OPT_USER_DLINK         = 28,
    INDEX_OPT_DBUG               = 29,
    INDEX_OPT_QUIET              = 30,
    INDEX_OPT_TIMER              = 31,
    INDEX_OPT_SLEEP_ACCEL        = 32,
    INDEX_OPT_RDTSC_CLICKS       = 33,
    INDEX_OPT_VERBOSE            = 34,
    INDEX_OPT_DECODE             = 35,
    INDEX_OPT_ENABLE_FILE_CACHE  = 36,
    INDEX_OPT_PRELOAD_PCAP       = 37,
    INDEX_OPT_CACHEFILE          = 38,
    INDEX_OPT_DUALFILE           = 39,
    INDEX_OPT_INTF1              = 40,
    INDEX_OPT_INTF2              = 41,
    INDEX_OPT_LISTNICS           = 42,
    INDEX_OPT_LOOP               = 43,
    INDEX_OPT_PKTLEN             = 44,
    INDEX_OPT_LIMIT              = 45,
    INDEX_OPT_MULTIPLIER         = 46,
    INDEX_OPT_PPS                = 47,
    INDEX_OPT_MBPS               = 48,
    INDEX_OPT_TOPSPEED           = 49,
    INDEX_OPT_ONEATATIME         = 50,
    INDEX_OPT_PPS_MULTI          = 51,
    INDEX_OPT_PID                = 52,
    INDEX_OPT_STATS              = 53,
    INDEX_OPT_VERSION            = 54,
    INDEX_OPT_LESS_HELP          = 55,
    INDEX_OPT_HELP               = 56,
    INDEX_OPT_MORE_HELP          = 57,
    INDEX_OPT_SAVE_OPTS          = 58,
    INDEX_OPT_LOAD_OPTS          = 59
} teOptIndex;

#define OPTION_CT    60

/*
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT(TCPEDIT)
 */
#define         DESC(n) (tcpreplay_editOptions.pOptDesc[INDEX_OPT_## n])
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
#define      OPT_ARG(n) (DESC(n).optArg.argString)
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
#define    COUNT_OPT(n) (DESC(n).optOccCt)
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ((DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * *
 *
 *  Enumeration of tcpreplay-edit exit codes
 */
typedef enum {
    TCPREPLAY_EDIT_EXIT_SUCCESS = 0,
    TCPREPLAY_EDIT_EXIT_FAILURE = 1,
    TCPREPLAY_EDIT_EXIT_NO_CONFIG_INPUT = 66,
    TCPREPLAY_EDIT_EXIT_LIBOPTS_FAILURE = 70
} tcpreplay_edit_exit_code_t;
/* * * * * *
 *
 *  Interface defines for specific options.
 */
#define VALUE_OPT_PORTMAP        'r'
#define VALUE_OPT_SEED           's'

#define OPT_VALUE_SEED           (DESC(SEED).optArg.argInt)
#define VALUE_OPT_PNAT           'N'
#define VALUE_OPT_SRCIPMAP       'S'
#define VALUE_OPT_DSTIPMAP       'D'
#define VALUE_OPT_ENDPOINTS      'e'
#define VALUE_OPT_SKIPBROADCAST  'b'
#define VALUE_OPT_FIXCSUM        'C'
#define VALUE_OPT_MTU            'm'

#define OPT_VALUE_MTU            (DESC(MTU).optArg.argInt)
#define VALUE_OPT_MTU_TRUNC      10
#define VALUE_OPT_EFCS           'E'
#define VALUE_OPT_TTL            12
#define VALUE_OPT_TOS            13

#define OPT_VALUE_TOS            (DESC(TOS).optArg.argInt)
#define VALUE_OPT_TCLASS         14

#define OPT_VALUE_TCLASS         (DESC(TCLASS).optArg.argInt)
#define VALUE_OPT_FLOWLABEL      15

#define OPT_VALUE_FLOWLABEL      (DESC(FLOWLABEL).optArg.argInt)
#define VALUE_OPT_FIXLEN         'F'
#define VALUE_OPT_SKIPL2BROADCAST 17
#define VALUE_OPT_DLT            18
#define VALUE_OPT_ENET_DMAC      19
#define VALUE_OPT_ENET_SMAC      20
#define VALUE_OPT_ENET_VLAN      21
#define VALUE_OPT_ENET_VLAN_TAG  22

#define OPT_VALUE_ENET_VLAN_TAG  (DESC(ENET_VLAN_TAG).optArg.argInt)
#define VALUE_OPT_ENET_VLAN_CFI  23

#define OPT_VALUE_ENET_VLAN_CFI  (DESC(ENET_VLAN_CFI).optArg.argInt)
#define VALUE_OPT_ENET_VLAN_PRI  24

#define OPT_VALUE_ENET_VLAN_PRI  (DESC(ENET_VLAN_PRI).optArg.argInt)
#define VALUE_OPT_HDLC_CONTROL   25

#define OPT_VALUE_HDLC_CONTROL   (DESC(HDLC_CONTROL).optArg.argInt)
#define VALUE_OPT_HDLC_ADDRESS   26

#define OPT_VALUE_HDLC_ADDRESS   (DESC(HDLC_ADDRESS).optArg.argInt)
#define VALUE_OPT_USER_DLT       27

#define OPT_VALUE_USER_DLT       (DESC(USER_DLT).optArg.argInt)
#define VALUE_OPT_USER_DLINK     28
#define VALUE_OPT_DBUG           'd'
#ifdef DEBUG
#define OPT_VALUE_DBUG           (DESC(DBUG).optArg.argInt)
#endif /* DEBUG */
#define VALUE_OPT_QUIET          'q'
#define VALUE_OPT_TIMER          'T'
#define VALUE_OPT_SLEEP_ACCEL    32

#define OPT_VALUE_SLEEP_ACCEL    (DESC(SLEEP_ACCEL).optArg.argInt)
#define VALUE_OPT_RDTSC_CLICKS   129

#define OPT_VALUE_RDTSC_CLICKS   (DESC(RDTSC_CLICKS).optArg.argInt)
#define VALUE_OPT_VERBOSE        'v'
#ifdef ENABLE_VERBOSE
#define SET_OPT_VERBOSE   STMTS( \
        DESC(VERBOSE).optActualIndex = 34; \
        DESC(VERBOSE).optActualValue = VALUE_OPT_VERBOSE; \
        DESC(VERBOSE).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(VERBOSE).fOptState |= OPTST_SET )
#endif /* ENABLE_VERBOSE */
#define VALUE_OPT_DECODE         'A'
#define VALUE_OPT_ENABLE_FILE_CACHE 'K'
#define VALUE_OPT_PRELOAD_PCAP   133
#define VALUE_OPT_CACHEFILE      'c'
#define VALUE_OPT_DUALFILE       '2'
#define VALUE_OPT_INTF1          'i'
#define VALUE_OPT_INTF2          'I'
#define VALUE_OPT_LISTNICS       138
#define VALUE_OPT_LOOP           'l'

#define OPT_VALUE_LOOP           (DESC(LOOP).optArg.argInt)
#define VALUE_OPT_PKTLEN         140
#define VALUE_OPT_LIMIT          'L'

#define OPT_VALUE_LIMIT          (DESC(LIMIT).optArg.argInt)
#define VALUE_OPT_MULTIPLIER     'x'
#define VALUE_OPT_PPS            'p'

#define OPT_VALUE_PPS            (DESC(PPS).optArg.argInt)
#define VALUE_OPT_MBPS           'M'
#define VALUE_OPT_TOPSPEED       't'
#define VALUE_OPT_ONEATATIME     'o'
#define VALUE_OPT_PPS_MULTI      147

#define OPT_VALUE_PPS_MULTI      (DESC(PPS_MULTI).optArg.argInt)
#define VALUE_OPT_PID            'P'
#define VALUE_OPT_STATS          149

#define OPT_VALUE_STATS          (DESC(STATS).optArg.argInt)
#define VALUE_OPT_VERSION        'V'
#define VALUE_OPT_LESS_HELP      'h'
#define VALUE_OPT_HELP          'H'
#define VALUE_OPT_MORE_HELP     '!'
#define VALUE_OPT_SAVE_OPTS     INDEX_OPT_SAVE_OPTS
#define VALUE_OPT_LOAD_OPTS     INDEX_OPT_LOAD_OPTS
#define SET_OPT_SAVE_OPTS(a)   STMTS( \
        DESC(SAVE_OPTS).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(SAVE_OPTS).fOptState |= OPTST_SET; \
        DESC(SAVE_OPTS).optArg.argString = (char const*)(a) )
/*
 *  Interface defines not associated with particular options
 */
#define ERRSKIP_OPTERR  STMTS(tcpreplay_editOptions.fOptSet &= ~OPTPROC_ERRSTOP)
#define ERRSTOP_OPTERR  STMTS(tcpreplay_editOptions.fOptSet |= OPTPROC_ERRSTOP)
#define RESTART_OPT(n)  STMTS( \
                tcpreplay_editOptions.curOptIdx = (n); \
                tcpreplay_editOptions.pzCurOpt  = NULL)
#define START_OPT       RESTART_OPT(1)
#define USAGE(c)        (*tcpreplay_editOptions.pUsageProc)(&tcpreplay_editOptions, c)
/* extracted from opthead.tlib near line 484 */

#ifdef  __cplusplus
extern "C" {
#endif


/* * * * * *
 *
 *  Declare the tcpreplay-edit option descriptor.
 */
extern tOptions tcpreplay_editOptions;

#if defined(ENABLE_NLS)
# ifndef _
#   include <stdio.h>
#   ifndef HAVE_GETTEXT
      extern char * gettext(char const *);
#   else
#     include <libintl.h>
#   endif

static inline char* aoGetsText(char const* pz) {
    if (pz == NULL) return NULL;
    return (char*)gettext(pz);
}
#   define _(s)  aoGetsText(s)
# endif /* _() */

# define OPT_NO_XLAT_CFG_NAMES  STMTS(tcpreplay_editOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT_CFG;)
# define OPT_NO_XLAT_OPT_NAMES  STMTS(tcpreplay_editOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG;)

# define OPT_XLAT_CFG_NAMES     STMTS(tcpreplay_editOptions.fOptSet &= \
                                  ~(OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG);)
# define OPT_XLAT_OPT_NAMES     STMTS(tcpreplay_editOptions.fOptSet &= \
                                  ~OPTPROC_NXLAT_OPT;)

#else   /* ENABLE_NLS */
# define OPT_NO_XLAT_CFG_NAMES
# define OPT_NO_XLAT_OPT_NAMES

# define OPT_XLAT_CFG_NAMES
# define OPT_XLAT_OPT_NAMES

# ifndef _
#   define _(_s)  _s
# endif
#endif  /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
#endif /* AUTOOPTS_TCPREPLAY_EDIT_OPTS_H_GUARD */
/* tcpreplay_edit_opts.h ends here */
