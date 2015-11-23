/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSObject, NSMutableDictionary;

@interface MRMediaRemoteOriginClientManager : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _originClients;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)localClient;
-(id)clientForOrigin:(MROriginRef)arg1 ;
@end

