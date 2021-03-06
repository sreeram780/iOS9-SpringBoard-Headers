//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol SPUISearchPluginWrapperInterface
@property(nonatomic) _Bool needsFakeStatusBarForModalPresentation;
@property(nonatomic, getter=isDisplayLayoutElementActive) _Bool displayLayoutElementActive;
@property(nonatomic) _Bool needsStatusBarLayoutLayer;
- (void)searchViewControllerWillTriggerLaunch;
- (void)requestGestureResetAnimated:(_Bool)arg1;
- (double)_accessibilityActivationAnimationStartDelay;
@end

