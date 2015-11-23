/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, NSDate, NSURL, EKObjectID, EKAlarm;

@interface EKReminder : EKCalendarItem {

	BOOL hadRecurrences;

}

@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * dueDateComponents; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long priority; 
@property (assign,nonatomic) unsigned long long displayOrder; 
@property (nonatomic,readonly) NSDate * dueDate; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,readonly) EKObjectID * parentID; 
@property (nonatomic,readonly) EKAlarm * bestDisplayAlarm; 
@property (assign,nonatomic) BOOL hadRecurrences; 
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)externalURI;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)_sendModifiedNote;
-(id)reminderIdentifier;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(id)_persistentReminder;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)clearParentID;
-(EKAlarm *)bestDisplayAlarm;
-(BOOL)hadRecurrences;
-(void)setHadRecurrences:(BOOL)arg1 ;
-(id)startDateForRecurrence;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(unsigned long long)displayOrder;
-(NSDate *)dueDate;
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(EKObjectID *)parentID;
-(BOOL)validate:(id*)arg1 ;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(BOOL)commit:(id*)arg1 ;
@end

