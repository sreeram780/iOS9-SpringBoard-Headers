/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class MKStarRatingView, UILabel, NSString, NSArray;

@interface MKStarRatingAndLabelView : UIView {

	MKStarRatingView* _starRatingView;
	UILabel* _reviewsLabel;
	NSString* _sourceName;
	unsigned long long _numberOfReviews;
	BOOL _displaysSourceOfReviews;
	NSArray* _reviewsLabelConstraints;
	NSString* _fontStyleOverride;

}

@property (nonatomic,readonly) MKStarRatingView * starRatingView;              //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) UILabel * reviewsLabel;                         //@synthesize reviewsLabel=_reviewsLabel - In the implementation block
@property (nonatomic,retain) NSString * fontStyleOverride;                     //@synthesize fontStyleOverride=_fontStyleOverride - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfReviews;               //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                            //@synthesize sourceName=_sourceName - In the implementation block
-(void)_mapkit_setCalloutTextColor:(id)arg1 ;
-(void)setFontStyleOverride:(NSString *)arg1 ;
-(void)setDisplaysSourceOfReviews:(BOOL)arg1 ;
-(NSString *)fontStyleOverride;
-(UILabel *)reviewsLabel;
-(MKStarRatingView *)starRatingView;
-(void)_updateFonts;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)viewForLastBaselineLayout;
-(unsigned long long)numberOfReviews;
-(void)setNumberOfReviews:(unsigned long long)arg1 ;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)sourceName;
@end

