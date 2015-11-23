/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <PhotoLibraryFramework/__PLSlalomRegionEditorAccessibility_super.h>

@interface PLSlalomRegionEditorAccessibility : __PLSlalomRegionEditorAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)accessibilityContainerElements;
-(double)_accessibilitySliderDeltaForFrame:(CGRect)arg1 ;
-(void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
@end

