/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBarAppearanceStorage.h>

@class NSDictionary, NSMutableDictionary, UIImage, NSNumber, _UIBarButtonItemAppearanceStorage, NSString;

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {

	NSDictionary* textAttributes;
	NSMutableDictionary* titleVerticalAdjustmentsForBarMetrics;
	UIImage* shadowImage;
	BOOL hidesShadow;
	long long barMetrics;
	UIImage* backIndicatorImage;
	UIImage* backIndicatorTransitionMaskImage;
	NSNumber* backIndicatorLeftMargin;
	BOOL reversesShadowOffset;
	_UIBarButtonItemAppearanceStorage* buttonAppearanceStorage;
	BOOL _deferShadowToSearchBar;
	long long defaultBarMetrics;
	long long activeBarMetrics;
	UIImage* _condensedBackgroundImage;
	NSString* _backdropViewGroupName;

}

@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * miniBackgroundImage; 
@property (nonatomic,readonly) UIImage * promptBackgroundImage; 
@property (nonatomic,readonly) UIImage * miniPromptBackgroundImage; 
@property (nonatomic,readonly) UIImage * condensedBackgroundImage;                                           //@synthesize condensedBackgroundImage=_condensedBackgroundImage - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) BOOL hidesShadow; 
@property (assign,nonatomic) long long defaultBarMetrics; 
@property (assign,nonatomic) long long activeBarMetrics; 
@property (assign,nonatomic) BOOL reversesShadowOffset; 
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage; 
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage; 
@property (assign,nonatomic) BOOL deferShadowToSearchBar;                                                    //@synthesize deferShadowToSearchBar=_deferShadowToSearchBar - In the implementation block
@property (nonatomic,retain) UIImage * backIndicatorImage; 
@property (nonatomic,retain) UIImage * backIndicatorTransitionMaskImage; 
@property (nonatomic,retain) NSNumber * backIndicatorLeftMargin; 
@property (nonatomic,retain) NSString * backdropViewGroupName;                                               //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
+(long long)typicalBarPosition;
-(UIImage *)backgroundImage;
-(UIImage *)miniBackgroundImage;
-(UIImage *)promptBackgroundImage;
-(UIImage *)miniPromptBackgroundImage;
-(void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)titleVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(_UIBarButtonItemAppearanceStorage *)_barButtonAppearanceStorage;
-(_UIBarButtonItemAppearanceStorage *)barButtonAppearanceStorage;
-(id)representativeImageForIdiom:(long long)arg1 ;
-(BOOL)hidesShadow;
-(void)setHidesShadow:(BOOL)arg1 ;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(BOOL)reversesShadowOffset;
-(void)setReversesShadowOffset:(BOOL)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(long long)defaultBarMetrics;
-(void)setDefaultBarMetrics:(long long)arg1 ;
-(long long)activeBarMetrics;
-(void)setActiveBarMetrics:(long long)arg1 ;
-(UIImage *)backIndicatorImage;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(UIImage *)backIndicatorTransitionMaskImage;
-(void)setBackIndicatorTransitionMaskImage:(UIImage *)arg1 ;
-(NSNumber *)backIndicatorLeftMargin;
-(void)setBackIndicatorLeftMargin:(NSNumber *)arg1 ;
-(UIImage *)condensedBackgroundImage;
-(BOOL)deferShadowToSearchBar;
-(void)setDeferShadowToSearchBar:(BOOL)arg1 ;
-(NSString *)backdropViewGroupName;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
@end

