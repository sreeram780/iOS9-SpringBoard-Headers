/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mFontIndex;
	NSString* mString;
	int mType;
	int mAlign;
	EDCollection* mRuns;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneticInfoWithResources:(id)arg1 ;
-(NSString *)description;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)appendString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setString:(id)arg1 ;
-(void)setAlign:(int)arg1 ;
-(id)runs;
-(int)align;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isEqualToEDPhoneticInfo:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
@end

