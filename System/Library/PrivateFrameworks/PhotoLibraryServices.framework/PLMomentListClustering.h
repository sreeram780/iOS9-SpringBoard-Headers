/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMapTable, NSDateFormatter;

@interface PLMomentListClustering : NSObject {

	BOOL _allowsCollectionInfluencing;
	BOOL _allowsCollectionAccumulation;
	BOOL _allowsYearAccumulation;
	double __maximumTimeThreshold;
	double __maximumTimeThresholdBetweenMomentsWithLocation;
	double __maximumTimeThresholdFromPeakMatch;
	double __maximumTimeThresholdBetweenMomentsWithoutLocation;
	double __maximumTimeThresholdFromPeakWithoutLocation;
	double __maximumDistanceThresholdBetweenMoments;
	double __maximumDistanceThresholdFromPeak;
	double __maximumDistanceBetweenAccumulatedMoments;
	unsigned long long __defaultNumberOfAssetsRequiredForSeeding;
	unsigned long long __defaultMaxFailuresForExpansion;
	double __megamomentAccumulationMaximumTimeThreshold;
	unsigned long long __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
	unsigned long long __minimumNumberOfAssetsToAvoidYearAccumulation;
	NSMutableDictionary* __clustersByYearAndMonth;
	NSMutableSet* __visitedMoments;
	NSMapTable* __cachedLocationsByMoment;
	NSMutableDictionary* __cachedCollectionTagByMomentID;
	NSDateFormatter* __debugDateFormatter;

}

@property (assign,nonatomic) BOOL allowsCollectionInfluencing;                                                                            //@synthesize allowsCollectionInfluencing=_allowsCollectionInfluencing - In the implementation block
@property (assign,nonatomic) BOOL allowsCollectionAccumulation;                                                                           //@synthesize allowsCollectionAccumulation=_allowsCollectionAccumulation - In the implementation block
@property (assign,nonatomic) BOOL allowsYearAccumulation;                                                                                 //@synthesize allowsYearAccumulation=_allowsYearAccumulation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThreshold;                                                                              //@synthesize _maximumTimeThreshold=__maximumTimeThreshold - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdBetweenMomentsWithLocation;                                                    //@synthesize _maximumTimeThresholdBetweenMomentsWithLocation=__maximumTimeThresholdBetweenMomentsWithLocation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdFromPeakMatch;                                                                 //@synthesize _maximumTimeThresholdFromPeakMatch=__maximumTimeThresholdFromPeakMatch - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdBetweenMomentsWithoutLocation;                                                 //@synthesize _maximumTimeThresholdBetweenMomentsWithoutLocation=__maximumTimeThresholdBetweenMomentsWithoutLocation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdFromPeakWithoutLocation;                                                       //@synthesize _maximumTimeThresholdFromPeakWithoutLocation=__maximumTimeThresholdFromPeakWithoutLocation - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceThresholdBetweenMoments;                                                            //@synthesize _maximumDistanceThresholdBetweenMoments=__maximumDistanceThresholdBetweenMoments - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceThresholdFromPeak;                                                                  //@synthesize _maximumDistanceThresholdFromPeak=__maximumDistanceThresholdFromPeak - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceBetweenAccumulatedMoments;                                                          //@synthesize _maximumDistanceBetweenAccumulatedMoments=__maximumDistanceBetweenAccumulatedMoments - In the implementation block
@property (nonatomic,readonly) unsigned long long _defaultNumberOfAssetsRequiredForSeeding;                                               //@synthesize _defaultNumberOfAssetsRequiredForSeeding=__defaultNumberOfAssetsRequiredForSeeding - In the implementation block
@property (nonatomic,readonly) unsigned long long _defaultMaxFailuresForExpansion;                                                        //@synthesize _defaultMaxFailuresForExpansion=__defaultMaxFailuresForExpansion - In the implementation block
@property (nonatomic,readonly) double _megamomentAccumulationMaximumTimeThreshold;                                                        //@synthesize _megamomentAccumulationMaximumTimeThreshold=__megamomentAccumulationMaximumTimeThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long _minimumNumberOfAssetsToAvoidMegamomentAccumulation;                                    //@synthesize _minimumNumberOfAssetsToAvoidMegamomentAccumulation=__minimumNumberOfAssetsToAvoidMegamomentAccumulation - In the implementation block
@property (nonatomic,readonly) unsigned long long _minimumNumberOfAssetsToAvoidYearAccumulation;                                          //@synthesize _minimumNumberOfAssetsToAvoidYearAccumulation=__minimumNumberOfAssetsToAvoidYearAccumulation - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByYearAndMonth;                                                             //@synthesize _clustersByYearAndMonth=__clustersByYearAndMonth - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _visitedMoments;                                                                            //@synthesize _visitedMoments=__visitedMoments - In the implementation block
@property (setter=_setCachedLocationsByMoment:,nonatomic,retain) NSMapTable * _cachedLocationsByMoment;                                   //@synthesize _cachedLocationsByMoment=__cachedLocationsByMoment - In the implementation block
@property (setter=_setCachedCollectionTagByMomentID:,nonatomic,retain) NSMutableDictionary * _cachedCollectionTagByMomentID;              //@synthesize _cachedCollectionTagByMomentID=__cachedCollectionTagByMomentID - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _debugDateFormatter;                                                                     //@synthesize _debugDateFormatter=__debugDateFormatter - In the implementation block
+(double)maximumTimeThresholdBetweenMoments;
-(void)dealloc;
-(id)init;
-(void)setAllowsCollectionInfluencing:(BOOL)arg1 ;
-(void)setAllowsCollectionAccumulation:(BOOL)arg1 ;
-(void)setAllowsYearAccumulation:(BOOL)arg1 ;
-(void)_updateMomentList:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)_cachedLocationForMoment:(id)arg1 ;
-(double)_maximumTimeThresholdBetweenMomentsWithLocation;
-(BOOL)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(BOOL)arg4 ;
-(double)_maximumTimeThresholdFromPeakMatch;
-(double)_maximumDistanceThresholdBetweenMoments;
-(double)_maximumDistanceThresholdFromPeak;
-(double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
-(double)_maximumTimeThresholdFromPeakWithoutLocation;
-(BOOL)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(BOOL)arg6 haveRejectedMomentsForDistance:(BOOL)arg7 ;
-(NSMutableDictionary *)_cachedCollectionTagByMomentID;
-(void)_setCachedCollectionTagByMomentID:(id)arg1 ;
-(NSMapTable *)_cachedLocationsByMoment;
-(void)_verifyMomentsAreSorted:(id)arg1 ;
-(void)_createMomentListClusterCacheForMoments:(id)arg1 ;
-(BOOL)allowsCollectionInfluencing;
-(void)_createMomentListTagCacheForMoments:(id)arg1 ;
-(void)_setCachedLocationsByMoment:(id)arg1 ;
-(unsigned long long)_defaultNumberOfAssetsRequiredForSeeding;
-(id)_insertNewMegaMomentListWithMoment:(id)arg1 inManager:(id)arg2 ;
-(unsigned long long)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(BOOL)arg4 outRejectedMoments:(id)arg5 ;
-(BOOL)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2 ;
-(double)_megamomentAccumulationMaximumTimeThreshold;
-(BOOL)allowsCollectionAccumulation;
-(unsigned long long)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
-(double)_maximumDistanceBetweenAccumulatedMoments;
-(BOOL)allowsYearAccumulation;
-(unsigned long long)_minimumNumberOfAssetsToAvoidYearAccumulation;
-(id)generateMegaMomentListsForMoments:(id)arg1 inManager:(id)arg2 ;
-(id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManager:(id)arg4 ;
-(double)_maximumTimeThreshold;
-(unsigned long long)_defaultMaxFailuresForExpansion;
-(NSMutableDictionary *)_clustersByYearAndMonth;
-(NSMutableSet *)_visitedMoments;
-(NSDateFormatter *)_debugDateFormatter;
@end

