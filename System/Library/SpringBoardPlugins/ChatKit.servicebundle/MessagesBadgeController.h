/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MessagesBadgeController : NSObject {

	long long _madridCount;
	long long _lastMadridFailure;
	BOOL _showingFailure;
	BOOL _disableDBFullDialog;

}
+(id)sharedInstance;
-(void)_updateBadge;
-(void)dealloc;
-(id)init;
-(void)updateBadge;
-(void)_saveMadridFailureID:(long long)arg1 ;
-(void)_displayDatabaseFullWarning;
-(long long)_savedMadridFailureID;
-(void)_madridUnreadCountChanged:(id)arg1 ;
-(void)_madridFailureCountChanged:(id)arg1 ;
-(void)_madridMessageSent:(id)arg1 ;
-(void)_databaseBecameFull;
-(void)_databaseBecameNoLongerFull;
-(void)_clearFailureBadge;
@end

