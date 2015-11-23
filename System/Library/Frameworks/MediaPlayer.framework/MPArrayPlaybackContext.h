/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class NSArray;

@interface MPArrayPlaybackContext : MPPlaybackContext {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(Class)queueFeederClass;
-(id)initWithArrayQueueItems:(id)arg1 ;
-(id)descriptionComponents;
-(NSArray *)items;
@end

