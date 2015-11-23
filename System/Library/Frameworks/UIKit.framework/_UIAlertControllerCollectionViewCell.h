/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _UIAlertControllerActionView;

@interface _UIAlertControllerCollectionViewCell : UICollectionViewCell {

	_UIAlertControllerActionView* _actionView;

}

@property (nonatomic,retain) _UIAlertControllerActionView * actionView;              //@synthesize actionView=_actionView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)focusedView;
-(id)preferredFocusedView;
-(void)focusedViewDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(_UIAlertControllerActionView *)actionView;
-(void)setActionView:(_UIAlertControllerActionView *)arg1 ;
@end

