/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString
-(id)initWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(unsigned long long)length;
-(BOOL)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(BOOL)_tryRetain;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
@end

