/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HelpKit/HelpKit-Structs.h>
@interface HLPReachability : NSObject {

	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(long long)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
@end

