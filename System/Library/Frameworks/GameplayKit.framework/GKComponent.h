/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GKEntity, GKComponentSystem;

@interface GKComponent : NSObject <NSCopying> {

	GKEntity* _entity;
	int _usesPerComponentUpdateCount;
	GKComponentSystem* _componentSystem;

}

@property (assign,nonatomic) BOOL usesPerComponentUpdate; 
@property (assign,nonatomic) GKComponentSystem * componentSystem; 
@property (nonatomic,__weak,readonly) GKEntity * entity; 
-(GKComponentSystem *)componentSystem;
-(BOOL)usesPerComponentUpdate;
-(void)setUsesPerComponentUpdate:(BOOL)arg1 ;
-(void)setComponentSystem:(GKComponentSystem *)arg1 ;
-(void)setEntity:(GKEntity *)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(id)init;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GKEntity *)entity;
@end

