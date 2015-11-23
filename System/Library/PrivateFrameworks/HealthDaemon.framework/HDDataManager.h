/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDataManager.h>

@protocol OS_dispatch_queue, HDHealthDaemon;
@class NSObject, NSMutableDictionary, NSMutableSet, NSNumber, NSString;

@interface HDDataManager : NSObject <HDDiagnosticObject, HDHealthDataManager> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableDictionary* _observersByDataType;
	unsigned long long _openTransactions;
	unsigned long long _sourceObserverCount;
	NSMutableDictionary* _pendingObjectsBySampleType;
	NSMutableDictionary* _pendingObjectsBySource;
	NSMutableSet* _pendingSources;
	NSNumber* _lastAnchor;
	id<HDHealthDaemon> _daemon;

}

@property (assign,nonatomic,__weak) id<HDHealthDaemon> daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HDHealthDaemon>)daemon;
-(void)setDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)diagnosticDescription;
-(void)removeObserver:(id)arg1 forDataType:(id)arg2 ;
-(BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id*)arg4 ;
-(void)addObserver:(id)arg1 forDataType:(id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(BOOL)deleteSamplesWithTypes:(id)arg1 sourceID:(id)arg2 error:(id*)arg3 ;
-(id)medicalIDDataCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)deleteDataObjects:(id)arg1 restrictedSourceEntity:(id)arg2 failIfNotFound:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)deleteSamplesWithSourceIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)openObserverTransaction;
-(void)closeObserverTransaction;
-(BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(BOOL)arg4 error:(id*)arg5 ;
-(void)_callObserversIfPossible;
-(void)_notifyObserversWithAddedObjectsBySampleType:(id)arg1 objectsBySource:(id)arg2 pendingSources:(id)arg3 lastAnchor:(id)arg4 ;
-(id)_observersForDataType:(id)arg1 ;
-(void)_callObservers:(id)arg1 withObjects:(id)arg2 type:(id)arg3 anchor:(id)arg4 ;
-(id)_observersForDataType:(id)arg1 sourceBundleIdentifier:(id)arg2 ;
-(void)_callObservers:(id)arg1 forType:(id)arg2 source:(id)arg3 withAnchor:(id)arg4 ;
-(id)_observersForAllTypes;
-(void)_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_deleteObjectsWithTypes:(id)arg1 sourceIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)containsAnyDataObjectInArray:(id)arg1 ;
-(id)_queue_observersAllTypesCreateIfNil:(BOOL)arg1 ;
-(id)_queue_observersForDataType:(id)arg1 createIfNil:(BOOL)arg2 ;
-(id)_queue_observersForDataType:(id)arg1 sourceBundleIdentifier:(id)arg2 createIfNil:(BOOL)arg3 ;
-(id)_queue_observersForKey:(id)arg1 createIfNil:(BOOL)arg2 ;
-(id)_medicalIDURL;
-(BOOL)updateMedicalIDData:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id*)arg6 ;
-(BOOL)deleteDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteDataObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletedSampleCount:(unsigned long long*)arg3 notifyObservers:(BOOL)arg4 generateDeletedObjects:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)containsDataObject:(id)arg1 ;
-(void)addObserverForAllTypes:(id)arg1 ;
-(void)removeObserverForAllTypes:(id)arg1 ;
-(void)addObserver:(id)arg1 forDataType:(id)arg2 sourceBundleIdentifier:(id)arg3 ;
-(void)removeObserver:(id)arg1 forDataType:(id)arg2 sourceBundleIdentifier:(id)arg3 ;
-(void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteMedicalIDData:(id*)arg1 ;
@end

