/*
 * libEtPan! -- a mail stuff library
 *   Microsoft Exchange Web Services support
 *
 * Copyright (C) 2012 Lysann Kessler
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the libEtPan! project nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef OXWS_TYPES_ITEM_H
#define OXWS_TYPES_ITEM_H

#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h>
#include <time.h>

#include <libetpan/oxws_types.h>
#include <libetpan/carray.h>
#include <libetpan/mmapstring.h>


/*
  oxws_optional_int32

  An 32 bit integer type with optional value. It is considered unset if its
  value is OXWS_OPTIONAL_INT32__NOT_SET.
*/
typedef int32_t oxws_optional_int32;
#define OXWS_OPTIONAL_INT32__NOT_SET -2147483648

/*
  enum oxws_optional_boolean

  A boolean type with optional value. It is considered unset if its value is
  OXWS_OPTIONAL_BOOLEAN__NOT_SET.
*/
enum oxws_optional_boolean {
  OXWS_OPTIONAL_BOOLEAN__NOT_SET = -1,
  OXWS_OPTIONAL_BOOLEAN_TRUE     = 1,
  OXWS_OPTIONAL_BOOLEAN_FALSE    = 0,
};
typedef enum oxws_optional_boolean oxws_optional_boolean;


/*
  enum oxws_item_class_id

  class of a oxws_item
*/
enum oxws_item_class_id {
  OXWS_ITEM_CLASS_ITEM, /* any item that does not have an own class */
  OXWS_ITEM_CLASS_MESSAGE, /* oxws_message */
};
typedef enum oxws_item_class_id oxws_item_class_id;

#define OXWS_ITEM_IS_MESSAGE(item) \
  ((item)->class_id == OXWS_ITEM_CLASS_MESSAGE)


/*
  struct oxws_item_or_folder_id

  Represents the ItemIdType and FolderIdType.
*/
struct oxws_item_or_folder_id {
  char* id;
  char* change_key;
};
typedef struct oxws_item_or_folder_id oxws_item_or_folder_id;
typedef struct oxws_item_or_folder_id oxws_item_id;
typedef struct oxws_item_or_folder_id oxws_folder_id;

oxws_item_id* oxws_item_id_new(const char* id, const char* change_key);

oxws_folder_id* oxws_folder_id_new(const char* id, const char* change_key);

/*
  oxws_item_id_free()

  Release given item id object.

  @param id [required] object to release
*/
void oxws_item_id_free(oxws_item_id* id);

/*
  oxws_folder_id_free()

  Release given folder id object.

  @param id [required] object to release
*/
void oxws_folder_id_free(oxws_folder_id* id);


/*
  enum oxws_body_type

  Represents the BodyTypeType with optional value. It is considered unset if its
  value is OXWS_BODY_TYPE__NOT_SET.
*/
enum oxws_body_type {
  OXWS_BODY_TYPE__NOT_SET,

  OXWS_BODY_TYPE_HTML,
  OXWS_BODY_TYPE_TEXT,
};
typedef enum oxws_body_type oxws_body_type;

/*
  struct oxws_body

  Represents the BodyType.
*/
struct oxws_body {
  MMAPString* string;
  oxws_body_type body_type;
};
typedef struct oxws_body oxws_body;

oxws_body* oxws_body_new(const char* string, oxws_body_type body_type);
oxws_body* oxws_body_new_len(const char* string, size_t length, oxws_body_type body_type);

void oxws_body_free(oxws_body* body);

oxws_result oxws_body_append(oxws_body* body, const char* string);
oxws_result oxws_body_append_len(oxws_body* body, const char* string, size_t length);


/*
  enum oxws_mailbox_type.

  Represents the MailboxType with optional value. It is considered unset if its
  value is OXWS_MAILBOX_TYPE__NOT_SET.
*/
enum oxws_mailbox_type {
  OXWS_MAILBOX_TYPE__NOT_SET,

  OXWS_MAILBOX_TYPE_MAILBOX,
  OXWS_MAILBOX_TYPE_PUBLIC_DL,
  OXWS_MAILBOX_TYPE_PRIVATE_DL,
  OXWS_MAILBOX_TYPE_CONTACT,
  OXWS_MAILBOX_TYPE_PUBLIC_FOLDER,
};
typedef enum oxws_mailbox_type oxws_mailbox_type;


/*
  struct oxws_email_address

  Represents the EmailAddressType.
*/
struct oxws_email_address {
  char* name;
  char* email_address;
  char* routing_type; /* must be SMTP */
  oxws_mailbox_type mailbox_type;
  oxws_item_id* item_id;
};
typedef struct oxws_email_address oxws_email_address;

oxws_email_address* oxws_email_address_new(const char* name, const char* email_address,
        const char* routing_type, oxws_mailbox_type mailbox_type, oxws_item_id* item_id);

/*
  oxws_email_address_free()

  Release given email address object.

  @param address [required] object to release
*/
void oxws_email_address_free(oxws_email_address* address);

/*
  oxws_email_address_array_free()

  Release given array of email address objects. This also releases all contained
  email address objects using oxws_email_address_free().

  @param array [required] array to release

  @see oxws_email_address_free()
*/
void oxws_email_address_array_free(carray* array);

oxws_result oxws_email_address_set_name(oxws_email_address* address, const char* name);
oxws_result oxws_email_address_set_email_address(oxws_email_address* address, const char* email_address);
oxws_result oxws_email_address_set_routing_type(oxws_email_address* address, const char* routing_type);
oxws_result oxws_email_address_set_mailbox_type(oxws_email_address* address, oxws_mailbox_type mailbox_type);


/*
  struct oxws_item

  Represents the ItemType.
  Also used for all item classes that do not have an own struct.

  @note TODO incomplete
*/
struct oxws_item {
  oxws_item_class_id class_id;

  /* missing: MimeContent */
  oxws_item_id* item_id;
  oxws_folder_id* parent_folder_id;
  char* item_class;
  MMAPString* subject;
  /* missing: Sensitivity */
  oxws_body* body;
  /* missing: Attachments */
  time_t* date_time_received;
  oxws_optional_int32 size;
  /* missing: Categories */
  /* missing: Importance */
  /* missing: InReplyTo */
  /* missing: IsDraft */
  /* missing: IsFromMe */
  /* missing: IsResend */
  /* missing: IsUnmodified */
  /* missing: InternetMessageHeaders */
  time_t* date_time_sent;
  /* missing: DateTimeCreated */
  /* missing: ResponseObjects */
  /* missing: ReminderDueBy */
  /* missing: ReminderIsSet */
  /* missing: ReminderMinutesBeforeStart */
  /* missing: DisplayCc */
  /* missing: DisplayTo */
  /* missing: HasAttachments */
  /* missing: ExtendedProperty */
  /* missing: Culture */
  /* missing: EffectiveRights */
  /* missing: LastModifiedName */
  /* missing: LastModifiedTime */
};
typedef struct oxws_item oxws_item;

oxws_item* oxws_item_new();

oxws_result oxws_item_init(oxws_item* item);

/*
  oxws_item_free()

  Release given item object. It will determine the item's class using the
  class_id property and release all class-specific properties along with the
  common item properties.

  @param item [required] object to release
*/
void oxws_item_free(oxws_item* item);

/*
  oxws_item_array_free()

  Release given array of item objects. This also releases all contained
  item objects using oxws_item_free().

  @param array [required] array to release

  @see oxws_item_free()
*/
void oxws_item_array_free(carray* array);

oxws_result oxws_item_set_item_id(oxws_item* item, oxws_item_id* id);
oxws_result oxws_item_set_item_id_fields(oxws_item* item, const char* id, const char* change_key);

oxws_result oxws_item_set_parent_folder_id(oxws_item* item, oxws_folder_id* id);
oxws_result oxws_item_set_parent_folder_id_fields(oxws_item* item, const char* id, const char* change_key);

oxws_result oxws_item_set_item_class(oxws_item* item, const char* item_class);

oxws_result oxws_item_set_subject_mmap(oxws_item* item, MMAPString* string);

oxws_result oxws_item_set_subject(oxws_item* item, const char* string);
oxws_result oxws_item_set_subject_len(oxws_item* item, const char* string, size_t length);

oxws_result oxws_item_append_to_subject(oxws_item* item, const char* string);
oxws_result oxws_item_append_to_subject_len(oxws_item* item, const char* string, size_t length);

oxws_result oxws_item_set_body(oxws_item* item, oxws_body* body);

oxws_result oxws_item_set_body_fields(oxws_item* item, const char* string, oxws_body_type body_type);
oxws_result oxws_item_set_body_fields_len(oxws_item* item, const char* string, size_t length, oxws_body_type body_type);

oxws_result oxws_item_append_to_body(oxws_item* item, const char* string);
oxws_result oxws_item_append_to_body_len(oxws_item* item, const char* string, size_t length);

oxws_result oxws_item_set_date_time_received(oxws_item* item, time_t* date_time_received);

oxws_result oxws_item_set_size(oxws_item* item, oxws_optional_int32 size);

oxws_result oxws_item_set_date_time_sent(oxws_item* item, time_t* date_time_sent);


/*
  struct oxws_message

  Represents the MessageType.

  @note TODO incomplete
*/
struct oxws_message {
  oxws_item item;

  oxws_email_address* sender;
  carray* to_recipients; /* of oxws_email_address* */
  carray* cc_recipients; /* of oxws_email_address* */
  carray* bcc_recipients; /* of oxws_email_address* */
  /* missing: IsReadReceiptRequested */
  /* missing: IsDeliveryReceiptRequested */
  /* missing: ConversationIndex */
  /* missing: ConversationTopic */
  oxws_email_address* from;
  /* missing: InternetMessageId */
  oxws_optional_boolean is_read;
  /* missing: IsResponseRequested */
  /* missing: References */
  /* missing: ReplyTo */
  /* missing: ReceivedBy */
  /* missing: ReceivedRepresenting */
};
typedef struct oxws_message oxws_message;

oxws_message* oxws_message_new();

oxws_result oxws_message_init(oxws_message* message);

oxws_result oxws_message_set_from(oxws_message* message, oxws_email_address* from);
oxws_result oxws_message_set_from_fields(oxws_message* message, const char* name, const char* email_address,
        const char* routing_type, oxws_mailbox_type mailbox_type, oxws_item_id* item_id);
oxws_result oxws_message_set_from_name(oxws_message* message, const char* name);
oxws_result oxws_message_set_from_email_address(oxws_message* message, const char* email_address);
oxws_result oxws_message_set_from_routing_type(oxws_message* message, const char* routing_type);
oxws_result oxws_message_set_from_mailbox_type(oxws_message* message, oxws_mailbox_type mailbox_type);
oxws_result oxws_message_set_from_item_id(oxws_message* message, oxws_item_id* id);
oxws_result oxws_message_set_from_item_id_fields(oxws_message* message, const char* id, const char* change_key);

oxws_result oxws_message_set_is_read(oxws_message* message, oxws_optional_boolean is_read);


#ifdef __cplusplus
}
#endif

#endif
