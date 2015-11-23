/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource {

	BOOL _usesIOSurface;
	CGSize _framebufferSize;
	C3DFramebufferRef _framebuffer;

}
-(void)_bindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)_createFramebufferWithEngineContext:(C3DEngineContextRef)arg1 size:(CGSize)arg2 ;
-(C3DTextureRef)__prepareFramebufferWithSize:(CGSize)arg1 withEngineContext:(C3DEngineContextRef)arg2 textureSampler:(_C3DTextureSampler*)arg3 needsStencil:(BOOL)arg4 ;
-(void)_buildMipmaps:(C3DEngineContextRef)arg1 ;
-(void)_unbindFramebuffer:(C3DEngineContextRef)arg1 ;
@end

