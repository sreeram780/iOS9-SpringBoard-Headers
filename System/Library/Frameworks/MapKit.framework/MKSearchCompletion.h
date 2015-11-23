/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory;

@interface MKSearchCompletion : NSObject {

	id<GEOCompletionItem> _item;
	NSString* _sourceID;
	NSString* _localizedSectionHeader;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem; 
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) GEOSearchCategory * category; 
@property (nonatomic,copy) NSString * sourceID;                                      //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;                        //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(id<GEOCompletionItem>)geoCompletionItem;
-(id)iconWithScale:(double)arg1 ;
-(id)initWithGeoCompletionItem:(id)arg1 ;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(id)copyStorage;
-(MKMapItem *)mapItem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOSearchCategory *)category;
-(NSArray *)displayLines;
-(NSString *)localizedSectionHeader;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)calloutTitle;
-(id)queryLine;
-(BOOL)getCoordinate:(SCD_Struct_MK0*)arg1 ;
-(void)sendFeedback;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
@end

