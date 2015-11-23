/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIThemeSchema : NSObject
+(id)schemaForPlatform:(long long)arg1 ;
+(id)defaultSchema;
-(const SCD_Struct_CU24*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU27*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU27*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)partDefinitionCountForElementDefinition:(const SCD_Struct_CU27*)arg1 ;
-(unsigned long long)dimensionDefinitionCountForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(const SCD_Struct_CU27*)elementDefinitionWithName:(id)arg1 ;
-(const SCD_Struct_CU26*)partDefinitionWithName:(id)arg1 forElementDefinition:(const SCD_Struct_CU27*)arg2 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(const SCD_Struct_CU26*)partDefinitionForWidgetName:(id)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(void)enumerateAvailableThemeAttributesInPartDefinition:(const SCD_Struct_CU26*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const SCD_Struct_CU26*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(const SCD_Struct_CU24*)categoryForElementDefinition:(const SCD_Struct_CU27*)arg1 ;
-(const SCD_Struct_CU27*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(unsigned long long)partDefinitionCountForEffectDefinition:(const SCD_Struct_CU27*)arg1 ;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(const SCD_Struct_CU27*)materialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)sortedMaterialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)materialDefinitionWithName:(id)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(unsigned long long)partDefinitionCountForMaterialDefinition:(const SCD_Struct_CU27*)arg1 ;
-(id)schemaMaterialRenditionsForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(long long)schemaVersion;
@end

