/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBGraphic : NSObject
+(id)readGraphicWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readNotesWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3 ;
+(void)readOle:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(void)readImage:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(int)objectTypeForShape:(id)arg1 ;
+(id)readMainChartWithState:(id)arg1 ;
+(void)readGraphicsInChart:(id)arg1 state:(id)arg2 ;
+(void)readGraphicsWithState:(id)arg1 ;
@end

