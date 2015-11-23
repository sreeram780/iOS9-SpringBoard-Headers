/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>
#import <libobjc.A.dylib/MKUserTrackingButtonTarget.h>

@class UIButton, _MKUserTrackingButtonController, _MKUserTrackingButton, UIImage, UIToolbar, UINavigationBar, UIView, MKMapView, NSString;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {

	BOOL _hasCustomAssociatedView;
	UIButton* _customButton;
	_MKUserTrackingButtonController* _controller;
	_MKUserTrackingButton* _userTrackingButton;
	BOOL _isLegacy;
	BOOL _explicitlyEnabled;
	BOOL _internallyEnabled;
	UIImage* _trackingEmptyImage;
	UIImage* _trackingNoneImage;
	UIImage* _trackingFollowImage;
	UIImage* _trackingFollowWithHeadingImage;
	UIToolbar* _toolbar;
	UINavigationBar* _navigationBar;
	UIView* _associatedView;

}

@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) BOOL selectsWhenTracking; 
@property (assign,setter=_setState:,nonatomic) long long _state; 
@property (nonatomic,retain) UIToolbar * _toolbar;                                                                              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UINavigationBar * _navigationBar;                                                                  //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * _associatedView;                                                                          //@synthesize associatedView=_associatedView - In the implementation block
@property (setter=_setUserTrackingView:,nonatomic,retain) id<MKUserTrackingView> _userTrackingView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_activityIndicatorClass;
-(id)initWithMapView:(id)arg1 ;
-(BOOL)_selectsWhenTracking;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 ;
-(void)set_toolbar:(UIToolbar *)arg1 ;
-(id)_trackingEmptyImage;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 ;
-(void)set_navigationBar:(UINavigationBar *)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)set_associatedView:(UIView *)arg1 ;
-(void)_goToNextMode:(id)arg1 ;
-(id)_trackingFollowWithHeadingImage;
-(void)_setInternallyEnabled:(BOOL)arg1 ;
-(void)_updateForState:(long long)arg1 ;
-(BOOL)_isHighlightedForState:(long long)arg1 ;
-(long long)_styleForState:(long long)arg1 ;
-(void)_repositionViews;
-(id)_trackingNoneImage;
-(UIView *)_associatedView;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(id)_trackingFollowImage;
-(UIToolbar *)_toolbar;
-(id)_imageForUserTrackingMode:(long long)arg1 ;
-(id<MKUserTrackingView>)_userTrackingView;
-(void)_setUserTrackingView:(id)arg1 ;
-(UINavigationBar *)_navigationBar;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)createViewForNavigationItem:(id)arg1 ;
-(long long)_state;
-(BOOL)_isInMiniBar;
-(id)createViewForToolbar:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(long long)arg1 ;
-(long long)_activityIndicatorStyle;
@end

