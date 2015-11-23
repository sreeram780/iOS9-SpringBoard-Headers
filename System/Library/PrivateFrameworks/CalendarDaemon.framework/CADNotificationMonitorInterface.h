/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CADNotificationMonitorInterface
@required
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1;
-(void)CADCalendarSetClearedFromNotificationCenter:(SCD_Struct_CA1)arg1 error:(/*^block*/id)arg2;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1;
-(void)CADDatabaseGetEventNotificationItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetReminderNotificationItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1;
-(void)CADEvent:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADResourceChange:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADInviteReplyNotification:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(SCD_Struct_CA1)arg2 error:(/*^block*/id)arg3;

@end

