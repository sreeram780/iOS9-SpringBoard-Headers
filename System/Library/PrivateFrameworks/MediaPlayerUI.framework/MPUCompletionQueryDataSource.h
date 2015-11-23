/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUQueryDataSource.h>

@protocol MPUCompletionQueryDataSourceDelegate;
@class NSMutableDictionary, NSMutableSet;

@interface MPUCompletionQueryDataSource : MPUQueryDataSource {

	BOOL _hasAutomaticallyLoadedCompletions;
	NSMutableDictionary* _tokens;
	NSMutableDictionary* _completions;
	NSMutableSet* _overlayedSectionEntityPIDs;
	NSMutableDictionary* _statuses;
	NSMutableDictionary* _variants;
	BOOL _shouldShowCompletions;
	BOOL _shouldAutomaticallyLoadCompletions;
	id<MPUCompletionQueryDataSourceDelegate> _completionDelegate;

}

@property (assign,nonatomic) BOOL shouldShowCompletions;                                                      //@synthesize shouldShowCompletions=_shouldShowCompletions - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyLoadCompletions;                                         //@synthesize shouldAutomaticallyLoadCompletions=_shouldAutomaticallyLoadCompletions - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoadCompletionArtwork; 
@property (assign,nonatomic,__weak) id<MPUCompletionQueryDataSourceDelegate> completionDelegate;              //@synthesize completionDelegate=_completionDelegate - In the implementation block
-(id)sectionEntityAtIndex:(unsigned long long)arg1 ;
-(void)loadCompletionOfferings;
-(void)loadCompletionOfferingForSectionAtIndex:(unsigned long long)arg1 ;
-(long long)completionOfferStatusForSectionAtIndex:(long long)arg1 ;
-(id)sectionEntityWithoutOverlayAtIndex:(unsigned long long)arg1 ;
-(id)completionOfferingForSectionAtIndex:(unsigned long long)arg1 ;
-(void)_setCompletion:(id)arg1 forSectionAtIndex:(long long)arg2 ;
-(BOOL)hasCompletionOfferForSectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)isShowingCompletionOverlayForSectionAtIndex:(unsigned long long)arg1 ;
-(id<MPUCompletionQueryDataSourceDelegate>)completionDelegate;
-(long long)_tokenForSectionAtIndex:(long long)arg1 ;
-(void)cancelCompletionOfferingWithToken:(unsigned long long)arg1 ;
-(BOOL)shouldLoadCompletionArtwork;
-(void)_setToken:(unsigned long long)arg1 forSectionAtIndex:(long long)arg2 ;
-(long long)_pidForSectionAtIndex:(long long)arg1 ;
-(void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)arg1 ;
-(void)_didInvalidateWithContext:(id)arg1 ;
-(BOOL)shouldAutomaticallyLoadCompletions;
-(void)_willInvalidateWithContext:(id)arg1 ;
-(void)setShouldAutomaticallyLoadCompletions:(BOOL)arg1 ;
-(void)overlayCompletionForSectionAtIndex:(unsigned long long)arg1 ;
-(void)removeAllCompletionOverlays;
-(unsigned long long)indexOfSectionForCompletionOffering:(id)arg1 ;
-(void)setCompletionOfferStatus:(long long)arg1 forSectionAtIndex:(long long)arg2 ;
-(BOOL)hasVariantsForSectionAtIndex:(long long)arg1 ;
-(long long)variantForSectionAtIndex:(long long)arg1 ;
-(void)setVariant:(long long)arg1 forSectionAtIndex:(long long)arg2 ;
-(BOOL)shouldShowCompletions;
-(void)setShouldShowCompletions:(BOOL)arg1 ;
-(void)setCompletionDelegate:(id<MPUCompletionQueryDataSourceDelegate>)arg1 ;
@end

