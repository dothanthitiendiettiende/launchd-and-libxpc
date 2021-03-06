/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
#ifndef DLIL_PVT_H
#define DLIL_PVT_H
#include <sys/appleapiopts.h>

#include <net/dlil.h>
#include <sys/queue.h>

struct dlil_family_mod_str {
    TAILQ_ENTRY(dlil_family_mod_str)	dl_fam_next;
    char	*interface_family;
    int (*add_if)(struct ifnet_ptr  *ifp);
    int (*del_if)(struct ifnet    *ifp);
    int (*add_proto)(struct ifnet *ifp, uint32_t protocol_family,
    				 struct ddesc_head_str *demux_desc_head);
    int (*del_proto)(struct ifnet *ifp, uint32_t proto_family);
}

#endif
