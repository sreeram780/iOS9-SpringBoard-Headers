/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
@required
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

