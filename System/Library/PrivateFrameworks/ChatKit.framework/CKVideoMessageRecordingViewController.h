/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <libobjc.A.dylib/CKActionMenuControllerDelegate.h>
#import <libobjc.A.dylib/CKVideoRecorderDelegate.h>

@protocol CKVideoMessageRecordingViewControllerDelegate;
@class UIView, UIWindow, CKRecordingElapsedTimeView, CKActionMenuController, CKActionMenuItem, UIButton, CKMediaObject, NSError, UIImagePickerController, NSString;

@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKActionMenuControllerDelegate, CKVideoRecorderDelegate> {

	UIView* _presentationView;
	UIWindow* _overlayWindow;
	BOOL _presented;
	BOOL _previewWarmedUp;
	BOOL _showingVideo;
	BOOL _recording;
	BOOL _sending;
	BOOL _canceled;
	BOOL _triedToRecord;
	id<CKVideoMessageRecordingViewControllerDelegate> _videoMessageDelegate;
	UIView* _topBackgroundView;
	CKRecordingElapsedTimeView* _timerView;
	CKActionMenuController* _videoActionMenuController;
	CKActionMenuItem* _photoMenuItem;
	UIButton* _swapCameraButton;
	unsigned long long _enableCancel;
	CKMediaObject* _mediaObjectForSending;
	NSError* _captureError;
	/*^block*/id _mediaExportCompletionBlock;
	UIImagePickerController* _cameraViewController;

}

@property (assign,nonatomic) id<CKVideoMessageRecordingViewControllerDelegate> videoMessageDelegate;              //@synthesize videoMessageDelegate=_videoMessageDelegate - In the implementation block
@property (nonatomic,retain) UIView * topBackgroundView;                                                          //@synthesize topBackgroundView=_topBackgroundView - In the implementation block
@property (nonatomic,retain) CKRecordingElapsedTimeView * timerView;                                              //@synthesize timerView=_timerView - In the implementation block
@property (nonatomic,retain) CKActionMenuController * videoActionMenuController;                                  //@synthesize videoActionMenuController=_videoActionMenuController - In the implementation block
@property (nonatomic,retain) CKActionMenuItem * photoMenuItem;                                                    //@synthesize photoMenuItem=_photoMenuItem - In the implementation block
@property (nonatomic,retain) UIButton * swapCameraButton;                                                         //@synthesize swapCameraButton=_swapCameraButton - In the implementation block
@property (assign,nonatomic) BOOL recording;                                                                      //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) BOOL sending;                                                                        //@synthesize sending=_sending - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                                                       //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL triedToRecord;                                                                  //@synthesize triedToRecord=_triedToRecord - In the implementation block
@property (assign,nonatomic) unsigned long long enableCancel;                                                     //@synthesize enableCancel=_enableCancel - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObjectForSending;                                               //@synthesize mediaObjectForSending=_mediaObjectForSending - In the implementation block
@property (nonatomic,retain) NSError * captureError;                                                              //@synthesize captureError=_captureError - In the implementation block
@property (nonatomic,copy) id mediaExportCompletionBlock;                                                         //@synthesize mediaExportCompletionBlock=_mediaExportCompletionBlock - In the implementation block
@property (nonatomic,retain) UIImagePickerController * cameraViewController;                                      //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)record;
-(void)cancel;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarHidden;
-(void)send;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithPresentationView:(id)arg1 ;
-(void)setVideoMessageDelegate:(id<CKVideoMessageRecordingViewControllerDelegate>)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(void)ckVideoRecorderRecordingCanceled:(id)arg1 ;
-(void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3 ;
-(void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3 ;
-(void)setRecording:(BOOL)arg1 ;
-(void)_previewWarmedUp:(id)arg1 ;
-(void)setCameraViewController:(UIImagePickerController *)arg1 ;
-(UIImagePickerController *)cameraViewController;
-(void)setTopBackgroundView:(UIView *)arg1 ;
-(void)setTimerView:(CKRecordingElapsedTimeView *)arg1 ;
-(CKRecordingElapsedTimeView *)timerView;
-(UIView *)topBackgroundView;
-(void)swapCamera:(id)arg1 ;
-(void)setSwapCameraButton:(UIButton *)arg1 ;
-(void)cancelMenuItemAction:(id)arg1 ;
-(void)photoMenuItemAction:(id)arg1 ;
-(void)setPhotoMenuItem:(CKActionMenuItem *)arg1 ;
-(void)videoMenuItemAction:(id)arg1 ;
-(void)setVideoActionMenuController:(CKActionMenuController *)arg1 ;
-(void)presentVideoActionMenuController;
-(void)_cameraOrientationChanged:(id)arg1 ;
-(void)_animateVideoIn;
-(CKActionMenuController *)videoActionMenuController;
-(UIButton *)swapCameraButton;
-(BOOL)recording;
-(BOOL)triedToRecord;
-(BOOL)sending;
-(CKActionMenuItem *)photoMenuItem;
-(void)setTriedToRecord:(BOOL)arg1 ;
-(void)stopRecordingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMediaExportCompletionBlock:(id)arg1 ;
-(void)takePictureWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSending:(BOOL)arg1 ;
-(id<CKVideoMessageRecordingViewControllerDelegate>)videoMessageDelegate;
-(CKMediaObject *)mediaObjectForSending;
-(NSError *)captureError;
-(void)setMediaObjectForSending:(CKMediaObject *)arg1 ;
-(void)setCaptureError:(NSError *)arg1 ;
-(id)mediaExportCompletionBlock;
-(void)_cleanupCamera;
-(unsigned long long)enableCancel;
-(void)setEnableCancel:(unsigned long long)arg1 ;
-(BOOL)canceled;
@end

