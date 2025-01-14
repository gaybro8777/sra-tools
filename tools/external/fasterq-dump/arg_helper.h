/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#ifndef _h_arg_helper_
#define _h_arg_helper_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _h_klib_rc_
#include <klib/rc.h>
#endif

#ifndef _h_namelist_
#include <klib/namelist.h>
#endif
    
#include <stdint.h>     /* uint32_t etc. */
#include <stddef.h>     /* size_t */
#include <stdbool.h>    /* bool */
    
struct Args;

const char * ahlp_get_str_option( const struct Args *args, const char *name, const char * dflt );
rc_t ahlp_get_list_option( const struct Args *args, const char * name, VNamelist * dst );
bool ahlp_get_bool_option( const struct Args *args, const char *name );
size_t ahlp_get_size_t_option( const struct Args * args, const char *name, size_t dflt );
uint64_t ahlp_get_uint64_t_option( const struct Args * args, const char *name, uint64_t dflt );
uint32_t ahlp_get_uint32_t_option( const struct Args * args, const char *name, uint32_t dflt );

uint32_t ahlp_get_env_u32( const char * name, uint32_t dflt );

#ifdef __cplusplus
}
#endif

#endif
