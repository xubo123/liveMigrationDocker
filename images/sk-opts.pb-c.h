/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_sk_2dopts_2eproto__INCLUDED
#define PROTOBUF_C_sk_2dopts_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _SkOptsEntry SkOptsEntry;


/* --- enums --- */

typedef enum _SkShutdown {
  SK_SHUTDOWN__NONE = 0,
  SK_SHUTDOWN__READ = 1,
  SK_SHUTDOWN__WRITE = 2,
  SK_SHUTDOWN__BOTH = 3
} SkShutdown;

/* --- messages --- */

struct  _SkOptsEntry
{
  ProtobufCMessage base;
  uint32_t so_sndbuf;
  uint32_t so_rcvbuf;
  uint64_t so_snd_tmo_sec;
  uint64_t so_snd_tmo_usec;
  uint64_t so_rcv_tmo_sec;
  uint64_t so_rcv_tmo_usec;
  protobuf_c_boolean has_reuseaddr;
  protobuf_c_boolean reuseaddr;
  protobuf_c_boolean has_so_priority;
  uint32_t so_priority;
  protobuf_c_boolean has_so_rcvlowat;
  uint32_t so_rcvlowat;
  protobuf_c_boolean has_so_mark;
  uint32_t so_mark;
  protobuf_c_boolean has_so_passcred;
  protobuf_c_boolean so_passcred;
  protobuf_c_boolean has_so_passsec;
  protobuf_c_boolean so_passsec;
  protobuf_c_boolean has_so_dontroute;
  protobuf_c_boolean so_dontroute;
  protobuf_c_boolean has_so_no_check;
  protobuf_c_boolean so_no_check;
  char *so_bound_dev;
  size_t n_so_filter;
  uint64_t *so_filter;
};
#define SK_OPTS_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sk_opts_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, NULL, 0,NULL }


/* SkOptsEntry methods */
void   sk_opts_entry__init
                     (SkOptsEntry         *message);
size_t sk_opts_entry__get_packed_size
                     (const SkOptsEntry   *message);
size_t sk_opts_entry__pack
                     (const SkOptsEntry   *message,
                      uint8_t             *out);
size_t sk_opts_entry__pack_to_buffer
                     (const SkOptsEntry   *message,
                      ProtobufCBuffer     *buffer);
SkOptsEntry *
       sk_opts_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sk_opts_entry__free_unpacked
                     (SkOptsEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SkOptsEntry_Closure)
                 (const SkOptsEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    sk_shutdown__descriptor;
extern const ProtobufCMessageDescriptor sk_opts_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_sk_2dopts_2eproto__INCLUDED */
