/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress {

	OITSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(id)initWithMaxValue:(double)arg1 ;
@end
