//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMOpenVoiceSessionKey : NSObject
{
    NSString *sessionKey;
    long long expireTicks;
    long long initTicks;
}

- (void).cxx_destruct;
@property(nonatomic) long long expireTicks; // @synthesize expireTicks;
- (id)init;
@property(nonatomic) long long initTicks; // @synthesize initTicks;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey;

@end

