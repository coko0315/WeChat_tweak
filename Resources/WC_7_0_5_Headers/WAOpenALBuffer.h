//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAOpenALBuffer : NSObject
{
    unsigned int bufferId;
    int format;
    int size;
    int sampleRate;
    NSString *path;
    NSString *appId;
    float duration;
}

+ (id)cachedBufferWithPath:(id)arg1 fileData:(id)arg2 appId:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(readonly) unsigned int bufferId; // @synthesize bufferId;
- (void)dealloc;
@property(readonly) float duration; // @synthesize duration;
- (void *)getAudioDataWithData:(id)arg1 filePath:(id)arg2;
- (id)initWithPath:(id)arg1 fileData:(id)arg2;

@end

