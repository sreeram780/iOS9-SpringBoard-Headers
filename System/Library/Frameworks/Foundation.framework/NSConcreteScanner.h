/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {

	NSString* scanString;
	NSCharacterSet* skipSet;
	NSCharacterSet* invertedSkipSet;
	id locale;
	unsigned long long scanLocation;
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	}  flags;

}
-(id)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(id)_invertedSkipSet;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(unsigned long long)scanLocation;
-(void)dealloc;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)locale;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(void)finalize;
-(BOOL)scanInt:(int*)arg1 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
@end

