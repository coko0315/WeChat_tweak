//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMAsset, NSURL;

@interface MMAssetInfo : NSObject
{
    NSURL *m_assetUrl;
    int _index;
    MMAsset *_asset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
- (long long)compareAssetInfo:(id)arg1;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
- (id)initWithAsset:(id)arg1 forIndex:(int)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *url;

@end

