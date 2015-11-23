/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class TDEffectRenditionSpec, NSSet, TDEffectType;

@interface TDEffectComponent : NSManagedObject

@property (nonatomic,retain) TDEffectRenditionSpec * rendition; 
@property (nonatomic,retain) NSSet * parameters; 
@property (nonatomic,retain) TDEffectType * effectType; 
@property (assign,nonatomic) BOOL isEnabled; 
-(void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned long long)arg2 withDocument:(id)arg3 ;
-(void)updatePresetParameters:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

