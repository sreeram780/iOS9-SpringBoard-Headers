/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPassField : NSObject <NSSecureCoding> {

	NSString* _value;
	long long _type;
	NSString* _key;
	NSString* _label;
	id _unformattedValue;
	NSString* _changeMessage;
	long long _textAlignment;
	unsigned long long _dataDetectorTypes;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * label;                                    //@synthesize label=_label - In the implementation block
@property (readonly) NSString * value; 
@property (nonatomic,copy) id unformattedValue;                                 //@synthesize unformattedValue=_unformattedValue - In the implementation block
@property (nonatomic,copy) NSString * changeMessage;                            //@synthesize changeMessage=_changeMessage - In the implementation block
@property (assign,nonatomic) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long dataDetectorTypes;              //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)value;
-(long long)textAlignment;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)setKey:(NSString *)arg1 ;
-(void)setChangeMessage:(NSString *)arg1 ;
-(id)unformattedValue;
-(NSString *)changeMessage;
-(void)setUnformattedValue:(id)arg1 ;
-(void)flushCachedValue;
@end

