//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GameCenter3GameItem : NSObject
{
    int _index;
    NSString *_rankTitle;
    NSString *_gameIconUrl;
    NSString *_gameName;
    NSString *_gameDesc;
    NSString *_gameJumpUrl;
    NSString *_externInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo=_externInfo;
@property(retain, nonatomic) NSString *gameDesc; // @synthesize gameDesc=_gameDesc;
@property(retain, nonatomic) NSString *gameIconUrl; // @synthesize gameIconUrl=_gameIconUrl;
@property(retain, nonatomic) NSString *gameJumpUrl; // @synthesize gameJumpUrl=_gameJumpUrl;
@property(retain, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *rankTitle; // @synthesize rankTitle=_rankTitle;

@end

