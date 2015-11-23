/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RMSService, NSNetService;

@interface _RMSBonjourService : NSObject {

	BOOL _available;
	RMSService* _service;
	NSNetService* _netService;
	long long _state;

}

@property (nonatomic,retain) RMSService * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                      //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
-(BOOL)isAvailable;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(RMSService *)service;
-(void)setAvailable:(BOOL)arg1 ;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)setService:(RMSService *)arg1 ;
@end

