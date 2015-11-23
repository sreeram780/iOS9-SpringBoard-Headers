/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMFoundation/IMRemoteObjectCoding.h>

@class NSString, NSArray, NSAttributedString, NSData, NSDate;

@interface IMMessageItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {

	unsigned _error;
	NSString* _subject;
	NSString* _plainBody;
	NSArray* _fileTransferGUIDs;
	unsigned long long _flags;
	NSAttributedString* _body;
	NSData* _bodyData;
	long long _replaceID;
	NSDate* _timeRead;
	NSDate* _timeDelivered;
	NSDate* _timePlayed;
	long long _expireState;

}

@property (nonatomic,retain) NSString * subject;                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSAttributedString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSDate * timeRead;                        //@synthesize timeRead=_timeRead - In the implementation block
@property (nonatomic,retain) NSDate * timeDelivered;                   //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (nonatomic,retain) NSDate * timePlayed;                      //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long expireState;                    //@synthesize expireState=_expireState - In the implementation block
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long replaceID;                      //@synthesize replaceID=_replaceID - In the implementation block
@property (assign,nonatomic) BOOL hasDataDetectorResults; 
@property (nonatomic,readonly) BOOL isDelivered; 
@property (nonatomic,readonly) BOOL isSent; 
@property (nonatomic,readonly) BOOL isRead; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isAlert; 
@property (nonatomic,readonly) BOOL wasDataDetected; 
@property (nonatomic,readonly) BOOL wasDowngraded; 
@property (nonatomic,readonly) BOOL isPrepared; 
@property (nonatomic,readonly) BOOL isTypingMessage; 
@property (nonatomic,readonly) BOOL isLocatingMessage; 
@property (nonatomic,readonly) BOOL isEmote; 
@property (nonatomic,readonly) BOOL isAudioMessage; 
@property (nonatomic,readonly) BOOL isExpirable; 
@property (nonatomic,readonly) BOOL isFromExternalSource; 
@property (nonatomic,retain) NSString * plainBody;                     //@synthesize plainBody=_plainBody - In the implementation block
+(Class)contextClass;
-(BOOL)isSystemMessage;
-(BOOL)isIncomingTypingMessage;
-(BOOL)isTypingOrCancelTypingMessage;
-(BOOL)isIncomingTypingOrCancelTypingMessage;
-(BOOL)isCancelTypingMessage;
-(id)_service;
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(id)message;
-(id)_copyWithFlags:(unsigned long long)arg1 ;
-(BOOL)_isInvitation;
-(id)_copy;
-(void)_setInivtation:(BOOL)arg1 ;
-(id)copyDictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)sender;
-(NSAttributedString *)body;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(BOOL)isFinished;
-(void)setBody:(NSAttributedString *)arg1 ;
-(BOOL)isFromMe;
-(NSString *)plainBody;
-(BOOL)isRead;
-(BOOL)isAudioMessage;
-(BOOL)isPlayed;
-(BOOL)hasDataDetectorResults;
-(BOOL)isTypingMessage;
-(NSArray *)fileTransferGUIDs;
-(BOOL)isDelivered;
-(BOOL)isSent;
-(BOOL)isLocatingMessage;
-(BOOL)wasDowngraded;
-(BOOL)isFromExternalSource;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
-(BOOL)isExpirable;
-(long long)expireState;
-(NSDate *)timePlayed;
-(BOOL)wasDataDetected;
-(id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(void)setExpireState:(long long)arg1 ;
-(void)setTimePlayed:(NSDate *)arg1 ;
-(id)copyWithFlags:(unsigned long long)arg1 ;
-(NSDate *)timeRead;
-(NSDate *)timeDelivered;
-(BOOL)isEmote;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 errorType:(unsigned)arg22 ;
-(BOOL)isAlert;
-(void)setPlainBody:(NSString *)arg1 ;
-(void)setTimeRead:(NSDate *)arg1 ;
-(void)setTimeDelivered:(NSDate *)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(long long)replaceID;
-(void)setReplaceID:(long long)arg1 ;
-(void)_generateBodyDataIfNeeded;
-(id)initWithDictionary:(id)arg1 hint:(id)arg2 ;
-(void)adjustIsEmptyFlag;
-(void)_regenerateBodyData;
-(void)_regenerateBodyText;
-(void)_generateBodyTextIfNeeded;
-(void)_clearBodyData;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 ;
-(BOOL)isPrepared;
-(void)setHasDataDetectorResults:(BOOL)arg1 ;
-(void)setWasDataDetected:(BOOL)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(NSData *)bodyData;
@end

