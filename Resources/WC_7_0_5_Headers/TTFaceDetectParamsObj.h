//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface TTFaceDetectParamsObj : NSObject
{
    struct _IplImage *_cvImage;
    struct Mat *_pOriginImageMat;
    struct Mat *_pDetectImageMat;
    struct Mat *_pGrayImageMat;
    UIImage *_image;
    long long _min_face_size;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct Mat *)getOriginImageMat;
- (struct _IplImage *)getOriginPlImage;
- (struct Mat *)getTrackGrayImageMat;
- (struct Mat *)getTrackImageMat;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) double imageSizeShortEdge;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 gray:(_Bool)arg2;
@property(nonatomic) long long min_face_size; // @synthesize min_face_size=_min_face_size;

@end

