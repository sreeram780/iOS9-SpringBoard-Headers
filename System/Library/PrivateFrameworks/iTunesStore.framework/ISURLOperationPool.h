/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {

	ISOperationQueue* _operationQueue;

}

@property (nonatomic,retain) ISOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(ISOperationQueue *)operationQueue;
-(id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2 ;
-(void)cancelOperation:(id)arg1 ;
-(void)addOperation:(id)arg1 withFlags:(long long)arg2 ;
@end

