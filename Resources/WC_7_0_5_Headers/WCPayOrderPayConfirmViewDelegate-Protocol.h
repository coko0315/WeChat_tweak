//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CustomModal, NSString, UIView;

@protocol WCPayOrderPayConfirmViewDelegate <NSObject>
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayChangeCard;
- (void)onOrderPayConfirmViewCancel;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewPay:(NSString *)arg1;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onOrderPayConfirmViewSelectBankFavGuide:(UIView *)arg1;
- (_Bool)onOrderPayConfirmViewShowBankFav;
- (void)onOrderPayConfirmViewShowModal:(CustomModal *)arg1 confirmView:(UIView *)arg2;
@end

