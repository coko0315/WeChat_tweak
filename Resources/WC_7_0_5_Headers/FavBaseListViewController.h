//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavBaseTableDataControllerDelegate.h"
#import "IFavoritesExt.h"

@class FavBaseTableDataController, MMTableView, NSString, UIColor, UIView;

@interface FavBaseListViewController : MMUIViewController <FavBaseTableDataControllerDelegate, IFavoritesExt>
{
    MMTableView *m_tableView;
    UIView *m_headView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    FavBaseTableDataController *m_dataController;
    unsigned int m_curMinItemUpdateTime;
    NSString *_defaultTitle;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
}

- (void).cxx_destruct;
- (void)HideLoadingView;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)addItemList:(id)arg1;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (id)getCurrentViewController;
- (double)getHeightForItem:(id)arg1;
- (void)hideLoadingView;
- (id)init;
- (void)initData;
- (void)initEmptyView;
- (void)initHeaderView;
- (void)initLoadingView;
- (void)initNavigationBar;
- (void)initTableView;
@property(readonly, nonatomic) _Bool itemEditable;
- (void)onLoadMore;
- (void)onShowEmptyView;
- (void)reloadContent;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

