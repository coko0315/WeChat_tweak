//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayFaceHBItem : NSObject <PBCoding>
{
    _Bool _isLucky;
    unsigned int createTime;
    unsigned int _uniqueID;
    NSString *msg;
    long long svrID;
    NSString *_userName;
    NSString *_sendId;
    NSString *_nativeurl;
    unsigned long long _money;
    NSString *_externMess;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *externMess; // @synthesize externMess=_externMess;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)initWithWrap:(id)arg1;
@property(nonatomic) _Bool isLucky; // @synthesize isLucky=_isLucky;
@property(nonatomic) unsigned long long money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(retain, nonatomic) NSString *nativeurl; // @synthesize nativeurl=_nativeurl;
- (void)parse;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
@property(nonatomic) long long svrID; // @synthesize svrID;
@property(nonatomic) unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

