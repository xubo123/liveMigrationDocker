/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_eventpoll_2eproto__INCLUDED
#define PROTOBUF_C_eventpoll_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#include "fown.pb-c.h"

typedef struct _EventpollTfdEntry EventpollTfdEntry;
typedef struct _EventpollFileEntry EventpollFileEntry;


/* --- enums --- */


/* --- messages --- */

struct  _EventpollTfdEntry
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t tfd;
  uint32_t events;
  uint64_t data;
};
#define EVENTPOLL_TFD_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&eventpoll_tfd_entry__descriptor) \
    , 0, 0, 0, 0 }


struct  _EventpollFileEntry
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t flags;
  FownEntry *fown;
  size_t n_tfd;
  EventpollTfdEntry **tfd;
};
#define EVENTPOLL_FILE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&eventpoll_file_entry__descriptor) \
    , 0, 0, NULL, 0,NULL }


/* EventpollTfdEntry methods */
void   eventpoll_tfd_entry__init
                     (EventpollTfdEntry         *message);
size_t eventpoll_tfd_entry__get_packed_size
                     (const EventpollTfdEntry   *message);
size_t eventpoll_tfd_entry__pack
                     (const EventpollTfdEntry   *message,
                      uint8_t             *out);
size_t eventpoll_tfd_entry__pack_to_buffer
                     (const EventpollTfdEntry   *message,
                      ProtobufCBuffer     *buffer);
EventpollTfdEntry *
       eventpoll_tfd_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   eventpoll_tfd_entry__free_unpacked
                     (EventpollTfdEntry *message,
                      ProtobufCAllocator *allocator);
/* EventpollFileEntry methods */
void   eventpoll_file_entry__init
                     (EventpollFileEntry         *message);
size_t eventpoll_file_entry__get_packed_size
                     (const EventpollFileEntry   *message);
size_t eventpoll_file_entry__pack
                     (const EventpollFileEntry   *message,
                      uint8_t             *out);
size_t eventpoll_file_entry__pack_to_buffer
                     (const EventpollFileEntry   *message,
                      ProtobufCBuffer     *buffer);
EventpollFileEntry *
       eventpoll_file_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   eventpoll_file_entry__free_unpacked
                     (EventpollFileEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*EventpollTfdEntry_Closure)
                 (const EventpollTfdEntry *message,
                  void *closure_data);
typedef void (*EventpollFileEntry_Closure)
                 (const EventpollFileEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor eventpoll_tfd_entry__descriptor;
extern const ProtobufCMessageDescriptor eventpoll_file_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_eventpoll_2eproto__INCLUDED */
