/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetInternal, NSArray;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (assign,setter=MP_setCanAffectNetworkPlayability:,getter=MP_canAffectNetworkPlayability,nonatomic) BOOL MP_canAffectNetworkPlayability; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) BOOL isProxy; 
@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) SCD_Struct_CM5 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
+(id)assetWithURL:(id)arg1 ;
-(BOOL)MP_canAffectNetworkPlayability;
-(void)MP_setCanAffectNetworkPlayability:(BOOL)arg1 ;
-(void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createLanguageOptionGroups;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(BOOL)isProxy;
-(id)propertyListForProxy;
-(int)unusedTrackID;
-(id)_chapterTracks;
-(BOOL)_containsAtLeastOnePlayableAudioTrack;
-(BOOL)_containsAtLeastOnePlayableVideoTrack;
-(id)_exportURL;
-(id)availableChapterLanguages;
-(void)_loadChapterInfo;
-(id)_chapterDataTypeForMediaSubType:(int)arg1 ;
-(unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_CM6)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(NSArray *)availableChapterLocales;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(BOOL)_mindsFragments;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackGroups;
-(id)_firstTrackGroupWithMediaType:(id)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(id)_weakReference;
-(id)_comparisonToken;
-(long long)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(BOOL)_needsLegacyChangeNotifications;
-(unsigned long long)referenceRestrictions;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)preferredMediaSelection;
-(id)_ID3Metadata;
-(void)_tracksDidChange;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)lyrics;
-(id)trackReferences;
-(id)trackWithTrackID:(int)arg1 ;
-(BOOL)_isStreaming;
-(BOOL)hasProtectedContent;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)creationDate;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM5)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGSize)naturalSize;
-(BOOL)isReadable;
-(id)metadata;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracks;
@end

