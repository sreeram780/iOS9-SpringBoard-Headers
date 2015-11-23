/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSWeakCallback, NSDate, NSObject, NSIndexSet;

typedef struct {
	NSData* data;
	char* dataBytes;
} SCD_Struct_NS0;

typedef struct {
	__CFStorage storage;
} SCD_Struct_NS1;

typedef union {
	SCD_Struct_NS0 d;
	SCD_Struct_NS1 s;
} SCD_Union_NS2;

typedef struct __CFStorage* CFStorageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NS5;

typedef struct NSSlice {
	void items;
	BOOL wantsStrong;
	BOOL wantsWeak;
	BOOL wantsARC;
	BOOL shouldCopyIn;
	BOOL usesStrong;
	BOOL usesWeak;
	BOOL usesARC;
	BOOL usesSentinel;
	BOOL pointerPersonality;
	BOOL integerPersonality;
	BOOL simpleReadClear;
	NSWeakCallback* callback;
	/*function pointer*/void* sizeFunction;
	/*function pointer*/void* hashFunction;
	/*function pointer*/void* isEqualFunction;
	/*function pointer*/void* describeFunction;
	/*function pointer*/void* acquireFunction;
	/*function pointer*/void* relinquishFunction;
	/*function pointer*/void* allocateFunction;
	/*function pointer*/void* freeFunction;
	/*function pointer*/void* readAt;
	/*function pointer*/void* clearAt;
	/*function pointer*/void* storeAt;
} NSSlice;

typedef struct {
	double m11;
	double m12;
	double m21;
	double m22;
	double tX;
	double tY;
} SCD_Struct_NS7;

typedef struct __CFBundle* CFBundleRef;

typedef struct {
	int field1;
	char field2;
	char field3;
	char field4;
	char field5;
	double field6;
} SCD_Struct_NS9;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NS11;

typedef struct {
	SCD_Struct_NS1 field1;
	1 field2;
	SCD_Struct_NS1 field3;
	1 field4;
} SCD_Struct_NS12;

typedef struct {
	SCD_Struct_NS1 field1;
	2 field2;
	SCD_Struct_NS1 field3;
	2 field4;
} SCD_Struct_NS13;

typedef union {
	unsigned char _space[12];
	/*^block*/id _deallocator;
} SCD_Union_NS14;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct UAMeasureFormat* UAMeasureFormatRef;

typedef struct UPluralRules* UPluralRulesRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
} SCD_Struct_NS19;

typedef struct {
	int field1;
	int field2;
	SCD_Struct_NS1 field3;
	9 field4;
} SCD_Struct_NS20;

typedef struct __CFString* CFStringRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef struct fields {
	unsigned extensionHidden : 1;
	unsigned creationDate : 1;
	unsigned reserved : 30;
} fields;

typedef struct {
	BOOL extensionHidden;
	NSDate* creationDate;
	fields validFields;
} SCD_Struct_NS27;

typedef struct __CFURLEnumerator* CFURLEnumeratorRef;

typedef struct {
	/*function pointer*/void* hash;
	/*function pointer*/void* isEqual;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* describe;
} SCD_Struct_NS29;

typedef struct __CFBasicHash* CFBasicHashRef;

typedef struct {
	void _data;
	void _reserved;
} SCD_Struct_NS31;

typedef struct {
	NSRange _range;
} SCD_Struct_NS32;

typedef union {
	SCD_Struct_NS32 _singleRange;
	SCD_Struct_NS31 _multipleRanges;
} SCD_Union_NS33;

typedef struct objc_method* objc_methodRef;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	unsigned long long field1;
	id field2[4];
} SCD_Struct_NS36;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_NS37;

typedef struct {
	Class field1;
	Class field2;
	__CFSet field3;
	_ field4;
	_ field5;
	void* field6;
	_ field7;
	o field8;
	p field9;
	a field10;
	long long field11;
	u field12;
	e field13;
	_ field14;
	p field15;
	t field16;
	h field17;
	const  field18;
	e field19;
	a field20;
	double field21;
	_ field22;
	m field23;
	u field24;
	t field25;
	e field26;
	x field27;
	_ field28;
	t field29;
	BOOL field30;
} SCD_Struct_NS38;

typedef struct __CFSet* CFSetRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	/*function pointer*/void* hash;
	/*function pointer*/void* isEqual;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* describe;
	void notAKeyMarker;
} SCD_Struct_NS43;

typedef struct {
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* describe;
} SCD_Struct_NS44;

typedef union {
	unsigned short fat;
	char* thin;
} SCD_Union_NS45;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct pthread_override_s* pthread_override_sRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_NS48;

typedef struct {
	_NSOrderedChange buffer;
	unsigned long long availableIndex;
	unsigned long long capacity;
	unsigned long long changesIndex;
	unsigned long long lastIndex;
	unsigned long long count;
} SCD_Struct_NS49;

typedef struct {
	id objects;
	BOOL isMutable;
	SCD_Struct_NS49 list;
} SCD_Struct_NS50;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 4;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 18;
	unsigned short field6[8];
} SCD_Struct_NS51;

typedef struct {
	long long field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_NS52;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_NS55;

typedef struct USet* USetRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct opaque_pthread_attr_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_attr_t;

typedef struct {
	CGPoint field1;
	double field2;
} SCD_Struct_NS60;

typedef struct {
	double field1;
	SCD_Struct_NS5 field2;
	5 field3;
} SCD_Struct_NS61;

typedef struct {
	SCD_Struct_NS5 field1;
	5 field2;
	SCD_Struct_NS5 field3;
	5 field4;
} SCD_Struct_NS62;

typedef struct URIParseInfo {
	unsigned long long userinfoNameOffset;
	unsigned long long userinfoPasswordOffset;
	unsigned long long hostOffset;
	unsigned long long portOffset;
	unsigned long long pathOffset;
	unsigned long long paramOffset;
	unsigned long long queryOffset;
	unsigned long long fragmentOffset;
	unsigned long long endOffset;
	unsigned schemeExists : 1;
	unsigned authorityExists : 1;
	unsigned userinfoNameExists : 1;
	unsigned userinfoPasswordExists : 1;
	unsigned hostExists : 1;
	unsigned portExists : 1;
	unsigned paramExists : 1;
	unsigned queryExists : 1;
	unsigned fragmentExists : 1;
} URIParseInfo;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct {
	id field1;
	void field2;
} SCD_Struct_NS66;

typedef struct {
	unsigned attributeFixingDisabled : 8;
	unsigned  : 24;
} SCD_Struct_NS67;

typedef struct NSSimpleAttributeDictionaryElement {
	unsigned long long hash;
	id key;
	id value;
} NSSimpleAttributeDictionaryElement;

typedef struct {
	unsigned long long kind;
	NSObject* oldValue;
	NSObject* newValue;
	NSIndexSet* indexes;
	id extraData;
} SCD_Struct_NS69;

typedef struct {
	unsigned long long field1;
	id field2;
	id field3;
	id field4;
	id field5;
} SCD_Struct_NS70;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct InodeDevPair {
	int dev;
	unsigned long long inode;
} InodeDevPair;

typedef struct __FSEventStream* FSEventStreamRef;

typedef struct {
	unsigned long long aligner;
} SCD_Struct_NS77;

typedef struct {
	id stored_extern_marker;
	/*function pointer*/void* slab;
	unsigned long long capacity;
} SCD_Struct_NS78;

typedef union {
	SCD_Struct_NS78 extern_data;
	SCD_Struct_NS77 inline_slab;
	unsigned char padding[48];
	void _workaround13455311;
} SCD_Union_NS79;

typedef struct __CFData* CFDataRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NS81;

typedef struct _xpc_type_s* xpc_type_sRef;

typedef struct {
	unsigned long long offset;
	int type;
} SCD_Struct_NS83;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
} SCD_Struct_NS84;

