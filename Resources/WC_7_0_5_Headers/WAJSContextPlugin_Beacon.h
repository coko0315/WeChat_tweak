//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "CBCentralManagerDelegate.h"
#import "ILocationMgrExt.h"

@class CBCentralManager, CLLocationManager, NSArray, NSMutableDictionary, NSString;

@interface WAJSContextPlugin_Beacon : WAJSContextPluginBase <ILocationMgrExt, CBCentralManagerDelegate>
{
    NSArray *m_uuids;
    unsigned long long m_locationTag;
    CLLocationManager *m_locationMgr;
    CBCentralManager *m_bleMgr;
    NSMutableDictionary *m_beacons;
    long long m_bleState;
    _Bool m_isInStartWorkFlow;
    _Bool m_isRanging;
}

- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)genBeaconKey:(id)arg1;
- (id)getCurrentBeacons;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)notifyServiceBeaconState;
- (void)notifyStartRangingFailed:(id)arg1;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (int)starMoritoring:(id)arg1 needBLEAbilityCheck:(_Bool)arg2;
- (void)startRanging;
- (int)stopRanging;
- (int)systemSupportBeacon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

