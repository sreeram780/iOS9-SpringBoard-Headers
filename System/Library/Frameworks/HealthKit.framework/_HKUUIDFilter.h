/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSSet;

@interface _HKUUIDFilter : _HKFilter {

	NSSet* _UUIDs;

}

@property (nonatomic,readonly) NSSet * UUIDs;              //@synthesize UUIDs=_UUIDs - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3 ;
+(id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3 ;
+(id)filterWithUUIDs:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSSet *)UUIDs;
@end

