/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	long long location;
	long long length;
} SCD_Struct_MF0;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_MF0 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_MF1;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	id field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 2;
} SCD_Struct_MF5;

typedef struct {
	int field1;
	id field2;
	id field3;
} SCD_Struct_MF6;

typedef struct _NSZone* NSZoneRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	id field1;
	id field2;
	unsigned field3;
	unsigned field4;
	BOOL field5;
	BOOL field6;
	BOOL field7;
} SCD_Struct_MF13;

typedef struct sqlite3* sqlite3Ref;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct NtlmGenerator* NtlmGeneratorRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned isForeground : 1;
	unsigned isActive : 1;
	unsigned needsRefresh : 1;
	unsigned needsVerification : 1;
	unsigned clientStateFetched : 1;
	unsigned coalesceTimerFired : 1;
	unsigned scheduledProcessing : 1;
	unsigned scheduledRefresh : 1;
	unsigned scheduledVerification : 1;
} SCD_Struct_MF18;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_MF25;

typedef struct __CFSet* CFSetRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct archive* archiveRef;

typedef struct archive_entry* archive_entryRef;

typedef struct SecCmsMessageStr* SecCmsMessageStrRef;

typedef struct SecCmsDigestContextStr* SecCmsDigestContextStrRef;

typedef struct SecCmsSignedDataStr* SecCmsSignedDataStrRef;

typedef struct SecCmsEnvelopedDataStr* SecCmsEnvelopedDataStrRef;

typedef struct SecCmsEncoderStr* SecCmsEncoderStrRef;

typedef struct IONotificationPort* IONotificationPortRef;

