/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHAsset;

@interface PHAssetPhotoCommentProperties : NSObject {

	BOOL _hasUserLiked;
	PHAsset* _asset;
	unsigned long long _commentCount;
	unsigned long long _likeCount;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long commentCount;              //@synthesize commentCount=_commentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long likeCount;                 //@synthesize likeCount=_likeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLiked;                            //@synthesize hasUserLiked=_hasUserLiked - In the implementation block
-(id)initWithFetchDictionaries:(id)arg1 asset:(id)arg2 ;
-(unsigned long long)commentCount;
-(unsigned long long)likeCount;
-(BOOL)hasUserLiked;
-(PHAsset *)asset;
@end

