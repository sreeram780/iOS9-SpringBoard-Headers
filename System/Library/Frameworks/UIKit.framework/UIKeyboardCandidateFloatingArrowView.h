/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIButton;

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView {

	UIButton* _arrowButton;

}

@property (nonatomic,retain) UIButton * arrowButton;              //@synthesize arrowButton=_arrowButton - In the implementation block
+(id)reuseIdentifier;
+(id)collectionViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(UIButton *)arrowButton;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateArrow;
-(void)setArrowButton:(UIButton *)arg1 ;
@end

