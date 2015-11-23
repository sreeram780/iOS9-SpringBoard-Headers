/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNContactPropertyTransaction : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _property;
	id _value;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) id value;                         //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithType:(long long)arg1 forProperty:(id)arg2 withValue:(id)arg3 ;
-(void)mergeTransactionIntoTransactionArray:(id)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)property;
@end

