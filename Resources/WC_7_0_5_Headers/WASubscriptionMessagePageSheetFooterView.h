//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessagePageSheetFooterView : MMUIView
{
    id <WASubscriptionMessagePageSheetFooterViewDelegate> _delegate;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIButton *_declineButton;
    UIButton *_keepOptionButton;
}

- (void).cxx_destruct;
- (void)addSubviews:(id)arg1;
- (double)calculateHeight:(double)arg1;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(nonatomic) __weak id <WASubscriptionMessagePageSheetFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithViewModel:(id)arg1;
@property(retain, nonatomic) UIButton *keepOptionButton; // @synthesize keepOptionButton=_keepOptionButton;
- (void)layoutSubviews;
- (void)loadAllSubviews;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onConfirmButtonClicked:(id)arg1;
- (void)onDeclineButtonClicked:(id)arg1;
- (void)onKeepOptionButtonClicked:(id)arg1;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)showDeclineButton;
- (_Bool)showKeepOptionButton;
- (void)updateConfirmButtonStatus;
- (void)updateStatus;

@end

