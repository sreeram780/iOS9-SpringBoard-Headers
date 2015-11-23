/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPRemoteInterfaceProtocol <NSObject>
@optional
-(void)receiveNativeComplicationRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replyTimingData:(id)arg1;
-(void)extensionDidBeginUsing;
-(void)extensionWillEndUsing;

@required
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationWillResignActive:(id)arg1;
-(void)applicationDidFinishConnecting:(id)arg1;
-(void)dataInterfaceDidBecomeActive:(id)arg1;
-(void)dataInterfaceWillResignActive:(id)arg1;
-(void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
-(void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
-(void)applicationDidTerminate:(id)arg1;
-(void)applicationContentsDidReset:(id)arg1;
-(void)applicationIsStillActive;
-(void)applicationDidReceiveRemoteNotification:(id)arg1 clientIdentifier:(id)arg2;
-(void)applicationDidReceiveLocalNotification:(id)arg1 clientIdentifier:(id)arg2;
-(void)preferredContentSizeCategory:(id)arg1;

@end

