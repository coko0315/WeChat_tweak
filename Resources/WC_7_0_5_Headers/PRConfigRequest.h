//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface PRConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *baseid; // @dynamic baseid;
@property(retain, nonatomic) NSMutableArray *condition; // @dynamic condition;
@property(retain, nonatomic) NSString *pid; // @dynamic pid;
@property(nonatomic) unsigned int protover; // @dynamic protover;
@property(retain, nonatomic) NSMutableArray *reqlist; // @dynamic reqlist;
@property(nonatomic) unsigned int sceneflag; // @dynamic sceneflag;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

