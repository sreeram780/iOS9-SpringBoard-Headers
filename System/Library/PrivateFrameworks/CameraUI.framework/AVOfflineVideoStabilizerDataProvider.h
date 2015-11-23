/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
@required
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA2*)arg2 stabilizer:(id)arg3;
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA2*)arg2 stabilizer:(id)arg3;

@end

