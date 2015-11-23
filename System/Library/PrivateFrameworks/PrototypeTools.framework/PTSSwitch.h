/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PTSHUDControl.h>
#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>

@class _UISettings, NSString, UISwitch, UILabel, NSArray;

@interface PTSSwitch : UIView <PTSHUDControl, _UISettingsKeyPathObserver> {

	int _alignment;
	_UISettings* _settings;
	NSString* _valueKeyPath;
	double _height;
	id _target;
	SEL _action;
	UISwitch* _switchControl;
	UILabel* _titleLabel;
	NSArray* _subviewConstraints;

}

@property (assign,nonatomic,__weak) _UISettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) NSString * valueKeyPath;                      //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (assign,nonatomic) int alignment;                              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) double height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic,__weak) id target;                           //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UISwitch * switchControl;                   //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * subviewConstraints;               //@synthesize subviewConstraints=_subviewConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(CGRect)defaultFrame;
+(id)switch;
+(id)switchForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 ;
-(void)setAlignment:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(_UISettings *)settings;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)target;
-(UILabel *)titleLabel;
-(void)setAction:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(double)height;
-(int)alignment;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSettings:(_UISettings *)arg1 ;
-(UISwitch *)switchControl;
-(void)setSettings:(id)arg1 valueKeyPath:(id)arg2 ;
-(id)makeSwitch;
-(void)setSwitchControl:(UISwitch *)arg1 ;
-(id)makeTitleLabel;
-(void)setValueKeyPath:(NSString *)arg1 ;
-(NSString *)valueKeyPath;
-(void)pressed:(id)arg1 ;
-(NSArray *)subviewConstraints;
-(void)setSubviewConstraints:(NSArray *)arg1 ;
@end

