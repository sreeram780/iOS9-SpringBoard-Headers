/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/WBUCreditCardCaptureViewControllerDelegate.h>

@class NSDictionary, NSArray, NSMutableDictionary, WBSMultiRoundAutoFillManager, WBUFormDataController, NSString;

@interface WBUFormAutoCompleteState : NSObject <UIActionSheetDelegate, WBUCreditCardCaptureViewControllerDelegate> {

	/*^block*/id _creditCardCaptureCompletionHandler;
	NSDictionary* _formMetadata;
	NSDictionary* _textFieldMetadata;
	unsigned long long _formType;
	long long _action;
	BOOL _gatheringFormValues;
	NSDictionary* _formValues;
	NSDictionary* _formAnnotations;
	NSArray* _credentialMatches;
	NSArray* _relatedCredentialMatches;
	BOOL _canAutoComplete;
	NSMutableDictionary* _matchesByCompletion;
	WBSMultiRoundAutoFillManager* _multiRoundAutoFillManager;
	WBUFormDataController* _dataController;

}

@property (nonatomic,readonly) NSString * textFieldValue; 
@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (nonatomic,readonly) id<WBUFormAutoFillFrameHandle> frame; 
@property (assign,nonatomic,__weak) WBUFormDataController * dataController;              //@synthesize dataController=_dataController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg1 ;
-(void)dealloc;
-(id<WBUFormAutoFillFrameHandle>)frame;
-(void)invalidate;
-(long long)_action;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(BOOL)hasCurrentSuggestions;
-(void)_updateAutoFillButton;
-(void)autoFill;
-(id)initWithFormDataController:(id)arg1 ;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusField:(id)arg3 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2 ;
-(void)annotateForm:(id)arg1 withValues:(id)arg2 ;
-(void)fillGeneratedPassword:(id)arg1 inField:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3 ;
-(id)titleOfAutoFillButton;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg1 ;
-(void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2 ;
-(void)_getLoginFormUser:(id*)arg1 password:(id*)arg2 userIsAutoFilled:(BOOL*)arg3 passwordIsAutoFilled:(BOOL*)arg4 ;
-(BOOL)_hasMatchWithUser:(id)arg1 password:(id)arg2 ;
-(BOOL)_textFieldIsEmptyPasswordField;
-(void)_getShouldOfferForgetPassword:(BOOL*)arg1 savePassword:(BOOL*)arg2 ;
-(BOOL)_shouldAllowGeneratedPassword;
-(long long)_actionForLoginForm;
-(BOOL)_textFieldLooksLikeCreditCardFormField;
-(BOOL)_canAutoFillCreditCardData;
-(BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
-(long long)_passwordGenerationAssistanceAction;
-(void)_ensureFormMetadata;
-(void)_gatherFormValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setUpMultiRoundAutoFillManagerIfNecessary;
-(void)_performAutoFill;
-(void)_autoFillCreditCardData;
-(void)_captureCreditCardDataWithCameraAndFill;
-(void)_suggestPasswordForNewAccountOrChangePasswordForm;
-(void)_offerToAutoFillFromPotentialCredentialMatches;
-(void)_autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 ;
-(id)_matchesForPartialString:(id)arg1 ;
-(void)_autoFillFormWithCreditCardData:(id)arg1 ;
-(BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
-(void)_generateAndSuggestPasswordWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setUserAndPasswordFieldsAutoFilled:(BOOL)arg1 clearPasswordField:(BOOL)arg2 ;
-(void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)textDidChangeInForm:(id)arg1 textField:(id)arg2 ;
-(id)suggestionsForString:(id)arg1 ;
-(WBUFormDataController *)dataController;
-(void)setDataController:(WBUFormDataController *)arg1 ;
-(NSString *)textFieldValue;
@end

