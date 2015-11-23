/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, PDAnimationTarget, NSString;

@interface PDSequentialTimeNode : PDTimeNode {

	BOOL mConcurrent;
	int mPreviousAction;
	int mNextAction;
	NSMutableArray* mPreviousConditions;
	NSMutableArray* mNextConditions;

}

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int triggerType; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double direction; 
@property (nonatomic,retain) NSString * groupId; 
@property (assign,nonatomic) BOOL concurrent; 
@property (assign,nonatomic) int previousAction; 
@property (assign,nonatomic) int nextAction; 
@property (nonatomic,retain) NSMutableArray * previousConditions; 
@property (nonatomic,retain) NSMutableArray * nextConditions; 
+(unsigned long long)buildPartsFromTarget:(id)arg1 ;
+(id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2 ;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2 ;
+(id)newSequentialTimeNodeGroupForAnimationInfo;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(PDAnimationTarget *)target;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(int)presetClass;
-(void)setGroupId:(NSString *)arg1 ;
-(int)presetId;
-(NSString *)groupId;
-(void)setPresetId:(int)arg1 ;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
-(id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 ;
-(id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2 ;
-(id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3 ;
-(void)setLevel2ParallelAttribute:(/*^block*/id)arg1 ;
-(void)setTriggerType:(int)arg1 ;
-(int)triggerType;
-(void)setPresetClass:(int)arg1 ;
-(void)dealloc;
-(BOOL)concurrent;
-(void)setConcurrent:(BOOL)arg1 ;
-(int)previousAction;
-(void)setPreviousAction:(int)arg1 ;
-(int)nextAction;
-(void)setNextAction:(int)arg1 ;
-(NSMutableArray *)previousConditions;
-(void)setPreviousConditions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nextConditions;
-(void)setNextConditions:(NSMutableArray *)arg1 ;
@end

