//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface MemoryMappedKV : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dic;
    NSString *m_path;
    NSString *m_crcPath;
    NSString *m_mmapID;
    int m_fd;
    char *m_ptr;
    unsigned long long m_size;
    unsigned long long m_actualSize;
    struct CodedOutputData *m_output;
    struct AESCrypt *m_cryptor;
    _Bool m_needLoadFromFile;
    _Bool m_isFirstCreated;
    unsigned int m_crcDigest;
    int m_crcFd;
    char *m_crcPtr;
}

+ (id)crcPathWithMappedKVPath:(id)arg1;
+ (id)defaultMemoryMappedKV;
+ (void)didBecomeActive;
+ (void)didEnterBackground;
+ (void)initialize;
+ (_Bool)isFileValid:(id)arg1;
+ (id)mappedKVPathWithID:(id)arg1;
+ (id)memoryMappedKVWithID:(id)arg1;
+ (id)memoryMappedKVWithID:(id)arg1 cryptKey:(id)arg2;
+ (void)reportCRCCheckFail;
+ (void)reportLengthFail;
+ (void)reportMMapFail;
+ (void)reportTruncateFail;
+ (void)setCurrentAppState:(long long)arg1;
+ (void)setCurrentUin:(unsigned int)arg1;
+ (id)sharedDefaultMemoryMappedKV;
- (void).cxx_destruct;
- (id)allKeys;
- (_Bool)appendData:(id)arg1 forKey:(id)arg2;
- (_Bool)async;
- (_Bool)checkFileCRCValid;
- (void)checkLoadData;
- (void)clearAll;
- (void)clearMemoryState;
- (void)close;
- (_Bool)containsKey:(id)arg1;
- (unsigned long long)count;
- (id)cryptKey;
- (void)dealloc;
- (_Bool)doSync:(_Bool)arg1;
- (_Bool)ensureMemorySize:(unsigned long long)arg1;
- (void)enumerateKeys:(CDUnknownBlockType)arg1;
- (_Bool)fullWriteback;
- (id)getArrayOfValueType:(Class)arg1 forKey:(id)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (_Bool)getBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)getDataForKey:(id)arg1;
- (id)getDataForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDateForKey:(id)arg1;
- (id)getDateForKey:(id)arg1 defaultValue:(id)arg2;
- (double)getDoubleForKey:(id)arg1;
- (double)getDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)getFloatForKey:(id)arg1;
- (float)getFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (int)getInt32ForKey:(id)arg1;
- (int)getInt32ForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)getInt64ForKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)getObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)getRawDataForKey:(id)arg1;
- (id)getStringForKey:(id)arg1;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (unsigned int)getUInt32ForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned long long)getUInt64ForKey:(id)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (id)initWithMMapID:(id)arg1 cryptKey:(id)arg2;
- (_Bool)isFileValid;
- (void)loadFromFile;
- (void)onMemoryWarning;
- (id)path;
- (void)prepareCRCFile;
- (_Bool)protectFromBackgroundWritting:(unsigned long long)arg1 writeBlock:(CDUnknownBlockType)arg2;
- (_Bool)reKey:(id)arg1;
- (void)recaculateCRCDigest;
- (void)removeValueForKey:(id)arg1;
- (void)removeValuesForKeys:(id)arg1;
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (_Bool)setDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)setFloat:(float)arg1 forKey:(id)arg2;
- (_Bool)setInt32:(int)arg1 forKey:(id)arg2;
- (_Bool)setInt64:(long long)arg1 forKey:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (_Bool)sync;
- (unsigned long long)totalSize;
- (void)updateCRCDigest:(const char *)arg1 withSize:(unsigned long long)arg2;
- (_Bool)writeAcutalSize:(unsigned long long)arg1;

@end

