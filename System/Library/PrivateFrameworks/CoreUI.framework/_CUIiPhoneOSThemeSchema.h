/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(const SCD_Struct_CU24*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU27*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU27*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)elementDefinitionWithName:(id)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(const SCD_Struct_CU24*)categoryForElementDefinition:(const SCD_Struct_CU27*)arg1 ;
-(const SCD_Struct_CU27*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU27*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU26*)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(const SCD_Struct_CU27*)_sortedElementDefinitions;
-(const SCD_Struct_CU27*)_sortedEffectDefinitions;
-(long long)schemaVersion;
@end

