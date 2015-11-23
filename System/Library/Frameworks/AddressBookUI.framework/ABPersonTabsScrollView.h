/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView;


@protocol ABPersonTabsScrollView <NSObject>
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) id<ABPersonTabsLayoutManager> tabsLayoutManager; 
@required
-(double)minimumBottomInset;
-(void)setMinimumBottomInset:(double)arg1;
-(id<ABPersonTabsLayoutManager>)tabsLayoutManager;
-(void)setTabsLayoutManager:(id)arg1;
-(void)setBackgroundView:(id)arg1;
-(UIView *)backgroundView;

@end

