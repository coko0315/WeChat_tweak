//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIColor;

@interface EditImageTextBgView : UIView
{
    double _maxWidth;
    NSMutableArray *_backgroundRects;
    UIColor *_textBgColor;
    double _scale;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *backgroundRects; // @synthesize backgroundRects=_backgroundRects;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)drawRect:(struct CGRect)arg1;
- (void)getMaxBgRects;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *textBgColor; // @synthesize textBgColor=_textBgColor;

@end

