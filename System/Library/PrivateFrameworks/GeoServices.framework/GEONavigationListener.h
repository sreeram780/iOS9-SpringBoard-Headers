/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEONavigationServerObserverXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface GEONavigationListener : NSObject <GEONavigationServerObserverXPCInterface> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _routeSummaryUpdatedHandler;
	/*^block*/id _transitSummaryUpdatedHandler;
	/*^block*/id _guidanceStateUpdatedHandler;
	int _navigationStartedToken;
	int _navigationStoppedToken;

}

@property (nonatomic,copy) id routeSummaryUpdatedHandler;                //@synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id transitSummaryUpdatedHandler;              //@synthesize transitSummaryUpdatedHandler=_transitSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id guidanceStateUpdatedHandler;               //@synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)close;
-(void)open;
-(void)setRouteSummaryUpdatedHandler:(id)arg1 ;
-(void)_connectToDaemonIfNeeded;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1 ;
-(void)requestGuidanceState;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1 ;
-(id)routeSummaryUpdatedHandler;
-(void)requestTransitSummary;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1 ;
-(void)setTransitSummaryUpdatedHandler:(id)arg1 ;
-(void)requestRouteSummary;
-(id)transitSummaryUpdatedHandler;
-(void)setGuidanceStateUpdatedHandler:(id)arg1 ;
-(id)guidanceStateUpdatedHandler;
@end

