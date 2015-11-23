/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@optional
-(double)desiredHeightForWidth:(double)arg1;
-(double)desiredHeight;
-(id)navigationTitle;
-(void)endEditingAndCorrect:(BOOL)arg1;
-(void)didEndDisplayingView;
-(void)willBeginDisplayingView;

@required
-(void)siriWillActivateFromSource:(long long)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;

@end

