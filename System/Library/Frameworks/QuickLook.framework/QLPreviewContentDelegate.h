/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewContentDelegate <NSObject>
@optional
-(id)clientProcessAlertViewForPreviewContentController:(id)arg1;

@required
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(long long)arg2;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(long long)arg3;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
-(void)contentWasTappedInPreviewContentController:(id)arg1;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1;
-(void)overlayWasTappedInPreviewContentController:(id)arg1;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
-(void)dismissalGestureDidUpdateInPreviewContentController:(id)arg1 state:(long long)arg2 trackingInformation:(id)arg3;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
-(void)previewContentController:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
-(void)previewContentControllerDidExitFullScreen:(id)arg1;

@end

