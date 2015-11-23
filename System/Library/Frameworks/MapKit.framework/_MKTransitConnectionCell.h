/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;
@class UILabel, MKTransitInfoLabelView, UIButton, NSLayoutConstraint;

@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell {

	UILabel* _nameLabel;
	MKTransitInfoLabelView* _transitInfoLabel;
	UIButton* _button;
	NSLayoutConstraint* _nameLabelToTopConstraint;
	NSLayoutConstraint* _transitInfoToNameConstraint;
	id<GEOTransitConnectionInfo> _connectionInfo;
	id<_MKTransitConnectionCellDelegate> _delegate;

}

@property (nonatomic,retain) id<GEOTransitConnectionInfo> connectionInfo;                       //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic,__weak) id<_MKTransitConnectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)_buttonSelected;
-(void)setConnectionInfo:(id<GEOTransitConnectionInfo>)arg1 ;
-(id<GEOTransitConnectionInfo>)connectionInfo;
-(void)setDelegate:(id<_MKTransitConnectionCellDelegate>)arg1 ;
-(void)dealloc;
-(id<_MKTransitConnectionCellDelegate>)delegate;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

