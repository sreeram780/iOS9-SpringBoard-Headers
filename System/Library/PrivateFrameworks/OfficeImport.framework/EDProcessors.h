/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {

	EDWorkbook* mWorkbook;
	NSMutableArray* mProcessors;

}
-(void)dealloc;
-(void)removeAllObjects;
-(void)markObject:(id)arg1 processor:(Class)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)addProcessorClass:(Class)arg1 ;
-(BOOL)hasProcessors;
-(void)removeProcessorClass:(Class)arg1 ;
-(void)applyProcessorsWithSheet:(id)arg1 ;
@end

