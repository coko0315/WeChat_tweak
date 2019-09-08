//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"
#import "MMEmoticonResExt.h"

@class ABTestItem, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EmoticonDescRecommandLogic : NSObject <INewABTestMgrExt, MMEmoticonResExt>
{
    NSDictionary *m_emoticonDescToMd5Cache;
    NSDictionary *m_packageIndex;
    NSDictionary *m_descAliasDic;
    ABTestItem *m_abTestItem;
    int m_cacheVersion;
    NSString *m_lastSearchKeyword;
    NSObject<OS_dispatch_queue> *m_searchQueue;
    NSObject<OS_dispatch_queue> *m_configQueue;
    id <EmoticonDescRecommandLogicDelegate> _delegate;
}

+ (id)asyncSearchForKeyword:(id)arg1 descToMd5Cache:(id)arg2 cacheVersion:(int)arg3 packageIndex:(id)arg4 descAliasDic:(id)arg5 abTestItem:(id)arg6;
- (void).cxx_destruct;
- (void)asyncLoadDescAliasConfigDir:(id)arg1;
- (void)asyncRebuildDescToMd5Cache;
- (void)dealloc;
@property(nonatomic) __weak id <EmoticonDescRecommandLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasLoadMd5Cache;
- (id)init;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)reloadDataAndNeedClearCache:(_Bool)arg1;
- (void)searchEmoticonWithKeyword:(id)arg1;
- (void)updateDescToMd5Cache:(id)arg1 FromEmoticonPackageDesc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
