# libEtPan! -- a mail stuff library
#
# Copyright (C) 2007 g10 Code GmbH
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. Neither the name of the libEtPan! project nor the names of its
#    contributors may be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.

include $(top_srcdir)/rules.mk

EXTRA_DIST = README

exampledir=${datadir}/@PACKAGE@/examples
example_PROGRAMS = smime decrypt pgp frm frm-tree frm-simple	\
	readmsg-simple fetch-attachment smtpsend readmsg-uid \
	readmsg compose-msg imap-sample mime-create mime-parse \
	pop-sample oxws

# For W32, reverse the -DLIBETPAN_DLL.  Unfortunately, CFLAGS comes
# after AM_CPPFLAGS, so we have to frob CFLAGS.
AM_CFLAGS = -ULIBETPAN_DLL
AM_CPPFLAGS = $(WERROR) \
  -I$(top_builddir)/include
LDADD = $(top_builddir)/src/libetpan.la

FRMCOMMON = frm-common.h frm-common.c option-parser.h option-parser.c

frm_SOURCES = $(FRMCOMMON) frm.c

frm_tree_SOURCES = $(FRMCOMMON) frm-tree.c

frm_simple_SOURCES = $(FRMCOMMON) frm-simple.c

READMSGCOMMON = readmsg-common.h readmsg-common.c option-parser.h	\
	option-parser.c

readmsg_SOURCES = $(READMSGCOMMON) readmsg.c

readmsg_simple_SOURCES = $(READMSGCOMMON) readmsg-simple.c

readmsg_uid_SOURCES = $(READMSGCOMMON) readmsg-uid.c

fetch_attachment_SOURCES = $(READMSGCOMMON) fetch-attachment.c

oxws_CFLAGS = $(AM_CFLAGS) $(LIBCURL_CPPFLAGS) $(LIBXML2_CFLAGS)
oxws_LDFLAGS = $(LIBCURL) $(LIBXML2_LIBS)
