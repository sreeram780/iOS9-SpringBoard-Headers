/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSAlternateSystemAppClientProtocol <NSObject>
@required
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
-(void)alternateSystemAppWithBundleID:(id)arg1 didExitWithReason:(unsigned long long)arg2;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;

@end

