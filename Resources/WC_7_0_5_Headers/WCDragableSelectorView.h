//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCSelectorView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WCCollectViewReorderDragDelegate.h"
#import "WCCollectionViewDataSource.h"

@class NSMutableDictionary, NSString, WCCollectViewReorder, WCDragCollectionView;

@interface WCDragableSelectorView : WCSelectorView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCCollectionViewDataSource, WCCollectViewReorderDragDelegate>
{
    WCDragCollectionView *_collectionView;
    WCCollectViewReorder *_collectionViewReorder;
    NSMutableDictionary *_cellImageViewDic;
    id <WCDragableSelectorViewDelegate> _dragDelegate;
}

- (void).cxx_destruct;
- (double)calCollectionViewWidth;
- (int)calMaxImagePerRow;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
@property(nonatomic) __weak id <WCDragableSelectorViewDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
- (id)getCellImageViewArray;
- (id)init;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
- (_Bool)onEndCollectionViewCellMovement:(long long)arg1;
- (void)reload;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)xd_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)xd_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

