/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonModifierValidator : CKPredicateValidatorInstance {

	unsigned long long _modifier;

}

@property (assign,nonatomic) unsigned long long modifier;              //@synthesize modifier=_modifier - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithModifier:(unsigned long long)arg1 ;
-(unsigned long long)modifier;
-(id)CKPropertiesDescription;
-(void)setModifier:(unsigned long long)arg1 ;
@end

