//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUILabel.h"

@interface NamePreLabel : MMUILabel
{
    struct CGRect m_superFrame;
    double m_leftMargin;
    double m_rightMargin;
}

- (id)initWithFrame:(struct CGRect)arg1 leftMargin:(double)arg2;
- (void)layoutSelf;
- (void)setText:(id)arg1;
- (void)updateRightMargin:(double)arg1;

@end

