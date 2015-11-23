/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, TCFontFamily;

@interface TCFont : NSObject <NSCopying> {

	NSDictionary* _namesByLanguage;
	NSString* _psName;
	TCFontFamily* _family;
	TCFontStyling _styling;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSString * psName;                           //@synthesize psName=_psName - In the implementation block
@property (nonatomic,readonly) TCFontStyling styling;                       //@synthesize styling=_styling - In the implementation block
@property (assign,nonatomic) TCFontFamily * family;                         //@synthesize family=_family - In the implementation block
+(id)fontWithFont:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TCFontStyling)styling;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(NSString *)psName;
-(id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(TCFontStyling)arg3 ;
-(int)preferredLanguage;
-(id)englishName;
-(id)localizedFontName;
-(TCFontFamily *)family;
-(void)setFamily:(TCFontFamily *)arg1 ;
@end
