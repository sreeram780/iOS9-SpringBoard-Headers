/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBBulletinAlertHandler.h>

@class NSString;

@interface CKCMASBulletinAlertHandler : NSObject <SBBulletinAlertHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)bindBulletin:(id)arg1 forRegistry:(id)arg2 ;
-(void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3 ;
@end

