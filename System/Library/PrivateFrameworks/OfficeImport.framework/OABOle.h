/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABOle : NSObject
+(id)stringForCLSID:(SsrwOO_GUID)arg1 ;
+(BOOL)isBiffCLSID:(id)arg1 ;
+(id)readCLSIDFromStream:(SsrwOOStream*)arg1 ;
+(id)readAnsiStringFromStream:(SsrwOOStream*)arg1 ;
+(id)read4ByteFromStream:(SsrwOOStream*)arg1 ;
+(id)readUnicodeStringFromStream:(SsrwOOStream*)arg1 ;
+(id)readFromData:(id)arg1 cancel:(id)arg2 ;
+(BOOL)readSharedInfoFor:(id)arg1 fromStorage:(SsrwOOStorage*)arg2 ;
+(BOOL)isChart:(id)arg1 ;
+(id)readFromParentStorage:(SsrwOOStorage*)arg1 storageName:(id)arg2 cancel:(id)arg3 ;
+(id)readCompressedFromStream:(SsrwOOStream*)arg1 compressedSize:(unsigned)arg2 uncompressedSize:(unsigned)arg3 cancel:(id)arg4 ;
+(id)readFromStream:(SsrwOOStream*)arg1 size:(unsigned)arg2 cancel:(id)arg3 ;
@end

