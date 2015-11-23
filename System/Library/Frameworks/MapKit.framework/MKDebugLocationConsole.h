/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UILabel.h>

@class MKMapView, NSTimer, NSString, UIColor;

@interface MKDebugLocationConsole : UILabel {

	MKMapView* _parentMapView;
	NSTimer* _updateTimer;
	unsigned long long _pageIndex;
	NSString* _customText;
	UIColor* _customTextColor;
	BOOL _customTextEnabled;

}

@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) BOOL customTextEnabled;                    //@synthesize customTextEnabled=_customTextEnabled - In the implementation block
-(void)updateCustomText:(id)arg1 textColor:(id)arg2 ;
-(void)_showNextPage;
-(id)initWithMapView:(id)arg1 ;
-(void)_updateVehicleInfo;
-(BOOL)customTextEnabled;
-(void)updateFrameWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setCustomTextEnabled:(BOOL)arg1 ;
-(CGRect)_debugViewFrameWithMapView:(id)arg1 ;
-(void)_updateCustomText;
-(void)_updateGPSInfo;
-(void)_consoleTapped:(id)arg1 ;
-(void)update;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
@end

