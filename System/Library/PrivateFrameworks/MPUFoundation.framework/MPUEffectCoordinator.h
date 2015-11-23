/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MPUEffectCoordinator : NSObject {

	NSMutableArray* _applyBlocks;
	unsigned long long _pendingEffectsCount;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)beginChangeForEffectView:(id)arg1 ;
-(void)addApplyChangesBlock:(/*^block*/id)arg1 ;
-(void)finishChangeForEffectView:(id)arg1 ;
@end

