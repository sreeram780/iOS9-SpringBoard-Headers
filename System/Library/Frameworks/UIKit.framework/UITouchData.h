/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITouch;

@interface UITouchData : NSObject {

	CGPoint startTouchDownLocation;
	unsigned long long lastTapCount;
	double lastTouchUpTimestamp;
	double lastTouchDownTimestamp;
	BOOL touchIsValidTap;
	UITouch* lastTouch;

}
@end

