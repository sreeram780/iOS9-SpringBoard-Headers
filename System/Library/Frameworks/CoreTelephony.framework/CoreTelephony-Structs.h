/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	int field1;
	int field2;
} SCD_Struct_CT0;

typedef struct _NSZone* NSZoneRef;

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct __CTCall* CTCallRef;

typedef struct cellular_usage_policy_client_s* cellular_usage_policy_client_sRef;

typedef struct _compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > {
	block<void ()(NSDictionary *)> __first_;
} compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >;

typedef struct vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > {
	block<void ()(NSDictionary *)> __begin_;
	block<void ()(NSDictionary *)> __end_;
	compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > __end_cap_;
} vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >;

