//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

@class SBStarkScreenController;

@interface SBStarkConnectWorkspaceTransaction : SBMainWorkspaceTransaction
{
    SBStarkScreenController *_screenController;
}

- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 starkScreenController:(id)arg2;
- (id)initWithTransitionRequest:(id)arg1;

@end

