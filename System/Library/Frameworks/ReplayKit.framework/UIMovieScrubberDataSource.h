/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIMovieScrubberDataSource <NSObject>
@optional
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;

@required
-(double)movieScrubberDuration:(id)arg1;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1;

@end

