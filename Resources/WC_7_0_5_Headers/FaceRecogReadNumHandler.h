//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseHandler.h"

#import "FaceRecogGuideViewDelegate.h"
#import "FaceRecogReadNumViewDelegate.h"

@class FaceProHandle, FaceRecogReadNumGuideView, FaceRecogReadNumProcessor, FaceRecogReadNumbersView, NSString;

@interface FaceRecogReadNumHandler : FaceRecogBaseHandler <FaceRecogGuideViewDelegate, FaceRecogReadNumViewDelegate>
{
    FaceRecogReadNumGuideView *_guideVc;
    FaceRecogReadNumbersView *_verifyView;
    FaceProHandle *_detector;
    FaceRecogReadNumProcessor *_readNumProcessor;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) FaceProHandle *detector; // @synthesize detector=_detector;
- (void)didAccessAudio;
- (void)didAccessConfig;
- (void)didAccessVideo;
- (void)didDetectFace;
- (void)doStartDetectFace;
- (void)faceRecogDidStartChangeToReadNumberMode;
- (void)faceRecogVerifyViewNumberViewDidEndAnimation;
- (void)initProcessor;
- (void)initView;
- (void)onFaceRecogGuideFinished;
@property(retain, nonatomic) FaceRecogReadNumProcessor *readNumProcessor; // @synthesize readNumProcessor=_readNumProcessor;
- (void)reportUserCancel;
- (void)showView;
- (void)startRecognizingProcedure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

