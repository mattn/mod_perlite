
#ifndef INCLUDES_H
#define INCLUDES_H

#ifdef _WIN32
/* avoid to re-define uid_t/gid_t in perl/CORE.h */
#define uid_t _uid_t
#define gid_t _gid_t
#endif

#include "httpd.h"
#include "http_log.h"
#include "http_core.h"
#include "http_config.h"
#include "http_protocol.h"
#include "http_request.h"

#include "ap_config.h"

#include "apr_portable.h"
#include "apr_file_io.h"
#include "apr_strings.h"
#include "apr_buckets.h"
#include "apr_errno.h"
#include "apr_lib.h"
#include "util_script.h"

#ifdef _WIN32
/* use perl's uid_t/gid_t. disable apr's thems. */
#undef uid_t
#undef gid_t
#undef exit
#endif

#include <EXTERN.h>
#include <perl.h>
#include "XSUB.h"

#define PERLITE_MAGIC_TYPE "application/x-httpd-perlite"
#define PERLITE_SCRIPT "perlite-script"

typedef struct {
  int sysprotect; /* require Sys::Protect before calling user code. */
} perlite_config;

#endif
