/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSDictionary, NSString, AVPlayerController, CALayer;

@interface WebAVPlayerLayer : CALayer {

	RetainPtr<WebAVPlayerController>* _avPlayerController;
	RetainPtr<CALayer>* _videoSublayer;
	RetainPtr<NSString>* _videoGravity;
	BOOL _readyForDisplay;
	NSDictionary* _pixelBufferAttributes;
	CGSize _videoDimensions;
	CGRect _modelVideoLayerFrame;

}

@property (nonatomic,retain) NSString * videoGravity; 
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (nonatomic,retain) CALayer * videoSublayer; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes;                         //@synthesize pixelBufferAttributes=_pixelBufferAttributes - In the implementation block
@property (assign) CGSize videoDimensions;                                               //@synthesize videoDimensions=_videoDimensions - In the implementation block
@property (assign) CGRect modelVideoLayerFrame;                                          //@synthesize modelVideoLayerFrame=_modelVideoLayerFrame - In the implementation block
+(id)keyPathsForValuesAffectingVideoRect;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(NSString *)videoGravity;
-(CGRect)videoRect;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)videoDimensions;
-(void)setVideoDimensions:(CGSize)arg1 ;
-(void)resolveBounds;
-(CGRect)modelVideoLayerFrame;
-(void)setModelVideoLayerFrame:(CGRect)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setVideoSublayer:(CALayer *)arg1 ;
-(CALayer *)videoSublayer;
-(void)setReadyForDisplay:(BOOL)arg1 ;
@end

