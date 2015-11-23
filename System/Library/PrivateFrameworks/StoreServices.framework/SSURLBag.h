/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSURLBagContext, NSDictionary, NSObject, NSMutableArray, NSString;

@interface SSURLBag : NSObject {

	SSXPCConnection* _connection;
	SSURLBagContext* _context;
	NSDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _expirationTime;
	BOOL _ignoreCacheForNextLookup;
	NSMutableArray* _pendingLookups;
	NSString* _storeFrontIdentifier;

}

@property (readonly) SSURLBagContext * URLBagContext; 
+(id)URLBagForContext:(id)arg1 ;
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_connection;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)existingBagDictionary;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(id)initWithURLBagContext:(id)arg1 ;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
@end

