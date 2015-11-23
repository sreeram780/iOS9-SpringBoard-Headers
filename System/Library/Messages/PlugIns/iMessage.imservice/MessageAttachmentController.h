/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface MessageAttachmentController : NSObject {

	NSMutableDictionary* _peerCompletionBlocks;
	NSMutableSet* _pendingRemoteFileRequests;

}

@property (nonatomic,readonly) BOOL shouldSendLowResolutionOnly; 
@property (nonatomic,retain) NSMutableSet * pendingRemoteFileRequests;              //@synthesize pendingRemoteFileRequests=_pendingRemoteFileRequests - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)retrieveAttachmentsForMessage:(id)arg1 inlineAttachments:(id)arg2 displayID:(id)arg3 token:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)remoteFileResponse:(id)arg1 ;
-(void)remotefileRequest:(id)arg1 attempts:(long long)arg2 ;
-(BOOL)acceptFileTransfer:(id)arg1 ;
-(void)sendAttachmentsForMessage:(id)arg1 canSendInline:(BOOL)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 completionBlock:(/*^block*/id)arg5 uploadFailureBlock:(/*^block*/id)arg6 ;
-(unsigned long long)_largeFileSizeFor:(id)arg1 allowedLargerRepresentation:(BOOL*)arg2 ;
-(void)_fileTransferSizeForAuxVideoFromServerBag:(unsigned long long*)arg1 smallSize:(unsigned long long*)arg2 serverBag:(id)arg3 ;
-(unsigned long long)_maxAllowedAuxVideoSize;
-(void)_sizeLimitsForTransfer:(id)arg1 bigSize:(unsigned long long*)arg2 smallSize:(unsigned long long*)arg3 ;
-(BOOL)shouldSendLowResolutionOnly;
-(BOOL)_shouldAutoDownloadUTIType:(id)arg1 fileSize:(unsigned long long)arg2 ;
-(void)retrieveLocalFileTransfer:(id)arg1 attachmentIndex:(unsigned long long)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 requestedSize:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(NSMutableSet *)pendingRemoteFileRequests;
-(void)setPendingRemoteFileRequests:(NSMutableSet *)arg1 ;
-(void)maxTransferFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
@end

