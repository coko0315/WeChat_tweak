//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMKViewOnClickCallback, MMKViewOnTouchCallback;

@interface KindaUIView : UIView
{
    unsigned long long m_cornerType;
    float m_radiusValue;
    _Bool m_cornerChange;
    _Bool _enableHighlight;
    id <KindaUIViewDelegate> _delegate;
    UIView *_hightLightMask;
    MMKViewOnTouchCallback *_touchCallback;
    MMKViewOnClickCallback *_clickCallback;
}

- (void).cxx_destruct;
@property(retain) MMKViewOnClickCallback *clickCallback; // @synthesize clickCallback=_clickCallback;
@property(nonatomic) __weak id <KindaUIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableHighlight; // @synthesize enableHighlight=_enableHighlight;
- (float)getBottomLeftCornerRadius;
- (float)getBottomRightCornerRadius;
- (float)getTopLeftCornerRadius;
- (float)getTopRightCornerRadius;
@property(retain, nonatomic) UIView *hightLightMask; // @synthesize hightLightMask=_hightLightMask;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (void)setBottomRightCornerRadius:(float)arg1;
- (void)setTopLeftCornerRadius:(float)arg1;
- (void)setTopRightCornerRadius:(float)arg1;
@property(retain) MMKViewOnTouchCallback *touchCallback; // @synthesize touchCallback=_touchCallback;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

