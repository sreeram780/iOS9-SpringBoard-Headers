/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderData.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData> {

	BOOL _finalized;
	NSData* _data;
	MDPlistContainerRef _container;

}

@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) MDPlistContainerRef container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) BOOL finalized;                             //@synthesize finalized=_finalized - In the implementation block
-(void)beginType:(const char*)arg1 ;
-(void)encodeInt32:(int)arg1 ;
-(void)beginDictionary;
-(void)encodeString:(const char*)arg1 length:(long long)arg2 ;
-(void)encodeMDPlistObject:(SCD_Struct_CS3)arg1 ;
-(void)endDictionary;
-(void)endType;
-(void)encodeInt64:(long long)arg1 ;
-(void)encodeData:(const void*)arg1 length:(long long)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(const char*)arg2 keyLength:(long long)arg3 ;
-(void)encodeString:(const char*)arg1 stringLength:(long long)arg2 forKey:(const char*)arg3 keyLength:(long long)arg4 ;
-(void)encodeNSString:(id)arg1 ;
-(void)beginArray;
-(void)endArray;
-(BOOL)finalized;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(MDPlistContainerRef)container;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBool:(BOOL)arg1 ;
-(void)encodeString:(const char*)arg1 ;
@end

