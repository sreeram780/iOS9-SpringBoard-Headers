/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNSmileDetector : NSObject {

	CNNModel* _model;
	CNNData* _input;

}
-(id)init;
-(int)detectSmileForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 smile:(BOOL*)arg3 ;
@end

