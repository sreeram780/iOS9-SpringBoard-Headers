/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKTurnBasedParticipant, GKTurnBasedMatch, GKTurnBasedExchangeInternal, NSArray, NSString, NSData, NSDate;

@interface GKTurnBasedExchange : NSObject {

	GKTurnBasedParticipant* _sender;
	GKTurnBasedMatch* _matchWeak;
	GKTurnBasedExchangeInternal* _internal;
	NSArray* _replies;
	NSArray* _recipients;

}

@property (nonatomic,retain) NSString * exchangeID; 
@property (nonatomic,retain) GKTurnBasedParticipant * sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) char status; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,readonly) NSDate * sendDate; 
@property (nonatomic,retain) NSDate * timeoutDate; 
@property (nonatomic,retain) NSDate * completionDate; 
@property (nonatomic,retain) NSArray * replies;                            //@synthesize replies=_replies - In the implementation block
@property (retain) GKTurnBasedExchangeInternal * internal;                 //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) GKTurnBasedMatch * match;                     //@synthesize matchWeak=_matchWeak - In the implementation block
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)message;
-(GKTurnBasedParticipant *)sender;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setSender:(GKTurnBasedParticipant *)arg1 ;
-(char)status;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKTurnBasedExchangeInternal *)arg1 ;
-(NSArray *)replies;
-(void)setReplies:(NSArray *)arg1 ;
-(void)_updateInternalFromMatchInternal:(id)arg1 ;
-(void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(GKTurnBasedExchangeInternal *)internal;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(GKTurnBasedMatch *)match;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

