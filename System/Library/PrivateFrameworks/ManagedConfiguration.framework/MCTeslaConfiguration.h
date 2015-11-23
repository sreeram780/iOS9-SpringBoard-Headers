/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject {

	BOOL _fetching;
	/*^block*/id _callback;
	NSXPCConnection* _connection;

}

@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isFetching,nonatomic) BOOL fetching;              //@synthesize fetching=_fetching - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchDidFailWithError:(id)arg1 ;
-(void)setFetching:(BOOL)arg1 ;
-(id)connectionError;
-(BOOL)isFetching;
@end

