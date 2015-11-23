/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions, NSNumber;

@interface PDTransition : OADProperties {

	BOOL mHasType;
	int mType;
	BOOL mHasSpeed;
	int mSpeed;
	BOOL mHasAdvanceOnClick;
	BOOL mIsAdvanceOnClick;
	BOOL mHasAdvanceAfterTime;
	int mAdvanceAfterTime;
	PDTransitionOptions* mOptions;
	NSNumber* duration;

}

@property (nonatomic,retain) NSNumber * duration; 
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setSpeed:(int)arg1 ;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)speed;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(BOOL)hasType;
-(BOOL)hasSpeed;
-(BOOL)hasIsAdvanceOnClick;
-(BOOL)hasAdvanceAfterTime;
-(BOOL)hasTransitionOptions;
-(BOOL)isAdvanceOnClick;
-(void)setIsAdvanceOnClick:(BOOL)arg1 ;
-(int)advanceAfterTime;
-(void)setAdvanceAfterTime:(int)arg1 ;
@end

