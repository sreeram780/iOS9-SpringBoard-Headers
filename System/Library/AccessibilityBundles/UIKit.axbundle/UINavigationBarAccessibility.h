/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityFuzzyHitTestElements;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilityAnnotateFakeBackButton;
-(BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(void)_setLeftViews:(id)arg1 rightViews:(id)arg2 ;
-(void)popNavigationItem;
-(id)popNavigationItemAnimated:(BOOL)arg1 ;
-(void)_navBarButtonPressed:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityPerformEscape;
@end

