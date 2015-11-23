/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	BOOL mHorzMerge;
	BOOL mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(BOOL)horzMerge;
-(BOOL)vertMerge;
-(int)gridSpan;
-(int)rowSpan;
-(id)textBody;
-(void)setRowSpan:(int)arg1 ;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(BOOL)arg1 ;
-(void)setVertMerge:(BOOL)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(BOOL)merge:(int)arg1 ;
-(int)topRow;
-(void)setTopRow:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
@end

