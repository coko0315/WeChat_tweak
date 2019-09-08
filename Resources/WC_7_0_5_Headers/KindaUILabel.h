//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSArray, NSAttributedString, UIColor;

@interface KindaUILabel : UILabel
{
    id <KindaUILabelDelegate> _delegate;
    NSArray *_highlightRanges;
    UIColor *_highlightColor;
    NSAttributedString *_backupAttributedText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *backupAttributedText; // @synthesize backupAttributedText=_backupAttributedText;
@property(nonatomic) __weak id <KindaUILabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
- (long long)indexInLocation:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)rangeForIndex:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
