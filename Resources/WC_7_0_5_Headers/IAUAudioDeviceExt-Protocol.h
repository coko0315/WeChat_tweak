//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUAudioDevice;

@protocol IAUAudioDeviceExt <NSObject>

@optional
- (void)audioDeviceFarawayEar:(AUAudioDevice *)arg1;
- (void)audioDeviceForceStop:(AUAudioDevice *)arg1;
- (void)audioDeviceInputMeterLevel:(AUAudioDevice *)arg1 Peak:(float)arg2;
- (void)audioDeviceNearEar:(AUAudioDevice *)arg1;
- (void)audioDeviceOutputMeterLevel:(AUAudioDevice *)arg1 Peak:(float)arg2;
- (void)audioDevicePause:(AUAudioDevice *)arg1;
- (void)audioDevicePluginHeadset:(AUAudioDevice *)arg1;
- (void)audioDeviceResetCallback:(AUAudioDevice *)arg1;
- (void)audioDeviceRestart:(AUAudioDevice *)arg1;
- (void)audioDeviceStartedFail:(AUAudioDevice *)arg1;
- (void)audioDeviceStartedSuccess:(AUAudioDevice *)arg1;
- (void)audioDeviceUnPluginHeadset:(AUAudioDevice *)arg1;
@end

