/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AVCaptureDeviceControlRequest : NSObject {

	/*^block*/id _completionBlock;
	int _requestID;
	int _errorCode;

}

@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) int requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) int errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
+(id)deviceControlRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 ;
-(int)requestID;
-(void)dealloc;
-(id)completionBlock;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
@end

