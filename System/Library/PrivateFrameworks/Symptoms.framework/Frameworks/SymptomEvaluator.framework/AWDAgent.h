/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface AWDAgent : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	AWDServerConnection* conn;

}
+(id)defaultInstance;
-(id)init;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)_handleQuery:(unsigned)arg1 ;
@end

