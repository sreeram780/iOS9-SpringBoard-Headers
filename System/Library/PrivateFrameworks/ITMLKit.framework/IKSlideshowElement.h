/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (nonatomic,readonly) long long showSettings; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,readonly) unsigned long long transition; 
@property (nonatomic,readonly) double transitionInterval; 
-(NSArray *)images;
-(unsigned long long)transition;
-(double)transitionInterval;
-(long long)showSettings;
@end

