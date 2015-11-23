/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EPStyleFlattener.h>

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {

	EDTable* mTable;
	unsigned long long mHeaderRowCount;
	unsigned long long mTotalsRowCount;

}
-(int)stripeOffset:(int)arg1 row:(BOOL)arg2 ;
-(void)clearCache;
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)newExtractedGlobalStyleElements:(id)arg1 ;
@end

