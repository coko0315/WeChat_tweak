//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, WASubscriptionMessageDetailInfoContentViewSettings, WASubscriptionMessagePageSheetMessageDetailItem;

@interface WASubscriptionMessageDetailInfoContentTableViewCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_valueLabel;
    WASubscriptionMessagePageSheetMessageDetailItem *_item;
    WASubscriptionMessageDetailInfoContentViewSettings *_settings;
}

+ (struct CGSize)calculateNameLabelSizeWith:(id)arg1 contentWidth:(double)arg2 settings:(id)arg3;
+ (struct CGSize)calculateValueLabelSizeWith:(id)arg1 contentWidth:(double)arg2 settings:(id)arg3;
+ (id)labelFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) WASubscriptionMessagePageSheetMessageDetailItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WASubscriptionMessageDetailInfoContentViewSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void)updateWith:(id)arg1 settings:(id)arg2;

@end

