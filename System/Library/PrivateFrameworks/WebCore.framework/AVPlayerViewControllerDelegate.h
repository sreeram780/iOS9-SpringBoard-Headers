/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVPlayerViewControllerDelegate <NSObject>
@optional
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;

@end

