/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDTable, WDTableRowProperties, NSMutableArray;

@interface WDTableRow : NSObject {

	unsigned long long mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;

}
-(void)setIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)table;
-(unsigned long long)index;
-(id)properties;
-(unsigned long long)cellCount;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)cellIterator;
-(id)newCellIterator;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
@end

