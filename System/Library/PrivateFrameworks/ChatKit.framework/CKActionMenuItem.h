/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKActionMenuItemView;
@class UIView, UILabel;

@interface CKActionMenuItem : NSObject {

	BOOL _enabled;
	BOOL _highlighted;
	BOOL _selected;
	UIView*<CKActionMenuItemView> _view;
	UILabel*<CKActionMenuItemView> _label;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) UIView*<CKActionMenuItemView> view;                 //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UILabel*<CKActionMenuItemView> label;               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) id target;                                          //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
+(id)itemWithImageTemplate:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5 ;
+(void)animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(UIView*<CKActionMenuItemView>)view;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)setView:(UIView*<CKActionMenuItemView>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)target;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setAction:(SEL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel*<CKActionMenuItemView>)label;
-(void)setLabel:(UILabel*<CKActionMenuItemView>)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)sendAction;
-(id)initWithView:(id)arg1 label:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
@end

