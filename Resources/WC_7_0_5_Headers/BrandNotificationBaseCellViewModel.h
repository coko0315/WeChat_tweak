//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap;

@interface BrandNotificationBaseCellViewModel : NSObject
{
    _Bool _hasBottomLine;
    CMessageWrap *_messageWrap;
    double _viewWidth;
}

+ (id)cellResueIdentifier;
- (void).cxx_destruct;
- (double)contentLeftMargin;
- (double)contentTopMargin;
- (double)detailContentLeftMargin;
@property(nonatomic) _Bool hasBottomLine; // @synthesize hasBottomLine=_hasBottomLine;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (double)messageLabelTopMargin;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
- (double)timeLabelTopMargin;
- (double)viewHeight;

@end

