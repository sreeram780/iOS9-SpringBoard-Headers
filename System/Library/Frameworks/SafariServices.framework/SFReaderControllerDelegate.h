/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFReaderControllerDelegate <NSObject>
@optional
-(void)readerController:(id)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
-(id)readerControllerInitialConfiguration:(id)arg1;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2;
-(void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2;
-(void)readerController:(id)arg1 didCollectReadingListItemInfo:(id)arg2 bookmarkID:(id)arg3;
-(void)readerController:(id)arg1 didCollectReaderContentForMail:(id)arg2;
-(void)readerController:(id)arg1 didPrepareReaderContentForPrinting:(id)arg2;
-(void)readerController:(id)arg1 didPrepareReaderContentForDisplay:(id)arg2;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;

@end
