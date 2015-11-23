/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCancellable.h>

@protocol BROperationClient;
@class NSObject, NSString;

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {

	BOOL _startedFinish;
	NSObject*<BROperationClient> _remoteClientProxy;

}

@property (nonatomic,retain) NSObject*<BROperationClient> remoteClientProxy;              //@synthesize remoteClientProxy=_remoteClientProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(oneway void)invalidate;
-(void)start;
-(void)setRemoteClientProxy:(NSObject*<BROperationClient>)arg1 ;
-(id)descriptionAdditionalStringWithContext:(id)arg1 ;
-(NSObject*<BROperationClient>)remoteClientProxy;
@end

