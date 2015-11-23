/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventWeightedHistogram.h>
#import <libobjc.A.dylib/RTEventHistogram.h>

@class NSDate, NSString;

@interface RTEventDecayHistogram : RTEventWeightedHistogram <RTEventHistogram> {

	double _decayRate;
	double _unitDecayTimeInterval;
	NSDate* _referenceDate;

}

@property (nonatomic,readonly) double decayRate;                          //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) double unitDecayTimeInterval;              //@synthesize unitDecayTimeInterval=_unitDecayTimeInterval - In the implementation block
@property (nonatomic,retain) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)reset;
-(void)addEvent:(id)arg1 weight:(double)arg2 ;
-(id)initWithDecayRate:(double)arg1 date:(id)arg2 unitDecayTimeInterval:(double)arg3 ;
-(id)initWithDecayRate:(double)arg1 date:(id)arg2 ;
-(double)unitDecayTimeInterval;
-(double)decayTimeExponent:(id)arg1 ;
-(double)decayRate;
@end

