//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject
{
    _Bool _finished;
    int _sequenceNumber;
    BKSProcessAssertion *_assertion;
    CDUnknownBlockType _completionHandler;
    NSString *_bundleID;
    unsigned long long _trigger;
}

@property(readonly) _Bool finished; // @synthesize finished=_finished;
@property(readonly) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly) unsigned long long trigger; // @synthesize trigger=_trigger;
@property(readonly, retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
- (id)description;
- (void)dealloc;
- (void)_fireCompletionHandlerWithResult:(unsigned long long)arg1;
- (void)finishWithResult:(unsigned long long)arg1;
- (id)initForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end

