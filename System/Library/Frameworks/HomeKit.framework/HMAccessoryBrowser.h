/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>

@protocol HMAccessoryBrowserDelegate, OS_dispatch_queue;
@class NSObject, HMDelegateCaller, NSUUID, HMThreadSafeMutableArrayCollection, HMXpcClient, HMMessageDispatcher, NSArray, NSString;

@interface HMAccessoryBrowser : NSObject <HMMessageReceiver> {

	BOOL _browsing;
	id<HMAccessoryBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;
	NSUUID* _uuid;
	HMThreadSafeMutableArrayCollection* _accessories;
	HMXpcClient* _xpcClient;
	HMMessageDispatcher* _msgDispatcher;
	unsigned long long _generationCounter;

}

@property (assign,nonatomic,__weak) id<HMAccessoryBrowserDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredAccessories; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                               //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * accessories;                //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) HMXpcClient * xpcClient;                                         //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                            //@synthesize generationCounter=_generationCounter - In the implementation block
@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;                                 //@synthesize browsing=_browsing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_registerNotificationHandlers;
-(HMXpcClient *)xpcClient;
-(void)setXpcClient:(HMXpcClient *)arg1 ;
-(void)_startSearchingForNewAccessories;
-(void)_fetchNewAccessoriesWithPrivacyCheck;
-(void)setBrowsing:(BOOL)arg1 ;
-(void)_stopSearchingForNewAccessories;
-(BOOL)isBrowsing;
-(void)_fetchNewAccessories;
-(void)_updateNewAccessories:(id)arg1 ;
-(NSArray *)discoveredAccessories;
-(void)_handleNewAccessoriesFound:(id)arg1 ;
-(void)_handleNewAccessoriesRemoved:(id)arg1 ;
-(void)startSearchingForNewAccessories;
-(void)stopSearchingForNewAccessories;
-(void)setDelegate:(id<HMAccessoryBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HMAccessoryBrowserDelegate>)delegate;
-(void)_start;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(HMMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMThreadSafeMutableArrayCollection *)accessories;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setAccessories:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(unsigned long long)generationCounter;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

