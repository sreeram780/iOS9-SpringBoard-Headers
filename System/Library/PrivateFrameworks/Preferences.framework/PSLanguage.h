/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PSLanguage : NSObject {

	NSString* _languageCode;
	NSString* _languageName;
	NSString* _localizedLanguageName;

}

@property (nonatomic,retain) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * languageName;                       //@synthesize languageName=_languageName - In the implementation block
@property (nonatomic,retain) NSString * localizedLanguageName;              //@synthesize localizedLanguageName=_localizedLanguageName - In the implementation block
+(id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3 ;
-(NSString *)localizedLanguageName;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setLanguageName:(NSString *)arg1 ;
-(void)setLocalizedLanguageName:(NSString *)arg1 ;
-(NSString *)languageName;
-(BOOL)displayNamesAreEqual;
@end

