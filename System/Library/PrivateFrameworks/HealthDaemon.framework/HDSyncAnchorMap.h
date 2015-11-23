/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSyncAnchorMap.h>

@protocol HDSyncAnchorMap <NSObject>
@required
-(void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
-(long long)anchorForSyncEntityClass:(Class)arg1;
-(void)enumerateAnchorsAndSyncEntitiesWithBlock:(/*^block*/id)arg1;
-(unsigned long long)anchorCount;

@end


@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap> {

	NSMutableDictionary* _anchorsByObjectType;

}

@property (nonatomic,retain) NSMutableDictionary * anchorsByObjectType;              //@synthesize anchorsByObjectType=_anchorsByObjectType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2 ;
-(long long)anchorForSyncEntityClass:(Class)arg1 ;
-(void)enumerateAnchorsAndSyncEntitiesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)anchorCount;
-(NSMutableDictionary *)anchorsByObjectType;
-(void)setAnchorsByObjectType:(NSMutableDictionary *)arg1 ;
@end

