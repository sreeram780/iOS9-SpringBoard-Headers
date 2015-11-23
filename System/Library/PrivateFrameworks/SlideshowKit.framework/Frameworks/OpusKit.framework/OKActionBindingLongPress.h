/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, NSString;

@interface OKActionBindingLongPress : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTapsRequired;
	unsigned long long _numberOfTouchesRequired;
	double _minimumPressDuration;
	double _allowableMovement;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (assign,nonatomic) unsigned long long numberOfTapsRequired;                 //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double minimumPressDuration;                             //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(unsigned long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(double)minimumPressDuration;
-(double)allowableMovement;
-(void)handleLongPress:(id)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
@end

