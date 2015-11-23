/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>
#import <libobjc.A.dylib/WLDeviceAuthenticationDelegate.h>
#import <libobjc.A.dylib/WLDataMigrationDelegate.h>

@class UILabel, UIActivityIndicatorView, UIProgressView, NSArray, WLSourceDevice, WLDeviceAuthenticationController, WLDataMigrationController, NSString;

@interface WLMigrationProgressViewController : WLWelcomeGroupViewController <WLDeviceAuthenticationDelegate, WLDataMigrationDelegate> {

	UILabel* _stateView;
	UIActivityIndicatorView* _spinner;
	UILabel* _deviceNameView;
	UIProgressView* _progressView;
	UILabel* _explanationView;
	NSArray* _stateViewConstraintsForWithSpinner;
	NSArray* _stateViewConstraintsForNoSpinner;
	WLSourceDevice* _sourceDevice;
	WLDeviceAuthenticationController* _authController;
	unsigned long long _migrationState;
	WLDataMigrationController* _migrationController;
	BOOL _migrationControllerIsRestartable;
	BOOL _migrationConcluded;
	NSString* _progressString;
	/*^block*/id _completionHandler;
	/*^block*/id _migrationDidBeginHandler;
	/*^block*/id _authenticationDidSucceedHandler;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id migrationDidBeginHandler;                     //@synthesize migrationDidBeginHandler=_migrationDidBeginHandler - In the implementation block
@property (nonatomic,copy) id authenticationDidSucceedHandler;              //@synthesize authenticationDidSucceedHandler=_authenticationDidSucceedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_startAuthentication;
-(void)authenticator:(id)arg1 didFinishWithAuthentication:(id)arg2 ;
-(void)authenticator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticator:(id)arg1 didCalculateSecurityCode:(id)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2 ;
-(void)dataMigratorDidBecomeRestartable:(id)arg1 ;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2 ;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateProgressString:(id)arg2 ;
-(void)_updateProgressViewsWithOneLineStateKey:(id)arg1 twoLineStateKey:(id)arg2 showDeviceName:(BOOL)arg3 showSpinner:(BOOL)arg4 explanationText:(id)arg5 ;
-(void)_uiTestModeStartFakeAuthentication;
-(void)_startMigrationWithAuthentication:(id)arg1 ;
-(void)_callClientCompletionWithSuccess:(BOOL)arg1 ;
-(void)_uiTestModeStartFakeMigration;
-(void)_didCompleteMigrationWithSuccess:(BOOL)arg1 ;
-(void)dataMigratorDidGetInterrupted;
-(id)initWithSourceDevice:(id)arg1 metrics:(id)arg2 ;
-(id)migrationDidBeginHandler;
-(void)setMigrationDidBeginHandler:(id)arg1 ;
-(id)authenticationDidSucceedHandler;
-(void)setAuthenticationDidSucceedHandler:(id)arg1 ;
@end

