/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation {

	BOOL _scheduleOrCancel;
	BOOL _userVisible;
	NSDate* _wakeDate;
	double _acceptableDelay;
	NSString* _serviceIdentifier;
	void* _unqiueIdentifier;

}
-(void)dealloc;
-(void)main;
-(id)initForScheduledWake:(BOOL)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(BOOL)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void*)arg6 ;
@end

