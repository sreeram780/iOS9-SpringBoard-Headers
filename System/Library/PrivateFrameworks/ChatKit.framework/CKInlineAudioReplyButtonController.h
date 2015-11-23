/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKInlineAudioReplyButtonDelegate;
@class UIButton;

@interface CKInlineAudioReplyButtonController : NSObject {

	BOOL _started;
	id<CKInlineAudioReplyButtonDelegate> _delegate;
	UIButton* _startButton;
	UIButton* _stopButton;
	double _holdThreshold;
	double _touchDownTime;

}

@property (assign,nonatomic) id<CKInlineAudioReplyButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * startButton;                                     //@synthesize startButton=_startButton - In the implementation block
@property (nonatomic,retain) UIButton * stopButton;                                      //@synthesize stopButton=_stopButton - In the implementation block
@property (assign,nonatomic) double holdThreshold;                                       //@synthesize holdThreshold=_holdThreshold - In the implementation block
@property (assign,nonatomic) double touchDownTime;                                       //@synthesize touchDownTime=_touchDownTime - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                              //@synthesize started=_started - In the implementation block
-(void)setDelegate:(id<CKInlineAudioReplyButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<CKInlineAudioReplyButtonDelegate>)delegate;
-(BOOL)isStarted;
-(id)initWithStartButton:(id)arg1 stopButton:(id)arg2 ;
-(void)setHoldThreshold:(double)arg1 ;
-(void)touchDownInStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpInStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpInStopButton:(id)arg1 ;
-(void)touchDragEnter:(id)arg1 ;
-(void)touchDragExit:(id)arg1 ;
-(void)setStartButton:(UIButton *)arg1 ;
-(void)setStopButton:(UIButton *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(UIButton *)startButton;
-(UIButton *)stopButton;
-(void)setTouchDownTime:(double)arg1 ;
-(double)touchDownTime;
-(double)holdThreshold;
@end

