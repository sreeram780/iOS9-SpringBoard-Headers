/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSSearchableIndexDelegate <NSObject>
@optional
-(void)searchableIndexDidThrottle:(id)arg1;
-(void)searchableIndexDidFinishThrottle:(id)arg1;

@required
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3;

@end

