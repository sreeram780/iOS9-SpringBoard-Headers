/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)markupString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(BOOL)shouldInsetContent;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)viewDidBecomeVisible;
-(BOOL)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)htmlFileLocation;
@end
