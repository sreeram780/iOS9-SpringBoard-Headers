/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber;

@interface RadioAvailabilityController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasSuccessfullyLoadedURLBag;
	NSNumber* _lastActiveAccountUniqueIdentifier;
	BOOL _radioAvailable;

}

@property (getter=isRadioAvailable,nonatomic,readonly) BOOL radioAvailable; 
-(BOOL)isRadioAvailable;
-(void)_storeFrontDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_currentStoreFrontIdentifier;
-(id)_userDefaultsDomain;
-(void)_networkReachabilityFlagsDidChangeNotification:(id)arg1 ;
-(void)_reloadRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
@end

