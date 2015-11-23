/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol YTFavoritesControllerDelegate;
@class NSMutableArray, YTAuthenticatedAccountPost, YTAccountFeedRequest, NSURL;

@interface YTFavoritesController : NSObject {

	NSMutableArray* _pendingFavoritesShortIDs;
	NSMutableArray* _mergedFavorites;
	YTAuthenticatedAccountPost* _accountPost;
	YTAccountFeedRequest* _accountFeedRequest;
	BOOL _usingAccountFavorites;
	BOOL _shouldOfferMergeOfLocalBookmarks;
	NSURL* _batchURL;
	NSMutableArray* _bookmarkVideos;
	NSMutableArray* _bookmarkShortIDs;
	id<YTFavoritesControllerDelegate> _mergeBookmarksDelegate;

}
+(id)sharedFavoritesController;
-(void)dealloc;
-(BOOL)usingAccountFavorites;
-(id)bookmarkedShortIDs;
-(void)bookmarksSearchRequestInterrupted;
-(id)bookmarkedVideos;
-(void)searchRequestReturnedVideos:(id)arg1 ;
-(void)setBatchURL:(id)arg1 ;
-(void)YTAuthenticatedAccountPost:(id)arg1 didFinishWithType:(int)arg2 error:(id)arg3 ;
-(void)accountFeedRequest:(id)arg1 receivedVideos:(id)arg2 ;
-(void)accountFeedRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_processNextPendingFavoritesBatch;
-(void)saveBookmarksIfNeeded;
-(void)_saveBookmarks;
-(void)_loadBookmarks;
-(void)setLocalBookmarksMergeOffered:(BOOL)arg1 ;
-(void)_bookmarksDidChangeNotifyObservers:(BOOL)arg1 ;
-(void)addLocalBookmarkForVideo:(id)arg1 ;
-(void)setUsingAccountFavorites:(BOOL)arg1 ;
-(BOOL)shouldOfferMergeOfLocalBookmarks;
-(void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)arg1 ;
-(void)addFavoriteForVideo:(id)arg1 ;
-(void)removeFavoriteForVideo:(id)arg1 ;
-(id)batchURL;
@end

