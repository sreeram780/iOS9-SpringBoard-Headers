/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	NSObject*<OS_dispatch_queue> _figAssetWriterAccessQueue;
	BOOL _startSessionCalled;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prepareInputsOperationsWithInputs:(id)arg1 ;
+(id)finalStepWorkaroundOperationWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 error:(id*)arg2 ;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)figTrackReferences;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
-(id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1 ;
-(id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1 ;
-(void)dealloc;
-(long long)status;
-(void)startSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelWriting;
-(void)finalize;
@end

