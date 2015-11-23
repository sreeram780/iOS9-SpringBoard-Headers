/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SBFDeviceLockController, NSTimer;

@interface SBFDeviceBlockTimer : NSObject {

	BOOL _enabled;
	/*^block*/id _handler;
	NSString* _titleText;
	NSString* _subtitleText;
	SBFDeviceLockController* _deviceLockController;
	NSTimer* _timer;
	NSString* _cachedLocalizedPlatformName;

}

@property (nonatomic,copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                       //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) SBFDeviceLockController * deviceLockController;              //@synthesize deviceLockController=_deviceLockController - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                             //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) NSString * cachedLocalizedPlatformName;                        //@synthesize cachedLocalizedPlatformName=_cachedLocalizedPlatformName - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)start;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)_clearTimer;
-(NSString *)titleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)setDeviceLockController:(SBFDeviceLockController *)arg1 ;
-(void)_scheduleTimerIfNecessaryAndUpdateState;
-(void)setCachedLocalizedPlatformName:(NSString *)arg1 ;
-(id)_localizedPlatformName;
-(id)initWithDeviceLockController:(id)arg1 ;
-(SBFDeviceLockController *)deviceLockController;
-(NSString *)cachedLocalizedPlatformName;
@end

