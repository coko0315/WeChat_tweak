//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ITopStoryColikeExt.h"
#import "MMGrowTextViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class ColikeAppInfo, MMGrowTextView, MMUIButton, MMUILabel, NSString, UIScrollView, WSWowShareReceiverVideoContentView;

@interface WSWowShareGlobalReceiverViewController : MMUIViewController <MMGrowTextViewDelegate, ITopStoryColikeExt, UIScrollViewDelegate>
{
    _Bool _disappearIsFromSubmit;
    UIScrollView *_contentView;
    WSWowShareReceiverVideoContentView *_videoContentView;
    MMGrowTextView *_imputField;
    MMUILabel *_textNumView;
    MMUILabel *_textLimitView;
    MMUIButton *_wowEduButton;
    NSString *_paramString;
    ColikeAppInfo *_appInfo;
    CDUnknownBlockType _resultBlock;
}

+ (_Bool)canPresentWowGloabalReceiverPage:(id)arg1 appId:(id)arg2 appName:(id)arg3;
- (void).cxx_destruct;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)analyseData;
@property(retain, nonatomic) ColikeAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(nonatomic) _Bool disappearIsFromSubmit; // @synthesize disappearIsFromSubmit=_disappearIsFromSubmit;
- (void)enterCommentDone:(id)arg1;
- (void)foldSelf;
@property(retain, nonatomic) MMGrowTextView *imputField; // @synthesize imputField=_imputField;
- (void)initNavBar;
- (void)initView;
- (id)initWithOpenParamString:(id)arg1 appId:(id)arg2 appName:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)navigationBarBackgroundColor;
- (void)onCancel;
- (void)onDone;
- (void)onRequestColikePostEnd:(_Bool)arg1 errorMsg:(id)arg2;
- (void)openWowEducatePage;
@property(retain, nonatomic) NSString *paramString; // @synthesize paramString=_paramString;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) MMUILabel *textLimitView; // @synthesize textLimitView=_textLimitView;
@property(retain, nonatomic) MMUILabel *textNumView; // @synthesize textNumView=_textNumView;
@property(retain, nonatomic) WSWowShareReceiverVideoContentView *videoContentView; // @synthesize videoContentView=_videoContentView;
@property(retain, nonatomic) MMUIButton *wowEduButton; // @synthesize wowEduButton=_wowEduButton;
- (void)updateTextNoteViews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
