/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary, NSOperationQueue, NSURL, NSData;

@interface SCNSceneSource : NSObject {

	C3DSceneSourceRef _sceneSource;
	C3DSceneRef _lastLoadedScene;
	NSDictionary* _lastOptions;
	NSOperationQueue* _downloadingQueue;
	BOOL _sceneLoaded;
	NSDictionary* _sceneSourceOptions;

}

@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
+(id)sceneSourceWithData:(id)arg1 options:(id)arg2 ;
+(BOOL)_shouldCacheWithOptions:(id)arg1 ;
+(id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2 ;
+(void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3 ;
+(void)_removeCachedSceneSourceIfNeededForURL:(id)arg1 ;
+(id)sceneTypes;
+(id)sceneFileTypes;
+(id)sceneSourceWithURL:(id)arg1 options:(id)arg2 ;
-(id)debugQuickLookData;
-(id)debugQuickLookObject;
-(id)propertyForKey:(id)arg1 ;
-(C3DLibraryRef)library;
-(id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(C3DSceneRef)_createSceneRefWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)sceneSourceOptions;
-(long long)sceneCount;
-(id)sceneWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(/*^block*/id)arg3 ;
-(id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(/*^block*/id)arg3 ;
-(id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2 ;
-(BOOL)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 entryObjectConstructor:(/*^block*/id)arg4 ;
-(id)identifiersOfEntriesWithClass:(Class)arg1 ;
-(long long)countOfScenes;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 ;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)sceneWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(C3DSceneSourceRef)sceneSourceRef;
-(id)entriesPassingTest:(/*^block*/id)arg1 ;
-(id)entryWithID:(id)arg1 withClass:(Class)arg2 ;
-(id)IDsOfEntriesWithClass:(Class)arg1 ;
-(long long)sourceStatus;
-(BOOL)canExportToColladaWithNoDataLoss;
-(id)performConsistencyCheck;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(NSData *)data;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
@end

