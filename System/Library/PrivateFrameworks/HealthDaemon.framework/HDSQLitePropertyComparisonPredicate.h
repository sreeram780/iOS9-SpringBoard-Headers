/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLitePropertyComparisonPredicate : HDSQLitePredicate <NSCopying> {

	NSString* _lhObjectPropertyName;
	NSString* _rhObjectPropertyName;
	long long _comparisonType;

}

@property (nonatomic,readonly) NSString * lhObjectPropertyName;              //@synthesize lhObjectPropertyName=_lhObjectPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * rhObjectPropertyName;              //@synthesize rhObjectPropertyName=_rhObjectPropertyName - In the implementation block
@property (nonatomic,readonly) long long comparisonType;                     //@synthesize comparisonType=_comparisonType - In the implementation block
+(id)predicateWithLeftHandObjectPropertyName:(id)arg1 rightHandObjectPropertyName:(id)arg2 comparisonType:(long long)arg3 ;
-(id)description;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSString *)lhObjectPropertyName;
-(NSString *)rhObjectPropertyName;
-(id)_comparisonOperator;
-(long long)comparisonType;
@end

