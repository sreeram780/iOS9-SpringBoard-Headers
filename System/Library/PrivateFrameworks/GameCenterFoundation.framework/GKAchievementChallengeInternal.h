/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal {

	GKAchievementInternal* _achievement;

}

@property (nonatomic,copy) GKAchievementInternal * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned long long)type;
-(void)setAchievement:(GKAchievementInternal *)arg1 ;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(id)titleText;
-(GKAchievementInternal *)achievement;
@end

