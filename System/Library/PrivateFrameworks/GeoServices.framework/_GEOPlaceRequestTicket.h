/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceTicket.h>

@protocol GEOMapItem;
@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSDictionary, GEOMapServiceTraits, GEOMapRegion, NSString;

@interface _GEOPlaceRequestTicket : NSObject <GEOMapServiceTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	NSDictionary* _userInfo;
	GEOMapServiceTraits* _traits;
	GEOMapRegion* _resultBoundingRegion;
	BOOL _chainResultSet;
	id<GEOMapItem> _mapItemToRefine;
	BOOL _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                          //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                             //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion;                      //@synthesize resultBoundingRegion=_resultBoundingRegion - In the implementation block
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet;              //@synthesize chainResultSet=_chainResultSet - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(NSDictionary *)responseUserInfo;
-(GEOMapRegion *)resultBoundingRegion;
-(NSString *)resultSectionHeader;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)isCanceled;
-(void)_processRequest:(id)arg1 withHandler:(/*^block*/id)arg2 refinedHandler:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
@end

