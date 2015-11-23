/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDValueAxis : CHDAxis {

	BOOL mPercentageFormattingFlag;
	BOOL mAutoMajorUnitValue;
	BOOL mAutoMinorUnitValue;
	double mMajorUnitValue;
	double mMinorUnitValue;
	double mScalingLogBase;
	int mBuiltInUnit;
	BOOL mShowBuiltInUnit;

}
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(void)setScalingLogBase:(double)arg1 ;
-(void)setBuiltInUnit:(int)arg1 ;
-(void)setShowBuiltInUnitFlag:(BOOL)arg1 ;
-(double)minorUnitValue;
-(BOOL)isAutoMinorUnitValue;
-(double)majorUnitValue;
-(BOOL)isAutoMajorUnitValue;
-(double)scalingLogBase;
-(void)adjustAxisPositionForHorizontalChart;
-(BOOL)isShowBuiltInUnit;
-(int)builtInUnit;
-(id)contentFormatWithBuiltInUnit;
-(void)setPercentageFormattingFlag:(BOOL)arg1 ;
-(BOOL)isPercentageFormattingFlag;
@end

