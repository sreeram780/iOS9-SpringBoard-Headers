/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMailMarkupDelegate;
@class MURemoteViewController;

@interface MFMailMarkup : NSObject {

	MURemoteViewController* markupViewController;
	id<MFMailMarkupDelegate> _delegate;

}

@property (assign,nonatomic) id<MFMailMarkupDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign) MURemoteViewController * markupViewController; 
+(id)markupIcon;
-(void)setMarkupViewController:(MURemoteViewController *)arg1 ;
-(void)_processMarkupURL:(id)arg1 forAttachment:(id)arg2 ;
-(void)exitMarkupWithReplacementAttachment:(id)arg1 ;
-(MURemoteViewController *)markupViewController;
-(void)_requestMarkupURL:(id)arg1 forAttachment:(id)arg2 ;
-(void)_requestMarkupData:(id)arg1 forAttachment:(id)arg2 ;
-(void)_requestMarkupImage:(id)arg1 forAttachment:(id)arg2 ;
-(void)_handleMarkupURL:(id)arg1 attachment:(id)arg2 ;
-(void)_handleMarkupData:(id)arg1 forAttachment:(id)arg2 ;
-(void)_handleMarkupImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)initWithMarkupDelegate:(id)arg1 ;
-(void)markupAttachment:(id)arg1 ;
-(void)handleReturnedMarkupItems:(id)arg1 forAttachment:(id)arg2 ;
-(void)setDelegate:(id<MFMailMarkupDelegate>)arg1 ;
-(id<MFMailMarkupDelegate>)delegate;
@end

