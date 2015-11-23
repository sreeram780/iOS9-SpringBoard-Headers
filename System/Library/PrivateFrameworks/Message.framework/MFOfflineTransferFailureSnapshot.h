/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding> {

	NSString* _originalRemoteID;
	NSString* _originalMailboxID;
	unsigned long long _originalMessageFlags;

}

@property (nonatomic,readonly) NSString * originalRemoteID;                          //@synthesize originalRemoteID=_originalRemoteID - In the implementation block
@property (nonatomic,readonly) NSString * originalMailboxID;                         //@synthesize originalMailboxID=_originalMailboxID - In the implementation block
@property (nonatomic,readonly) unsigned long long originalMessageFlags;              //@synthesize originalMessageFlags=_originalMessageFlags - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)originalMailboxID;
-(NSString *)originalRemoteID;
-(id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3 ;
-(unsigned long long)originalMessageFlags;
@end

