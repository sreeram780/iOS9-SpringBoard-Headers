/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class MPPlaceholderAVItem, NSOperationQueue;

@interface MusicQuickPlayQueueFeeder : MPQueueFeeder {

	MPPlaceholderAVItem* _placeholderItem;
	NSOperationQueue* _requestQueue;

}
-(unsigned long long)itemCount;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)_beginQuickPlayWithURL:(id)arg1 ;
-(void)_failQueueLoadWithError:(id)arg1 orReason:(id)arg2 ;
-(id)itemForIdentifier:(id)arg1 ;
@end

