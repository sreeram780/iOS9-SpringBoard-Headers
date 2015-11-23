/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNAutocompleteObservableBuilderBatchingHelper <NSObject>
@required
-(BOOL)batchAtIndexIncludesServer:(unsigned long long)arg1;
-(id)batchedObservables;
-(void)addContactsObservable:(id)arg1;
-(void)addCoreRecentsObservable:(id)arg1;
-(void)addSuggestionsObservable:(id)arg1;
-(void)addDuetObservable:(id)arg1;
-(void)addSupplementalObservable:(id)arg1;
-(void)addDirectoryServerObservable:(id)arg1;
-(void)addCalendarServerObservable:(id)arg1;

@end

