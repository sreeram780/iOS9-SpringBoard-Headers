//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIControlCenterControl.h"

@class NSString;

@interface SBControlCenterKnockoutView : UIView <SBUIControlCenterControl>
{
}

- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

