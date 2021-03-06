//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCssParserDelegate.h"

@class NSString;

@interface MMTheme : NSObject <MCssParserDelegate>
{
    NSString *m_tid;
    NSString *m_name;
    NSString *m_icon;
    NSString *m_version;
    NSString *m_author;
    NSString *m_discription;
    NSString *m_website;
    NSString *m_basePath;
    long long m_totalSize;
    long long m_finishedSize;
    long long m_themeType;
    _Bool m_isAlreadyParsed;
    _Bool m_isParseOK;
}

+ (id)defaultTheme;
+ (id)themeFromPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *author; // @synthesize author=m_author;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=m_basePath;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *discription; // @synthesize discription=m_discription;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long finishedSize; // @synthesize finishedSize=m_finishedSize;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=m_icon;
- (id)initWithBasePath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDefaultTheme;
- (id)keyPaths;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (id)onNextCssFile;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (id)pathForLocalizedResource:(id)arg1;
- (id)pathForResource:(id)arg1;
- (void)setAsDefaultTheme;
@property(nonatomic) long long themeType; // @synthesize themeType=m_themeType;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=m_tid;
@property(nonatomic) long long totalSize; // @synthesize totalSize=m_totalSize;
@property(retain, nonatomic) NSString *version; // @synthesize version=m_version;
@property(retain, nonatomic) NSString *website; // @synthesize website=m_website;
- (_Bool)startParse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

