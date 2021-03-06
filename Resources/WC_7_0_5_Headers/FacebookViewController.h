//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "IMMFacebookMgrExt.h"

@class MMTableViewInfo, NSString, UIButton;

@interface FacebookViewController : AccountBaseViewController <IMMFacebookMgrExt>
{
    UIButton *m_bindBtn;
    UIButton *m_unBindBtn;
    UIButton *m_doneBtn;
    MMTableViewInfo *m_tableViewInfo;
    id <FacebookViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)autoDismis;
- (void)bind;
- (void)dealloc;
- (void)disMiss;
- (void)done;
- (void)initFooterView;
- (void)initHeaderView;
@property(nonatomic) __weak id <FacebookViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onUnBindAccount;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onUnbind;
- (void)updateTableCell;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

