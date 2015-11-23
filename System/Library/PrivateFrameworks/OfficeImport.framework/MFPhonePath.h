/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class TSUBezierPath;

@interface MFPhonePath : MFPath {

	TSUBezierPath* m_path;
	int m_state;

}
-(void)dealloc;
-(id)init;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)currentPoint;
-(int)end;
-(int)begin;
-(int)flatten;
-(int)stroke:(id)arg1 ;
-(BOOL)isOpen;
-(int)abort;
-(int)closeFigure;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(id)getBezierPath;
@end

