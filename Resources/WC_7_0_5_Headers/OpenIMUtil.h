//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OpenIMUtil : NSObject
{
}

+ (_Bool)checkIsOpenImChatWithViewController:(id)arg1;
+ (void)reportOpenIMChatRoomClickGroupMemberHeaderImage:(id)arg1;
+ (void)reportOpenIMChatRoomWithReportScene:(int)arg1 chatRoomUserName:(id)arg2;
+ (void)reportOpenIMSearchFriendWithReportSessionID:(id)arg1 reportActionCode:(int)arg2 reportActionResult:(int)arg3 reportClickAddContact:(int)arg4;
+ (void)reportOpenIMSucceedContactdWithReportSessionID:(id)arg1 reportUserName:(id)arg2 reportSucceedStatus:(int)arg3 reportUserStatus:(int)arg4 reportShowSucceedMethod:(int)arg5 reportClickSucceedAction:(int)arg6 reportWatchMessageRecord:(int)arg7 reportSendMessageStatus:(int)arg8;

@end

