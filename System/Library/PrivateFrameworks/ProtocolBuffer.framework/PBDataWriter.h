/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PBMutableData;

@interface PBDataWriter : NSObject {

	PBMutableData* _data;

}
-(void)writeDouble:(double)arg1 forTag:(unsigned short)arg2 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)writeBigEndianFixed16:(unsigned short)arg1 ;
-(void)writeBigEndianShortThenString:(id)arg1 ;
-(void)writeData:(id)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFloat:(float)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFixed32:(unsigned)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint32:(unsigned)arg1 forTag:(unsigned short)arg2 ;
-(void)writeBOOL:(BOOL)arg1 forTag:(unsigned short)arg2 ;
-(void)writeString:(id)arg1 forTag:(unsigned short)arg2 ;
-(id)immutableData;
-(unsigned long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)writeData:(id)arg1 ;
-(void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeBareVarint:(unsigned long long)arg1 ;
-(void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint8:(unsigned char)arg1 ;
-(void)writeSint32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt8:(char)arg1 ;
-(void)writeBigEndianFixed32:(unsigned)arg1 ;
-(void)writeProtoBuffer:(id)arg1 ;
-(void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
@end

