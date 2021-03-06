//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "BrandServiceEnterConversationLogicDelegate.h"

@class BrandServiceContinueLocationReportLogic, BrandServiceEnterConversationLogic, CContact, NSString, SessionStat;

@interface BrandActionReportLogicController : MMObject <BrandServiceEnterConversationLogicDelegate>
{
    CContact *m_contact;
    BrandServiceEnterConversationLogic *m_enterConversationLogic;
    BrandServiceContinueLocationReportLogic *m_continueLocationReporter;
    id <BrandActionReportLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)creatContinueReportLogic;
- (void)createEnterReportLogic;
- (void)dealloc;
@property(nonatomic) __weak id <BrandActionReportLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getViewController;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) BrandServiceContinueLocationReportLogic *m_continueLocationReporter; // @synthesize m_continueLocationReporter;
@property(retain, nonatomic) BrandServiceEnterConversationLogic *m_enterConversationLogic; // @synthesize m_enterConversationLogic;
- (void)reportEnterConversation;
- (void)reportExitConversation;
- (void)resetContinueReportLogic;
@property(retain, nonatomic) SessionStat *sessionInfo; // @dynamic sessionInfo;
- (void)showAlertView;
- (void)updateContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

