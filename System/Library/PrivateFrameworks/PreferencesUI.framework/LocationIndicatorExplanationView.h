/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIImageView, UILabel;

@interface LocationIndicatorExplanationView : UIView <PSHeaderFooterView> {

	UIImageView* _activeIcon;
	UILabel* _activeLabel;
	UIImageView* _recentIcon;
	UILabel* _recentLabel;
	UIImageView* _geofenceIcon;
	UILabel* _geofenceLabel;

}
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

