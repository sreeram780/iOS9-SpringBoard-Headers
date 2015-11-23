/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class GEORequester, GEOUsageCollectionRequest, NSLock, NSTimer, NSMapTable, NSMutableDictionary, NSString;

@interface GEOUsageManager : NSObject <PBRequesterDelegate> {

	GEORequester* _requester;
	GEOUsageCollectionRequest* _request;
	NSLock* _requestLock;
	NSTimer* _updateTimer;
	/*^block*/id _backgroundTaskStart;
	/*^block*/id _backgroundTaskEnd;
	NSMapTable* _requesterToBackgroundTask;
	NSMutableDictionary* _stateData;
	NSMutableDictionary* _stateTimingData;

}

@property (nonatomic,copy) id backgroundTaskStart;                  //@synthesize backgroundTaskStart=_backgroundTaskStart - In the implementation block
@property (nonatomic,copy) id backgroundTaskEnd;                    //@synthesize backgroundTaskEnd=_backgroundTaskEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)captureTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3 ;
-(void)captureTraits:(id)arg1 uiTarget:(int)arg2 ;
-(void)captureTraits:(id)arg1 userActionsUsageLogMessage:(id)arg2 eventKey:(int)arg3 ;
-(void)captureTraits:(id)arg1 suggestionEntryMetadatasDisplayed:(id)arg2 suggestionEntryMetadataSelected:(id)arg3 ;
-(void)captureTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)captureTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3 ;
-(void)captureTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_usageURL;
-(void)_updateTimerFired:(id)arg1 ;
-(void)captureTileStateForGridCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3 ;
-(void)captureStateTimingFeedbackCollection:(id)arg1 ;
-(void)captureLeaveNowFeedbackCollection:(id)arg1 ;
-(void)_prepareRequest;
-(void)captureMapsUsageFeedbackCollection:(id)arg1 ;
-(void)_startBackgroundTaskForRequester:(id)arg1 ;
-(void)captureTransitAppLaunchSource:(SCD_Struct_GE16)arg1 destination:(SCD_Struct_GE16)arg2 bundleIdentifier:(id)arg3 ;
-(BOOL)shouldIgnoreCollectionForCountry;
-(void)setBackgroundTaskEnd:(id)arg1 ;
-(id)backgroundTaskEnd;
-(void)captureMapsLaunchURLScheme:(id)arg1 sourceApplication:(id)arg2 ;
-(void)captureDirectionsFeedbackCollection:(id)arg1 ;
-(void)_cleanupRequester;
-(void)_captureUsageCollection:(id)arg1 ;
-(void)captureSuggestionsFeedbackCollection:(id)arg1 ;
-(void)captureUsageDataForRequest:(id)arg1 service:(int)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestErrorDescription:(id)arg5 ;
-(void)captureRequestsForPlaceDataCache:(id)arg1 appIdentifier:(id)arg2 ;
-(void)setBackgroundTaskStart:(id)arg1 ;
-(id)backgroundTaskStart;
-(void)captureUsageDataForTiles:(id)arg1 ;
-(id)createTileSetStateForType:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4 ;
-(void)_cleanupTimer;
-(id)_usageCollectionForRequest:(id)arg1 service:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestErrorDescription:(id)arg6 ;
-(void)captureUsageDataForRequest:(id)arg1 service:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestErrorDescription:(id)arg6 ;
-(void)captureTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(void)captureUsageDataForRequestToService:(int)arg1 requestErrorDomain:(id)arg2 requestErrorCode:(long long)arg3 requestErrorDescription:(id)arg4 responseSize:(unsigned long long)arg5 responseTime:(unsigned long long)arg6 ;
-(void)sendUsageIfNecessary;
-(void)captureLogMessageUsageMetric:(id)arg1 ;
-(id)_usageCollectionForRequestToService:(int)arg1 requestType:(int)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestErrorDescription:(id)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8 ;
-(void)captureTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(void)captureUsageDataForRequest:(id)arg1 service:(int)arg2 requestType:(int)arg3 ;
-(void)_scheduleUpdateTimer;
-(void)_applicationDeactivating;
-(void)clearStateTimingData;
-(void)captureUsageDataForRequest:(id)arg1 service:(int)arg2 ;
-(void)captureStateTransition:(id)arg1 force:(BOOL)arg2 ;
-(void)_endBackgroundTaskForRequester:(id)arg1 ;
-(void)captureTileStateForLoadCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3 ;
-(void)_sendUsageToServer;
@end

