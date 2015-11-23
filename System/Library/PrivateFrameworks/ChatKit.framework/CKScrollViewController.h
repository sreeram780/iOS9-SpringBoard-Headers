/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>

@class UIScrollView, IMScheduledUpdater;

@interface CKScrollViewController : CKViewController {

	BOOL _topInsetIncludesPalette;
	BOOL _keyboardVisible;
	BOOL _keyboardInteractionCancelled;
	UIScrollView* _scrollView;
	double _topInsetPadding;
	double _bottomInsetPadding;
	IMScheduledUpdater* _updater;
	CGRect _keyboardScreenFrame;

}

@property (nonatomic,readonly) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) BOOL topInsetIncludesPalette;                                                                         //@synthesize topInsetIncludesPalette=_topInsetIncludesPalette - In the implementation block
@property (nonatomic,readonly) double topInsetPadding;                                                                               //@synthesize topInsetPadding=_topInsetPadding - In the implementation block
@property (nonatomic,readonly) double bottomInsetPadding;                                                                            //@synthesize bottomInsetPadding=_bottomInsetPadding - In the implementation block
@property (nonatomic,readonly) CGRect keyboardFrame; 
@property (assign,getter=isKeyboardVisible,nonatomic) BOOL keyboardVisible;                                                          //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (getter=isKeyboardUndocked,nonatomic,readonly) BOOL keyboardUndocked; 
@property (getter=isKeyboardOnscreenWithoutAccessoryView,nonatomic,readonly) BOOL keyboardOnscreenWithoutAccessoryView; 
@property (assign,nonatomic) CGRect keyboardScreenFrame;                                                                             //@synthesize keyboardScreenFrame=_keyboardScreenFrame - In the implementation block
@property (assign,nonatomic) BOOL keyboardInteractionCancelled;                                                                      //@synthesize keyboardInteractionCancelled=_keyboardInteractionCancelled - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * updater;                                                                           //@synthesize updater=_updater - In the implementation block
-(void)dealloc;
-(id)init;
-(UIScrollView *)scrollView;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(BOOL)isKeyboardVisible;
-(void)endHoldingScrollGeometryUpdatesForAllKeys;
-(void)updateScrollGeometry;
-(UIEdgeInsets)navigationBarInsetsWithoutPalette;
-(double)accessoryViewHeight;
-(CGRect)keyboardFrame;
-(BOOL)topInsetIncludesPalette;
-(double)topInsetPadding;
-(double)bottomInsetPadding;
-(void)contentInsetWillChange:(UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)contentInsetDidChange;
-(void)keyboardWillHideViaGesture;
-(void)keyboardVisibilityWillChange;
-(void)setUpdater:(IMScheduledUpdater *)arg1 ;
-(IMScheduledUpdater *)updater;
-(double)bottomInsetWithoutAccessoryView;
-(void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1 ;
-(void)endHoldingScrollGeometryUpdatesForKey:(id)arg1 ;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(void)keyboardDidShowOrHide:(id)arg1 ;
-(void)_changedStatusBarFrame:(id)arg1 ;
-(void)_entryViewWillRotate:(id)arg1 ;
-(void)setKeyboardInteractionCancelled:(BOOL)arg1 ;
-(void)setKeyboardScreenFrame:(CGRect)arg1 ;
-(BOOL)keyboardInteractionCancelled;
-(double)_visibleKeyboardHeight;
-(void)_updateScrollGeometryWithDuration:(double)arg1 ;
-(CGRect)keyboardScreenFrame;
-(UIEdgeInsets)navigationBarInsets;
-(double)_bottomRotatingFooterHeight;
-(double)visibleHeightAboveKeyboard;
-(BOOL)isKeyboardUndocked;
-(BOOL)isKeyboardOnscreenWithoutAccessoryView;
@end

