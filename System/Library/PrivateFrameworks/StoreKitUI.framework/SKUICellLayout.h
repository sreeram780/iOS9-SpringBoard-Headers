/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, SKUIClientContext;

@interface SKUICellLayout : NSObject {

	UIView* _cell;
	SKUIClientContext* _clientContext;
	UIView* _contentView;
	BOOL _parentWantsCellNeedsLayout;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * parentCellView;               //@synthesize cell=_cell - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)resetLayout;
-(UIView *)parentCellView;
@end

