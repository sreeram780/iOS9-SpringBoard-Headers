/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEPathEventObserver : NSObject {

	network_config_cellular_blocked_observer_sRef _observer;

}

@property (assign) network_config_cellular_blocked_observer_sRef observer;              //@synthesize observer=_observer - In the implementation block
-(id)initWithQueue:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(network_config_cellular_blocked_observer_sRef)observer;
-(void)setObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
@end

