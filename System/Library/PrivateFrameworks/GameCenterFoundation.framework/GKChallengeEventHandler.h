/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;
@class GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject {

	id<GKChallengeEventHandlerDelegate> _delegateWeak;
	id<GKChallengeEventHandlerUIDelegate> _uiDelegate;
	GKChallengeInternal* _pendingReceivedChallenge;
	GKChallengeInternal* _pendingCompletedChallenge;

}

@property (assign,nonatomic) id<GKChallengeEventHandlerDelegate> delegate;                  //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingReceivedChallenge;                //@synthesize pendingReceivedChallenge=_pendingReceivedChallenge - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingCompletedChallenge;               //@synthesize pendingCompletedChallenge=_pendingCompletedChallenge - In the implementation block
@property (nonatomic,retain) id<GKChallengeEventHandlerUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
+(Class)uiDelegateClass;
+(id)challengeEventHandler;
-(void)setDelegate:(id<GKChallengeEventHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<GKChallengeEventHandlerDelegate>)delegate;
-(void)receivedChallengeSelected:(id)arg1 ;
-(void)completedChallengeSelected:(id)arg1 ;
-(void)challengeReceived:(id)arg1 ;
-(void)challengeCompleted:(id)arg1 ;
-(void)setUiDelegate:(id<GKChallengeEventHandlerUIDelegate>)arg1 ;
-(void)setPendingReceivedChallenge:(GKChallengeInternal *)arg1 ;
-(void)setPendingCompletedChallenge:(GKChallengeInternal *)arg1 ;
-(void)showBannerForChallenge:(id)arg1 complete:(/*^block*/id)arg2 ;
-(id<GKChallengeEventHandlerUIDelegate>)uiDelegate;
-(GKChallengeInternal *)pendingReceivedChallenge;
-(GKChallengeInternal *)pendingCompletedChallenge;
@end

