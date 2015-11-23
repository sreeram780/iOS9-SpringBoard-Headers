/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGContact, NSArray, SGObject;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _matchingFieldRecordId;
	long long _matchingFieldType;
	SGContact* _contact;
	NSArray* _matchTokens;

}

@property (nonatomic,readonly) SGContact * contact;                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) SGObject * matchingField; 
@property (nonatomic,readonly) long long matchingFieldType;              //@synthesize matchingFieldType=_matchingFieldType - In the implementation block
@property (nonatomic,readonly) NSArray * matchTokens;                    //@synthesize matchTokens=_matchTokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(SGContact *)contact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SGObject *)matchingField;
-(BOOL)isEqualToContactMatch:(id)arg1 ;
-(id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 ;
-(long long)matchingFieldType;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(NSArray *)matchTokens;
-(id)initWithContact:(id)arg1 matchingPostalAddressRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingPostalAddressRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3 ;
@end

