/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {

	NSMutableSet* _logEvents;
	long long _logLevel;

}

@property (assign) long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedEventLogger;
+(void)initialize;
-(long long)logLevel;
-(void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3 ;
-(id)createEventTrackingID:(int)arg1 ;
-(id)createCustomEventTrackingID:(id)arg1 ;
-(void)beginEvent:(id)arg1 ;
-(void)logEventData:(id)arg1 message:(id)arg2 ;
-(void)diagnostic:(id)arg1 message:(id)arg2 ;
-(void)debug:(id)arg1 message:(id)arg2 ;
-(void)info:(id)arg1 message:(id)arg2 ;
-(void)warning:(id)arg1 message:(id)arg2 ;
-(void)error:(id)arg1 message:(id)arg2 ;
-(void)fatal:(id)arg1 message:(id)arg2 ;
-(void)endEvent:(id)arg1 ;
-(id)incompleteEvents;
-(void)setLogLevel:(long long)arg1 ;
-(void)dealloc;
-(id)init;
@end

