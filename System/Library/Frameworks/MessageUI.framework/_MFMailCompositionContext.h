/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, MFMailMessage, MFMessageViewingContext, NSMutableArray, MFComposeBodyField;

@interface _MFMailCompositionContext : NSObject {

	NSString* _sendingAddress;
	NSString* _subject;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _messageBody;
	int _composeType;
	id _autosaveIdentifier;
	NSString* _contextID;
	MFMailMessage* _originalMessage;
	NSString* _attachmentToMarkupContentID;
	id _originalContent;
	MFMessageViewingContext* _loadingContext;
	BOOL _loadRest;
	BOOL _includeAttachments;
	BOOL _showKeyboardImmediately;
	BOOL _showContentImmediately;
	NSMutableArray* _deferredAttachments;
	BOOL _registeredForDraw;
	BOOL _usingDefaultAccount;
	BOOL _prefersFirstLineSelection;
	int _sourceAccountManagement;
	unsigned long long _caretPosition;
	NSString* _originatingBundleID;
	MFComposeBodyField* _bodyField;

}

@property (assign,nonatomic) BOOL usingDefaultAccount;                              //@synthesize usingDefaultAccount=_usingDefaultAccount - In the implementation block
@property (nonatomic,copy) NSString * sendingAddress;                               //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,copy) NSString * subject;                                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * toRecipients;                                  //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ccRecipients;                                  //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,copy) NSArray * bccRecipients;                                 //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,retain) NSString * attachmentToMarkupContentID;                //@synthesize attachmentToMarkupContentID=_attachmentToMarkupContentID - In the implementation block
@property (assign,nonatomic) BOOL loadRest;                                         //@synthesize loadRest=_loadRest - In the implementation block
@property (assign,nonatomic) BOOL includeAttachments;                               //@synthesize includeAttachments=_includeAttachments - In the implementation block
@property (assign,nonatomic) BOOL showKeyboardImmediately;                          //@synthesize showKeyboardImmediately=_showKeyboardImmediately - In the implementation block
@property (assign,nonatomic) BOOL showContentImmediately;                           //@synthesize showContentImmediately=_showContentImmediately - In the implementation block
@property (assign,nonatomic) BOOL prefersFirstLineSelection;                        //@synthesize prefersFirstLineSelection=_prefersFirstLineSelection - In the implementation block
@property (assign,nonatomic) unsigned long long caretPosition;                      //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,retain) id originalContent;                                    //@synthesize originalContent=_originalContent - In the implementation block
@property (nonatomic,retain) MFMessageViewingContext * loadingContext;              //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,readonly) int composeType;                                     //@synthesize composeType=_composeType - In the implementation block
@property (nonatomic,readonly) id autosaveIdentifier;                               //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,readonly) MFMailMessage * originalMessage;                     //@synthesize originalMessage=_originalMessage - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                          //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (assign,nonatomic) int sourceAccountManagement;                           //@synthesize sourceAccountManagement=_sourceAccountManagement - In the implementation block
@property (nonatomic,readonly) NSString * contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (assign) MFComposeBodyField * bodyField;                                  //@synthesize bodyField=_bodyField - In the implementation block
-(void)setSendingAddress:(NSString *)arg1 ;
-(MFComposeBodyField *)bodyField;
-(void)removeAttachment:(id)arg1 ;
-(void)insertAttachmentWithURL:(id)arg1 ;
-(void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 ;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(int)sourceAccountManagement;
-(int)composeType;
-(MFMessageViewingContext *)loadingContext;
-(MFMailMessage *)originalMessage;
-(void)setLoadingContext:(MFMessageViewingContext *)arg1 ;
-(void)setLoadRest:(BOOL)arg1 ;
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(NSString *)originatingBundleID;
-(BOOL)showContentImmediately;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(BOOL)loadRest;
-(BOOL)showKeyboardImmediately;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(id)originalContent;
-(void)setOriginalContent:(id)arg1 ;
-(BOOL)includeAttachments;
-(void)setShowKeyboardImmediately:(BOOL)arg1 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 ;
-(NSString *)attachmentToMarkupContentID;
-(void)setAttachmentToMarkupContentID:(NSString *)arg1 ;
-(BOOL)prefersFirstLineSelection;
-(unsigned long long)caretPosition;
-(NSArray *)bccRecipients;
-(BOOL)usingDefaultAccount;
-(NSString *)sendingAddress;
-(id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2 ;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(id)initWithComposeType:(int)arg1 ;
-(id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3 ;
-(id)initWithComposeType:(int)arg1 originalMessage:(id)arg2 ;
-(void)_contextRegisterForDrawNotification;
-(void)contextDidDraw:(id)arg1 ;
-(void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(void)_contextUnregisterForDrawNotification;
-(void)setBodyField:(MFComposeBodyField *)arg1 ;
-(id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)initReplyToMessage:(id)arg1 ;
-(id)initReplyAllToMessage:(id)arg1 ;
-(id)initForwardOfMessage:(id)arg1 ;
-(id)initDraftRestoreOfMessage:(id)arg1 ;
-(id)initSendAgainDraftOfMessage:(id)arg1 ;
-(id)initOutboxRestoreOfMessage:(id)arg1 ;
-(void)setUsingDefaultAccount:(BOOL)arg1 ;
-(void)setShowContentImmediately:(BOOL)arg1 ;
-(void)setPrefersFirstLineSelection:(BOOL)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)contextID;
-(id)attachments;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSourceAccountManagement:(int)arg1 ;
-(id)autosaveIdentifier;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(id)messageBody;
@end

