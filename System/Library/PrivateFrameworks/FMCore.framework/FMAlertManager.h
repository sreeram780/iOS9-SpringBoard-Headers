/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FMAlertManager : NSObject {

	NSMutableDictionary* _activeAlerts;
	NSMutableDictionary* _activeCFNotificationsByCategory;

}

@property (nonatomic,retain) NSMutableDictionary * activeAlerts;                                 //@synthesize activeAlerts=_activeAlerts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeCFNotificationsByCategory;              //@synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initSingleton;
-(void)setActiveAlerts:(NSMutableDictionary *)arg1 ;
-(void)setActiveCFNotificationsByCategory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeCFNotificationsByCategory;
-(NSMutableDictionary *)activeAlerts;
-(id)_xpcTransactionNameFor:(id)arg1 ;
-(void)activateAlert:(id)arg1 ;
@end

