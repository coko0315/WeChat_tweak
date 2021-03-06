//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "PBMessageObserverDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"
#import "WCPayPayMoneyFromOverseaH5WalletLogicDelegate.h"

@class JSEvent, NSString, WCPayPayMoneyFromOverseaH5WalletLogic;

@interface WebviewJSEventHandler_getH5TransactionRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayPayMoneyFromOverseaH5WalletLogicDelegate>
{
    _Bool _closeWebAfterPayDetailBack;
    WCPayPayMoneyFromOverseaH5WalletLogic *_controlLogic;
    JSEvent *_event;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
@property(nonatomic) _Bool closeWebAfterPayDetailBack; // @synthesize closeWebAfterPayDetailBack=_closeWebAfterPayDetailBack;
@property(retain, nonatomic) WCPayPayMoneyFromOverseaH5WalletLogic *controlLogic; // @synthesize controlLogic=_controlLogic;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (id)getActivityInfo:(id)arg1;
- (id)getDiscountArray:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)sendResult:(_Bool)arg1 jsEvent:(id)arg2;
- (void)showOrderDetail:(id)arg1 complete:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

