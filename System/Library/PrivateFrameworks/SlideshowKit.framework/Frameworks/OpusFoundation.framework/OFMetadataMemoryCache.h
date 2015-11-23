/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject {

	OFLRUCache* _memoryCache;
	BOOL _allowCleanupOnMemoryWarnings;
	BOOL _allowCleanupOnEnteringBackground;
	unsigned long long _hasChanges;

}

@property (assign,nonatomic) BOOL allowCleanupOnMemoryWarnings;                  //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) BOOL allowCleanupOnEnteringBackground;              //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(BOOL)hasChanges;
-(BOOL)writeToURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)loadFromURL:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setNumberOfMemorySlots:(unsigned long long)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(BOOL)arg1 ;
-(BOOL)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(BOOL)arg1 ;
-(void)resetChanges;
-(unsigned long long)numberOfMemorySlots;
-(unsigned long long)numberOfUsedMemorySlots;
-(void)invalidateForIdentifier:(id)arg1 ;
@end

