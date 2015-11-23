/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray;

@interface MKStarRatingView : UIView {

	double _rating;
	long long _numLevels;
	double _padding;
	BOOL _highlighted;
	UIImage* _fullStarImage;
	UIImage* _halfStarImage;
	UIImage* _emptyStarImage;
	UIImage* _fullStarHighlightedImage;
	UIImage* _halfStarHighlightedImage;
	UIImage* _emptyStarHighlightedImage;
	NSMutableArray* _ratingViews;
	long long _numReviews;
	long long _starStyle;

}

@property (assign,nonatomic) long long numberOfRatingLevels;                     //@synthesize numLevels=_numLevels - In the implementation block
@property (assign,nonatomic) double rating;                                      //@synthesize rating=_rating - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIImage * fullStarImage;                            //@synthesize fullStarImage=_fullStarImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarImage;                            //@synthesize halfStarImage=_halfStarImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarImage;                           //@synthesize emptyStarImage=_emptyStarImage - In the implementation block
@property (nonatomic,retain) UIImage * fullStarHighlightedImage;                 //@synthesize fullStarHighlightedImage=_fullStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarHighlightedImage;                 //@synthesize halfStarHighlightedImage=_halfStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarHighlightedImage;                //@synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage - In the implementation block
@property (assign,nonatomic) long long starStyle;                                //@synthesize starStyle=_starStyle - In the implementation block
-(UIImage *)emptyStarImage;
-(id)imageWithName:(id)arg1 andColor:(id)arg2 ;
-(void)setNumberOfRatingLevels:(long long)arg1 ;
-(UIImage *)halfStarImage;
-(void)setEmptyStarHighlightedImage:(UIImage *)arg1 ;
-(void)setFullStarHighlightedImage:(UIImage *)arg1 ;
-(void)setEmptyStarImage:(UIImage *)arg1 ;
-(void)setStarStyle:(long long)arg1 ;
-(UIImage *)fullStarImage;
-(void)_layoutStarViewsCreatingIfNeeded:(BOOL)arg1 ;
-(void)setFullStarImage:(UIImage *)arg1 ;
-(long long)numberOfRatingLevels;
-(double)verticalAlignmentCenterPercentage;
-(void)setHalfStarHighlightedImage:(UIImage *)arg1 ;
-(UIImage *)emptyStarHighlightedImage;
-(long long)starStyle;
-(UIImage *)halfStarHighlightedImage;
-(void)setHalfStarImage:(UIImage *)arg1 ;
-(UIImage *)fullStarHighlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setPadding:(double)arg1 ;
-(void)commonInit;
-(void)setRating:(double)arg1 ;
-(double)rating;
@end

