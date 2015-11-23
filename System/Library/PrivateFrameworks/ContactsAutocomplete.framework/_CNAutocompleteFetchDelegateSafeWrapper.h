/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@protocol CNAutocompleteFetchDelegate;
@class NSString;

@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject <CNAutocompleteFetchDelegate> {

	id<CNAutocompleteFetchDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2 ;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

