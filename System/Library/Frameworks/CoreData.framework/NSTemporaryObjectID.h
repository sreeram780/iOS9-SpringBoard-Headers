/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {

	int _cd_rc;
	int _counter;
	NSEntityDescription* _entity;

}
+(id)_retain_1;
+(void)_release_1;
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(void)_storeDeallocated;
+(id)initWithEntity:(id)arg1 ;
+(unsigned)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned)arg3 ;
+(Class)classForStore:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)retain;
+(void)release;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(long long)version;
-(id)persistentStore;
-(id)_retainedURIString;
-(id)_referenceData;
-(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(void)_setPersistentStore:(id)arg1 ;
-(id)_storeIdentifier;
-(BOOL)_isPersistentStoreAlive;
-(id)initWithEntity:(id)arg1 ;
-(id)URIRepresentation;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)entity;
-(void)finalize;
-(BOOL)isTemporaryID;
@end

