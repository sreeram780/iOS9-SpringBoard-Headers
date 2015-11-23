/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol CKReaderViewControllerDelegate;
@class NSString, UITextView, NSAttributedString;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {

	id<CKReaderViewControllerDelegate> _delegate;
	NSString* _messageGUID;
	UITextView* _textView;

}

@property (assign,nonatomic) id<CKReaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;                                     //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSAttributedString * text; 
@property (assign,nonatomic) NSRange visibleRange; 
@property (nonatomic,retain) UITextView * textView;                                    //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)ckCanDismissWhenSuspending;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setDelegate:(id<CKReaderViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CKReaderViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITextView *)textView;
-(NSString *)messageGUID;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setVisibleRange:(NSRange)arg1 ;
-(NSRange)visibleRange;
@end

