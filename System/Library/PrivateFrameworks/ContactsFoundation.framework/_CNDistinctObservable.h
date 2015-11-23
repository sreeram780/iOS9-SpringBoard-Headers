/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@class NSMutableSet;

@interface _CNDistinctObservable : CNObservable {

	id<CNObservable> _observable;
	NSMutableSet* _previouslyObservedResults;

}
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(BOOL)_resultIsDistinct:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
@end

