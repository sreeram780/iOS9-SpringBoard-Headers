/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICProgressIndicatorTrackerDelegate.h>

@class NSOperationQueue, NSMutableSet, ICProgressIndicatorTracker, NSString;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate> {

	NSOperationQueue* _asyncGeneratorQueue;
	NSOperationQueue* _costlyGeneratorQueue;
	NSOperationQueue* _generatorQueue;
	NSMutableSet* _attachmentsToRetry;
	ICProgressIndicatorTracker* _progressTracker;

}

@property (nonatomic,retain) NSOperationQueue * asyncGeneratorQueue;                    //@synthesize asyncGeneratorQueue=_asyncGeneratorQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * costlyGeneratorQueue;                   //@synthesize costlyGeneratorQueue=_costlyGeneratorQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * generatorQueue;                         //@synthesize generatorQueue=_generatorQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentsToRetry;                         //@synthesize attachmentsToRetry=_attachmentsToRetry - In the implementation block
@property (nonatomic,retain) ICProgressIndicatorTracker * progressTracker;              //@synthesize progressTracker=_progressTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGenerator;
-(void)dealloc;
-(id)init;
-(ICProgressIndicatorTracker *)progressTracker;
-(void)setProgressTracker:(ICProgressIndicatorTracker *)arg1 ;
-(void)generatePreviewsIfNeeded;
-(void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1 ;
-(void)generatePreviewIfNeededForAttachment:(id)arg1 ;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentWillBeDeleted:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(void)setupAttachmentPreviewGeneratorObservers;
-(NSOperationQueue *)costlyGeneratorQueue;
-(BOOL)isPreviewGenerationSupported;
-(NSMutableSet *)attachmentsToRetry;
-(NSOperationQueue *)asyncGeneratorQueue;
-(NSOperationQueue *)generatorQueue;
-(void)progressIndicatorTrackerStartAnimation;
-(void)progressIndicatorTrackerStopAnimation;
-(void)cancelAttachmentPreviewGeneration;
-(void)setAsyncGeneratorQueue:(NSOperationQueue *)arg1 ;
-(void)setCostlyGeneratorQueue:(NSOperationQueue *)arg1 ;
-(void)setGeneratorQueue:(NSOperationQueue *)arg1 ;
-(void)setAttachmentsToRetry:(NSMutableSet *)arg1 ;
@end

