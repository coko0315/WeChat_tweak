//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IStrangerContactMgrExt.h"
#import "MMUseCaseCallback.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCPayPayMoneyLogicDelegate.h"
#import "WCPayQRCodeRewardEditMoneyViewControllerDelegate.h"
#import "WCPayQRCodeRewardPayCheckCgiDelegate.h"
#import "WCPayQRCodeRewardPayerConfirmViewControllerDelegate.h"
#import "WCPayQRCodeRewardPayerDetailViewControllerDelegate.h"
#import "WCPayQRCodeRewardPlaceOrderCgiDelegate.h"
#import "WCPayQRCodeRewardScanCodeCgiDelegate.h"

@class NSString, WCPayPayMoneyLogic, WCPayQRCodeRewardPayCheckCgi, WCPayQRCodeRewardPlaceOrderCgi, WCPayQRCodeRewardScanCodeCgi;

@interface WCPayQRCodeRewardPayControlLogic : WCPayControlLogic <WCPayQRCodeRewardPayerDetailViewControllerDelegate, WCPayQRCodeRewardPayerConfirmViewControllerDelegate, WCPayQRCodeRewardEditMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlLogicDeleagte, WCPayQRCodeRewardScanCodeCgiDelegate, WCPayQRCodeRewardPlaceOrderCgiDelegate, WCPayQRCodeRewardPayCheckCgiDelegate, IStrangerContactMgrExt, MMUseCaseCallback>
{
    id <WCPayQRCodeRewardPayControlLogicDelegate> _logicDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    WCPayQRCodeRewardScanCodeCgi *_scanCodeCgi;
    WCPayQRCodeRewardPlaceOrderCgi *_placeOrderCgi;
    WCPayQRCodeRewardPayCheckCgi *_payCheckCgi;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)continueToTransfer;
- (void)continueToTransfer:(_Bool)arg1;
- (_Bool)gotoViewController:(id)arg1;
- (void)handleGotoViewControllerAfterGetTransferContact;
- (id)initWithScanUrl:(id)arg1 sourceWebViewUrl:(id)arg2 payChannel:(int)arg3;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onEditMoneyViewControllerBack;
- (void)onEditMoneyViewControllerConfirmRewardWithAmount:(long long)arg1 comment:(id)arg2 shouldShowNickName:(_Bool)arg3;
- (void)onGetQRCodeRewardPayCheckCgiResp:(id)arg1;
- (void)onGetQRCodeRewardPlaceOrderResp:(id)arg1;
- (void)onGetQRCodeRewardScanCodeCgiResp:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)onPayMoneyLogicSuccess;
- (void)onPayerConfirmViewControllerBack;
- (void)onPayerConfirmViewControllerConfirmWithPayerCommnet:(id)arg1 shouldShowNickName:(_Bool)arg2;
- (void)onPayerDetailViewControllerBack;
- (void)onPayerDetailViewControllerClickAmount:(long long)arg1;
- (void)onPayerDetailViewControllerClickEditMoneyBtn;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
@property(retain, nonatomic) WCPayQRCodeRewardPayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayQRCodeRewardPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
- (void)scanCodeAlertViewConfirmClick;
@property(retain, nonatomic) WCPayQRCodeRewardScanCodeCgi *scanCodeCgi; // @synthesize scanCodeCgi=_scanCodeCgi;
- (void)sendRewardPrePayRequestWithAmount:(long long)arg1 comment:(id)arg2 isSelectAmount:(_Bool)arg3 shouldShowNickName:(_Bool)arg4;
- (void)sendScanCodeRequest;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

