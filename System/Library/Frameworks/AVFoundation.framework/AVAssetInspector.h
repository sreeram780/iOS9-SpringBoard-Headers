/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, AVMetadataItem, NSString, NSData;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic,readonly) SCD_Struct_CM5 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) float preferredSoundCheckVolumeNormalization; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) BOOL providesPreciseDurationAndTiming; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) NSArray * trackIDs; 
@property (nonatomic,readonly) NSArray * alternateTrackGroups; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (getter=_mediaSelectionGroupDictionaries,nonatomic,readonly) NSArray * mediaSelectionGroupDictionaries; 
@property (nonatomic,readonly) AVMetadataItem * creationDate; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (getter=isCompatibleWithAirPlayVideo,nonatomic,readonly) BOOL compatibleWithAirPlayVideo; 
@property (nonatomic,readonly) NSData * SHA1Digest; 
@property (nonatomic,readonly) BOOL canContainFragments; 
@property (nonatomic,readonly) BOOL containsFragments; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) NSString * identifyingTagClass; 
@property (getter=_instanceIdentifier,nonatomic,readonly) NSString * instanceIdentifier; 
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(NSArray *)alternateTrackGroups;
-(NSArray *)trackIDs;
-(id)_mediaSelectionGroupDictionaries;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(NSString *)identifyingTagClass;
-(id)_instanceIdentifier;
-(NSData *)SHA1Digest;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(NSString *)lyrics;
-(NSDictionary *)trackReferences;
-(long long)trackCount;
-(BOOL)hasProtectedContent;
-(AVMetadataItem *)creationDate;
-(BOOL)isPlayable;
-(SCD_Struct_CM5)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(BOOL)isReadable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(CGAffineTransform)preferredTransform;
-(NSArray *)commonMetadata;
-(id)propertyListForProxy;
@end

