/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MPMediaQuery;

@interface MPQueryPlaybackContext : MPPlaybackContext {

	MPMediaQuery* _query;

}

@property (nonatomic,readonly) MPMediaQuery * query;              //@synthesize query=_query - In the implementation block
+(Class)queueFeederClass;
-(id)descriptionComponents;
-(id)initWithQuery:(id)arg1 ;
-(MPMediaQuery *)query;
@end

