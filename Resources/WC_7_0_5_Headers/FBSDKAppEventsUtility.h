//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKAppEventsUtility : NSObject
{
}

+ (id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(_Bool)arg2 shouldAccessAdvertisingID:(_Bool)arg3;
+ (id)advertiserID;
+ (unsigned long long)advertisingTrackingStatus;
+ (id)anonymousID;
+ (id)attributionID;
+ (void)clearLibraryFiles;
+ (void)ensureOnMainThread:(id)arg1 className:(id)arg2;
+ (id)flushReasonToString:(unsigned long long)arg1;
+ (id)getNumberValue:(id)arg1;
+ (id)getVariable:(id)arg1 fromInstance:(id)arg2;
+ (_Bool)isCreditCardNumber:(id)arg1;
+ (_Bool)isDebugBuild;
+ (_Bool)isEmailAddress:(id)arg1;
+ (_Bool)isSensitiveUserData:(id)arg1;
+ (void)logAndNotify:(id)arg1;
+ (void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(_Bool)arg2;
+ (_Bool)matchString:(id)arg1 firstCharacterSet:(id)arg2 restOfStringCharacterSet:(id)arg3;
+ (void)persistAnonymousID:(id)arg1;
+ (id)persistenceFilePath:(id)arg1;
+ (_Bool)regexValidateIdentifier:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)tokenStringToUseFor:(id)arg1;
+ (long long)unixTimeNow;
+ (_Bool)validateIdentifier:(id)arg1;

@end

