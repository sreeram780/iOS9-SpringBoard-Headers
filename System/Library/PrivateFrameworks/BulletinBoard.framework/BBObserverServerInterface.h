/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBObserverServerInterface
@required
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)requestNoticesBulletinsForSectionID:(id)arg1;
-(void)requestTodayBulletinsForSectionID:(id)arg1;
-(void)requestFutureBulletinsForSectionID:(id)arg1;
-(void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getActiveAlertBehaviorOverridesWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrimaryAttachmentDataForBulletinID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)handleResponse:(id)arg1;
-(void)clearSection:(id)arg1;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;

@end

