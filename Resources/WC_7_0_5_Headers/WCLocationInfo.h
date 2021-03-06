//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString, StoreWXaRedirectInfoItem;

@interface WCLocationInfo : NSObject <NSCoding>
{
    NSString *city;
    struct CLLocationCoordinate2D location;
    NSString *poiName;
    NSString *poiAddress;
    double poiScale;
    NSString *poiInfoUrl;
    NSString *poiClassifyId;
    int poiClassifyType;
    int poiClickableStatus;
    NSData *poiBuff;
    unsigned int showFlag;
    unsigned int showType;
    NSString *poiUrl;
    StoreWXaRedirectInfoItem *_storeWXaRedirectInfoItem;
    NSString *_country;
    NSString *_displayPoiAddressName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *displayPoiAddressName; // @synthesize displayPoiAddressName=_displayPoiAddressName;
- (void)encodeWithCoder:(id)arg1;
- (id)getDisplayCity;
- (id)getDisplayPOIAddress;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isLocationValid;
- (_Bool)isPoiInfo;
- (_Bool)isPoiInfoClickable;
- (_Bool)isValidForShow;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location;
@property(retain, nonatomic) NSString *poiAddress; // @synthesize poiAddress;
@property(retain, nonatomic) NSData *poiBuff; // @synthesize poiBuff;
@property(retain, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId;
@property(nonatomic) int poiClassifyType; // @synthesize poiClassifyType;
@property(nonatomic) int poiClickableStatus; // @synthesize poiClickableStatus;
@property(retain, nonatomic) NSString *poiInfoUrl; // @synthesize poiInfoUrl;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName;
@property(nonatomic) double poiScale; // @synthesize poiScale;
@property(retain, nonatomic) NSString *poiUrl; // @synthesize poiUrl;
@property(nonatomic) unsigned int showFlag; // @synthesize showFlag;
@property(nonatomic) unsigned int showType; // @synthesize showType;
@property(retain, nonatomic) StoreWXaRedirectInfoItem *storeWXaRedirectInfoItem; // @synthesize storeWXaRedirectInfoItem=_storeWXaRedirectInfoItem;

@end

