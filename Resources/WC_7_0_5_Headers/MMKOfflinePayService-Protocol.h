//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol MMKOfflinePayService <NSObject>
- (void)cleanCftToken:(NSString *)arg1;
- (_Bool)deleteCftCert:(NSString *)arg1;
- (NSString *)getCertid;
- (NSString *)getCftCSR:(NSString *)arg1;
- (NSString *)getCftCertSign:(NSString *)arg1 message:(NSString *)arg2;
- (NSString *)getCftToken:(NSString *)arg1;
- (NSString *)getCodever;
- (NSString *)getDeviceid;
- (NSString *)getLastSelectedCardBindSerial;
- (long long)getLastTokenUpdateTs;
- (_Bool)getOfflinePayHasSuccess;
- (NSArray *)getPaymentCardList;
- (int)getRegetTokenNum;
- (int)getRemainCftTokenNum:(NSString *)arg1;
- (NSString *)getTokenPin;
- (int)getTokenUpdateInterval;
- (_Bool)importCftCert:(NSString *)arg1 crt:(NSString *)arg2;
- (void)removeCertid;
- (_Bool)setCertid:(NSString *)arg1;
- (_Bool)setCftTokenCode:(NSString *)arg1 certid:(NSString *)arg2 useSm4:(_Bool)arg3;
- (_Bool)setCodever:(NSString *)arg1;
- (_Bool)setDeviceid:(NSString *)arg1;
- (void)setLastSelectedCardBindSerial:(NSString *)arg1;
- (void)setLastTokenUpdateTs:(long long)arg1;
- (void)setOfflinePayHasSuccess;
- (void)setRegetTokenNum:(int)arg1;
- (_Bool)setTokenPin:(NSString *)arg1;
- (void)setTokenUpdateInterval:(int)arg1;
@end

