//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImage, UIView;

@interface WAProfileRatingView : UIControl
{
    UIView *_starBackgroundView;
    UIView *_starForegroundView;
    _Bool _isHandleTouch;
    _Bool _isUpdateProcess;
    unsigned int _numberOfStar;
    float _score;
    unsigned long long _displayType;
    double _elementMargin;
    UIImage *_forgroundImage;
    UIImage *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) double elementMargin; // @synthesize elementMargin=_elementMargin;
@property(retain, nonatomic) UIImage *forgroundImage; // @synthesize forgroundImage=_forgroundImage;
- (id)init;
- (id)initWithNumberOfStar:(unsigned int)arg1;
@property(nonatomic) _Bool isHandleTouch; // @synthesize isHandleTouch=_isHandleTouch;
@property(nonatomic) _Bool isUpdateProcess; // @synthesize isUpdateProcess=_isUpdateProcess;
@property(nonatomic) unsigned int numberOfStar; // @synthesize numberOfStar=_numberOfStar;
@property(nonatomic) float score; // @synthesize score=_score;
- (void)setScore:(float)arg1 withAnimation:(_Bool)arg2;
- (void)setScore:(float)arg1 withAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sizeToFit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateForegroundView;
- (void)updateScoreWithTouch:(id)arg1 hasNotify:(_Bool)arg2;
- (double)widthForCompleteNum:(float)arg1 randomNum:(float)arg2;

@end
