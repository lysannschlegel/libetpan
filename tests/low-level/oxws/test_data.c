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

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "test_data.h"
#include "test_support.h"


int oxws_test_data_num_items_in(oxws_distinguished_folder_id distfolder_id, const char* folder_id) {
  UNUSED(folder_id);

  switch(distfolder_id) {
    case OXWS_DISTFOLDER_INBOX:
      return 5;
    default:
      CU_FAIL_FATAL("test error: not implemented for given folder id");
      break;
  }
  return -1;
}

void oxws_test_data_check_item(oxws_distinguished_folder_id distfolder_id, const char* folder_id,
        unsigned int item_index, oxws_item* item) {
  UNUSED(folder_id);

  switch(distfolder_id) {
    case OXWS_DISTFOLDER_INBOX:
      switch(item_index) {
        case 0: OXWS_TEST_DATA_CHECK_ITEM_(INBOX, 0, item); break;
        case 1: OXWS_TEST_DATA_CHECK_ITEM_(INBOX, 1, item); break;
        case 2: OXWS_TEST_DATA_CHECK_ITEM_(INBOX, 2, item); break;
        case 3: OXWS_TEST_DATA_CHECK_ITEM_(INBOX, 3, item); break;
        case 4: OXWS_TEST_DATA_CHECK_ITEM_(INBOX, 4, item); break;
      }

    default: CU_FAIL_FATAL("test error: not implemented for given folder id");
  }
}
