/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UILabel, NSLayoutConstraint, MKButtonWithTargetArgument, NSString;

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell {

	unsigned long long _type;
	UILabel* _label;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(id)_font:(unsigned long long)arg1 ;
+(id)_buttonFont:(unsigned long long)arg1 ;
+(double)defaultHeight;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(MKButtonWithTargetArgument *)button;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)tintColorDidChange;
@end

