/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorkbook : NSObject
+(void)setupProcessors:(id)arg1 ;
+(void)readStylesFrom:(id)arg1 state:(id)arg2 ;
+(void)readStringsFrom:(id)arg1 state:(id)arg2 ;
+(void)readSheetsFrom:(id)arg1 relationNS:(xmlNs*)arg2 state:(id)arg3 ;
+(void)setupDefaultTextStyleWithState:(id)arg1 ;
+(void)setDefaultParagraphProperties:(id)arg1 ;
+(id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(BOOL)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6 ;
+(id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 ;
@end

