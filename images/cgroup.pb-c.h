/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_cgroup_2eproto__INCLUDED
#define PROTOBUF_C_cgroup_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _CgroupPerms CgroupPerms;
typedef struct _CgroupPropEntry CgroupPropEntry;
typedef struct _CgroupDirEntry CgroupDirEntry;
typedef struct _CgControllerEntry CgControllerEntry;
typedef struct _CgMemberEntry CgMemberEntry;
typedef struct _CgSetEntry CgSetEntry;
typedef struct _CgroupEntry CgroupEntry;


/* --- enums --- */


/* --- messages --- */

struct  _CgroupPerms
{
  ProtobufCMessage base;
  uint32_t mode;
  uint32_t uid;
  uint32_t gid;
};
#define CGROUP_PERMS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cgroup_perms__descriptor) \
    , 0, 0, 0 }


struct  _CgroupPropEntry
{
  ProtobufCMessage base;
  char *name;
  char *value;
  CgroupPerms *perms;
};
#define CGROUP_PROP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cgroup_prop_entry__descriptor) \
    , NULL, NULL, NULL }


struct  _CgroupDirEntry
{
  ProtobufCMessage base;
  char *dir_name;
  size_t n_children;
  CgroupDirEntry **children;
  size_t n_properties;
  CgroupPropEntry **properties;
  CgroupPerms *dir_perms;
};
#define CGROUP_DIR_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cgroup_dir_entry__descriptor) \
    , NULL, 0,NULL, 0,NULL, NULL }


struct  _CgControllerEntry
{
  ProtobufCMessage base;
  size_t n_cnames;
  char **cnames;
  size_t n_dirs;
  CgroupDirEntry **dirs;
};
#define CG_CONTROLLER_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cg_controller_entry__descriptor) \
    , 0,NULL, 0,NULL }


struct  _CgMemberEntry
{
  ProtobufCMessage base;
  char *name;
  char *path;
  protobuf_c_boolean has_cgns_prefix;
  uint32_t cgns_prefix;
};
#define CG_MEMBER_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cg_member_entry__descriptor) \
    , NULL, NULL, 0,0 }


struct  _CgSetEntry
{
  ProtobufCMessage base;
  uint32_t id;
  size_t n_ctls;
  CgMemberEntry **ctls;
};
#define CG_SET_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cg_set_entry__descriptor) \
    , 0, 0,NULL }


struct  _CgroupEntry
{
  ProtobufCMessage base;
  size_t n_sets;
  CgSetEntry **sets;
  size_t n_controllers;
  CgControllerEntry **controllers;
};
#define CGROUP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cgroup_entry__descriptor) \
    , 0,NULL, 0,NULL }


/* CgroupPerms methods */
void   cgroup_perms__init
                     (CgroupPerms         *message);
size_t cgroup_perms__get_packed_size
                     (const CgroupPerms   *message);
size_t cgroup_perms__pack
                     (const CgroupPerms   *message,
                      uint8_t             *out);
size_t cgroup_perms__pack_to_buffer
                     (const CgroupPerms   *message,
                      ProtobufCBuffer     *buffer);
CgroupPerms *
       cgroup_perms__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cgroup_perms__free_unpacked
                     (CgroupPerms *message,
                      ProtobufCAllocator *allocator);
/* CgroupPropEntry methods */
void   cgroup_prop_entry__init
                     (CgroupPropEntry         *message);
size_t cgroup_prop_entry__get_packed_size
                     (const CgroupPropEntry   *message);
size_t cgroup_prop_entry__pack
                     (const CgroupPropEntry   *message,
                      uint8_t             *out);
size_t cgroup_prop_entry__pack_to_buffer
                     (const CgroupPropEntry   *message,
                      ProtobufCBuffer     *buffer);
CgroupPropEntry *
       cgroup_prop_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cgroup_prop_entry__free_unpacked
                     (CgroupPropEntry *message,
                      ProtobufCAllocator *allocator);
/* CgroupDirEntry methods */
void   cgroup_dir_entry__init
                     (CgroupDirEntry         *message);
size_t cgroup_dir_entry__get_packed_size
                     (const CgroupDirEntry   *message);
size_t cgroup_dir_entry__pack
                     (const CgroupDirEntry   *message,
                      uint8_t             *out);
size_t cgroup_dir_entry__pack_to_buffer
                     (const CgroupDirEntry   *message,
                      ProtobufCBuffer     *buffer);
CgroupDirEntry *
       cgroup_dir_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cgroup_dir_entry__free_unpacked
                     (CgroupDirEntry *message,
                      ProtobufCAllocator *allocator);
/* CgControllerEntry methods */
void   cg_controller_entry__init
                     (CgControllerEntry         *message);
size_t cg_controller_entry__get_packed_size
                     (const CgControllerEntry   *message);
size_t cg_controller_entry__pack
                     (const CgControllerEntry   *message,
                      uint8_t             *out);
size_t cg_controller_entry__pack_to_buffer
                     (const CgControllerEntry   *message,
                      ProtobufCBuffer     *buffer);
CgControllerEntry *
       cg_controller_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cg_controller_entry__free_unpacked
                     (CgControllerEntry *message,
                      ProtobufCAllocator *allocator);
/* CgMemberEntry methods */
void   cg_member_entry__init
                     (CgMemberEntry         *message);
size_t cg_member_entry__get_packed_size
                     (const CgMemberEntry   *message);
size_t cg_member_entry__pack
                     (const CgMemberEntry   *message,
                      uint8_t             *out);
size_t cg_member_entry__pack_to_buffer
                     (const CgMemberEntry   *message,
                      ProtobufCBuffer     *buffer);
CgMemberEntry *
       cg_member_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cg_member_entry__free_unpacked
                     (CgMemberEntry *message,
                      ProtobufCAllocator *allocator);
/* CgSetEntry methods */
void   cg_set_entry__init
                     (CgSetEntry         *message);
size_t cg_set_entry__get_packed_size
                     (const CgSetEntry   *message);
size_t cg_set_entry__pack
                     (const CgSetEntry   *message,
                      uint8_t             *out);
size_t cg_set_entry__pack_to_buffer
                     (const CgSetEntry   *message,
                      ProtobufCBuffer     *buffer);
CgSetEntry *
       cg_set_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cg_set_entry__free_unpacked
                     (CgSetEntry *message,
                      ProtobufCAllocator *allocator);
/* CgroupEntry methods */
void   cgroup_entry__init
                     (CgroupEntry         *message);
size_t cgroup_entry__get_packed_size
                     (const CgroupEntry   *message);
size_t cgroup_entry__pack
                     (const CgroupEntry   *message,
                      uint8_t             *out);
size_t cgroup_entry__pack_to_buffer
                     (const CgroupEntry   *message,
                      ProtobufCBuffer     *buffer);
CgroupEntry *
       cgroup_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cgroup_entry__free_unpacked
                     (CgroupEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CgroupPerms_Closure)
                 (const CgroupPerms *message,
                  void *closure_data);
typedef void (*CgroupPropEntry_Closure)
                 (const CgroupPropEntry *message,
                  void *closure_data);
typedef void (*CgroupDirEntry_Closure)
                 (const CgroupDirEntry *message,
                  void *closure_data);
typedef void (*CgControllerEntry_Closure)
                 (const CgControllerEntry *message,
                  void *closure_data);
typedef void (*CgMemberEntry_Closure)
                 (const CgMemberEntry *message,
                  void *closure_data);
typedef void (*CgSetEntry_Closure)
                 (const CgSetEntry *message,
                  void *closure_data);
typedef void (*CgroupEntry_Closure)
                 (const CgroupEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor cgroup_perms__descriptor;
extern const ProtobufCMessageDescriptor cgroup_prop_entry__descriptor;
extern const ProtobufCMessageDescriptor cgroup_dir_entry__descriptor;
extern const ProtobufCMessageDescriptor cg_controller_entry__descriptor;
extern const ProtobufCMessageDescriptor cg_member_entry__descriptor;
extern const ProtobufCMessageDescriptor cg_set_entry__descriptor;
extern const ProtobufCMessageDescriptor cgroup_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_cgroup_2eproto__INCLUDED */
