/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMembersDataSourceDelegate <NSObject>
@optional
-(void)abScrollViewDidBeginDragging:(id)arg1;

@required
-(BOOL)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
-(BOOL)abDataSourceAllowsShowingPersonsCards:(id)arg1;
-(BOOL)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;

@end

