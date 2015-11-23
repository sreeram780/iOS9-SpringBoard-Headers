/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol MFMessageComposeViewControllerDelegate;
@class NSArray, NSString, NSMutableArray;

@interface MFMessageComposeViewController : UINavigationController {

	id<MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
	NSArray* _recipients;
	NSString* _body;
	NSString* _subject;
	NSMutableArray* _mutableAttachmentURLs;
	unsigned long long _currentAttachedVideoCount;
	unsigned long long _currentAttachedAudioCount;
	unsigned long long _currentAttachedImageCount;
	NSArray* _attachments;

}

@property (assign,nonatomic) id<MFMessageComposeViewControllerDelegate> messageComposeDelegate;              //@synthesize messageComposeDelegate=_messageComposeDelegate - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * body;                                                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachments;                                                   //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedVideoCount;                                   //@synthesize currentAttachedVideoCount=_currentAttachedVideoCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedAudioCount;                                   //@synthesize currentAttachedAudioCount=_currentAttachedAudioCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedImageCount;                                   //@synthesize currentAttachedImageCount=_currentAttachedImageCount - In the implementation block
@property (nonatomic,copy) NSMutableArray * mutableAttachmentURLs;                                           //@synthesize mutableAttachmentURLs=_mutableAttachmentURLs - In the implementation block
+(BOOL)_canSendText;
+(void)_updateServiceAvailability;
+(void)_serviceAvailabilityChanged:(id)arg1 ;
+(id)_chatKitBundle;
+(void)_setupAccountMonitor;
+(BOOL)canSendSubject;
+(BOOL)canSendAttachments;
+(void)_startListeningForAvailabilityNotifications;
+(void)initialize;
+(BOOL)canSendText;
+(BOOL)isMMSEnabled;
+(BOOL)isiMessageEnabled;
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(void)disableUserAttachments;
-(void)setCurrentAttachedVideoCount:(unsigned long long)arg1 ;
-(void)setCurrentAttachedAudioCount:(unsigned long long)arg1 ;
-(void)setCurrentAttachedImageCount:(unsigned long long)arg1 ;
-(id)_MIMETypeForURL:(id)arg1 ;
-(BOOL)_isVideoMIMEType:(id)arg1 ;
-(BOOL)_isAudioMIMEType:(id)arg1 ;
-(BOOL)_isImageMIMEType:(id)arg1 ;
-(NSMutableArray *)mutableAttachmentURLs;
-(id)_contentTypeForMIMEType:(id)arg1 ;
-(void)_updateAttachmentCountForAttachmentURL:(id)arg1 ;
-(id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2 ;
-(BOOL)canAddAttachmentURL:(id)arg1 ;
-(id)attachmentURLs;
-(BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2 ;
-(void)_setCanEditRecipients:(BOOL)arg1 ;
-(id<MFMessageComposeViewControllerDelegate>)messageComposeDelegate;
-(void)setMutableAttachmentURLs:(NSMutableArray *)arg1 ;
-(unsigned long long)currentAttachedVideoCount;
-(unsigned long long)currentAttachedAudioCount;
-(unsigned long long)currentAttachedImageCount;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)body;
-(NSArray *)attachments;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setMessageComposeDelegate:(id<MFMessageComposeViewControllerDelegate>)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2 ;
-(BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3 ;
-(void)smsComposeControllerCancelled:(id)arg1 ;
-(void)smsComposeControllerSendStarted:(id)arg1 ;
@end

