//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXIModule.h"

@class NSString;

@interface TXCModule : NSObject <TXIModule>
{
    NSString *_id;
}

- (void).cxx_destruct;
- (void)clearID;
- (void)dealloc;
- (double)doubleValueForKey:(int)arg1;
- (double)doubleValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (id)getID;
- (id)init;
- (long long)intValueForKey:(int)arg1;
- (long long)intValueForKey:(int)arg1 Key2:(unsigned short)arg2;
- (void)setID:(id)arg1;
- (_Bool)setStatusValue:(id)arg1 forKey:(int)arg2;
- (_Bool)setStatusValue:(id)arg1 forKey:(int)arg2 Key2:(unsigned short)arg3;
- (id)stringValueForKey:(int)arg1;
- (id)stringValueForKey:(int)arg1 Key2:(unsigned short)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

