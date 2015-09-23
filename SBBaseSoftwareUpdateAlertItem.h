//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBSoftwareUpdateController, SUDescriptor;

@interface SBBaseSoftwareUpdateAlertItem : SBAlertItem
{
    SUDescriptor *_descriptor;
    SBSoftwareUpdateController *_controller;
}

@property(readonly, retain, nonatomic) SBSoftwareUpdateController *softwareUpdateController; // @synthesize softwareUpdateController=_controller;
@property(readonly, retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)willDeactivateForReason:(int)arg1;
- (_Bool)dismissOnLock;
- (_Bool)undimsScreen;
- (_Bool)unlocksScreen;
- (_Bool)shouldShowInLockScreen;
- (_Bool)forcesModalAlertAppearance;
- (void)activateDisplayWithURL:(id)arg1;
- (void)activateSoftwareUpdateSettingsDisplay;
- (id)updateName;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2;

@end

