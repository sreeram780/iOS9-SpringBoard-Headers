/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
+(id)sharedInstance;
-(void)executeOrPrependEvents:(id)arg1 ;
-(void)executeOrAppendEvent:(id)arg1 ;
-(void)executeOrPrependEvent:(id)arg1 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
@end

