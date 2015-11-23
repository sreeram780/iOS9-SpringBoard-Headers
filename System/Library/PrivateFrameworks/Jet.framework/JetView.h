/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Jet.framework/Jet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Jet/Jet-Structs.h>
#import <UIKit/UIView.h>

@protocol MTLDevice;
@class CAMetalLayer, CAEAGLLayer, EAGLContext, NSTimer;

@interface JetView : UIView {

	shared_ptr<jet_context>* _ctx;
	shared_ptr<jet_framebuffer>* _framebuffer;
	CAMetalLayer* _metalLayer;
	id<MTLDevice> _device;
	CAEAGLLayer* _eaglLayer;
	EAGLContext* _glContext;
	shared_ptr<jet_texture>* _frameBufferColorTexture;
	shared_ptr<jet_texture>* _frameBufferDepthStencilTexture;
	unsigned _colorRenderBuffer;
	BOOL _didRunOnce;
	double _beginTime;
	NSTimer* _drawTimer;
	shared_ptr<jet_fence>* _renderFence;

}

@property (readonly) shared_ptr<jet_context>* context; 
+(Class)layerClass;
+(BOOL)canRenderToContextType:(unsigned)arg1 ;
-(void)onInit;
-(void)runOnce;
-(void)_reshape;
-(void)remakeFramebuffer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)_commonInit;
-(void)_createContext;
-(shared_ptr<jet_context>*)context;
-(BOOL)isOpaque;
-(void)_bindGLContext;
-(void)_renderCallback;
-(unsigned)contextType;
-(void)renderInFramebuffer:(shared_ptr<jet_framebuffer>*)arg1 forTime:(double)arg2 ;
-(shared_ptr<jet_texture>*)createTextureFromImageNamed:(id)arg1 ;
@end

