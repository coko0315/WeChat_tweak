//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@class NSData;

@interface VoIPTokenRegisterObject : NSObject <PBMessageObserverDelegate>
{
    NSData *m_token;
    id <VoIPTokenRegisterObjectDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callErrorDelegate;
- (void)callOkDelegate;
- (id)initWithToken:(id)arg1;
@property(nonatomic) __weak id <VoIPTokenRegisterObjectDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSData *m_token; // @synthesize m_token;
- (void)startRequest;

@end

