/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RCDictionaryPListRepresentationCoding.h>

@class NSURL, NSDate, NSArray, NSString;

@interface RCComposition : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {

	BOOL _cachedComposedAVURLDurationIsValid;
	BOOL _readonly;
	NSURL* _savedRecordingURI;
	NSDate* _creationDate;
	NSURL* _composedAVURL;
	NSURL* _composedWaveformURL;
	NSArray* _decomposedFragments;
	NSArray* _composedFragments;
	double _cachedComposedAVURLDuration;

}

@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,retain) NSURL * savedRecordingURI;                            //@synthesize savedRecordingURI=_savedRecordingURI - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSURL * composedAVURL;                              //@synthesize composedAVURL=_composedAVURL - In the implementation block
@property (nonatomic,readonly) NSURL * composedWaveformURL;                        //@synthesize composedWaveformURL=_composedWaveformURL - In the implementation block
@property (nonatomic,readonly) double composedDuration; 
@property (nonatomic,retain) NSArray * decomposedFragments;                        //@synthesize decomposedFragments=_decomposedFragments - In the implementation block
@property (nonatomic,readonly) NSArray * composedFragments;                        //@synthesize composedFragments=_composedFragments - In the implementation block
@property (assign,nonatomic) BOOL cachedComposedAVURLDurationIsValid;              //@synthesize cachedComposedAVURLDurationIsValid=_cachedComposedAVURLDurationIsValid - In the implementation block
@property (assign,nonatomic) double cachedComposedAVURLDuration;                   //@synthesize cachedComposedAVURLDuration=_cachedComposedAVURLDuration - In the implementation block
@property (assign,nonatomic) BOOL readonly;                                        //@synthesize readonly=_readonly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_compositionMetadataURLForCompositionBundleURL:(id)arg1 ;
+(id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingURI:(id)arg3 createIfNeeded:(BOOL)arg4 ;
+(id)_compositionMetadataURLForComposedAVURL:(id)arg1 ;
+(BOOL)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1 ;
+(id)_compositionFragmentsFolderForComposedAVURL:(id)arg1 ;
+(id)compositionLoadedForSavedRecordingURI:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)compositionBundleURLForComposedAVURL:(id)arg1 ;
+(id)_unitTestingCompositionWithDecomposedFragments:(id)arg1 ;
+(id)compositionLoadedFromCompositionBundleURL:(id)arg1 ;
+(id)compositionWithComposedAVURL:(id)arg1 ;
+(BOOL)_markCompositionAVURLsBeingModified:(id)arg1 ;
-(id)compositionAsset;
-(id)playableAsset;
-(NSDate *)creationDate;
-(BOOL)readonly;
-(void)setReadonly:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)composedDuration;
-(id)initWithDictionaryPListRepresentation:(id)arg1 ;
-(id)dictionaryPListRepresentation;
-(void)deleteFromFilesystem;
-(unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(BOOL)isContentBeingModified;
-(id)_calcualteComposedFragments;
-(id)initWithComposedAVURL:(id)arg1 savedRecordingURI:(id)arg2 decomposedFragments:(id)arg3 composedFragments:(id)arg4 ;
-(void)setSavedRecordingURI:(NSURL *)arg1 ;
-(NSURL *)composedAVURL;
-(double)_composedDuration;
-(NSURL *)savedRecordingURI;
-(NSArray *)decomposedFragments;
-(unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(NSArray *)composedFragments;
-(id)compositionByClippingToComposedTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)setDecomposedFragments:(NSArray *)arg1 ;
-(id)composedFragmentsIntersectingTimeRange:(SCD_Struct_RC4)arg1 ;
-(NSURL *)composedWaveformURL;
-(void)setSavedRecordingURIFromRecoveredRecordingURI:(id)arg1 ;
-(unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(BOOL)arg1 ;
-(id)compositionByDeletingAndSplittingAtComposedTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)newRandomFragmentWithInsertionTimeRangeInComposition:(SCD_Struct_RC4)arg1 pathExtension:(id)arg2 ;
-(void)enumerateOrphanedFragmentsWithBlock:(/*^block*/id)arg1 ;
-(id)compositionByReloadingFromDefaultMetadataLocation;
-(BOOL)saveMetadataToDefaultLocation;
-(id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1 ;
-(void)recacheComposedDuration;
-(BOOL)cachedComposedAVURLDurationIsValid;
-(void)setCachedComposedAVURLDurationIsValid:(BOOL)arg1 ;
-(double)cachedComposedAVURLDuration;
-(void)setCachedComposedAVURLDuration:(double)arg1 ;
@end

