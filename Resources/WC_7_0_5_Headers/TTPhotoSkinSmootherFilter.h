//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class MCFaceBrightnessAverageFilter2, NSArray, TTGpuImageBlackVarianceFilterGroup, TTNLMeansDenoiseFilter;

@interface TTPhotoSkinSmootherFilter : GPUImageFilterGroup
{
    _Bool _photoMode;
    TTGpuImageBlackVarianceFilterGroup *_varianceFilterGroup;
    _Bool _useBeautyB;
    _Bool _onlyFaceRectSmooth;
    _Bool _enableVideoDenoise;
    float _smoothStrength;
    float _alphaOpacity;
    float _sharpFactor;
    double _blendSkinMask;
    long long _photoDenoiseLevel;
    NSArray *_faceRects;
    MCFaceBrightnessAverageFilter2 *_faceBrightnessAverageFilter2;
    TTNLMeansDenoiseFilter *_photoDenoiseFilter;
}

- (void).cxx_destruct;
@property(nonatomic) float alphaOpacity; // @synthesize alphaOpacity=_alphaOpacity;
@property(nonatomic) double blendSkinMask; // @synthesize blendSkinMask=_blendSkinMask;
- (id)borderBlurFilter;
@property(nonatomic) _Bool enableVideoDenoise; // @synthesize enableVideoDenoise=_enableVideoDenoise;
@property(retain, nonatomic) MCFaceBrightnessAverageFilter2 *faceBrightnessAverageFilter2; // @synthesize faceBrightnessAverageFilter2=_faceBrightnessAverageFilter2;
@property(retain, nonatomic) NSArray *faceRects; // @synthesize faceRects=_faceRects;
- (id)init;
- (id)initWithPhotoMode:(_Bool)arg1;
@property(nonatomic) _Bool onlyFaceRectSmooth; // @synthesize onlyFaceRectSmooth=_onlyFaceRectSmooth;
@property(retain, nonatomic) TTNLMeansDenoiseFilter *photoDenoiseFilter; // @synthesize photoDenoiseFilter=_photoDenoiseFilter;
@property(nonatomic) long long photoDenoiseLevel; // @synthesize photoDenoiseLevel=_photoDenoiseLevel;
- (void)removeAllTargets;
@property(nonatomic) float sharpFactor; // @synthesize sharpFactor=_sharpFactor;
@property(nonatomic) float smoothStrength; // @synthesize smoothStrength=_smoothStrength;
@property(nonatomic) _Bool useBeautyB; // @synthesize useBeautyB=_useBeautyB;
- (void)setupFilterChain;
- (void)setupFilterChain:(_Bool)arg1;
- (void)setupHairMaskImage:(id)arg1;
- (void)updateFilterParamsWithPreviewScaleSize:(struct CGSize)arg1;

@end

