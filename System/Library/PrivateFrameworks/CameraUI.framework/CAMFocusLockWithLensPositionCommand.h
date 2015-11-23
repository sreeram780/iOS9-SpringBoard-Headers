/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand {

	float __lensPosition;
	/*^block*/id __completionBlock;

}

@property (assign,setter=_setLensPosition:,nonatomic) float _lensPosition;               //@synthesize _lensPosition=__lensPosition - In the implementation block
@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
+(float)currentLensPositionSentinel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_completionBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(void)_setLensPosition:(float)arg1 ;
-(float)_lensPosition;
-(id)initWithLensPosition:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
@end

