/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, NSString;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfFields:(int)arg2 ;
@end

