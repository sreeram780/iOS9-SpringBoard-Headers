/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKMinmaxStrategist : NSObject {

	GKCMinmaxStrategist* _cppMinmax;

}

@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (assign,nonatomic) long long maxLookAheadDepth; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
-(id<GKGameModel>)gameModel;
-(long long)maxLookAheadDepth;
-(void)setMaxLookAheadDepth:(long long)arg1 ;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(id)bestMoveForPlayer:(id)arg1 ;
-(id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2 ;
-(void)dealloc;
-(id)init;
@end

