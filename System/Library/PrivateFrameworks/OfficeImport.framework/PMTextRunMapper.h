/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTextRun;

@interface PMTextRunMapper : CMMapper {

	OADTextRun* mTextRun;

}
-(id)fontScheme;
-(id)copyCharacterStyleWithState:(id)arg1 ;
-(BOOL)_isDefaultFill:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextRun:(id)arg1 parent:(id)arg2 ;
-(void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2 ;
@end

