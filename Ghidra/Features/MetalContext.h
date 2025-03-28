//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FramebufferDescriptor, NSMutableArray, NSMutableDictionary;
@protocol MTLDepthStencilState, MTLTexture;

@interface MetalContext : NSObject
{
    id <MTLDepthStencilState> _depthStencilState;
    FramebufferDescriptor *_framebufferDescriptor;
    NSMutableDictionary *_renderPipelineStateCache;
    id <MTLTexture> _fontTexture;
    NSMutableArray *_bufferCache;
    double _lastBufferCachePurge;
}

- (void).cxx_destruct;
@property(nonatomic) double lastBufferCachePurge; // @synthesize lastBufferCachePurge=_lastBufferCachePurge;
@property(retain, nonatomic) NSMutableArray *bufferCache; // @synthesize bufferCache=_bufferCache;
@property(retain, nonatomic) id <MTLTexture> fontTexture; // @synthesize fontTexture=_fontTexture;
@property(retain, nonatomic) NSMutableDictionary *renderPipelineStateCache; // @synthesize renderPipelineStateCache=_renderPipelineStateCache;
@property(retain, nonatomic) FramebufferDescriptor *framebufferDescriptor; // @synthesize framebufferDescriptor=_framebufferDescriptor;
@property(retain, nonatomic) id <MTLDepthStencilState> depthStencilState; // @synthesize depthStencilState=_depthStencilState;
- (void)renderDrawData:(void *)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3;
- (void)setupRenderState:(void *)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3 renderPipelineState:(id)arg4 vertexBuffer:(id)arg5 vertexBufferOffset:(unsigned long long)arg6;
- (void)emptyRenderPipelineStateCache;
- (id)_renderPipelineStateForFramebufferDescriptor:(id)arg1 device:(id)arg2;
- (id)renderPipelineStateForFrameAndDevice:(id)arg1;
- (void)enqueueReusableBuffer:(id)arg1;
- (id)dequeueReusableBufferOfLength:(unsigned long long)arg1 device:(id)arg2;
- (void)makeFontTextureWithDevice:(id)arg1;
- (void)makeDeviceObjectsWithDevice:(id)arg1;
- (id)init;

@end

