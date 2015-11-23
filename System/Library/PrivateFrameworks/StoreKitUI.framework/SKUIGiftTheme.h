/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIImage, NSURL, NSString;

@interface SKUIGiftTheme : NSObject <NSCopying> {

	UIColor* _backgroundColor;
	UIColor* _bodyTextColor;
	UIImage* _headerImage;
	NSURL* _headerImageURL;
	UIColor* _primaryTextColor;
	long long _themeIdentifier;
	NSString* _themeName;

}

@property (assign,nonatomic) long long themeIdentifier;              //@synthesize themeIdentifier=_themeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * themeName;                     //@synthesize themeName=_themeName - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * bodyTextColor;                  //@synthesize bodyTextColor=_bodyTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;               //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                  //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSURL * headerImageURL;                   //@synthesize headerImageURL=_headerImageURL - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(long long)themeIdentifier;
-(UIImage *)headerImage;
-(UIColor *)bodyTextColor;
-(NSString *)themeName;
-(void)setBodyTextColor:(UIColor *)arg1 ;
-(id)initWithThemeDictionary:(id)arg1 ;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(NSURL *)headerImageURL;
-(void)setHeaderImageURL:(NSURL *)arg1 ;
-(void)setThemeIdentifier:(long long)arg1 ;
-(void)setThemeName:(NSString *)arg1 ;
@end

