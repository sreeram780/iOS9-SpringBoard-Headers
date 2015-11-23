/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>
@class NSNumber;


@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarHidden; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@required
-(unsigned long long)deactivationReasons;
-(BOOL)canShowAlerts;
-(BOOL)underLock;
-(NSNumber *)forcedStatusBarStyle;
-(NSNumber *)forcedStatusBarHidden;
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(BOOL)deviceOrientationEventsEnabled;

@end


@class NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain,readonly) NSNumber * forcedStatusBarHidden; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
-(BOOL)isUISubclass;
-(unsigned long long)deactivationReasons;
-(BOOL)canShowAlerts;
-(BOOL)underLock;
-(NSNumber *)forcedStatusBarStyle;
-(NSNumber *)forcedStatusBarHidden;
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)deviceOrientationEventsEnabled;
@end

