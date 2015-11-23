/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLResourceAllocationInfo.h>

@class NSString;

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo {

	NSString* _memoryPool;
	unsigned long long _virtualSize;
	unsigned long long _residentSize;
	unsigned long long _dirtySize;
	BOOL _purgeable;
	unsigned long long _uniqueIdentifier;

}
-(BOOL)purgeable;
-(id)initWithPool:(id)arg1 virtualSize:(unsigned long long)arg2 residentSize:(unsigned long long)arg3 dirtySize:(unsigned long long)arg4 purgeable:(BOOL)arg5 uniqueID:(unsigned long long)arg6 ;
-(id)memoryPool;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(void)dealloc;
-(unsigned long long)virtualSize;
-(unsigned long long)uniqueIdentifier;
@end

