/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDRowBlocks, EDRowBlock;

@interface EDCellIterator : NSObject {

	EDRowBlocks* mRowBlocks;
	EDRowBlock* mCurrentRowBlock;
	EDRowInfo* mCurrentRowInfo;
	unsigned mCurrentRowInfoIndex;
	EDCellHeader* mCurrentCell;
	unsigned mCurrentCellIndex;
	unsigned mDesiredRowNumber;
	unsigned mDesiredColumnNumber;

}
-(EDCellHeader*)adjacentCell:(int)arg1 ;
-(void)dealloc;
-(id)initWithWorksheet:(id)arg1 ;
-(EDCellHeader*)adjacentCellLeft;
-(EDCellHeader*)adjacentCellRight;
-(EDCellHeader*)scanToRowNumber:(unsigned)arg1 columnNumber:(unsigned)arg2 ;
@end

