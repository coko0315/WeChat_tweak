//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class WCBizLoadingView;

@interface WCPayLoadingViewController : WCPayBaseViewController
{
    WCBizLoadingView *m_loadView;
    id <WCPayLoadingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFail;
- (void)didReceiveMemoryWarning;
- (void)getWalletUrl;
- (void)onReturn;
- (void)showErrorAlert;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)viewDidPush:(_Bool)arg1;

@end

