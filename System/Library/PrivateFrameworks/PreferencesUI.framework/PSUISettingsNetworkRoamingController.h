/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUISettingsNetworkRoamingController : PSListController {

	PSSpecifier* _voiceRoamingSpecifier;
	PSSpecifier* _dataRoamingSpecifier;
	PSSpecifier* _cdmaRoamingSpecifier;

}
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)newCarrierNotification;
-(id)getDataRoamingPlanName:(id)arg1 ;
-(id)getDataRoamingStatus:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getEUInternetStatus:(id)arg1 ;
-(void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getCDMARoamingStatus:(id)arg1 ;
-(id)_voiceRoamingFooterTextWithVoiceRoamingOn:(BOOL)arg1 ;
-(void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getVoiceRoamingStatus:(id)arg1 ;
-(id)dataRoamingSpecifiers;
-(id)cdmaRoamingSpecifiers;
-(void)reloadRoamingStatus;
@end

