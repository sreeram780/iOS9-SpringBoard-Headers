/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class WLSourceDeviceRecordSummary, WLMessageSMILContext, NSMutableArray, NSData, NSString, NSDate, WLMessageParty, NSArray;

@interface WLMessage : NSObject {

	WLSourceDeviceRecordSummary* _summary;
	WLMessageSMILContext* _smilContext;
	NSMutableArray* _mimeParts;
	BOOL _isGroupMessage;
	NSData* _mimeData;
	unsigned long long _messageType;
	NSString* _dateString;
	NSDate* _date;
	unsigned long long _messageDirection;
	WLMessageParty* _sender;
	NSArray* _recipients;
	NSString* _subject;
	NSString* _messageText;
	NSString* _threadID;
	NSArray* _attachments;

}

@property (nonatomic,readonly) NSData * mimeData;                                //@synthesize mimeData=_mimeData - In the implementation block
@property (nonatomic,readonly) unsigned long long messageType;                   //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) NSString * dateString;                            //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long messageDirection;              //@synthesize messageDirection=_messageDirection - In the implementation block
@property (nonatomic,readonly) WLMessageParty * sender;                          //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMessage;                              //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (nonatomic,readonly) NSString * subject;                               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * messageText;                           //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,readonly) NSString * threadID;                              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) NSArray * attachments;                            //@synthesize attachments=_attachments - In the implementation block
+(NSRange)_populateMimeHeaders:(id)arg1 recipients:(id)arg2 fromRange:(NSRange)arg3 ofString:(id)arg4 addCountryCodeToParties:(BOOL)arg5 ;
+(void)addRecipients:(id)arg1 toMimeHeaders:(id)arg2 ;
+(id)_dateFormatterForMimeDateStrings;
+(BOOL)_shouldIgnoreMessageThreadID;
+(id)_fileNameForPart:(id)arg1 smilContext:(id)arg2 ;
+(id)mimeHeadersFromMimeData:(id)arg1 ;
+(id)dateFromMimeHeaders:(id)arg1 ;
+(id)senderFromMimeHeaders:(id)arg1 ;
+(id)recipientsFromMimeHeaders:(id)arg1 ;
-(void)setSummary:(id)arg1 ;
-(NSArray *)recipients;
-(NSDate *)date;
-(WLMessageParty *)sender;
-(NSArray *)attachments;
-(NSString *)subject;
-(NSString *)messageText;
-(NSData *)mimeData;
-(NSString *)threadID;
-(void)progressiveMimeParser:(id)arg1 beganMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2 ;
-(id)summary;
-(NSString *)dateString;
-(void)parseMIMEData:(id)arg1 ;
-(unsigned long long)messageDirection;
-(unsigned long long)messageType;
-(BOOL)isGroupMessage;
@end

