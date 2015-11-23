/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXString : NSObject
+(void)buildEDString:(id)arg1 fromNode:(xmlNode*)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(void)parseStringWithAsciiCode:(id)arg1 ;
+(void)buildEDString:(id)arg1 fromText:(id)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(void)buildEDString:(id)arg1 fromChildrenOfNode:(xmlNode*)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(id)cleanupWhitespace:(id)arg1 ;
+(id)stringInEDString:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
+(id)stringInEDString:(id)arg1 forRunIndex:(unsigned)arg2 ;
+(id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode*)arg1 ;
+(id)edTextFromXmlStringElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edStringWithRunsFromXmlStringElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edStringWithRunsFromXmlDivElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)replaceEscapeAsciiCodes:(id)arg1 ;
@end

