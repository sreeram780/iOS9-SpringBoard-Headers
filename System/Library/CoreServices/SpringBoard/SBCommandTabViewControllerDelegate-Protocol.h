//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBCommandTabViewController;

@protocol SBCommandTabViewControllerDelegate <NSObject>
- (void)viewControllerWantsDismissal:(SBCommandTabViewController *)arg1;
- (void)viewController:(SBCommandTabViewController *)arg1 selectedApplicationWithBundleID:(NSString *)arg2;
@end
