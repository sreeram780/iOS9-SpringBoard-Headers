/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalKit/MTKTextureLoaderData.h>

@interface MTKTextureLoaderPVR : MTKTextureLoaderData {

	unsigned _pvrFormat;
	unsigned _numSurfaces;

}
+(BOOL)isPVRFile:(id)arg1 ;
-(BOOL)loadData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)uploadDataWithOptions:(id)arg1 ;
-(BOOL)determineFormat:(unsigned)arg1 options:(id)arg2 ;
-(void)determineBlockSize:(unsigned long long*)arg1 blocksWide:(unsigned long long*)arg2 blocksHigh:(unsigned long long*)arg3 bytesPerBlock:(unsigned long long*)arg4 fromFormat:(unsigned)arg5 width:(unsigned long long)arg6 andHeight:(unsigned long long)arg7 ;
-(void)dealloc;
@end

