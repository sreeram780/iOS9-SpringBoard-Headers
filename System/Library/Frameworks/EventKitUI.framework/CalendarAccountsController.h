/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ACAccountStore;

@interface CalendarAccountsController : NSObject {

	NSMutableDictionary* _lastStoreListingRefreshDates;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
+(void)invalidate;
+(void)initialize;
-(BOOL)sourceIsManaged:(id)arg1 ;
-(id)_accountForAccountIdentifier:(id)arg1 ;
-(id)_displayAccountForAccountWithIdentifier:(id)arg1 ;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg1 ;
-(int)sortOrderForSourceType:(long long)arg1 ;
-(id)_localizedTitleForLocalSourceUsedAtBeginningOfSentence:(BOOL)arg1 ;
-(id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
-(id)accountTypeTitleForSource:(id)arg1 ;
-(int)sortOrderForSource:(id)arg1 ;
-(int)sortOrderForStoreType:(int)arg1 ;
-(BOOL)sourceListingNeedsRefresh:(id)arg1 ;
-(void)refreshListingForSource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(id)accountStore;
-(void)dealloc;
-(id)init;
-(void)_localeDidChange:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

