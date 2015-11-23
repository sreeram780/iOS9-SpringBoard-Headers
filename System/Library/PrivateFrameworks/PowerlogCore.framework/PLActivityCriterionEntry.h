/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLActivityCriterion.h>

@class NSString, NSDictionary, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion {

	NSString* _entryKey;
	/*^block*/id _criterionBlock;
	NSDictionary* _filter;
	PLEntryNotificationOperatorComposition* _entryListener;

}

@property (readonly) NSString * entryKey;                                               //@synthesize entryKey=_entryKey - In the implementation block
@property (copy) id criterionBlock;                                                     //@synthesize criterionBlock=_criterionBlock - In the implementation block
@property (retain) NSDictionary * filter;                                               //@synthesize filter=_filter - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * entryListener;              //@synthesize entryListener=_entryListener - In the implementation block
+(id)pluggedInCriterion;
+(id)displayOffCriterion;
-(NSDictionary *)filter;
-(id)description;
-(void)setFilter:(NSDictionary *)arg1 ;
-(void)didEnableActivity:(id)arg1 ;
-(void)didDisableActivity:(id)arg1 ;
-(id)initWithEntryKey:(id)arg1 withFilter:(id)arg2 withCriterionBlock:(/*^block*/id)arg3 ;
-(id)criterionBlock;
-(void)scheduleEntryListener;
-(void)setEntryListener:(PLEntryNotificationOperatorComposition *)arg1 ;
-(id)initWithEntryKey:(id)arg1 withCriterionBlock:(/*^block*/id)arg2 ;
-(void)setCriterionBlock:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)entryListener;
-(NSString *)entryKey;
@end

