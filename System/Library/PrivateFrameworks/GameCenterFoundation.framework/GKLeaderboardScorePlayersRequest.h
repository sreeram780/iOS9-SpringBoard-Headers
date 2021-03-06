/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest {

	NSArray* _playerInternals;

}

@property (nonatomic,copy) NSArray * playerInternals;              //@synthesize playerInternals=_playerInternals - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPlayerInternals:(NSArray *)arg1 ;
-(NSArray *)playerInternals;
@end

