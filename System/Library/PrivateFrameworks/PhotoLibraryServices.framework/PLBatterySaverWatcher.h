/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLBatterySaverWatcher : NSObject {

	int _notifyBatterySaverModeToken;
	NSMutableArray* _delegates;

}
+(id)sharedBatterySaverWatcher;
-(void)dealloc;
-(BOOL)batterySaverModeEnabled;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(unsigned)registerToBatterySaverModeNotification;
-(void)unregisterToBatterySaverModeNotification;
@end

