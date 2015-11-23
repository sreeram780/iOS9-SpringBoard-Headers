/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class DOMElement, UIImage, UIWebView, NSString;

@interface SUDOMElement : NSObject {

	DOMElement* _element;
	UIImage* _image;
	UIWebView* _webView;

}

@property (nonatomic,readonly) DOMElement * element;                       //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) UIImage * imageRepresentation; 
@property (nonatomic,readonly) NSString * innerText; 
@property (nonatomic,retain) UIWebView * webView;                          //@synthesize webView=_webView - In the implementation block
+(CGRect)frameForDOMElement:(id)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(UIWebView *)webView;
-(NSString *)innerText;
-(void)setWebView:(UIWebView *)arg1 ;
-(CGRect)_frame;
-(DOMElement *)element;
-(id)newLabelForElementWithText:(id)arg1 ;
-(id)newImageView;
-(UIImage *)imageRepresentation;
-(id)initWithDOMElement:(id)arg1 ;
-(void)setProperty:(id)arg1 value:(id)arg2 ;
@end

