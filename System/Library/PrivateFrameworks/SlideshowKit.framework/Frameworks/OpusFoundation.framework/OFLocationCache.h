/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate;

@interface OFLocationCache : NSObject {

	NSString* _diskCacheFilepath;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectContext* _parentManagedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPredicate* _predicateEntryTemplate;
	NSPredicate* _predicateEntryWithLocalRegionTemplate;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)defaultCache;
-(BOOL)save;
-(void)dealloc;
-(id)init;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)placemarksForLocationCoordinate:(CGSize)arg1 ;
-(id)placemarksForLocationCoordinate:(CGSize)arg1 andAccuracy:(double)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CGSize)arg2 ;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)invalidateMemoryCaches;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)placemarksForLocationCoordinate:(CGSize)arg1 andAccuracy:(double)arg2 closestResultDistance:(double*)arg3 numberOfResults:(unsigned long long*)arg4 ;
-(void)invalidateCacheForLocationCoordinate:(CGSize)arg1 ;
@end

