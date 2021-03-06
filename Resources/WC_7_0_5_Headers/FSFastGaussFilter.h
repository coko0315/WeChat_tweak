//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoPassFilter.h"

@interface FSFastGaussFilter : GPUImageTwoPassFilter
{
    float gaussVertex[8];
    float gaussFragment[8];
    int gaussTexelWidthUniform;
    int gaussTexelHeightUniform;
    double _gaussValue;
    long long _blurRadius;
    double _resizeRatio;
}

@property(nonatomic) long long blurRadius; // @synthesize blurRadius=_blurRadius;
- (id)framebufferForOutput;
@property(nonatomic) double gaussValue; // @synthesize gaussValue=_gaussValue;
- (id)init;
- (void)removeOutputFramebuffer;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
@property(nonatomic) double resizeRatio; // @synthesize resizeRatio=_resizeRatio;
- (void)switchToVertexShader:(id)arg1 fragmentShader:(id)arg2;

@end

