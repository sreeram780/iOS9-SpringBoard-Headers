/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject {

	NWPathEvaluator* _evaluator;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
+(id)sharedInstance;
-(void)startMonitoring;
-(BOOL)isMonitoring;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPathEvaluator *)evaluator;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(void)stopMonitoring;
-(BOOL)isNetworkUp;
@end

