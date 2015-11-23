/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKSessionDelegate.h>

@class GKTurnBasedMatchInternal, NSArray, NSString, NSDate, GKTurnBasedParticipant, NSData, GKPlayer, GKGame;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {

	unsigned _state;
	GKTurnBasedMatchInternal* _internal;
	NSArray* _participants;
	NSArray* _exchanges;

}

@property (nonatomic,retain,readonly) NSString * matchID; 
@property (nonatomic,retain,readonly) NSDate * creationDate; 
@property (nonatomic,retain,readonly) NSArray * participants;                                                  //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,retain) GKTurnBasedParticipant * currentParticipant; 
@property (nonatomic,retain,readonly) NSData * matchData; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) unsigned long long matchDataMaximumSize; 
@property (nonatomic,retain,readonly) NSArray * exchanges;                                                     //@synthesize exchanges=_exchanges - In the implementation block
@property (nonatomic,retain,readonly) NSArray * activeExchanges; 
@property (nonatomic,retain,readonly) NSArray * completedExchanges; 
@property (nonatomic,readonly) unsigned long long exchangeDataMaximumSize; 
@property (nonatomic,readonly) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (retain) GKTurnBasedMatchInternal * internal;                                                        //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSDate * lastTurnDate; 
@property (nonatomic,readonly) long long turnNumber; 
@property (nonatomic,readonly) NSDate * dateSortKey; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipant; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * localPlayerParticipant; 
@property (nonatomic,readonly) GKPlayer * showcasePlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser; 
@property (nonatomic,readonly) GKPlayer * currentPlayer; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * bundleVersion; 
@property (assign,nonatomic) unsigned state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isMyTurn; 
@property (nonatomic,readonly) BOOL localPlayerHasRecentTurn; 
@property (nonatomic,readonly) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(void)findMatchForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)keyPathsForValuesAffectingStatus;
+(void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)getTurnBasedBadgeCountWithHandler:(/*^block*/id)arg1 ;
+(void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)matchesWithInternalRepresentations:(id)arg1 ;
+(void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3 ;
+(void)loadMatchesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadTurnBasedMatchSummaries:(/*^block*/id)arg1 ;
+(void)loadMatchWithID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)status;
-(NSArray *)participants;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKTurnBasedMatchInternal *)arg1 ;
-(unsigned long long)exchangeDataMaximumSize;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(void)rematchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)exchangeForID:(id)arg1 ;
-(void)_updateWithInternal:(id)arg1 ;
-(id)_participantsForInternalRepresentation:(id)arg1 ;
-(id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2 ;
-(NSArray *)exchanges;
-(GKPlayer *)currentPlayer;
-(void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2 ;
-(unsigned long long)matchDataMaximumSize;
-(NSDate *)dateSortKey;
-(void)setCurrentParticipant:(GKTurnBasedParticipant *)arg1 ;
-(GKTurnBasedParticipant *)previousParticipant;
-(GKTurnBasedParticipant *)firstWinnerOrTiedOrLastLoser;
-(void)declineInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)indexesForParticipants:(id)arg1 ;
-(void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isMyTurn;
-(BOOL)localPlayerHasRecentTurn;
-(GKPlayer *)showcasePlayer;
-(NSArray *)completedExchanges;
-(void)removeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadMatchDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(GKTurnBasedMatchInternal *)internal;
-(GKGame *)game;
-(GKTurnBasedParticipant *)currentParticipant;
-(GKTurnBasedParticipant *)playingWithParticipantOrFirstKnownPlayer;
-(GKTurnBasedParticipant *)localPlayerParticipant;
-(NSArray *)activeExchanges;
-(GKTurnBasedParticipant *)previousParticipantOrFirstKnownPlayer;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

