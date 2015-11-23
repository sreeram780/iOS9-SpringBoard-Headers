/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface AFSpeechWord : NSObject <NSSecureCoding> {

	NSString* _orthography;
	NSArray* _pronunciations;
	long long _tag;

}

@property (nonatomic,copy) NSString * orthography;                //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,copy) NSArray * pronunciations;              //@synthesize pronunciations=_pronunciations - In the implementation block
@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)orthography;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)pronunciations;
-(void)setPronunciations:(NSArray *)arg1 ;
@end

