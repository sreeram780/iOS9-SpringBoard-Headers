/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>
#import <libobjc.A.dylib/MPQueueBehaviorManaging.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MPQueueFeederDelegate;
@class NSMutableDictionary, NSString, RadioStation, MPUContentItemIdentifierCollection, NSData;

@interface MPQueueFeeder : NSObject <MusicEntityValueProviding, MPQueueBehaviorManaging, NSCoding> {

	unsigned long long _repeatType;
	unsigned long long _shuffleType;
	NSMutableDictionary* _nextStartTimes;
	BOOL _requiresQueueChangeVerification;
	id<MPQueueFeederDelegate> _delegate;
	unsigned long long _state;
	unsigned long long _activeShuffleType;
	SCD_Struct_MP10 _skipLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RadioStation * station; 
@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection; 
@property (setter=mpuReporting_setFeatureName:,nonatomic,copy) NSString * mpuReporting_featureName; 
@property (setter=mpuReporting_setRecommendationData:,nonatomic,copy) NSData * mpuReporting_recommendationData; 
@property (assign,nonatomic,__weak) id<MPQueueFeederDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL requiresQueueChangeVerification;                                                           //@synthesize requiresQueueChangeVerification=_requiresQueueChangeVerification - In the implementation block
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,readonly) Class itemClass; 
@property (nonatomic,readonly) BOOL canReorder; 
@property (nonatomic,readonly) BOOL playerPreparesItemsForPlaybackAsynchronously; 
@property (assign,nonatomic) SCD_Struct_MP10 skipLimit;                                                                      //@synthesize skipLimit=_skipLimit - In the implementation block
@property (nonatomic,readonly) BOOL trackChangesCanEndPlayback; 
@property (nonatomic,readonly) unsigned long long realRepeatType; 
@property (nonatomic,readonly) unsigned long long realShuffleType; 
@property (assign,nonatomic) unsigned long long repeatType;                                                                  //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;                                                                 //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) unsigned long long activeShuffleType;                                                           //@synthesize activeShuffleType=_activeShuffleType - In the implementation block
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
+(BOOL)supportsStateRestoration;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(BOOL)isRadioQueueFeeder;
-(RadioStation *)station;
-(MPUContentItemIdentifierCollection *)MPU_contentItemIdentifierCollection;
-(void)mpuReporting_setRecommendationData:(id)arg1 ;
-(void)mpuReporting_setFeatureName:(id)arg1 ;
-(NSString *)mpuReporting_featureName;
-(NSData *)mpuReporting_recommendationData;
-(long long)playbackMode;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(Class)itemClass;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(BOOL)hasValidItemAtIndex:(unsigned long long)arg1 ;
-(void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1 error:(id)arg2 ;
-(BOOL)_canPurgeNextStartTimes;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)allowsUserVisibleUpcomingItems;
-(BOOL)canSkipToPreviousItem;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1 ;
-(void)setNextStartTime:(double)arg1 forIndentifier:(id)arg2 ;
-(void)shuffleItemsWithAnchor:(unsigned long long*)arg1 ;
-(id)errorResolverForItem:(id)arg1 ;
-(BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)canReorder;
-(unsigned long long)itemTypeForIndex:(unsigned long long)arg1 ;
-(BOOL)playerPreparesItemsForPlaybackAsynchronously;
-(SCD_Struct_MP10)skipLimit;
-(BOOL)trackChangesCanEndPlayback;
-(unsigned long long)realRepeatType;
-(unsigned long long)realShuffleType;
-(id)audioSessionModeForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasItemForIndex:(unsigned long long)arg1 ;
-(unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1 ;
-(id)metadataItemForIdentifier:(id)arg1 ;
-(unsigned long long)indexOfMediaItem:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned long long)arg1 ;
-(void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1 ;
-(void)contentsDidChangeWithReplacementPlaybackContext:(id)arg1 ;
-(void)invalidateAssets;
-(void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2 ;
-(void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2 ;
-(BOOL)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id*)arg3 ;
-(BOOL)requiresQueueChangeVerification;
-(void)setRequiresQueueChangeVerification:(BOOL)arg1 ;
-(void)setSkipLimit:(SCD_Struct_MP10)arg1 ;
-(void)setRepeatType:(unsigned long long)arg1 ;
-(void)setShuffleType:(unsigned long long)arg1 ;
-(unsigned long long)activeShuffleType;
-(void)setActiveShuffleType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MPQueueFeederDelegate>)arg1 ;
-(id<MPQueueFeederDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)preferredLanguages;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(BOOL)canSeek;
-(id)itemForIdentifier:(id)arg1 ;
@end

