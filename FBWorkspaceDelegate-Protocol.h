//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSceneClientSettings, FBWorkspace, NSString;

@protocol FBWorkspaceDelegate <NSObject>
- (void)workspace:(FBWorkspace *)arg1 didReceiveDestroySceneRequestForIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)workspace:(FBWorkspace *)arg1 didReceiveCreateSceneRequestForIdentifier:(NSString *)arg2 initialClientSettings:(FBSSceneClientSettings *)arg3 withCompletion:(void (^)(FBScene *))arg4;
@end

