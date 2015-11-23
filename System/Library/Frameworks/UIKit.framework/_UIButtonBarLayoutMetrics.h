/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIButtonBarLayoutMetricsData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLayoutDimension, NSLayoutAnchor, NSLayoutYAxisAnchor, NSString;

@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying> {

	BOOL _locked;
	NSLayoutDimension* _verticalSizeGuide;
	NSLayoutDimension* _minimumSpaceGuide;
	NSLayoutDimension* _flexibleSpaceGuide;
	NSLayoutYAxisAnchor* _popoverGuideTopAnchor;
	NSLayoutDimension* _groupSizeGuide;

}

@property (nonatomic,retain) NSLayoutDimension * verticalSizeGuide;                    //@synthesize verticalSizeGuide=_verticalSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * minimumSpaceGuide;                    //@synthesize minimumSpaceGuide=_minimumSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * flexibleSpaceGuide;                   //@synthesize flexibleSpaceGuide=_flexibleSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * popoverGuideTopAnchor;              //@synthesize popoverGuideTopAnchor=_popoverGuideTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSizeGuide;                       //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVerticalSizeGuide:(NSLayoutDimension *)arg1 ;
-(void)setMinimumSpaceGuide:(NSLayoutDimension *)arg1 ;
-(void)setFlexibleSpaceGuide:(NSLayoutDimension *)arg1 ;
-(void)setPopoverGuideTopAnchor:(NSLayoutYAxisAnchor *)arg1 ;
-(void)setGroupSizeGuide:(NSLayoutDimension *)arg1 ;
-(id)_copyWithModifications:(/*^block*/id)arg1 ;
-(id)_upcastIfReadOnly;
-(NSLayoutDimension *)verticalSizeGuide;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutYAxisAnchor *)popoverGuideTopAnchor;
-(NSLayoutDimension *)groupSizeGuide;
@end

