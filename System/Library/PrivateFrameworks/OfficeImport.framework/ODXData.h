/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODXData : NSObject
+(id)readPointListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)readConnectionListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)associatePresentationsInIdMap:(id)arg1 ;
+(id)readPointFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readPointTypeFromNode:(xmlNode*)arg1 ;
+(void)readConnectionFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readConnectionTypeFromNode:(xmlNode*)arg1 ;
+(id)readModelIdentifierFromNode:(xmlNode*)arg1 attributeName:(const char*)arg2 ;
+(void)readNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
@end

