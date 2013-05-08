/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (tcpcapinfo_opts.c)
 *  
 *  It has been AutoGen-ed  May  7, 2013 at 11:11:39 PM by AutoGen 5.16.2
 *  From the definitions    tcpcapinfo_opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 36:5:11 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the tcpcapinfo author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The tcpcapinfo program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2000-2010 Aaron Turner, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 3 or later
 *      <http://gnu.org/licenses/gpl.html>
 *
 *  tcpcapinfo is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  tcpcapinfo is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "tcpcapinfo_opts.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;

/* TRANSLATORS: choose the translation for option names wisely because you
                cannot ever change your mind. */
#define zCopyright      (tcpcapinfo_opt_strs+0)
#define zLicenseDescrip (tcpcapinfo_opt_strs+277)

/*
 *  global included definitions
 */
#include "defines.h"
#include "common.h"
#include "config.h"


#ifndef NULL
#  define NULL 0
#endif

/*
 *  tcpcapinfo option static const strings
 */
static char const tcpcapinfo_opt_strs[1620] =
/*     0 */ "tcpcapinfo (Tcpreplay Suite)\n"
            "Copyright (C) 2000-2010 Aaron Turner, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the\n"
            "GNU General Public License, version 3 or later\n"
            "    <http://gnu.org/licenses/gpl.html>\n\0"
/*   277 */ "tcpcapinfo is free software: you can redistribute it and/or modify it under\n"
            "the terms of the GNU General Public License as published by the Free\n"
            "Software Foundation, either version 3 of the License, or (at your option)\n"
            "any later version.\n\n"
            "tcpcapinfo is distributed in the hope that it will be useful, but WITHOUT\n"
            "ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or\n"
            "FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for\n"
            "more details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   886 */ "Enable debugging output\0"
/*   910 */ "DBUG\0"
/*   915 */ "dbug\0"
/*   920 */ "Print version information\0"
/*   946 */ "VERSION\0"
/*   954 */ "version\0"
/*   962 */ "Display extended usage information and exit\0"
/*  1006 */ "help\0"
/*  1011 */ "Extended usage information passed thru pager\0"
/*  1056 */ "more-help\0"
/*  1066 */ "TCPCAPINFO\0"
/*  1077 */ "tcpcapinfo (Tcpreplay Suite) - Pcap file dissector for debugging broken pcap files\n"
            "USAGE:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... <pcap_file(s)>\n\0"
/*  1233 */ "tcpreplay-users@lists.sourceforge.net\0"
/*  1271 */ "\n"
            "tcpcapinfo is a tool for decoding the structure of a pcap(3) file with a\n"
            "focus on finding broken pcap files and determining how two related pcap\n"
            "files might differ.\n\0"
/*  1438 */ "\n"
            "tcpcapinfo will first print out the pcap_file_header_t in human readable\n"
            "form followed by a per-packet summary including the pcap_pkthdr_t and\n"
            "simple checksum value of the packet.\n";

/*
 *  dbug option description:
 */
#ifdef DEBUG
#define DBUG_DESC      (tcpcapinfo_opt_strs+886)
#define DBUG_NAME      (tcpcapinfo_opt_strs+910)
#define DBUG_name      (tcpcapinfo_opt_strs+915)
#define DBUG_DFT_ARG   ((char const*)0)
#define DBUG_FLAGS     (OPTST_DISABLED | OPTST_IMM \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

#else   /* disable dbug */
#define DBUG_FLAGS     (OPTST_OMITTED | OPTST_NO_INIT)
#define DBUG_DFT_ARG   NULL
#define DBUG_NAME      NULL
#define DBUG_DESC      NULL
#define DBUG_name      NULL
#endif  /* DEBUG */

/*
 *  version option description:
 */
#define VERSION_DESC      (tcpcapinfo_opt_strs+920)
#define VERSION_NAME      (tcpcapinfo_opt_strs+946)
#define VERSION_name      (tcpcapinfo_opt_strs+954)
#define VERSION_FLAGS     (OPTST_DISABLED)

/*
 *  Help/More_Help option descriptions:
 */
#define HELP_DESC       (tcpcapinfo_opt_strs+962)
#define HELP_name       (tcpcapinfo_opt_strs+1006)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (tcpcapinfo_opt_strs+1011)
#define MORE_HELP_name  (tcpcapinfo_opt_strs+1056)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  NULL
#define MORE_HELP_name  NULL
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
/*
 *  Declare option callback procedures
 */
#ifdef DEBUG
  static tOptProc doOptDbug;
#else /* not DEBUG */
# define doOptDbug NULL
#endif /* def/not DEBUG */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptVersion, doUsageOpt;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the tcpcapinfo Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the tcpcapinfo program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_DBUG,
     /* equiv idx, value */ 0, VALUE_OPT_DBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DBUG_FLAGS, 0,
     /* last opt argumnt */ { DBUG_DFT_ARG },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptDbug,
     /* desc, NAME, name */ DBUG_DESC, DBUG_NAME, DBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_VERSION,
     /* equiv idx, value */ 1, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VERSION_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --version */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptVersion,
     /* desc, NAME, name */ VERSION_DESC, VERSION_NAME, VERSION_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the tcpcapinfo Option Environment
 */
#define zPROGNAME       (tcpcapinfo_opt_strs+1066)
#define zUsageTitle     (tcpcapinfo_opt_strs+1077)
#define zRcName         NULL
#define apzHomeList     NULL
#define zBugsAddr       (tcpcapinfo_opt_strs+1233)
#define zExplain        (tcpcapinfo_opt_strs+1271)
#define zDetail         (tcpcapinfo_opt_strs+1438)
#define zFullVersion    (NULL)
/* extracted from optcode.tlib near line 350 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */


#define tcpcapinfo_full_usage (NULL)

#define tcpcapinfo_short_usage (NULL)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param pOptions the AutoOpts option description structure
 * @param pOptDesc the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * pOptions, tOptDesc * pOptDesc)
{
    optionUsage(&tcpcapinfoOptions, TCPCAPINFO_EXIT_SUCCESS);
    /* NOTREACHED */
    (void)pOptDesc;
    (void)pOptions;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the dbug option, when DEBUG is #define-d.
 *
 * @param pOptions the tcpcapinfo options data structure
 * @param pOptDesc the option descriptor for this option.
 */
#ifdef DEBUG
static void
doOptDbug(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0, 5 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

emit_ranges:
    optionShowRange(pOptions, pOptDesc, (void *)rng, 1);
}
#endif /* defined DEBUG */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the version option.
 *
 * @param pOptions the tcpcapinfo options data structure
 * @param pOptDesc the option descriptor for this option.
 */
static void
doOptVersion(tOptions* pOptions, tOptDesc* pOptDesc)
{
    /* extracted from tcpcapinfo_opts.def, line 96 */

    fprintf(stderr, "tcpcapinfo version: %s (build %s)", VERSION, git_version());
#ifdef DEBUG
    fprintf(stderr, " (debug)");
#endif
    fprintf(stderr, "\n");
    fprintf(stderr, "Copyright 2000-2010 by Aaron Turner <aturner at synfin dot net>\n");
    fprintf(stderr, "The entire Tcpreplay Suite is licensed under the GPLv3\n");
    exit(0);

    (void)pOptDesc;
    (void)pOptions;
}
/* extracted from optmain.tlib near line 1146 */

/**
 * The directory containing the data associated with tcpcapinfo.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged tcpcapinfo
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define tcpcapinfo_packager_info NULL
#else
static char const tcpcapinfo_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport tcpcapinfo bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for tcpcapinfo.  The one structure that
 * binds them all.
 */
tOptions tcpcapinfoOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_ARGS_REQ
    + OPTPROC_GNUUSAGE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    4 /* full option count */, 2 /* user option count */,
    tcpcapinfo_full_usage, tcpcapinfo_short_usage,
    NULL, NULL,
    PKGDATADIR, tcpcapinfo_packager_info
};

#if ENABLE_NLS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <autoopts/usage-txt.h>

static char* AO_gettext(char const* pz);
static void  coerce_it(void** s);

/**
 * AutoGen specific wrapper function for gettext.
 * It relies on the macro _() to convert from English to the target
 * language, then strdup-duplicates the result string.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const* pz)
{
    char* pzRes;
    if (pz == NULL)
        return NULL;
    pzRes = _(pz);
    if (pzRes == pz)
        return pzRes;
    pzRes = strdup(pzRes);
    if (pzRes == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(TCPCAPINFO_EXIT_FAILURE);
    }
    return pzRes;
}

static void coerce_it(void** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the tcpcapinfoOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const pOpt = &tcpcapinfoOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_usage_text.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        tOptDesc * pOD = pOpt->pOptDesc;
        char **    ppz = (char**)(void*)&(option_usage_text);
        int        ix  = option_usage_text.field_ct;

        do {
            ppz++;
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);

        coerce_it((void*)&(pOpt->pzCopyright));
        coerce_it((void*)&(pOpt->pzCopyNotice));
        coerce_it((void*)&(pOpt->pzFullVersion));
        coerce_it((void*)&(pOpt->pzUsageTitle));
        coerce_it((void*)&(pOpt->pzExplain));
        coerce_it((void*)&(pOpt->pzDetail));
        coerce_it((void*)&(pOpt->pzPackager));
        option_usage_text.field_ct = 0;

        for (ix = pOpt->optCt; ix > 0; ix--, pOD++)
            coerce_it((void*)&(pOD->pzText));
    }

    if ((pOpt->fOptSet & OPTPROC_NXLAT_OPT_CFG) == 0) {
        tOptDesc * pOD = pOpt->pOptDesc;
        int        ix;

        for (ix = pOpt->optCt; ix > 0; ix--, pOD++) {
            coerce_it((void*)&(pOD->pz_Name));
            coerce_it((void*)&(pOD->pz_DisableName));
            coerce_it((void*)&(pOD->pz_DisablePfx));
        }
        /* prevent re-translation */
        tcpcapinfoOptions.fOptSet |= OPTPROC_NXLAT_OPT_CFG | OPTPROC_NXLAT_OPT;
    }
}

#endif /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
/* tcpcapinfo_opts.c ends here */
