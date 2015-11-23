/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ProxyAnalyticsDelegate;
@class NSXPCConnection;

@interface ProxyAnalytics : NSObject {

	id<ProxyAnalyticsDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) id<ProxyAnalyticsDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)setDelegate:(id<ProxyAnalyticsDelegate>)arg1 ;
-(void)dealloc;
-(id<ProxyAnalyticsDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 ;
@end

