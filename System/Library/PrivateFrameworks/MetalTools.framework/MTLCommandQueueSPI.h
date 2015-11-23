/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSMutableDictionary;


@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property (assign) int backgroundTrackingPID; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (assign,getter=numRequestedCounters,nonatomic) unsigned long long numRequestedCounters; 
@property (assign,getter=numInternalSampleCounters,nonatomic) unsigned long long numInternalSampleCounters; 
@property (getter=counterInfo,retain) NSMutableDictionary * counterInfo; 
@optional
-(BOOL)isStatEnabled;
-(unsigned long long)getStatOptions;
-(unsigned long long)getStatLocations;
-(unsigned long long)numRequestedCounters;
-(void)setStatEnabled:(BOOL)arg1;
-(void)setCounterInfo:(id)arg1;
-(void)setNumRequestedCounters:(unsigned long long)arg1;
-(void)setNumInternalSampleCounters:(unsigned long long)arg1;
-(unsigned long long)numInternalSampleCounters;
-(void)setStatOptions:(unsigned long long)arg1;
-(void)setStatLocations:(unsigned long long)arg1;
-(unsigned long long)StatOptions;
-(unsigned long long)StatLocations;
-(id)availableCounters;
-(int)requestCounters:(id)arg1;
-(void)addPerfSampleHandler:(/*^block*/id)arg1;
-(NSMutableDictionary *)counterInfo;
-(id)getRequestedCounters;

@required
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1;
-(BOOL)setGPUPriority:(unsigned long long)arg1;
-(BOOL)isProfilingEnabled;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(int)backgroundTrackingPID;
-(BOOL)skipRender;
-(void)setProfilingEnabled:(BOOL)arg1;
-(void)setSkipRender:(BOOL)arg1;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1;
-(void)setBackgroundTrackingPID:(int)arg1;
-(void)setSubmissionQueue:(id)arg1;
-(void)finish;
-(void)setCompletionQueue:(id)arg1;

@end
