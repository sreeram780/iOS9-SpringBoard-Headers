/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UISlider.h>
#import <libobjc.A.dylib/MPDetailScrubControllerDelegate.h>
#import <libobjc.A.dylib/MPDetailedScrubbing.h>

@class MPDetailScrubController, NSString;

@interface MSCLVideoScrubberControl : UISlider <MPDetailScrubControllerDelegate, MPDetailedScrubbing> {

	MPDetailScrubController* _detailScrubController;
	BOOL _isTracking;

}

@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,readonly) BOOL usesDetailedScrubbing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_trackImageWithColor:(id)arg1 traitCollection:(id)arg2 ;
-(CGRect)thumbHitRect;
-(long long)currentScrubSpeed;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)tintColorDidChange;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)_reloadAppearance;
-(BOOL)usesDetailedScrubbing;
@end

