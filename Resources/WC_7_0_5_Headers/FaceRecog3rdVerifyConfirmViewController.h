//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"

@class FaceRecog3rdVerifyConfirmLogic, MMTableViewInfo, MMUILabel, MMWebImageView, NSString, RichTextView, UIButton, UIImageView;

@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController <ILinkEventExt>
{
    UIButton *_readAgreementBtn;
    RichTextView *_agreementView;
    UIButton *_feedbackButton;
    _Bool _bAgreement;
    UIImageView *_imageCheckBox;
    MMWebImageView *_iconView;
    MMUILabel *_nameLabel;
    MMUILabel *_sloganLabel;
    UIButton *_confirmInvokeBtn;
    id <FaceRecog3rdVerifyConfirmViewControllerDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)initBottomRulesView:(id)arg1;
- (void)initConfirmButton:(id)arg1;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (id)initWithAppId:(id)arg1;
- (void)onCancel;
- (void)onClickCheckBox;
- (void)onFeedback;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStartFaceReco;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)updateView:(id)arg1;
- (_Bool)useBlackStatusbar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

