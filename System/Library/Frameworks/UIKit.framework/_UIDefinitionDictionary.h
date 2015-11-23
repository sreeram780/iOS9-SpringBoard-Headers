/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class ASAsset, NSString;

@interface _UIDefinitionDictionary : NSObject {

	DCSDictionaryRef _dictionary;
	BOOL _activated;
	ASAsset* _rawAsset;
	NSString* _definitionLanguage;

}

@property (readonly) ASAsset * rawAsset;                              //@synthesize rawAsset=_rawAsset - In the implementation block
@property (readonly) NSString * localizedLanguageName; 
@property (readonly) NSString * localizedDictionaryName; 
@property (readonly) NSString * definitionLanguage;                   //@synthesize definitionLanguage=_definitionLanguage - In the implementation block
@property (assign) BOOL activated;                                    //@synthesize activated=_activated - In the implementation block
+(id)_normalizedLanguageStringForLanguageCode:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)localizedDictionaryName;
-(ASAsset *)rawAsset;
-(id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2 ;
-(id)_shortHTMLDefinitionForTerm:(id)arg1 ;
-(id)_attributedDefinitionForTerm:(id)arg1 ;
-(id)_fullHTMLDefinitionForTerm:(id)arg1 ;
-(BOOL)activated;
-(id)initWithAsset:(id)arg1 ;
-(NSString *)localizedLanguageName;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_definitionValueForTerm:(id)arg1 ;
-(NSString *)definitionLanguage;
-(void)setActivated:(BOOL)arg1 ;
@end

