/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudService.h>

@class PLPhotoLibrary, PLCloudOperationQueue, PLCloudPhotoLibraryManager;

@interface PLCloudDowngradeService : PLCloudService {

	PLPhotoLibrary* _localLibrary;
	PLCloudOperationQueue* _pruneQueue;
	PLCloudOperationQueue* _compressQueue;
	PLCloudPhotoLibraryManager* _remoteLibrary;

}
-(void)dealloc;
-(void)activate;
-(void)systemStarted:(id)arg1 ;
-(void)resetQueue;
-(void)downgradeRequested:(id)arg1 ;
-(void)resumePrunes;
-(void)pruneResource:(id)arg1 ;
-(void)cancelPrune:(id)arg1 ;
-(BOOL)canLocallyDownscaleAsset:(id)arg1 fromQualityClass:(unsigned short)arg2 toQualityClass:(unsigned short)arg3 ;
-(BOOL)queue:(id)arg1 shouldRetryOperation:(id)arg2 forError:(id)arg3 ;
-(void)queue:(id)arg1 startedExecutingOperation:(id)arg2 ;
-(void)queue:(id)arg1 successfullyCompletedOperation:(id)arg2 remainingInPreferenceClass:(unsigned long long)arg3 ;
-(void)queue:(id)arg1 failedOperation:(id)arg2 withError:(id)arg3 ;
-(void)queue:(id)arg1 unrecoverablyFailedOperation:(id)arg2 withError:(id)arg3 remainingInPreferenceClass:(unsigned long long)arg4 ;
-(void)queue:(id)arg1 addedOperation:(id)arg2 inPreferenceClass:(id)arg3 newPreferenceClassTotal:(unsigned long long)arg4 ;
@end

