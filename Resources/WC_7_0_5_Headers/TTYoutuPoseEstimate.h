//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTYoutuPoseEstimate : NSObject
{
    struct YtPoseEstimateSdk *_poseSdk;
    _Bool _enableCompute3D;
    _Bool _isManuleFov;
    float _configFov;
    double _cameraFov;
}

+ (_Bool)GlobalInit;
+ (_Bool)GlobalInitWithBundlePath:(id)arg1;
+ (_Bool)GlobalRelease;
+ (id)sdkVersion;
@property double cameraFov; // @synthesize cameraFov=_cameraFov;
- (void)clearResource;
@property float configFov; // @synthesize configFov=_configFov;
- (void)dealloc;
@property _Bool enableCompute3D; // @synthesize enableCompute3D=_enableCompute3D;
- (int)estimate:(id)arg1 inShape:(struct TC_FaceShape *)arg2 points:(vector_592825f0 *)arg3;
- (int)estimate:(id)arg1 inShape:(struct TC_FaceShape *)arg2 points:(vector_592825f0 *)arg3 enable3D:(_Bool)arg4;
- (int)estimate:(id)arg1 points:(vector_592825f0 *)arg2 fov:(double)arg3 enable3D:(_Bool)arg4;
- (int)estimateOrthographic:(id)arg1 inShape:(struct TC_FaceShape *)arg2 points:(vector_592825f0 *)arg3 enable3D:(_Bool)arg4;
- (int)estimatePerspective:(id)arg1 points:(vector_592825f0 *)arg2 fov:(double)arg3 enable3D:(_Bool)arg4;
- (id)init;
@property _Bool isManuleFov; // @synthesize isManuleFov=_isManuleFov;

@end

