/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKABObject.h>

@class NSString;

@interface GKABRecord : GKABObject

@property (readonly) NSString * uniqueID; 
@property (readonly) void* ABRecord; 
@property (readonly) int recordID; 
-(NSString *)uniqueID;
-(void*)ABRecord;
-(id)initWithABRecord:(void*)arg1 ;
-(id)propertyForID:(int)arg1 ;
-(int)recordID;
@end

