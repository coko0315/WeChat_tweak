//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IEnterpriseBrandContactMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString;

@interface EnterpriseBrandContactHelper : MMObject <WCActionSheetDelegate, IEnterpriseBrandContactMgrExt, UIAlertViewDelegate, PBMessageObserverDelegate>
{
    NSString *_contextBrandUserName;
    unsigned int _contextScene;
    unsigned int _useScene;
    id <EnterpriseBrandContactHelperDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmDisableSubBrand:(id)arg1;
- (void)confirmWeWorkDownloadWithActionSheet:(id)arg1;
- (void)confirmWeWorkDownloadWithAlert;
- (void)dealloc;
@property(nonatomic) __weak id <EnterpriseBrandContactHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableSubBrand:(id)arg1;
- (void)exposeWeWork:(id)arg1 scene:(unsigned int)arg2;
- (void)handleReportImmediatelyType:(id)arg1;
- (id)init;
- (id)initWithScene:(unsigned int)arg1;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)arg1 extParams:(id)arg2;
- (void)openWeWork:(id)arg1;
- (void)openWeWorkApp;
- (void)openWeWorkDownload;
- (void)reportImmediatelyType:(unsigned int)arg1 mainAttr:(id)arg2 operation:(unsigned int)arg3 scene:(unsigned int)arg4 flag:(unsigned long long)arg5;
- (void)reportWeWork:(unsigned int)arg1;
- (void)reportWeWorkBannerNew:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

