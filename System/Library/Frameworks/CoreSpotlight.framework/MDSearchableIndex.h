/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSpotlight/CSSearchableIndex.h>

@interface MDSearchableIndex : CSSearchableIndex
+(id)sharedInstance;
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

