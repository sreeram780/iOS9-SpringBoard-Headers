/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBFormula : NSObject
+(void)setupTokensInEDFormulaFromXlFormulaProcessor:(XlFormulaProcessor*)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4 ;
+(XlFormulaInfo*)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2 ;
+(char*)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short*)arg2 formulaLength:(unsigned short*)arg3 state:(id)arg4 ;
+(unsigned)writeToken:(id)arg1 tokenIndex:(unsigned)arg2 tokenStream:(XLFormulaStream*)arg3 extendedStream:(XLFormulaStream*)arg4 state:(id)arg5 ;
+(void)setupFormulaDataForSharedFormula:(id)arg1 xlFormulaInfo:(XlFormulaInfo*)arg2 state:(id)arg3 ;
+(id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4 ;
+(void)readFormulaFromXlCell:(XlCell*)arg1 edCell:(EDCellHeader*)arg2 edRowBlocks:(id)arg3 state:(id)arg4 ;
+(id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6 ;
+(id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 state:(id)arg3 ;
+(XlFormulaInfo*)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2 ;
@end

