/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSWebProcessPlugIn.h>

@class NSString;

@interface WBUWebProcessPlugIn : WBSWebProcessPlugIn

@property (nonatomic,readonly) NSString * overrideUserAgentStringForSwitchBoard; 
-(void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(NSString *)overrideUserAgentStringForSwitchBoard;
@end

