/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class DATrustHandler;


@protocol DARefreshManagerDelegate
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@optional
-(id)password;
-(void)interfaceWentUp;
-(void)interfaceWentDown;
-(id)serverTokenRegistrationURL;
-(id)username;

@required
-(DATrustHandler *)trustHandler;
-(id)scheduleIdentifier;
-(id)getDAAccount;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2;
-(id)onBehalfOfBundleIdentifier;

@end

