/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBUFormMetadataObserver.h>

@protocol WBUFormAutoFillControllerDelegate, WBUFormAutoFiller;
@class WBUFormAutoFillWebView, _WKRemoteObjectInterface, NSMutableDictionary, WBUFormAutocompleteStateWK2, NSTimer, NSString;

@interface WBUFormAutoFillController : NSObject <WBUFormMetadataObserver> {

	WBUFormAutoFillWebView* _webView;
	id<WBUFormAutoFillControllerDelegate> _delegate;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	id<WBUFormAutoFiller> _autoFiller;
	NSMutableDictionary* _metadataReplyIdentifierToCompletion;
	WBUFormAutocompleteStateWK2* _state;
	NSTimer* _prefillTimer;

}

@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebView:(id)arg1 delegate:(id)arg2 ;
-(void)prefillFormsSoonIfNeeded;
-(void)fieldFocusedWithInputSession:(id)arg1 ;
-(void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)autoFill;
-(void)annotateForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2 ;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3 ;
-(void)didCollectFormMetadata:(id)arg1 textFieldMetadata:(id)arg2 replyIdentifier:(id)arg3 ;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2 ;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(BOOL)arg3 ;
-(void)autoFillForm:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(void)_prefillTimerFired:(id)arg1 ;
-(void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(void)_autoFillLoginFormSynchronously:(id)arg1 inFrame:(id)arg2 ;
-(void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 andFocusField:(id)arg4 ;
@end

