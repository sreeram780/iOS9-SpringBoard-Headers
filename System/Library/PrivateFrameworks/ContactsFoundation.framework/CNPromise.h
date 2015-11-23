/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNPromise.h>

@class CNFuture, NSString;

@interface CNPromise : NSObject <CNPromise> {

	CNFuture* _future;

}

@property (readonly) CNFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)finishWithError:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(CNFuture *)future;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

