/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSDate, PLCoreStorage, PLAccountingOperator, PLCoreAgent, PLCoreService;

@interface PowerlogCore : NSObject {

	NSObject*<OS_dispatch_source> _fVMPressureSource;
	NSDate* _launchDate;
	PLCoreStorage* _storage;
	PLAccountingOperator* _accounting;
	PLCoreAgent* _agents;
	PLCoreService* _services;

}

@property (readonly) NSDate * launchDate;                            //@synthesize launchDate=_launchDate - In the implementation block
@property (readonly) PLCoreStorage * storage;                        //@synthesize storage=_storage - In the implementation block
@property (readonly) PLAccountingOperator * accounting;              //@synthesize accounting=_accounting - In the implementation block
@property (readonly) PLCoreAgent * agents;                           //@synthesize agents=_agents - In the implementation block
@property (readonly) PLCoreService * services;                       //@synthesize services=_services - In the implementation block
+(BOOL)isDebugEnabled;
+(BOOL)sharedCoreStarted;
+(BOOL)allowRun;
+(id)sharedCore;
-(PLCoreStorage *)storage;
-(void)dealloc;
-(id)init;
-(PLCoreService *)services;
-(void)didRecieveMemoryPressureWarning;
-(PLAccountingOperator *)accounting;
-(void)startCore;
-(void)stopCore;
-(NSDate *)launchDate;
-(PLCoreAgent *)agents;
@end

