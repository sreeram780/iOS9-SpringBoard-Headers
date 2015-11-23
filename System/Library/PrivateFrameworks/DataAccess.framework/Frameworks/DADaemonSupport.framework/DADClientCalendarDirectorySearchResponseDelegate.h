/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarDirectorySearchResponseConsumer.h>
#import <DADaemonSupport/DASearchQueryConsumer.h>

@class NSSet, NSString;

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer> {

	NSSet* _terms;
	NSSet* _recordTypes;
	unsigned long long _resultLimit;
	id _searchID;
	BOOL _exceededResultLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)dealloc;
-(void)performRequest;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned long long)arg5 ;
-(id)_convertSearchQueryResults:(id)arg1 ;
-(void)calendarDirectorySearchReturnedResults:(id)arg1 ;
-(void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
@end

