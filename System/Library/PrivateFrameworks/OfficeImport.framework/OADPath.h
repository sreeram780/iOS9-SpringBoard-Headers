/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface OADPath : NSObject {

	CGSize mSize;
	NSMutableArray* mElements;
	int mFillMode;
	BOOL mStroked;

}
-(void)setStroked:(BOOL)arg1 ;
-(int)fillMode;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setSize:(CGSize)arg1 ;
-(void)setFillMode:(int)arg1 ;
-(void)addElement:(id)arg1 ;
-(unsigned long long)elementCount;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(BOOL)stroked;
@end

