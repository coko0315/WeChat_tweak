//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, QMapContext;

@interface QTileOverlayManager : NSObject
{
    QMapContext *_mapContext;
    NSMutableArray *_tileOverlayRenders;
}

- (void).cxx_destruct;
- (void)addTileOverlay:(id)arg1;
- (_Bool)containsTileOverlay:(id)arg1;
- (id)init;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (void)refresh;
- (void)reloadTileOverlay:(id)arg1;
- (void)removeTileOverlay:(id)arg1;
- (id)renderForOverlay:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tileOverlayRenders; // @synthesize tileOverlayRenders=_tileOverlayRenders;
@property(readonly, nonatomic) NSArray *tileOverlays;

@end

