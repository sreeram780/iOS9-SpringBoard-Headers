/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface IMTunesController : NSObject {

	NSDate* _lastChange;
	NSDictionary* _lastInfo;
	NSMutableDictionary* _playerInfo;
	NSMutableArray* _listeners;
	NSString* _messageFormat;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (assign,nonatomic) NSDictionary * playerInfo;               //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,readonly) NSString * messageFormat; 
+(id)sharedTunesController;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSDictionary *)playerInfo;
-(NSString *)messageFormat;
-(void)_updateMessage;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
-(void)setPlayerInfo:(NSDictionary *)arg1 ;
@end

