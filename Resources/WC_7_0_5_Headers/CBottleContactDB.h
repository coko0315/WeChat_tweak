//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CBottleContactDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (long long)GetBottleContactCount;
- (_Bool)addContact:(id)arg1;
- (void)dealloc;
- (_Bool)deleteContact:(id)arg1;
- (void)fillQueryProperty:(SyntaxList_7f15fe8c *)arg1;
- (_Bool)getAllContactList:(id)arg1;
- (void)getBottleContact:(id)arg1 fromDBObject:(id)arg2;
- (id)getContact:(id)arg1;
- (id)init;
- (void)initDB:(id)arg1;
- (void)saveUserImage:(id)arg1;
- (void)setDBBottleConact:(id)arg1 fromObject:(id)arg2 isSetUserName:(_Bool)arg3 vecProperty:(SyntaxList_7f15fe8c *)arg4;
- (_Bool)updateContact:(id)arg1;

@end

