/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {

	NSCache* _additionsCache;

}
+(id)sharedInstance;
-(id)init;
-(void)cacheAddition:(id)arg1 forDocumentID:(id)arg2 ;
-(id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)purgeCachedAdditionForItemAtURL:(id)arg1 ;
@end

