//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseFile, NSString;

@interface WePkgParser : NSObject
{
    unsigned int _resourceOffset;
    NSString *_filePath;
    CBaseFile *_file;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBaseFile *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)getMetaInfo;
- (id)getResourceContent:(unsigned int)arg1 Len:(unsigned int)arg2;
- (id)initWithPkgPath:(id)arg1;
- (_Bool)openFile;
@property(nonatomic) unsigned int resourceOffset; // @synthesize resourceOffset=_resourceOffset;

@end

