/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)visibilityResultBuffer;
-(void)setFramebufferWidth:(unsigned long long)arg1 ;
-(unsigned long long)framebufferWidth;
-(void)setFramebufferHeight:(unsigned long long)arg1 ;
-(unsigned long long)framebufferHeight;
-(void)setExpandedClipRange:(BOOL)arg1 ;
-(BOOL)expandedClipRange;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(id)colorAttachments;
-(id)depthAttachment;
-(id)stencilAttachment;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

