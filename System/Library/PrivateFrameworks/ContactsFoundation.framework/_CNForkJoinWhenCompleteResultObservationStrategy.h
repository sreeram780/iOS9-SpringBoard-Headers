/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNForkJoinResultReportingStrategy.h>

@class NSMutableArray, NSString;

@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {

	NSMutableArray* _results;
	unsigned long long _uncompletedObservableCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3 ;
-(void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2 ;
@end

