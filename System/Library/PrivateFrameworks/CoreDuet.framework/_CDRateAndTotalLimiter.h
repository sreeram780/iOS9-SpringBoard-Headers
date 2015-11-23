/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	long long _totalCount;
	long long _currentTotal;

}

@property (readonly) long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
@property (assign) long long currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
-(id)description;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3 ;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)debited;
-(long long)totalCount;
-(long long)currentTotal;
-(void)setCurrentTotal:(long long)arg1 ;
-(BOOL)credit;
@end

