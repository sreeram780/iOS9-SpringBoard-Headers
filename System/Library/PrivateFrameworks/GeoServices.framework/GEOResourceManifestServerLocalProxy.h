/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate;
@class GEOActiveTileGroup, NSURLConnection, NSMutableData, NSString, GEOResourceManifestConfiguration, NSTimer, GEOResourceManifestDownload, GEOResourceLoader, NSLock, NSError, NSMutableArray;

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
	NSString* _responseETag;
	GEOResourceManifestConfiguration* _configuration;
	BOOL _wantsManifestUpdateOnReachabilityChange;
	NSTimer* _manifestUpdateTimer;
	BOOL _wantsTileGroupUpdateOnReachabilityChange;
	NSTimer* _tileGroupUpdateTimer;
	GEOResourceManifestDownload* _resourceManifest;
	GEOActiveTileGroup* _activeTileGroup;
	GEOResourceLoader* _resourceLoader;
	NSString* _loadingTileGroupUniqueIdentifier;
	BOOL _started;
	unsigned long long _manifestRetryCount;
	double _lastManifestRetryTimestamp;
	unsigned long long _tileGroupRetryCount;
	double _lastTileGroupRetryTimestamp;
	NSString* _authToken;
	NSLock* _authTokenLock;
	NSError* _lastResourceManifestLoadError;
	NSMutableArray* _manifestUpdateCompletionHandlers;
	double _lastManifestRequestStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(id)authToken;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)openConnection;
-(void)_cancelConnection;
-(void)_updateManifest:(/*^block*/id)arg1 ;
-(void)closeConnection;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)_changeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_writeManifestToDisk:(id)arg1 error:(id*)arg2 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
-(void)_considerChangingActiveTileGroup;
-(id)_idealTileGroupToUse;
-(void)_scheduleUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_startServer;
-(BOOL)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2 ;
-(void)_notifyManifestUpdateCompletionHandlers:(id)arg1 ;
-(void)_updateManifest;
-(void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3 ;
-(id)_manifestURL;
-(void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_networkDefaultsDidChange:(id)arg1 ;
-(id)_resourceInfosForTileGroup:(id)arg1 ;
-(void)_activeTileGroupOverridesChanged:(id)arg1 ;
-(void)_purgeOldRegionalResources;
-(void)_purgeOldResources;
-(void)_cleanupConnection;
-(BOOL)_updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)forceUpdate:(/*^block*/id)arg1 ;
-(void)_loadFromDisk;
-(id)serverQueue;
-(void)_tileGroupTimerFired:(id)arg1 ;
@end

