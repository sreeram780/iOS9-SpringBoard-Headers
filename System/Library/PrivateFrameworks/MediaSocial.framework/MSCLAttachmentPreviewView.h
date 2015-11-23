/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>

@class MSCLAttachment, UIView, UIButton, UIControl;

@interface MSCLAttachmentPreviewView : UIView {

	MSCLAttachment* _attachment;
	UIView* _childView;
	UIButton* _removeButton;

}

@property (nonatomic,readonly) MSCLAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) UIControl * removeButton;                 //@synthesize removeButton=_removeButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MSCLAttachment *)attachment;
-(id)initWithAttachment:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithAttachment:(id)arg1 childView:(id)arg2 ;
-(UIControl *)removeButton;
@end

