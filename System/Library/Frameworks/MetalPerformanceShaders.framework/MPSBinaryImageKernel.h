/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSKernel.h>

@interface MPSBinaryImageKernel : MPSKernel {

	SCD_Struct_MP7 _primaryOffset;
	SCD_Struct_MP7 _secondaryOffset;
	unsigned long long _primaryEdgeMode;
	unsigned long long _secondaryEdgeMode;
	SCD_Struct_MP9 _clipRect;
	int _checkFlags;

}

@property (assign,nonatomic) SCD_Struct_MP7 primaryOffset;                      //@synthesize primaryOffset=_primaryOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP7 secondaryOffset;                    //@synthesize secondaryOffset=_secondaryOffset - In the implementation block
@property (assign,nonatomic) unsigned long long primaryEdgeMode;                //@synthesize primaryEdgeMode=_primaryEdgeMode - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryEdgeMode;              //@synthesize secondaryEdgeMode=_secondaryEdgeMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP9 clipRect;                           //@synthesize clipRect=_clipRect - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(long long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 primaryTexture:(id)arg3 secondaryTexture:(id)arg4 destinationTexture:(id)arg5 callInfo:(const SCD_Struct_MP11*)arg6 ;
-(BOOL)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 inPlaceSecondaryTexture:(id*)arg3 fallbackCopyAllocator:(/*^block*/id)arg4 ;
-(BOOL)encodeToCommandBuffer:(id)arg1 inPlacePrimaryTexture:(id*)arg2 secondaryTexture:(id)arg3 fallbackCopyAllocator:(/*^block*/id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 secondaryTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(SCD_Struct_MP4)primarySourceRegionForDestinationSize:(SCD_Struct_MP8)arg1 ;
-(SCD_Struct_MP4)secondarySourceRegionForDestinationSize:(SCD_Struct_MP8)arg1 ;
-(SCD_Struct_MP7)primaryOffset;
-(void)setPrimaryOffset:(SCD_Struct_MP7)arg1 ;
-(SCD_Struct_MP7)secondaryOffset;
-(void)setSecondaryOffset:(SCD_Struct_MP7)arg1 ;
-(unsigned long long)primaryEdgeMode;
-(void)setPrimaryEdgeMode:(unsigned long long)arg1 ;
-(unsigned long long)secondaryEdgeMode;
-(void)setSecondaryEdgeMode:(unsigned long long)arg1 ;
-(SCD_Struct_MP9)clipRect;
-(void)setClipRect:(SCD_Struct_MP9)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end

