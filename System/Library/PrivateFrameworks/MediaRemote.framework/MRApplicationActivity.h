/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSString;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying> {

	CFAllocatorRef _allocator;
	NSUUID* _uniqueIdentifier;
	NSString* _primaryApplicationDisplayID;
	NSString* _secondaryApplicationDisplayID;
	BOOL _shouldPrepareAppPlaybackQueue;
	int _status;
	int _creatorProcessID;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * primaryApplicationDisplayID;                //@synthesize primaryApplicationDisplayID=_primaryApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) NSString * secondaryApplicationDisplayID;              //@synthesize secondaryApplicationDisplayID=_secondaryApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrepareAppPlaybackQueue;                    //@synthesize shouldPrepareAppPlaybackQueue=_shouldPrepareAppPlaybackQueue - In the implementation block
@property (nonatomic,readonly) int status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) int creatorProcessID;                                  //@synthesize creatorProcessID=_creatorProcessID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allocWithAllocator:(CFAllocatorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(int)status;
-(id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2 ;
-(NSString *)primaryApplicationDisplayID;
-(NSString *)secondaryApplicationDisplayID;
-(BOOL)shouldPrepareAppPlaybackQueue;
-(int)creatorProcessID;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
@end

