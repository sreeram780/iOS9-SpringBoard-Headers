/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerRemoteViewControllerContaining.h>

@protocol UIDocumentPickerDelegate;
@class _UIResilientRemoteViewContainerViewController, _UIRemoteViewService, NSURL, NSMutableArray, _UIDocumentPickerRemoteViewController;

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {

	id<UIDocumentPickerDelegate> _weak_delegate;
	BOOL _ignoreApplicationEntitlementForImport;
	id<UIDocumentPickerDelegate> _delegate;
	unsigned long long _documentPickerMode;
	_UIResilientRemoteViewContainerViewController* _childViewController;
	_UIRemoteViewService* _remoteViewService;
	NSURL* _uploadURL;
	NSMutableArray* _stitchingTokens;

}

@property (assign,nonatomic,__weak) id<UIDocumentPickerDelegate> delegate;                                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long documentPickerMode;                                                                                                                    //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (assign,setter=_setIgnoreApplicationEntitlementForImport:,getter=_ignoreApplicationEntitlementForImport,nonatomic) BOOL _ignoreApplicationEntitlementForImport;              //@synthesize ignoreApplicationEntitlementForImport=_ignoreApplicationEntitlementForImport - In the implementation block
@property (setter=_setChildViewController:,getter=_childViewController,nonatomic,retain) _UIResilientRemoteViewContainerViewController * childViewController;                          //@synthesize childViewController=_childViewController - In the implementation block
@property (getter=_remoteViewController,nonatomic,retain,readonly) _UIDocumentPickerRemoteViewController * remoteViewController; 
@property (nonatomic,retain) _UIRemoteViewService * remoteViewService;                                                                                                                 //@synthesize remoteViewService=_remoteViewService - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                                                                                                                          //@synthesize uploadURL=_uploadURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * stitchingTokens;                                                                                                                         //@synthesize stitchingTokens=_stitchingTokens - In the implementation block
+(void)_checkContentTypes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIDocumentPickerDelegate>)arg1 ;
-(void)dealloc;
-(id<UIDocumentPickerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setStitchingTokens:(NSMutableArray *)arg1 ;
-(unsigned long long)documentPickerMode;
-(void)_dismissViewController;
-(void)_setChildViewController:(id)arg1 ;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)_remoteViewController;
-(NSMutableArray *)stitchingTokens;
-(void)_finishStitching;
-(void)_callDelegateWithSelectedURLAndDismiss:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2 ;
-(void)setDocumentPickerMode:(unsigned long long)arg1 ;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(void)setUploadURL:(NSURL *)arg1 ;
-(void)_prepareForDeletionIfNecessary;
-(NSURL *)uploadURL;
-(void)_didSelectURL:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)_displayLocationsMenuFromRect:(CGRect)arg1 ;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1 ;
-(id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3 ;
-(BOOL)_ignoreApplicationEntitlementForImport;
-(void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1 ;
-(id)_childViewController;
-(_UIRemoteViewService *)remoteViewService;
-(void)setRemoteViewService:(_UIRemoteViewService *)arg1 ;
@end

