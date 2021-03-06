//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MMMagnifiterView, MMSelectCoverView, MMTableView, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, WeNoteDataController;

@interface WNSelectionView : MMUIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *m_oPanGestureRecognizer;
    UITapGestureRecognizer *m_tapGestureRecognizer;
    MMSelectCoverView *_coverView;
    _Bool _bTouchLeft;
    _Bool _bTouchRight;
    double _startOffsetY;
    _Bool _bSelecting;
    id <WNSelectionViewDelegate> delegate;
    MMTableView *_tableView;
    WeNoteDataController *_dataController;
    MMMagnifiterView *_magnifiterView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSelecting; // @synthesize bSelecting=_bSelecting;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelSelect;
@property(nonatomic) __weak WeNoteDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak id <WNSelectionViewDelegate> delegate; // @synthesize delegate;
- (void)didReloadView;
- (void)hideMenuItems;
- (void)hideView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) MMMagnifiterView *magnifiterView; // @synthesize magnifiterView=_magnifiterView;
- (id)magnifiterView:(double)arg1;
- (void)onCopy:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)onPanAction:(id)arg1;
- (void)onPaste:(id)arg1;
- (void)onTapAction:(id)arg1;
- (void)removeMaginfierView;
- (void)setBold:(id)arg1;
- (void)setSelectBottomPos:(double)arg1;
- (void)setSelectLeftPosTextView:(id)arg1 range:(id)arg2 end:(_Bool)arg3;
- (void)setSelectRightPosTextView:(id)arg1 range:(id)arg2 end:(_Bool)arg3;
- (void)setSelectTopPos:(double)arg1;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setUnBold:(id)arg1;
- (void)showCoverView;
- (void)showCoverViewWithMenue:(_Bool)arg1;
- (void)showMenuItems;
- (void)updateCoverViewLeft:(_Bool)arg1 Right:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

