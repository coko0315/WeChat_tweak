//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface WAPermissionMgr : MMService <MMService>
{
    NSMutableDictionary *_reportInfos;
}

+ (_Bool)checkJsAPI:(id)arg1 haveRunMode:(unsigned int)arg2;
+ (id)dictionayOfJSAPI2PermissionIndex;
+ (unsigned int)getEventThreadMode:(id)arg1;
+ (id)getPermissionByte:(id)arg1;
+ (unsigned int)getPermissionMode:(id)arg1;
- (void).cxx_destruct;
- (id)actionSheetInfoFromResponse:(id)arg1;
- (void)dealloc;
- (void)executeIssueLaunchCmd:(id)arg1;
- (id)generateLaunchCGIUserInfo:(id)arg1 debugMode:(unsigned int)arg2 enterScene:(unsigned int)arg3 sessionId:(id)arg4 isFromBackground:(_Bool)arg5;
- (id)getPermissionBanInfoWithAppID:(id)arg1;
- (id)getPermissionBytesWithAppID:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (id)launchActionFromResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onResponseLaunchPermissionInfo:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)processResponseLaunchPermissionInfoWithRequest:(id)arg1 andResponse:(id)arg2 cgiUserInfo:(id)arg3;
- (_Bool)requestLaunchPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 appServiceType:(unsigned int)arg6 sessionId:(id)arg7 pagePath:(id)arg8 isFromBackground:(_Bool)arg9 requestType:(unsigned int)arg10 dicLaunchParameter:(id)arg11;
- (id)tryGetLocalResponseWithAppid:(id)arg1 inScene:(unsigned int)arg2;
- (void)updateAppItem:(id)arg1;
- (_Bool)updateLaunchWithResponse:(id)arg1 appId:(id)arg2;
- (void)updateUsageItem:(id)arg1;
- (id)weAppBindInfoFromResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

