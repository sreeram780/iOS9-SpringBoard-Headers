/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFLibrarySearchableIndexDataSource <NSObject>
@required
-(id)itemsRequiringIndexingForSearchableIndex:(id)arg1 limit:(unsigned long long)arg2;
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 forIdentifiers:(id)arg3;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
-(unsigned long long)verifyRepresentativeSampleForSearchableIndex:(id)arg1;

@end

