//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKQRCodeView.h"

@class NSString, QBarCodeView;

@interface KindaQRCodeView : KindaView <MMKQRCodeView>
{
    QBarCodeView *contentView;
}

- (void).cxx_destruct;
- (id)getView;
- (id)init;
- (void)setCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

