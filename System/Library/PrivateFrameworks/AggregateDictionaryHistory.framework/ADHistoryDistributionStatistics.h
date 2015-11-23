/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ADHistoryDistributionStatistics : NSObject {

	unsigned long long* _histCounts;
	double _min;
	double _max;
	double _avg;
	double _rss;
	int _count;
	NSArray* _intervals;

}

@property (nonatomic,readonly) NSArray * intervals;              //@synthesize intervals=_intervals - In the implementation block
-(void)dealloc;
-(unsigned)_determineHistBucketForValue:(double)arg1 ;
-(NSArray *)intervals;
-(id)initWithIntervals:(id)arg1 ;
-(void)calculateSummaryStatisticsWithEnumerator:(id)arg1 ;
-(id)distributionArray;
-(id)histogramDict;
@end

