/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class PSSpecifier, PSListController, NSString;

@interface TIAboutKeyboardPrivacyController : NSObject <UITextViewDelegate> {

	BOOL _asHeader;
	PSSpecifier* _specifier;
	PSListController* _listController;

}

@property (nonatomic,retain) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) BOOL asHeader;                                  //@synthesize asHeader=_asHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)initWithGroupSpecifier:(id)arg1 asHeader:(BOOL)arg2 inListController:(id)arg3 ;
-(void)addPrivacyLinkViewIfNecessaryToHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(void)setupSpecifier;
-(BOOL)asHeader;
-(void)aboutDonePressed;
-(void)setAsHeader:(BOOL)arg1 ;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(void)setListController:(PSListController *)arg1 ;
@end

