/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableData;

@interface _UIRectUnionSet : NSObject {

	NSMutableData* _data;
	unsigned long long _rectCount;
	CGRect _cachedUnionRect;

}

@property (readonly) CGRect unionedRect; 
@property (readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)init;
-(CGRect)unionedRect;
-(void)addRect:(CGRect)arg1 ;
-(void)removeRect:(CGRect)arg1 ;
@end
