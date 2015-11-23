/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STPersonContactHandle : NSObject <NSSecureCoding> {

	NSString* _handle;
	NSString* _label;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * handle;                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)handle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isEqualToPersonContactHandle:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
@end

