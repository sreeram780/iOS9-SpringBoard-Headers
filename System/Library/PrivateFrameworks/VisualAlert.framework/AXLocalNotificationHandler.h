/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VisualAlert/AXNotificationHandler.h>

@interface AXLocalNotificationHandler : AXNotificationHandler {

	id _opaqueObserver;

}

@property (setter=_setOpaqueObserver:,nonatomic,retain) id _opaqueObserver;              //@synthesize opaqueObserver=_opaqueObserver - In the implementation block
-(void)_startObserving;
-(id)_notificationTypeDescription;
-(void)_stopObserving;
-(void)_setOpaqueObserver:(id)arg1 ;
-(id)_opaqueObserver;
-(void)_startObservingWithObject:(id)arg1 ;
-(void)_stopObservingWithObject:(id)arg1 ;
@end
