/* -*- Mode: C; tab-width: 4 -*-
 *
 * Copyright (c) 2002-2004 Apple Computer, Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

    Change History (most recent first):

*/


#ifndef __dDNS_h
#define __dDNS_h

#include "mDNSEmbeddedAPI.h"
#include "dns_sd.h"

#if 0
#pragma mark - DynDNS structures
#endif

typedef struct IPAddrListElem
	{
	mDNSAddr addr;
	struct IPAddrListElem *next;
	} IPAddrListElem;

extern void dDNS_FreeIPAddrList( IPAddrListElem * list );


// ***************************************************************************
#if 0
#pragma mark - Main Client Functions
#endif

extern mStatus dDNS_Setup( mDNS *const m );
extern mStatus dDNS_InitDNSConfig( mDNS *const m );
extern mStatus dDNS_SetupAddr( mDNSAddr *ip, const struct sockaddr * const sa );


// ***************************************************************************
#if 0
#pragma mark - PlatformSupport interface
#endif

// This section defines the interface to the DynDNS Platform Support layer.

extern void					dDNSPlatformGetConfig(domainname *const fqdn, domainname *const regDomain, DNameListElem ** browseDomains);
extern void					dDNSPlatformSetNameStatus(domainname *const dname, mStatus status);
extern void					dDNSPlatformSetSecretForDomain( mDNS *m, const domainname *domain );
extern DNameListElem	*	dDNSPlatformGetSearchDomainList( void );
extern DNameListElem	*	dDNSPlatformGetReverseMapSearchDomainList( void );
extern IPAddrListElem	*	dDNSPlatformGetDNSServers( void );
extern DNameListElem	*	dDNSPlatformGetDomainName( void );
extern mStatus				dDNSPlatformRegisterSplitDNS( mDNS *m );
extern mStatus				dDNSPlatformGetPrimaryInterface( mDNS * m, mDNSAddr * primary, mDNSAddr * router );
extern void					dDNSPlatformDefaultBrowseDomainChanged( const domainname *d, mDNSBool add );
extern void					dDNSPlatformDefaultRegDomainChanged(const domainname *d, mDNSBool add);

#endif

