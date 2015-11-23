/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/DADataElement.h>

@class NoteObject, NSString, NSNumber, NSArray, NSDate;

@interface ASNote : ASChangedCollectionLeaf <DADataElement> {

	BOOL _bodyIsPlaintext;
	NoteObject* _localRecord;
	NSString* _body;
	NSNumber* _bodyTruncated;
	NSArray* _categories;
	NSString* _subject;
	NSString* _messageClass;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,retain) NoteObject * localRecord;               //@synthesize localRecord=_localRecord - In the implementation block
@property (nonatomic,retain) NSString * body;                        //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSNumber * bodyTruncated;               //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (assign,nonatomic) BOOL bodyIsPlaintext;                   //@synthesize bodyIsPlaintext=_bodyIsPlaintext - In the implementation block
@property (nonatomic,retain) NSArray * categories;                   //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSString * subject;                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * messageClass;                //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(id)noteWithLocalNoteObject:(id)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(NSDate *)lastModifiedDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)body;
-(NSArray *)categories;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(void)setMessageClass:(NSString *)arg1 ;
-(NSString *)messageClass;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(long long)dataclass;
-(void)loadClientIDs;
-(NSNumber *)bodyTruncated;
-(void)setBodyTruncated:(NSNumber *)arg1 ;
-(void)setBodyIsPlaintext:(BOOL)arg1 ;
-(void)setLocalRecord:(NoteObject *)arg1 ;
-(void)_loadAttributesFromLocalNoteObject:(id)arg1 forAccount:(id)arg2 ;
-(id)initWithLocalNoteObject:(id)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(NoteObject *)localRecord;
-(BOOL)bodyIsPlaintext;
-(BOOL)saveToNoteDBWithExistingRecord:(id)arg1 intoNoteStore:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)loadNoteObjectForAccount:(id)arg1 ;
-(BOOL)saveServerIDToNoteDB;
-(BOOL)deleteFromNoteContext;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
@end

