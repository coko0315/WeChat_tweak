//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMITransmitKvData, MMVoidCallback, MMVoidITransmitKvDataCallback, NSString;

@protocol MMKindaWalletMixManager <NSObject>
- (void)startWalletMixUseCaseImpl:(NSString *)arg1 data:(MMITransmitKvData *)arg2 successCallback:(MMVoidITransmitKvDataCallback *)arg3 cancelCallback:(MMVoidCallback *)arg4 failCallback:(MMVoidCallback *)arg5;
@end

