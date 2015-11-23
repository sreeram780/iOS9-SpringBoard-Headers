/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <vCard/vCard-Structs.h>
@class NSMutableData, NSArray;

@interface CNVCardLexer : NSObject {

	NSMutableData* _data;
	char* _bytes;
	unsigned long long _length;
	unsigned long long _peekedPoint;
	unsigned long long _cursor;
	BOOL _unicode;
	long long _errorCount;
	NSArray* _activeTokenSets;

}
-(id)tokenSetForLength:(long long)arg1 ;
-(BOOL)advancePastEOL;
-(BOOL)advancedPastToken:(int)arg1 ;
-(int)tokenAtCursor;
-(id)nextQuotedPrintableData;
-(id)nextEscapedCharacter;
-(id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3 ;
-(id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 ;
-(void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5 ;
-(id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 ;
-(id)nextUnicodeBase64Line:(BOOL*)arg1 ;
-(id)nextSingleByteBase64Line:(BOOL*)arg1 ;
-(id)nextBase64Line:(BOOL*)arg1 ;
-(BOOL)advanceToEOL;
-(long long)advanceToString;
-(long long)advanceToUnicodeString;
-(long long)advanceToSingleByteString;
-(BOOL)advanceToEOLUnicode;
-(BOOL)advanceToEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advancePastEOLSingle;
-(id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 ;
-(id)nextBase64Data;
-(BOOL)advanceToToken:(int)arg1 throughTypes:(long long)arg2 ;
-(BOOL)atEOF;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)cursor;
-(long long)errorCount;
-(int)readNextToken;
-(int)peekAtNextToken;
-(void)advanceToPeekPoint;
-(id)stringWithRange:(NSRange)arg1 encoding:(unsigned long long)arg2 ;
-(int)nextTokenPeek:(BOOL)arg1 ;
-(int)nextTokenPeekUnicode:(BOOL)arg1 length:(long long)arg2 ;
-(int)nextTokenPeekSingle:(BOOL)arg1 length:(long long)arg2 ;
-(id)nextQuotedStringValueInEncoding:(unsigned long long)arg1 ;
-(NSRange)emptyRangeStartingAtCursor;
-(void)appendDataInRange:(NSRange)arg1 toData:(id)arg2 ;
-(void)appendNextQuotedPrintableDataToData:(id)arg1 ;
-(void)appendNextEscapedCharacterToData:(id)arg1 ;
-(id)stringFromData:(id)arg1 encoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 ;
-(id)trimData:(id)arg1 withPrefixLength:(unsigned long long)arg2 suffixLength:(unsigned long long)arg3 ;
-(id)stringFromSubData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(NSRange)rangeWithLength:(unsigned long long)arg1 lTrim:(unsigned long long)arg2 rTrim:(unsigned long long)arg3 ;
-(NSRange)expandRange:(NSRange)arg1 untilNextByteIs:(id)arg2 ;
-(unsigned short)charAtPosition:(unsigned long long)arg1 withOffset:(long long)arg2 ;
@end

