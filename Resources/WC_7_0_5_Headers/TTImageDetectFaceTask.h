//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTImageDetectTaskBase.h"

@class YoutuDetector;

@interface TTImageDetectFaceTask : TTImageDetectTaskBase
{
    _Bool _enableStillDetectMode;
    _Bool _enableAdditionDetectFaces;
    _Bool _enableAutoFaceTrackFixAccuracy;
    int _additionTrackTimes;
    YoutuDetector *_detector;
}

+ (void)correctFaceYawAndPitch:(id)arg1 orientation:(long long)arg2;
+ (double)defaultFaceDetectMaxEdge;
+ (id)filterFeature:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void).cxx_destruct;
- (id)_trackImageObj:(id)arg1 systemFace:(id)arg2 transform:(struct CGAffineTransform)arg3 faceCropRect:(struct CGRect)arg4;
@property int additionTrackTimes; // @synthesize additionTrackTimes=_additionTrackTimes;
- (void)cleanupDetectorParams;
- (void)dealloc;
@property(readonly, nonatomic) YoutuDetector *detector; // @synthesize detector=_detector;
@property _Bool enableAdditionDetectFaces; // @synthesize enableAdditionDetectFaces=_enableAdditionDetectFaces;
@property(nonatomic) _Bool enableAutoFaceTrackFixAccuracy; // @synthesize enableAutoFaceTrackFixAccuracy=_enableAutoFaceTrackFixAccuracy;
@property(nonatomic) _Bool enableStillDetectMode; // @synthesize enableStillDetectMode=_enableStillDetectMode;
- (id)init;
- (void)setupDetectParamsWithItem:(id)arg1;
- (void)setupDetectorParams;
- (id)trackImage:(id)arg1 systemFace:(id)arg2 transform:(struct CGAffineTransform)arg3 faceCropRect:(struct CGRect)arg4;
- (id)trackImage:(id)arg1 transform:(struct CGAffineTransform)arg2 faceCropRect:(struct CGRect)arg3;
- (id)trackImageObj:(id)arg1 faceCropRect:(struct CGRect)arg2;

@end

