/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)dd_urlifyResult:(id)arg1 withBlock:(/*^block*/id)arg2 referenceDate:(id)arg3 context:(id)arg4 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 usingURLificationBlock:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned long long)arg1 context:(id)arg2 ;
-(void)dd_resetResults;
-(void)mf_addAttribute:(id)arg1 value:(id)arg2 ;
-(void)mf_removeAttribute:(id)arg1 ;
-(void)mf_setString:(id)arg1 ;
-(void)dd_offsetResultsBy:(long long)arg1 ;
-(void)dd_chopResults;
-(void)dd_appendAttributedString:(id)arg1 ;
-(void)_ui_restoreOriginalFontAttributes;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)convertBidiControlCharactersToWritingDirection;
-(BOOL)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(void)fixGlyphInfoAttributeInRange:(NSRange)arg1 ;
-(void)fixFontAttributeInRange:(NSRange)arg1 ;
-(void)fixParagraphStyleAttributeInRange:(NSRange)arg1 ;
-(void)fixAttachmentAttributeInRange:(NSRange)arg1 ;
-(void)_fixGlyphInfo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(NSRange)arg3 ;
-(BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(void)setBaseWritingDirection:(long long)arg1 range:(NSRange)arg2 ;
-(NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1 ;
-(NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1 ;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(void)setAlignment:(long long)arg1 range:(NSRange)arg2 ;
-(void)superscriptRange:(NSRange)arg1 ;
-(void)subscriptRange:(NSRange)arg1 ;
-(void)unscriptRange:(NSRange)arg1 ;
-(BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(void)convertWritingDirectionToBidiControlCharacters;
-(void)replaceNewlinesWithSpaces;
-(void)trimWhitespace;
-(void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3 ;
-(void)removeCharactersWithAttribute:(id)arg1 ;
-(void)appendString:(id)arg1 withAttributes:(id)arg2 ;
-(void)appendString:(id)arg1 withAttributes:(id)arg2 ;
-(void)scrcAppendFormat:(id)arg1 ;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)mutableString;
-(void)beginEditing;
-(void)endEditing;
-(void)setAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

