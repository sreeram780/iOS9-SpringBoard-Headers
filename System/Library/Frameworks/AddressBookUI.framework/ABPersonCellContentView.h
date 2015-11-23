/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@protocol ABStyleProvider;
@class UILabel, UIImageView;

@interface ABPersonCellContentView : UIView {

	CGRect _labelViewRect;
	CGRect _valueViewRect;
	UILabel* _label;
	UIImageView* _badge;
	BOOL _editing;
	id<ABStyleProvider> _styleProvider;

}

@property (nonatomic,readonly) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 styleProvider:(id)arg3 whenEditing:(BOOL)arg4 ;
+(CGRect)firstValueFrameForValueViewFrame:(CGRect)arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3 ;
+(void)computeLabelViewFrame:(CGRect*)arg1 valueViewFrame:(CGRect*)arg2 forSize:(CGSize)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5 ;
-(void)layoutLabel;
-(void)setBadgeIcon:(id)arg1 ;
-(CGRect)rectForView:(id)arg1 ;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(double)labelBaselineAdjustment;
-(CGRect)frameForLabel;
-(CGRect)frameForBadge;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
-(void)setLabelText:(id)arg1 ;
@end

