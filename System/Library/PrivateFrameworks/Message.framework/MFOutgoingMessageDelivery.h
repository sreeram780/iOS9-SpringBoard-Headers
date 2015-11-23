/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFDeliveryDelegate;
@class MFMessage, MFMutableMessageHeaders, NSArray, NSString, MFPlainTextDocument, MailAccount, DeliveryAccount, NSDictionary, MFMailDelivery;

@interface MFOutgoingMessageDelivery : NSObject {

	MFMessage* _message;
	MFMutableMessageHeaders* _headers;
	NSArray* _mixedContent;
	BOOL _textPartsAreHTML;
	NSString* _htmlBody;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherHTMLAndAttachments;
	NSArray* _charsets;
	id<MFDeliveryDelegate> _delegate;
	MailAccount* _archiveAccount;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _compositionSpecification;
	MFMailDelivery* _currentDeliveryObject;
	BOOL _isUserRequested;
	unsigned long long _conversationFlags;
	long long _originalConversationId;

}

@property (nonatomic,retain) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                 //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (assign,nonatomic) long long originalConversationId;                     //@synthesize originalConversationId=_originalConversationId - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                                 //@synthesize isUserRequested=_isUserRequested - In the implementation block
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
+(id)newWithMessage:(id)arg1 ;
-(unsigned long long)conversationFlags;
-(void)setArchiveAccount:(id)arg1 ;
-(NSDictionary *)compositionSpecification;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(void)setOriginalConversationId:(long long)arg1 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)deliverSynchronously;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)message;
-(id)originalHeaders;
-(long long)deliveryStatus;
-(BOOL)isUserRequested;
-(void)setIsUserRequested:(BOOL)arg1 ;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1 ;
-(id)_deliveryAccountForInitializers;
-(long long)originalConversationId;
-(id)initWithMessage:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)account;
@end

