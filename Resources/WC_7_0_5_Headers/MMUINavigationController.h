//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, UIViewController;

@interface MMUINavigationController : UINavigationController <UINavigationControllerDelegate>
{
    UIViewController *_popingViewController;
}

- (void).cxx_destruct;
- (id)DispatchPopViewControllerAnimated:(_Bool)arg1;
- (id)init;
- (id)initWithRootViewController:(id)arg1;
- (void)layoutViewsForTaskBar;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
