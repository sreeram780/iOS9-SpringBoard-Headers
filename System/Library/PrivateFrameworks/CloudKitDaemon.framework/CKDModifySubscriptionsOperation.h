/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation {

	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableDictionary* _subscriptionsByServerID;

}

@property (nonatomic,copy) id saveCompletionBlock;                                       //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                     //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionsToSave;                              //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;                          //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsByServerID;              //@synthesize subscriptionsByServerID=_subscriptionsByServerID - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)saveCompletionBlock;
-(id)deleteCompletionBlock;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)subscriptionsByServerID;
-(void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2 ;
-(void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2 ;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(void)setSubscriptionsByServerID:(NSMutableDictionary *)arg1 ;
@end

