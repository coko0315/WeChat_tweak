//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GetA8KeyResp, NSDictionary, NSString, NSURL;

@protocol GetA8KeyLogicDelegate <NSObject>

@optional
- (unsigned long long)getSourceType;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyFail;
- (void)onGetA8KeyOneClickLoginWithURL:(NSURL *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onGetA8KeyResult:(GetA8KeyResp *)arg1;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onGetA8KeyStart;
- (void)onGetProductInfoEnd;
- (void)onGetProductInfoHandleEnd;
- (void)onGetProductInfoStart;
- (void)onNeedStartScan;
- (void)onSearchContactEnd;
- (void)onSearchContactFail;
- (void)onSearchContactGetResult;
- (void)onSearchContactHandleEnd;
- (void)onSearchContactStart;
- (NSString *)sourceWeAppAppid;
@end

