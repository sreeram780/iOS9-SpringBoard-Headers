/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, NSString;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {

	UILabel* _placeholderLabel;
	BOOL _allowEnclosingViewScroll;
	CGSize _previousIntrinsicContentSize;

}

@property (nonatomic,copy) NSString * placeholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updatePlaceholder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(BOOL)_shouldScrollEnclosingScrollView;
@end

