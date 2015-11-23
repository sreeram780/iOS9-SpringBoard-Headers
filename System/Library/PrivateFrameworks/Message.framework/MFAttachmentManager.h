/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MFInvocationQueue, NSMutableDictionary, NSLock;

@interface MFAttachmentManager : NSObject {

	NSObject*<OS_dispatch_queue> _arrayAccessQueue;
	MFInvocationQueue* _attachmentInvocationQueue;
	NSMutableDictionary* _providers;
	NSMutableDictionary* _attachments;
	NSMutableDictionary* _metadata;
	NSLock* _metaDataLock;
	NSObject*<OS_dispatch_queue> _imageScalingQueue;

}
+(id)supportedDocumentUTIs;
+(id)allManagers;
+(id)defaultManager;
-(unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(BOOL)arg2 forContext:(id)arg3 ;
-(id)attachmentForCID:(id)arg1 ;
-(id)attachmentForURL:(id)arg1 error:(id*)arg2 ;
-(void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2 ;
-(id)attachmentsForContext:(id)arg1 ;
-(void)removeAttachmentForURL:(id)arg1 ;
-(id)attachmentForTextAttachment:(id)arg1 error:(id*)arg2 ;
-(void)addProvider:(id)arg1 forBaseURL:(id)arg2 ;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(id)attachmentForContentID:(id)arg1 ;
-(void)updateAttachment:(id)arg1 withNewData:(id)arg2 ;
-(id)imageScalingQueue;
-(void)dealloc;
-(id)init;
-(id)attachmentsForURLs:(id)arg1 error:(id*)arg2 ;
-(void)_callProgressBlockForAttachmentURL:(id)arg1 withBytes:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3 ;
-(void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2 ;
-(void)_fetchInvocationCallUsingBlock:(/*^block*/id)arg1 ;
-(void)setContentID:(id)arg1 forAttachment:(id)arg2 ;
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 ;
-(id)metadataForAttachment:(id)arg1 forKey:(id)arg2 ;
-(void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3 ;
-(void)fetchDataForAttachment:(id)arg1 ;
-(void)fetchDataSynchronouslyForAttachment:(id)arg1 ;
-(void)cancelFetchForAttachment:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contentIDForAttachment:(id)arg1 ;
-(void)updatePathWithCurrentFileNameForAttachment:(id)arg1 ;
-(BOOL)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3 ;
-(id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3 ;
-(void)removeProvider:(id)arg1 ;
-(BOOL)_setupAttachment:(id)arg1 error:(id*)arg2 ;
-(id)attachmentsForTextAttachments:(id)arg1 error:(id*)arg2 ;
-(void)clearMetadataForAttachment:(id)arg1 ;
@end

