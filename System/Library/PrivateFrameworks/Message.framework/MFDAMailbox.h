/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(void)dealloc;
-(id)description;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(NSString *)folderID;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(void)setFolderID:(NSString *)arg1 ;
-(id)_folderID;
@end

