//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "JSApiSelectContactsViewControllerDelegate.h"
#import "JSApiSelectSessionViewControllerDelegate.h"

@class JSApiSelectSessionViewController, NSString;

@interface WCPaySelectSingleContactControlLogic : WCPayControlLogic <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate>
{
    _Bool _pushVC;
    _Bool _onlyShowContactList;
    id <WCPaySelectSingleContactControlLogicDelegate> _delegate;
    NSString *_selectContactVCTitle;
    JSApiSelectSessionViewController *_selectSessionVC;
}

- (void).cxx_destruct;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerBack;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
@property(nonatomic) __weak id <WCPaySelectSingleContactControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithData:(id)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool onlyShowContactList; // @synthesize onlyShowContactList=_onlyShowContactList;
@property(nonatomic) _Bool pushVC; // @synthesize pushVC=_pushVC;
@property(copy, nonatomic) NSString *selectContactVCTitle; // @synthesize selectContactVCTitle=_selectContactVCTitle;
@property(retain, nonatomic) JSApiSelectSessionViewController *selectSessionVC; // @synthesize selectSessionVC=_selectSessionVC;
- (void)startLogic;

@end

