/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {

	/*^block*/id _completionHandler;
	NSString* _serviceType;

}
-(id)initWithServiceType:(id)arg1 ;
-(void)showIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)showIfNecessary;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

