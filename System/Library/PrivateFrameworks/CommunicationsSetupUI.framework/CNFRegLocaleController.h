/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>
#import <libobjc.A.dylib/CNFRegRegionChooserDelegate.h>

@class NSString, PSSpecifier, NSArray;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {

	NSString* _currentRegionID;
	NSString* _currentPhoneValue;
	PSSpecifier* _countryFieldSpecifier;
	NSArray* _phoneNumberSpecifiers;
	PSSpecifier* _phoneNumberGroupSpecifier;
	PSSpecifier* _phoneNumberFieldSpecifier;
	NSArray* _regionData;
	BOOL _isLoading;
	BOOL _isError;
	id _regionListChangeObserver;
	/*^block*/id _completionBlock;

}

@property (copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) NSString * currentRegionID;                //@synthesize currentRegionID=_currentRegionID - In the implementation block
@property (nonatomic,copy) NSString * currentPhoneValue;              //@synthesize currentPhoneValue=_currentPhoneValue - In the implementation block
@property (nonatomic,retain) NSArray * regionData;                    //@synthesize regionData=_regionData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(id)bundle;
-(id)initWithRegController:(id)arg1 ;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)_buildSpecifierCache:(id)arg1 ;
-(id)_rightButtonItem;
-(void)_rightButtonTapped;
-(id)validationString;
-(void)_updateControllerState;
-(void)_startTimeout;
-(void)_loadRegionsIfNecessary;
-(void)setRegionData:(NSArray *)arg1 ;
-(void)showCountryPicker;
-(NSArray *)regionData;
-(void)_startListeningForRegionListChanges;
-(NSString *)currentRegionID;
-(void)setCurrentRegionID:(NSString *)arg1 ;
-(NSString *)currentPhoneValue;
-(id)_unformattedPhoneNumber:(id)arg1 ;
-(void)setCurrentPhoneValue:(NSString *)arg1 ;
-(void)_loadInitialValues;
-(id)_phoneTextField;
-(void)_stopListeningForRegionListChanges;
-(void)_handleRegionListLoad;
-(void)_refreshCountryFieldAnimated:(BOOL)arg1 ;
-(void)_refreshPhoneFieldAnimated:(BOOL)arg1 ;
-(id)_currentRegion;
-(void)_showPhoneField:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)currentPhoneCompatibleCountryCode;
-(void)_finishValidation;
-(void)_failValidationWithError:(id)arg1 ;
-(void)hideCountryPicker;
-(void)_showCountryPickerAnimated:(BOOL)arg1 ;
-(void)_hideCountryPickerAnimated:(BOOL)arg1 ;
-(void)_buildCountryFieldSpecifierCache:(id)arg1 ;
-(void)_buildPhoneNumberSpecifierCache:(id)arg1 ;
-(void)regionChooser:(id)arg1 selectedRegionID:(id)arg2 ;
-(id)countryList;
-(id)currentCountryValueForSpecifier:(id)arg1 ;
-(id)currentPhoneNumberForSpecifier:(id)arg1 ;
-(void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2 ;
-(id)titleString;
-(void)_handleTimeout;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)_updateUI;
@end

