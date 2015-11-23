/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKDocumentBannerElement, IKCarouselElement, IKBackgroundElement;

@interface IKShowcaseTemplate : IKViewElement

@property (nonatomic,retain,readonly) NSArray * modes; 
@property (nonatomic,retain,readonly) IKDocumentBannerElement * documentBanner; 
@property (nonatomic,retain,readonly) IKCarouselElement * carousel; 
@property (nonatomic,retain,readonly) IKBackgroundElement * background; 
@property (nonatomic,readonly) unsigned long long transition; 
-(unsigned long long)transition;
-(IKBackgroundElement *)background;
-(IKCarouselElement *)carousel;
-(NSArray *)modes;
-(IKDocumentBannerElement *)documentBanner;
@end

