/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSSet;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) NSNumber * effectScale; 
@property (nonatomic,retain) NSSet * components; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2 ;
-(id)effectPreset;
@end

