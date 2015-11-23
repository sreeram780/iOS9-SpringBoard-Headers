/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpType;

@interface TCDumpContainer : TCDumpType {

	int mByteSize;
	int mByteSizeFieldType;
	NSString* mByteSizeFieldName;
	int mByteSizeCorrection;
	TCDumpType* mElementType;

}
-(void)dealloc;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithByteSize:(int)arg1 byteSizeFieldType:(int)arg2 byteSizeFieldName:(id)arg3 byteSizeCorrection:(int)arg4 elementType:(id)arg5 ;
-(id)initWithByteSize:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
-(id)initWithByteSizeFieldName:(id)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldName:(id)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
@end

