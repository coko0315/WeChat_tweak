//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "InternalFavorDescViewDelegate.h"
#import "WCPayAddressRemarkViewDelegate.h"
#import "WCPayLotteryViewDelegate.h"

@class InternalFavorDescView, NSString, UIButton, UIImageView, UILabel, UIScrollView, WCPayControlData, WCPayLineSeparatorView, WCPayLotteryView, WCPayWebImageView;

@interface WCPayTransferMoneyPaidSuccessViewV2 : UIView <WCPayAddressRemarkViewDelegate, InternalFavorDescViewDelegate, WCPayLotteryViewDelegate>
{
    _Bool _m_expendFavor;
    _Bool _m_expendAddress;
    id <WCPayTransferMoneyPaidSuccessViewV2Delegate> _m_delegate;
    WCPayControlData *_m_data;
    UIImageView *_m_WeChatPayIcon;
    UILabel *_m_successLabel;
    UILabel *_m_tipsLabel;
    UILabel *_m_feeLabel;
    UILabel *_m_moneyLabel;
    UIView *_m_firstLineView;
    UIView *_m_lineView;
    UILabel *_m_receiverLabel;
    UILabel *_m_receiverValueLabel;
    UIView *_m_receiverHeadImageView;
    UILabel *_m_receiveDescLabel;
    UILabel *_m_receiveDescValueLabel;
    UILabel *_m_senderLabel;
    UILabel *_m_senderValueLabel;
    UILabel *_m_chargeFeeLabel;
    UILabel *_m_chargeFeeValueLabel;
    InternalFavorDescView *_m_favorDescView;
    UIButton *_m_doneButton;
    UILabel *_m_realMoneyLabel;
    UILabel *_m_realMoneyValueLabel;
    WCPayLotteryView *_m_lotteryView;
    double _m_lastElemBottomY;
    WCPayWebImageView *_backgroundImageView;
    double _m_doneButtonMarginUp;
    UIScrollView *_m_scrollView;
    UILabel *_m_originPriceLabel;
    UILabel *_m_originPriceValueLabel;
    WCPayLineSeparatorView *_m_addressRemarkView;
    UILabel *_noticeTitle;
    UILabel *_noticeDesc;
}

- (void).cxx_destruct;
- (void)adjustHeadImgAndReceiverValue;
- (void)adjustHeadImgAndReceiverValueVertical;
@property(retain, nonatomic) WCPayWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withData:(id)arg2;
- (void)layoutForNoLineView;
- (void)layoutSubviews;
- (void)lotteryViewDidClickButton:(id)arg1;
- (void)lotteryViewDidFinishScratchOrShake:(id)arg1;
- (void)lotteryViewDidScratchOrShake:(id)arg1 drawType:(unsigned int)arg2;
@property(retain, nonatomic) UIImageView *m_WeChatPayIcon; // @synthesize m_WeChatPayIcon=_m_WeChatPayIcon;
@property(retain, nonatomic) WCPayLineSeparatorView *m_addressRemarkView; // @synthesize m_addressRemarkView=_m_addressRemarkView;
@property(retain, nonatomic) UILabel *m_chargeFeeLabel; // @synthesize m_chargeFeeLabel=_m_chargeFeeLabel;
@property(retain, nonatomic) UILabel *m_chargeFeeValueLabel; // @synthesize m_chargeFeeValueLabel=_m_chargeFeeValueLabel;
@property(retain, nonatomic) WCPayControlData *m_data; // @synthesize m_data=_m_data;
@property(nonatomic) __weak id <WCPayTransferMoneyPaidSuccessViewV2Delegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIButton *m_doneButton; // @synthesize m_doneButton=_m_doneButton;
@property(nonatomic) double m_doneButtonMarginUp; // @synthesize m_doneButtonMarginUp=_m_doneButtonMarginUp;
@property(nonatomic) _Bool m_expendAddress; // @synthesize m_expendAddress=_m_expendAddress;
@property(nonatomic) _Bool m_expendFavor; // @synthesize m_expendFavor=_m_expendFavor;
@property(retain, nonatomic) InternalFavorDescView *m_favorDescView; // @synthesize m_favorDescView=_m_favorDescView;
@property(retain, nonatomic) UILabel *m_feeLabel; // @synthesize m_feeLabel=_m_feeLabel;
@property(retain, nonatomic) UIView *m_firstLineView; // @synthesize m_firstLineView=_m_firstLineView;
@property(nonatomic) double m_lastElemBottomY; // @synthesize m_lastElemBottomY=_m_lastElemBottomY;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) WCPayLotteryView *m_lotteryView; // @synthesize m_lotteryView=_m_lotteryView;
@property(retain, nonatomic) UILabel *m_moneyLabel; // @synthesize m_moneyLabel=_m_moneyLabel;
@property(retain, nonatomic) UILabel *m_originPriceLabel; // @synthesize m_originPriceLabel=_m_originPriceLabel;
@property(retain, nonatomic) UILabel *m_originPriceValueLabel; // @synthesize m_originPriceValueLabel=_m_originPriceValueLabel;
@property(retain, nonatomic) UILabel *m_realMoneyLabel; // @synthesize m_realMoneyLabel=_m_realMoneyLabel;
@property(retain, nonatomic) UILabel *m_realMoneyValueLabel; // @synthesize m_realMoneyValueLabel=_m_realMoneyValueLabel;
@property(retain, nonatomic) UILabel *m_receiveDescLabel; // @synthesize m_receiveDescLabel=_m_receiveDescLabel;
@property(retain, nonatomic) UILabel *m_receiveDescValueLabel; // @synthesize m_receiveDescValueLabel=_m_receiveDescValueLabel;
@property(retain, nonatomic) UIView *m_receiverHeadImageView; // @synthesize m_receiverHeadImageView=_m_receiverHeadImageView;
@property(retain, nonatomic) UILabel *m_receiverLabel; // @synthesize m_receiverLabel=_m_receiverLabel;
@property(retain, nonatomic) UILabel *m_receiverValueLabel; // @synthesize m_receiverValueLabel=_m_receiverValueLabel;
@property(retain, nonatomic) UIScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) UILabel *m_senderLabel; // @synthesize m_senderLabel=_m_senderLabel;
@property(retain, nonatomic) UILabel *m_senderValueLabel; // @synthesize m_senderValueLabel=_m_senderValueLabel;
@property(retain, nonatomic) UILabel *m_successLabel; // @synthesize m_successLabel=_m_successLabel;
@property(retain, nonatomic) UILabel *m_tipsLabel; // @synthesize m_tipsLabel=_m_tipsLabel;
- (unsigned long long)moneyInt;
- (id)moneyString;
@property(retain) UILabel *noticeDesc; // @synthesize noticeDesc=_noticeDesc;
@property(retain) UILabel *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
- (void)onDoneButtonClick;
- (void)onInternalFavorDescViewClick;
- (void)onWCPayAddressRemarkViewCopy;
- (void)onWCPayAddressRemarkViewExpend;
- (id)receiverValue;
- (void)refreshViewWithData:(id)arg1;
- (double)tipsLabelMarginUp;
- (void)updateAddressRemarkView;
- (void)updateChargeFeeLabel;
- (void)updateChargeFeeValueLabel;
- (void)updateDoneButton;
- (void)updateExposureArea;
- (void)updateFavorView;
- (void)updateFirstLineView;
- (void)updateHeadImageView;
- (void)updateLayout;
- (void)updateLineView;
- (void)updateMoneyLabel;
- (void)updateNotice;
- (void)updateOriginPriceLabel;
- (void)updateOriginPriceValueLabel;
- (void)updateRealMoneyLabel;
- (void)updateRealMoneyValueLabel;
- (void)updateReceicerLabel;
- (void)updateReceiveDescLabel;
- (void)updateReceiverDescValueLabel;
- (void)updateReceiverValueLabel;
- (void)updateSenderLabel;
- (void)updateSenderValueLabel;
- (void)updateSuccessLabel;
- (void)updateTipsLabel;
- (void)updateWeChatPayIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

