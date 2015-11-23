/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD112 mOriginalProperties;
	SCD_Struct_WD112 mTrackedProperties;

}
-(void)addPropertiesValues:(SCD_Struct_WD112*)arg1 to:(SCD_Struct_WD112*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)height;
-(id)initWithDocument:(id)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)setWidthBefore:(short)arg1 ;
-(void)setWidthBeforeType:(int)arg1 ;
-(void)setWidthAfter:(short)arg1 ;
-(void)setWidthAfterType:(int)arg1 ;
-(void)setHeader:(BOOL)arg1 ;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(short)widthBefore;
-(BOOL)isWidthBeforeTypeOverridden;
-(int)widthBeforeType;
-(BOOL)isWidthAfterOverridden;
-(short)widthAfter;
-(BOOL)isWidthAfterTypeOverridden;
-(int)widthAfterType;
-(BOOL)isHeaderOverridden;
-(BOOL)header;
-(BOOL)isHeightTypeOverridden;
-(int)heightType;
-(void)addProperties:(id)arg1 ;
@end

