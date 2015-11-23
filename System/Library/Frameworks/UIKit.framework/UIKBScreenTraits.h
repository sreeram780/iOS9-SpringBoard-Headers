/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen;

@interface UIKBScreenTraits : NSObject {

	BOOL _knobInput;
	BOOL _touchInput;
	BOOL _isKeyboardMinorEdgeWidth;
	UIScreen* _screen;
	long long _orientation;
	double _keyboardWidth;

}

@property (nonatomic,readonly) UIScreen * screen;                          //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) BOOL knobInput;                             //@synthesize knobInput=_knobInput - In the implementation block
@property (nonatomic,readonly) BOOL touchInput;                            //@synthesize touchInput=_touchInput - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double keyboardWidth;                         //@synthesize keyboardWidth=_keyboardWidth - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardMinorEdgeWidth;              //@synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth - In the implementation block
+(id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(UIScreen *)screen;
-(long long)idiom;
-(BOOL)isKeyboardMinorEdgeWidth;
-(double)keyboardWidth;
-(id)initWithScreen:(id)arg1 orientation:(long long)arg2 ;
-(void)updateForTextInputTraits:(id)arg1 ;
-(BOOL)knobInput;
-(BOOL)touchInput;
-(void)setKeyboardWidth:(double)arg1 ;
@end

