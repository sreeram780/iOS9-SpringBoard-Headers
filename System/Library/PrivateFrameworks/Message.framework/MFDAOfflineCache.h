/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCache.h>

@class NSString;

@interface MFDAOfflineCache : MFOfflineCache {

	NSString* _lastSelectedFolderID;

}
-(void)dealloc;
-(void)deferOperation:(id)arg1 ;
-(void)setLastSelectedMailbox:(id)arg1 ;
-(BOOL)replayOperationsUsingBlock:(/*^block*/id)arg1 ;
-(void)deleteOfflineCacheData;
@end

