//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface ScanQRCodeResultInfo : MMObject <PBCoding>
{
    _Bool scanFromAlbum;
    _Bool _hasProceed;
    unsigned int timeStamp;
    unsigned int fromScene;
    int codeVersion;
    int networkType;
    NSString *resultString;
    NSString *type;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) int codeVersion; // @synthesize codeVersion;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool hasProceed; // @synthesize hasProceed=_hasProceed;
@property(nonatomic) int networkType; // @synthesize networkType;
@property(copy, nonatomic) NSString *resultString; // @synthesize resultString;
@property(nonatomic) _Bool scanFromAlbum; // @synthesize scanFromAlbum;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(copy, nonatomic) NSString *type; // @synthesize type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

