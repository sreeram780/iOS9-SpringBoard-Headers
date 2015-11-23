/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MFMailboxUid, NSString;

@interface MailboxHierarchyNode : NSObject {

	NSMutableArray* _children;
	MFMailboxUid* _mailbox;
	MFMailboxUid* _parentMailbox;
	NSString* _displayName;
	int _level;

}

@property (retain) MFMailboxUid * parentMailbox;              //@synthesize parentMailbox=_parentMailbox - In the implementation block
@property (retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(id)mailbox;
-(void)dealloc;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(NSString *)displayName;
-(void)setParentMailbox:(MFMailboxUid *)arg1 ;
-(id)removeNodeForMailbox:(id)arg1 ;
-(MFMailboxUid *)parentMailbox;
-(id)_findNodeForMailbox:(id)arg1 removeNode:(BOOL)arg2 ;
-(id)findNodeForMailbox:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)children;
-(void)setDisplayName:(NSString *)arg1 ;
@end

