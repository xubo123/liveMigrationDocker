/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_core_2dppc64_2eproto__INCLUDED
#define PROTOBUF_C_core_2dppc64_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _UserPpc64RegsEntry UserPpc64RegsEntry;
typedef struct _UserPpc64FpstateEntry UserPpc64FpstateEntry;
typedef struct _UserPpc64VrstateEntry UserPpc64VrstateEntry;
typedef struct _UserPpc64VsxstateEntry UserPpc64VsxstateEntry;
typedef struct _ThreadInfoPpc64 ThreadInfoPpc64;


/* --- enums --- */


/* --- messages --- */

struct  _UserPpc64RegsEntry
{
  ProtobufCMessage base;
  size_t n_gpr;
  uint64_t *gpr;
  uint64_t nip;
  uint64_t msr;
  uint64_t orig_gpr3;
  uint64_t ctr;
  uint64_t link;
  uint64_t xer;
  uint64_t ccr;
  uint64_t trap;
};
#define USER_PPC64_REGS_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&user_ppc64_regs_entry__descriptor) \
    , 0,NULL, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  _UserPpc64FpstateEntry
{
  ProtobufCMessage base;
  size_t n_fpregs;
  uint64_t *fpregs;
};
#define USER_PPC64_FPSTATE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&user_ppc64_fpstate_entry__descriptor) \
    , 0,NULL }


struct  _UserPpc64VrstateEntry
{
  ProtobufCMessage base;
  size_t n_vrregs;
  uint64_t *vrregs;
  uint32_t vrsave;
};
#define USER_PPC64_VRSTATE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&user_ppc64_vrstate_entry__descriptor) \
    , 0,NULL, 0 }


struct  _UserPpc64VsxstateEntry
{
  ProtobufCMessage base;
  size_t n_vsxregs;
  uint64_t *vsxregs;
};
#define USER_PPC64_VSXSTATE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&user_ppc64_vsxstate_entry__descriptor) \
    , 0,NULL }


struct  _ThreadInfoPpc64
{
  ProtobufCMessage base;
  uint64_t clear_tid_addr;
  UserPpc64RegsEntry *gpregs;
  UserPpc64FpstateEntry *fpstate;
  UserPpc64VrstateEntry *vrstate;
  UserPpc64VsxstateEntry *vsxstate;
};
#define THREAD_INFO_PPC64__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&thread_info_ppc64__descriptor) \
    , 0, NULL, NULL, NULL, NULL }


/* UserPpc64RegsEntry methods */
void   user_ppc64_regs_entry__init
                     (UserPpc64RegsEntry         *message);
size_t user_ppc64_regs_entry__get_packed_size
                     (const UserPpc64RegsEntry   *message);
size_t user_ppc64_regs_entry__pack
                     (const UserPpc64RegsEntry   *message,
                      uint8_t             *out);
size_t user_ppc64_regs_entry__pack_to_buffer
                     (const UserPpc64RegsEntry   *message,
                      ProtobufCBuffer     *buffer);
UserPpc64RegsEntry *
       user_ppc64_regs_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   user_ppc64_regs_entry__free_unpacked
                     (UserPpc64RegsEntry *message,
                      ProtobufCAllocator *allocator);
/* UserPpc64FpstateEntry methods */
void   user_ppc64_fpstate_entry__init
                     (UserPpc64FpstateEntry         *message);
size_t user_ppc64_fpstate_entry__get_packed_size
                     (const UserPpc64FpstateEntry   *message);
size_t user_ppc64_fpstate_entry__pack
                     (const UserPpc64FpstateEntry   *message,
                      uint8_t             *out);
size_t user_ppc64_fpstate_entry__pack_to_buffer
                     (const UserPpc64FpstateEntry   *message,
                      ProtobufCBuffer     *buffer);
UserPpc64FpstateEntry *
       user_ppc64_fpstate_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   user_ppc64_fpstate_entry__free_unpacked
                     (UserPpc64FpstateEntry *message,
                      ProtobufCAllocator *allocator);
/* UserPpc64VrstateEntry methods */
void   user_ppc64_vrstate_entry__init
                     (UserPpc64VrstateEntry         *message);
size_t user_ppc64_vrstate_entry__get_packed_size
                     (const UserPpc64VrstateEntry   *message);
size_t user_ppc64_vrstate_entry__pack
                     (const UserPpc64VrstateEntry   *message,
                      uint8_t             *out);
size_t user_ppc64_vrstate_entry__pack_to_buffer
                     (const UserPpc64VrstateEntry   *message,
                      ProtobufCBuffer     *buffer);
UserPpc64VrstateEntry *
       user_ppc64_vrstate_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   user_ppc64_vrstate_entry__free_unpacked
                     (UserPpc64VrstateEntry *message,
                      ProtobufCAllocator *allocator);
/* UserPpc64VsxstateEntry methods */
void   user_ppc64_vsxstate_entry__init
                     (UserPpc64VsxstateEntry         *message);
size_t user_ppc64_vsxstate_entry__get_packed_size
                     (const UserPpc64VsxstateEntry   *message);
size_t user_ppc64_vsxstate_entry__pack
                     (const UserPpc64VsxstateEntry   *message,
                      uint8_t             *out);
size_t user_ppc64_vsxstate_entry__pack_to_buffer
                     (const UserPpc64VsxstateEntry   *message,
                      ProtobufCBuffer     *buffer);
UserPpc64VsxstateEntry *
       user_ppc64_vsxstate_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   user_ppc64_vsxstate_entry__free_unpacked
                     (UserPpc64VsxstateEntry *message,
                      ProtobufCAllocator *allocator);
/* ThreadInfoPpc64 methods */
void   thread_info_ppc64__init
                     (ThreadInfoPpc64         *message);
size_t thread_info_ppc64__get_packed_size
                     (const ThreadInfoPpc64   *message);
size_t thread_info_ppc64__pack
                     (const ThreadInfoPpc64   *message,
                      uint8_t             *out);
size_t thread_info_ppc64__pack_to_buffer
                     (const ThreadInfoPpc64   *message,
                      ProtobufCBuffer     *buffer);
ThreadInfoPpc64 *
       thread_info_ppc64__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   thread_info_ppc64__free_unpacked
                     (ThreadInfoPpc64 *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*UserPpc64RegsEntry_Closure)
                 (const UserPpc64RegsEntry *message,
                  void *closure_data);
typedef void (*UserPpc64FpstateEntry_Closure)
                 (const UserPpc64FpstateEntry *message,
                  void *closure_data);
typedef void (*UserPpc64VrstateEntry_Closure)
                 (const UserPpc64VrstateEntry *message,
                  void *closure_data);
typedef void (*UserPpc64VsxstateEntry_Closure)
                 (const UserPpc64VsxstateEntry *message,
                  void *closure_data);
typedef void (*ThreadInfoPpc64_Closure)
                 (const ThreadInfoPpc64 *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor user_ppc64_regs_entry__descriptor;
extern const ProtobufCMessageDescriptor user_ppc64_fpstate_entry__descriptor;
extern const ProtobufCMessageDescriptor user_ppc64_vrstate_entry__descriptor;
extern const ProtobufCMessageDescriptor user_ppc64_vsxstate_entry__descriptor;
extern const ProtobufCMessageDescriptor thread_info_ppc64__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_core_2dppc64_2eproto__INCLUDED */
