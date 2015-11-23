/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface SearchUIStarView : UIView {

	double _rating;

}

@property (assign) double rating;              //@synthesize rating=_rating - In the implementation block
+(id)starImageWithName:(id)arg1 ;
+(id)fullStar;
+(id)halfStar;
+(id)emptyStar;
-(void)setRating:(double)arg1 ;
-(double)rating;
-(id)initWithStarRating:(double)arg1 style:(unsigned long long)arg2 ;
@end

