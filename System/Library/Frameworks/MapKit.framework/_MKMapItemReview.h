/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapItemReview.h>

@protocol GEOMapItemReview;
@class NSString, NSDate, NSURL, MKMapItem;

@interface _MKMapItemReview : NSObject <MKMapItemReview> {

	MKMapItem* _mapItem;
	id<GEOMapItemReview> _review;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURL,nonatomic,readonly) NSURL * reviewerImageURL; 
@property (getter=_geoReview,nonatomic,readonly) id<GEOMapItemReview> geoReview; 
-(id)initWithMapItem:(id)arg1 review:(id)arg2 ;
-(id)_reviewerImageURL;
-(id)_geoReview;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)_score;
-(double)_maxScore;
-(id)_date;
-(double)_normalizedScore;
-(id)_localizedSnippet;
-(id)_reviewerName;
@end

