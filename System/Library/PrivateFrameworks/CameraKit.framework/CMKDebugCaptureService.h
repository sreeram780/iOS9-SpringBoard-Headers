/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CMKCaptureService.h>

@interface CMKDebugCaptureService : CMKCaptureService {

	BOOL _debugLoggingEnabled;
	double __enqueueTime;

}

@property (assign,getter=isDebugLoggingEnabled,nonatomic) BOOL debugLoggingEnabled;              //@synthesize debugLoggingEnabled=_debugLoggingEnabled - In the implementation block
@property (nonatomic,readonly) double _enqueueTime;                                              //@synthesize _enqueueTime=__enqueueTime - In the implementation block
-(void)requestWasEnqueued:(id)arg1 ;
-(void)responseWasGenerated:(id)arg1 error:(id)arg2 ;
-(void)responseWasCompleted:(id)arg1 error:(id)arg2 ;
-(void)willCaptureStillImageForRequest:(id)arg1 ;
-(void)didCaptureStillImageForRequest:(id)arg1 ;
-(void)receivedStillImageForRequest:(id)arg1 ;
-(BOOL)isDebugLoggingEnabled;
-(void)setDebugLoggingEnabled:(BOOL)arg1 ;
-(double)_enqueueTime;
@end

