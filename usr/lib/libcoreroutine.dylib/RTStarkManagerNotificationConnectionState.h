/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTStarkManagerNotificationConnectionState : RTNotification {

	long long _connectionState;

}

@property (assign,nonatomic) long long connectionState;              //@synthesize connectionState=_connectionState - In the implementation block
+(id)notificationName;
-(long long)connectionState;
-(void)setConnectionState:(long long)arg1 ;
-(id)initWithConnectionState:(long long)arg1 ;
@end

