/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {

	NSXPCListener* listener;
	ServiceImpl* si;

}
+(id)sharedInstance;
+(void)shutdown;
+(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
@end

