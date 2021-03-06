//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAAppTaskMgrExt.h"
#import "WAWebSocketHandlerDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WAWebSocketMgr : MMService <WAWebSocketHandlerDelegate, WAAppTaskMgrExt, MMService>
{
    NSMutableDictionary *_dicAppID2WebSocketHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)closeAndDeleteHandlerWithAppID:(id)arg1;
- (void)closeSocketWithAppID:(id)arg1 compatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 code:(long long)arg4 reason:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)connectSocketWithAppID:(id)arg1 compatibleSingleConnection:(_Bool)arg2 taskID:(id)arg3 appVersion:(unsigned long long)arg4 isIgnoreCheckDomain:(_Bool)arg5 url:(id)arg6 httpHeaders:(id)arg7 subProtocols:(id)arg8 context:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)dealloc;
- (id)genSocketTaskID;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (id)getHandlerWithAppID:(id)arg1;
- (id)getNewSocketTaskID;
- (id)init;
- (void)interruptHandlerWithAppID:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)sendData:(id)arg1 withAppID:(id)arg2 compatibleSingleConnection:(_Bool)arg3 taskID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendString:(id)arg1 withAppID:(id)arg2 compatibleSingleConnection:(_Bool)arg3 taskID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

