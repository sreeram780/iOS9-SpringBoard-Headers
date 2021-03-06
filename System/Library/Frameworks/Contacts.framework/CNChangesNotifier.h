/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject {

	CNChangesNotifierProxy* _notifierProxy;

}

@property (nonatomic,retain) CNChangesNotifierProxy * notifierProxy;              //@synthesize notifierProxy=_notifierProxy - In the implementation block
+(void)flushSharedNotifier;
+(id)sharedNotifier;
-(void)willSaveChanges;
-(void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 ;
-(void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 ;
-(void)waitForCurrentTasksToFinish;
-(CNChangesNotifierProxy *)notifierProxy;
-(void)setNotifierProxy:(CNChangesNotifierProxy *)arg1 ;
-(void)dealloc;
-(id)init;
@end

