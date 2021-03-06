//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class MMBadgeView, MMWebImageView, NSString, UIView;

@interface EmoticonTabItemView : MMUIView <MMWebImageViewDelegate>
{
    _Bool _needConvertToGrayImage;
    _Bool _selected;
    _Bool _darkMode;
    _Bool _shouldShowSeperatorLine;
    _Bool _hasRedPoint;
    MMWebImageView *_m_webImageView;
    UIView *_lineView;
    UIView *_backgroundView;
    MMBadgeView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) _Bool hasRedPoint; // @synthesize hasRedPoint=_hasRedPoint;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMWebImageView *m_webImageView; // @synthesize m_webImageView=_m_webImageView;
@property(nonatomic) _Bool needConvertToGrayImage; // @synthesize needConvertToGrayImage=_needConvertToGrayImage;
- (void)onLoadImageOK:(id)arg1;
- (void)refreshView;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)setNormalImage:(id)arg1;
- (void)setNormalImageUrl:(id)arg1;
@property(nonatomic) _Bool shouldShowSeperatorLine; // @synthesize shouldShowSeperatorLine=_shouldShowSeperatorLine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

