/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData;

@interface PQLNameInjectionBase : NSData {

	unsigned long long _length;
	char* _bytes;

}

@property (nonatomic,readonly) NSData * sql; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)sql;
@end

