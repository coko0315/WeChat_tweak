//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCStoryZonePageIndexObj : NSObject <WCTTableCoding>
{
    int _localTimeZone;
    NSString *_date;
    NSString *_tid;
    unsigned long long _count;
}

+ (void)__wcdb_column_constraint_26:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_27:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_22:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_23:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_24:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_25:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)count;
+ (const struct WCTProperty *)date;
+ (const struct WCTProperty *)localTimeZone;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (const struct WCTProperty *)tid;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (id)description;
@property(nonatomic) int localTimeZone; // @synthesize localTimeZone=_localTimeZone;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
