/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QLAVStateController : NSObject {

	NSMutableDictionary* _clientsForPID;
	long long _currentPID;

}
+(id)sharedController;
-(id)_clientsForPID:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
@end

