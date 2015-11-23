/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@protocol NSSecureCoding;
@class NSString, NSDate;

@interface _HDKeyValueJournalEntry : HDJournalEntry {

	id<NSSecureCoding> _value;
	NSString* _key;
	NSString* _domain;
	long long _category;
	long long _provenance;
	NSDate* _modificationDate;

}

@property (nonatomic,readonly) id<NSSecureCoding> value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) long long category;                     //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) long long provenance;                   //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)key;
-(long long)category;
-(NSString *)domain;
-(id<NSSecureCoding>)value;
-(NSDate *)modificationDate;
-(long long)provenance;
-(id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 modificationDate:(id)arg6 ;
@end

