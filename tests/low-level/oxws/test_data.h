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

#ifndef OXWS_TEST_DATA_H
#define OXWS_TEST_DATA_H

#ifdef __cplusplus
extern "C" {
#endif


#include <libetpan/libetpan.h>


#define OXWS_TEST_DATA_MAX_NUM_ITEMS 100

#define OXWS_TEST_DATA_INBOX_ITEM_0_CLASS_ID    OXWS_ITEM_CLASS_MESSAGE
#define OXWS_TEST_DATA_INBOX_ITEM_0_ITEM_ID     "AAAhAEx5c2Fubi5LZXNzbGVyQGhwaS51bmktcG90c2RhbS5kZQBGAAAAAAAOQP8UchHYRYW2kLdtztl9BwDi0v2At9wNQ4mCHb9pSDgCAAAAfDbSAACac5yph9kYRpDIsFsCUOP+ACTMQcdcAAA="
#define OXWS_TEST_DATA_INBOX_ITEM_0_CHANGE_KEY  "CQAAABYAAACac5yph9kYRpDIsFsCUOP+ACTMRWKT"
#define OXWS_TEST_DATA_INBOX_ITEM_0_SUBJECT     "Message 5"
// TODO Sensitivity
#define OXWS_TEST_DATA_INBOX_ITEM_0_SIZE        2226
// TODO DateTimeSent, DateTimeCreated
#define OXWS_TEST_DATA_INBOX_ITEM_0_HAS_ATTACHMENTS OXWS_OPTIONAL_BOOLEAN_FALSE
#define OXWS_TEST_DATA_INBOX_ITEM_0_SENDER_MAILBOX_NAME "Test User"
#define OXWS_TEST_DATA_INBOX_ITEM_0_FROM_MAILBOX_NAME   "Test User"
#define OXWS_TEST_DATA_INBOX_ITEM_0_IS_READ     OXWS_OPTIONAL_BOOLEAN_FALSE

#define OXWS_TEST_DATA_INBOX_ITEM_1_CLASS_ID    OXWS_ITEM_CLASS_MESSAGE
#define OXWS_TEST_DATA_INBOX_ITEM_1_ITEM_ID     "AAAhAEx5c2Fubi5LZXNzbGVyQGhwaS51bmktcG90c2RhbS5kZQBGAAAAAAAOQP8UchHYRYW2kLdtztl9BwDi0v2At9wNQ4mCHb9pSDgCAAAAfDbSAACac5yph9kYRpDIsFsCUOP+ACTMQcdYAAA="
#define OXWS_TEST_DATA_INBOX_ITEM_1_CHANGE_KEY  "CQAAABYAAACac5yph9kYRpDIsFsCUOP+ACTMQc9f"
#define OXWS_TEST_DATA_INBOX_ITEM_1_SUBJECT     "Message 4"
// TODO Sensitivity
#define OXWS_TEST_DATA_INBOX_ITEM_1_SIZE        2176
// TODO DateTimeSent, DateTimeCreated
#define OXWS_TEST_DATA_INBOX_ITEM_1_HAS_ATTACHMENTS OXWS_OPTIONAL_BOOLEAN_FALSE
#define OXWS_TEST_DATA_INBOX_ITEM_1_SENDER_MAILBOX_NAME "Admin"
#define OXWS_TEST_DATA_INBOX_ITEM_1_FROM_MAILBOX_NAME   "Admin"
#define OXWS_TEST_DATA_INBOX_ITEM_1_IS_READ     OXWS_OPTIONAL_BOOLEAN_TRUE

#define OXWS_TEST_DATA_INBOX_ITEM_2_CLASS_ID    OXWS_ITEM_CLASS_MESSAGE
#define OXWS_TEST_DATA_INBOX_ITEM_2_ITEM_ID     "AAAhAEx5c2Fubi5LZXNzbGVyQGhwaS51bmktcG90c2RhbS5kZQBGAAAAAAAOQP8UchHYRYW2kLdtztl9BwDi0v2At9wNQ4mCHb9pSDgCAAAAfDbSAACac5yph9kYRpDIsFsCUOP+ACTMQcdXAAA="
#define OXWS_TEST_DATA_INBOX_ITEM_2_CHANGE_KEY  "CQAAABYAAACac5yph9kYRpDIsFsCUOP+ACTMQctX"
#define OXWS_TEST_DATA_INBOX_ITEM_2_SUBJECT     "Message 3"
// TODO Sensitivity
#define OXWS_TEST_DATA_INBOX_ITEM_2_SIZE        2164
// TODO DateTimeSent, DateTimeCreated
#define OXWS_TEST_DATA_INBOX_ITEM_2_HAS_ATTACHMENTS OXWS_OPTIONAL_BOOLEAN_FALSE
#define OXWS_TEST_DATA_INBOX_ITEM_2_SENDER_MAILBOX_NAME "Admin"
#define OXWS_TEST_DATA_INBOX_ITEM_2_FROM_MAILBOX_NAME   "Admin"
#define OXWS_TEST_DATA_INBOX_ITEM_2_IS_READ     OXWS_OPTIONAL_BOOLEAN_TRUE

#define OXWS_TEST_DATA_INBOX_ITEM_3_CLASS_ID    OXWS_ITEM_CLASS_MESSAGE
#define OXWS_TEST_DATA_INBOX_ITEM_3_ITEM_ID     "AAAhAEx5c2Fubi5LZXNzbGVyQGhwaS51bmktcG90c2RhbS5kZQBGAAAAAAAOQP8UchHYRYW2kLdtztl9BwDi0v2At9wNQ4mCHb9pSDgCAAAAfDbSAACac5yph9kYRpDIsFsCUOP+ACTKmHD4AAA="
#define OXWS_TEST_DATA_INBOX_ITEM_3_CHANGE_KEY  "CQAAABYAAACac5yph9kYRpDIsFsCUOP+ACTKoTe3"
#define OXWS_TEST_DATA_INBOX_ITEM_3_SUBJECT     "Message 2"
// TODO Sensitivity
#define OXWS_TEST_DATA_INBOX_ITEM_3_SIZE        6803
// TODO DateTimeSent, DateTimeCreated
#define OXWS_TEST_DATA_INBOX_ITEM_3_HAS_ATTACHMENTS OXWS_OPTIONAL_BOOLEAN_FALSE
#define OXWS_TEST_DATA_INBOX_ITEM_3_SENDER_MAILBOX_NAME "Test User 2"
#define OXWS_TEST_DATA_INBOX_ITEM_3_FROM_MAILBOX_NAME   "Test User 2"
#define OXWS_TEST_DATA_INBOX_ITEM_3_IS_READ     OXWS_OPTIONAL_BOOLEAN_TRUE

#define OXWS_TEST_DATA_INBOX_ITEM_4_CLASS_ID    OXWS_ITEM_CLASS_MESSAGE
#define OXWS_TEST_DATA_INBOX_ITEM_4_ITEM_ID     "AAAhAEx5c2Fubi5LZXNzbGVyQGhwaS51bmktcG90c2RhbS5kZQBGAAAAAAAOQP8UchHYRYW2kLdtztl9BwDi0v2At9wNQ4mCHb9pSDgCAAAAfDbSAACac5yph9kYRpDIsFsCUOP+ACTKmHD2AAA="
#define OXWS_TEST_DATA_INBOX_ITEM_4_CHANGE_KEY  "CQAAABYAAACac5yph9kYRpDIsFsCUOP+ACTKoSMq"
#define OXWS_TEST_DATA_INBOX_ITEM_4_SUBJECT     "Message 1"
// TODO Sensitivity
#define OXWS_TEST_DATA_INBOX_ITEM_4_SIZE        26976
// TODO DateTimeSent, DateTimeCreated
#define OXWS_TEST_DATA_INBOX_ITEM_4_HAS_ATTACHMENTS OXWS_OPTIONAL_BOOLEAN_FALSE
#define OXWS_TEST_DATA_INBOX_ITEM_4_SENDER_MAILBOX_NAME "Test User 2"
#define OXWS_TEST_DATA_INBOX_ITEM_4_FROM_MAILBOX_NAME   "Test User 2"
#define OXWS_TEST_DATA_INBOX_ITEM_4_IS_READ     OXWS_OPTIONAL_BOOLEAN_TRUE


#define OXWS_TEST_DATA_GET_EXPECTED_ITEM_ATTR(folder, item_index, attr) \
  OXWS_TEST_DATA_##folder##_ITEM_##item_index##_##attr


int oxws_test_data_num_items_in(oxws_distinguished_folder_id distfolder_id, const char* folder_id);
void oxws_test_data_check_item(oxws_distinguished_folder_id distfolder_id, const char* folder_id,
        unsigned int item_index, oxws_item* item);


#ifdef __cplusplus
}
#endif

#endif
