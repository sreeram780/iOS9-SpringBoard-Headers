/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureStillImageOutput.h>

@protocol OS_dispatch_queue;
@class CAMCaptureEngine, NSObject, NSMutableDictionary, NSDictionary;

@interface CAMCaptureStillImageOutput : AVCaptureStillImageOutput {

	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __userInfoQueue;
	NSMutableDictionary* __userInfoBySettingsID;
	NSDictionary* _currentUserInfo;
	NSDictionary* _userInfoForNextCapture;

}

@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                 //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _userInfoQueue;              //@synthesize _userInfoQueue=__userInfoQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _userInfoBySettingsID;              //@synthesize _userInfoBySettingsID=__userInfoBySettingsID - In the implementation block
@property (nonatomic,copy) NSDictionary * currentUserInfo;                               //@synthesize currentUserInfo=_currentUserInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForNextCapture;                        //@synthesize userInfoForNextCapture=_userInfoForNextCapture - In the implementation block
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CAMCaptureEngine *)_captureEngine;
-(NSObject*<OS_dispatch_queue>)_userInfoQueue;
-(NSDictionary *)userInfoForNextCapture;
-(NSMutableDictionary *)_userInfoBySettingsID;
-(void)setUserInfoForNextCapture:(NSDictionary *)arg1 ;
-(void)_incrementSettingsIDAndStoreCaptureUserInfo;
-(NSDictionary *)currentUserInfo;
-(void)setCurrentUserInfo:(NSDictionary *)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)initWithEngine:(id)arg1 ;
-(void)_userInfoQueueAtomicIncrementSettingsID;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

