//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WeChatEmotionSectionInfo : MMObject
{
    unsigned long long _sectionType;
    long long _numOfItems;
    long long _scene;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) long long numOfItems; // @synthesize numOfItems=_numOfItems;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

