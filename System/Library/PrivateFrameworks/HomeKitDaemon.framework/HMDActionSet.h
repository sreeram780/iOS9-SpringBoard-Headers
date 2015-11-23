/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSObject, HMMessageDispatcher, HMDHome, NSMutableArray, NSArray;

@interface HMDActionSet : NSObject <HMMessageReceiver, NSSecureCoding> {

	BOOL _executionInProgress;
	NSString* _name;
	NSString* _type;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	HMDHome* _home;
	NSMutableArray* _currentActions;

}

@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentActions;                                 //@synthesize currentActions=_currentActions - In the implementation block
@property (assign,nonatomic) BOOL executionInProgress;                                        //@synthesize executionInProgress=_executionInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)url;
-(id)assistantUniqueIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)actions;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSUUID *)uuid;
-(HMMessageDispatcher *)msgDispatcher;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(void)executeWithTriggerSource:(id)arg1 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)containsAccessoryWithUUID:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)removeAccessory:(id)arg1 ;
-(void)fixupActionsForReplacementAccessory:(id)arg1 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5 ;
-(void)execute:(id)arg1 ;
-(void)removeActionForCharacteristic:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)_execute:(/*^block*/id)arg1 writeRequestTuples:(id)arg2 ;
-(void)_removeAction:(id)arg1 message:(id)arg2 ;
-(NSMutableArray *)currentActions;
-(void)_handleAddActionRequest:(id)arg1 ;
-(void)_handleRemoveActionRequest:(id)arg1 ;
-(void)_handleReplaceActionValueRequest:(id)arg1 ;
-(id)actionWithUUID:(id)arg1 ;
-(BOOL)executionInProgress;
-(void)setExecutionInProgress:(BOOL)arg1 ;
-(id)_generateOverallError:(id)arg1 ;
-(id)allCharacteristicsInActionsForServices:(id)arg1 ;
-(void)setCurrentActions:(NSMutableArray *)arg1 ;
@end

