//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTMicBaseFaceFilter.h"

@class GLKTextureInfo, TTMicBaseCameraBlendMaterial;

@interface TTMicBaseCameraBlendFilter : TTMicBaseFaceFilter
{
    unsigned int uniformBlend;
    unsigned int uniformAlphaType;
    float randomValue1;
    float randomValue2;
    TTMicBaseCameraBlendMaterial *_material;
    GLKTextureInfo *_materialTexInfo;
}

- (void).cxx_destruct;
- (void)appendItem:(id)arg1;
- (void)baseDraw;
- (void)customWithBaseFilterParam:(id)arg1 bundlePath:(id)arg2;
- (void)dealloc;
- (void)finishDraw;
- (id)init;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
@property(retain, nonatomic) TTMicBaseCameraBlendMaterial *material; // @synthesize material=_material;
@property(retain, nonatomic) GLKTextureInfo *materialTexInfo; // @synthesize materialTexInfo=_materialTexInfo;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;

@end

