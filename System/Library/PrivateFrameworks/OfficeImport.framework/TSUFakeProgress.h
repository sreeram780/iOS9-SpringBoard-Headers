/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUBasicProgress.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUFakeProgress : OITSUBasicProgress {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentStage;
	unsigned long long _numberOfStages;
	BOOL _stopped;

}
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)p_slowlyAdvanceToNextStage;
-(id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2 ;
-(void)advanceToStage:(unsigned long long)arg1 ;
@end

