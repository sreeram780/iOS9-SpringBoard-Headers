/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDAlignmentInfo, EDBorders, EDFill, EDFont, EDProtection, EDContentFormat;

@interface EDDifferentialStyle : NSObject <NSCopying> {

	EDAlignmentInfo* mAlignmentInfo;
	EDBorders* mBorders;
	EDFill* mFill;
	EDFont* mFont;
	EDProtection* mProtection;
	EDContentFormat* mContentFormat;

}

@property (nonatomic,retain) EDAlignmentInfo * alignmentInfo; 
@property (nonatomic,retain) EDBorders * borders; 
@property (nonatomic,retain) EDFill * fill; 
@property (nonatomic,retain) EDFont * font; 
@property (nonatomic,retain) EDProtection * protection; 
@property (nonatomic,retain) EDContentFormat * contentFormat; 
+(id)differentialStyle;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EDFill *)fill;
-(void)setFont:(EDFont *)arg1 ;
-(EDFont *)font;
-(void)setFill:(EDFill *)arg1 ;
-(EDAlignmentInfo *)alignmentInfo;
-(EDContentFormat *)contentFormat;
-(EDBorders *)borders;
-(void)setContentFormat:(EDContentFormat *)arg1 ;
-(void)setAlignmentInfo:(EDAlignmentInfo *)arg1 ;
-(void)setBorders:(EDBorders *)arg1 ;
-(void)setProtection:(EDProtection *)arg1 ;
-(EDProtection *)protection;
@end

