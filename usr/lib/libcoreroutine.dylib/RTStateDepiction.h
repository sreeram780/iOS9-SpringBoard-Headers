/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTStateDepictionOneState, NSDate;

@interface RTStateDepiction : NSObject <NSSecureCoding> {

	long long _numOfDataPts;
	RTStateDepictionOneState* _clusterState;

}

@property (nonatomic,retain) id<GEOMapItem> mapItem; 
@property (nonatomic,retain) NSDate * geocodeDate; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long source; 
@property (assign,nonatomic) long long numOfDataPts;                               //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
@property (nonatomic,retain) RTStateDepictionOneState * clusterState;              //@synthesize clusterState=_clusterState - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)needsGeocode;
-(id)_filterEntryExitData:(id)arg1 options:(id)arg2 ;
-(id)_referenceAdjustEntryExitDates:(id)arg1 options:(id)arg2 ;
-(id)_excludeEntryExitOutlierDates:(id)arg1 options:(id)arg2 ;
-(double)_calculateStandardDeviationForDates:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(double)calculateStandardDeviationWithOptions:(id)arg1 error:(id*)arg2 ;
-(id<GEOMapItem>)mapItem;
-(void)setMapItem:(id<GEOMapItem>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(void)setLocation:(id)arg1 ;
-(NSDate *)geocodeDate;
-(void)setGeocodeDate:(NSDate *)arg1 ;
-(RTStateDepictionOneState *)clusterState;
-(id)lastEntyExit;
-(id)getAllOneVisits;
-(void)submitEntry:(double)arg1 exit:(double)arg2 ;
-(double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2 ;
-(void)removeEntry:(double)arg1 exit:(double)arg2 ;
-(id)getLocation;
-(void)setNumOfDataPts:(long long)arg1 ;
-(double)getLastVisit;
-(BOOL)cleanState:(double)arg1 ;
-(id)getRecentVisits:(double)arg1 ;
-(void)addOneVisitsFromStateDepiction:(id)arg1 ;
-(unsigned long long)getNumOfVisitsOverall;
-(id)getAggStateStat;
-(void)showState;
-(id)getEarliestLatestEntry;
-(id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3 ;
-(id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
-(void)removeAllVisitsExceptMostRecent;
-(long long)numOfDataPts;
-(void)setClusterState:(RTStateDepictionOneState *)arg1 ;
@end

