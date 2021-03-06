//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditVideoBGMSelectedMusicInfo, NSMutableArray, NSString, WCLocationInfo;

@interface WCStoryPublishReportObj : NSObject
{
    _Bool _isClickSearchMusic;
    _Bool _isPublishToTimeLine;
    _Bool _isShowLyric;
    _Bool _isAddTextIntro;
    _Bool _hasRecordVideo;
    _Bool _hasEnterAllbum;
    unsigned int _emoticonWidgetCount;
    unsigned int _textWidgetCount;
    unsigned int _publishVideoType;
    unsigned int _photoCount;
    unsigned int _addTextIntroWordCount;
    unsigned int _addEmojToTextIntroCount;
    unsigned int _videoCompoundTime;
    NSString *_publishEventId;
    unsigned long long _enterScene;
    unsigned long long _enterTime;
    unsigned long long _startEditTime;
    unsigned long long _videoDuration;
    unsigned long long _videoSource;
    WCLocationInfo *_locationInfo;
    NSMutableArray *_actionTraceArray;
    EditVideoBGMSelectedMusicInfo *_musicInfo;
    NSString *_photoLengthWidthSacles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actionTraceArray; // @synthesize actionTraceArray=_actionTraceArray;
@property(nonatomic) unsigned int addEmojToTextIntroCount; // @synthesize addEmojToTextIntroCount=_addEmojToTextIntroCount;
@property(nonatomic) unsigned int addTextIntroWordCount; // @synthesize addTextIntroWordCount=_addTextIntroWordCount;
- (id)arrayToJSON:(id)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
@property(nonatomic) unsigned int emoticonWidgetCount; // @synthesize emoticonWidgetCount=_emoticonWidgetCount;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (void)enterWithScene:(unsigned long long)arg1;
@property(nonatomic) _Bool hasEnterAllbum; // @synthesize hasEnterAllbum=_hasEnterAllbum;
@property(nonatomic) _Bool hasRecordVideo; // @synthesize hasRecordVideo=_hasRecordVideo;
@property(nonatomic) _Bool isAddTextIntro; // @synthesize isAddTextIntro=_isAddTextIntro;
@property(nonatomic) _Bool isClickSearchMusic; // @synthesize isClickSearchMusic=_isClickSearchMusic;
@property(nonatomic) _Bool isPublishToTimeLine; // @synthesize isPublishToTimeLine=_isPublishToTimeLine;
@property(nonatomic) _Bool isShowLyric; // @synthesize isShowLyric=_isShowLyric;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) unsigned int photoCount; // @synthesize photoCount=_photoCount;
@property(copy, nonatomic) NSString *photoLengthWidthSacles; // @synthesize photoLengthWidthSacles=_photoLengthWidthSacles;
@property(retain, nonatomic) NSString *publishEventId; // @synthesize publishEventId=_publishEventId;
@property(nonatomic) unsigned int publishVideoType; // @synthesize publishVideoType=_publishVideoType;
- (id)realPoiInfoStr;
- (void)reportDoPublish;
- (void)reportQuitPublish;
@property(nonatomic) unsigned long long startEditTime; // @synthesize startEditTime=_startEditTime;
@property(nonatomic) unsigned int textWidgetCount; // @synthesize textWidgetCount=_textWidgetCount;
@property(nonatomic) unsigned int videoCompoundTime; // @synthesize videoCompoundTime=_videoCompoundTime;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned long long videoSource; // @synthesize videoSource=_videoSource;

@end

