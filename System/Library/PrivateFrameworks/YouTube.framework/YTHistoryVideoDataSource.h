/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTVideoDataSource.h>

@class NSMutableArray;

@interface YTHistoryVideoDataSource : YTVideoDataSource {

	NSMutableArray* _history;

}
-(void)reloadData;
-(void)clearHistory;
-(void)_saveToDefaults;
-(unsigned)maxVideosToSave;
-(void)addVideo:(id)arg1 ;
-(id)_history;
-(void)loadFromDefaults;
@end

