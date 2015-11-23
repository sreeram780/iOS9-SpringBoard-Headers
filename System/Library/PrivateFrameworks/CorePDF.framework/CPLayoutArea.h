/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	BOOL isFirstLayout;

}
-(id)init;
-(id)description;
-(id)properties;
-(void)accept:(id)arg1 ;
-(double)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(BOOL)isSimilarTo:(id)arg1 ;
-(BOOL)isFirstLayout;
-(void)setIsFirstLayout:(BOOL)arg1 ;
-(void)addColumnBreaks;
@end

