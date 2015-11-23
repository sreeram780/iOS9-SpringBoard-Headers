/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface TKDataSource : NSObject {

	NSData* _data;
	const char* _ptr;

}

@property (readonly) const char* ptr;              //@synthesize ptr=_ptr - In the implementation block
@property (readonly) const char* end; 
@property (readonly) NSData * data; 
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(const char*)end;
-(BOOL)containsOffset:(long long)arg1 ;
-(unsigned char)fetchByte;
-(id)fetchDataWithLength:(long long)arg1 ;
-(const char*)ptr;
@end

