/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {

	NSMutableSet* _set;
	NSMutableDictionary* _recentTouches;
	double _secondsToExpire;

}
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(BOOL)_didExpireObject:(id)arg1 ;
-(void)_touch:(id)arg1 ;
-(id)initWithSecondsToExpire:(double)arg1 ;
@end

