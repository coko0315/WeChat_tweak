//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPercentDrivenInteractiveTransition.h"

@class UIPanGestureRecognizer;

@interface WCTransitionTeachPercentDerivenInteractive : UIPercentDrivenInteractiveTransition
{
    _Bool _hasLightShock;
    double _moveDistance;
    UIPanGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)gestureRecognizeDidUpdate:(id)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) _Bool hasLightShock; // @synthesize hasLightShock=_hasLightShock;
- (id)initWithGestureRecognizer:(id)arg1;
@property(nonatomic) double moveDistance; // @synthesize moveDistance=_moveDistance;
- (double)percentForGesture:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;

@end

