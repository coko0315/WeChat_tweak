//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData, NSString;

@interface WARemoteDebug_DebugMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (void)compressData:(id)arg1 supportCompressAlgo:(unsigned int)arg2;
- (id)decompressDataWithSupportCompressAlgo:(unsigned int)arg1;

// Remaining properties
@property(nonatomic) unsigned int after; // @dynamic after;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) unsigned int compressAlgo; // @dynamic compressAlgo;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int originalSize; // @dynamic originalSize;
@property(nonatomic) unsigned int seq; // @dynamic seq;

@end

