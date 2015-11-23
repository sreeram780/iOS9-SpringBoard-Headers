/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerObserver.h>

@protocol OS_dispatch_queue;
@class MSPContainer, NSObject, NSMapTable, NSArray, NSString;

@interface MSPOngoingFetchRequest : NSObject <MSPContainerObserver> {

	MSPContainer* _container;
	NSObject*<OS_dispatch_queue> _queue;
	id _owner;
	/*^block*/id _mapBlock;
	/*^block*/id _changeHandler;
	NSMapTable* _unmappedObjectsByContentObject;
	NSMapTable* _oldUnmappedObjectsByContentObject;
	NSArray* _contents;
	NSArray* _unmappedContents;

}

@property (nonatomic,readonly) NSArray * contents;                      //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * unmappedContents;              //@synthesize unmappedContents=_unmappedContents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(NSArray *)contents;
-(void)container:(id)arg1 didEditByReplacingObjectsWithReplacements:(id)arg2 context:(id)arg3 ;
-(NSArray *)unmappedContents;
-(void)_updateContentsFromContainerContents:(id)arg1 context:(id)arg2 ;
-(id)initWithContainer:(id)arg1 owner:(id)arg2 queue:(id)arg3 mappingObjectsWithConcurrentBlock:(/*^block*/id)arg4 availabilityHandler:(/*^block*/id)arg5 changeHandler:(/*^block*/id)arg6 ;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(id)observationQueueForContainer:(id)arg1 ;
-(id)unmappedObjectForContentsObject:(id)arg1 ;
@end

