/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CNVCardParameter : NSObject {

	NSString* _name;
	NSString* _value;

}

@property (readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)parameterWithName:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(NSString *)value;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end

