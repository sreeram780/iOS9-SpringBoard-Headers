/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class PFUbiquityLocation, NSString, NSError, NSObject;

@interface PFUbiquitySafeSaveFile : NSObject {

	PFUbiquityLocation* _permanentLocation;
	PFUbiquityLocation* _safeSaveLocation;
	PFUbiquityLocation* _currentLocation;
	NSString* _localPeerID;
	BOOL _continueCheckingDownload;
	BOOL _downloadSuccess;
	NSError* _downloadError;
	BOOL _continueCheckingUpload;
	BOOL _safeSaveSuccess;
	BOOL _moveAfterSave;
	NSError* _safeSaveError;
	NSObject*<OS_dispatch_semaphore> _safeSaveSemaphore;
	BOOL _isRegistered;

}

@property (nonatomic,readonly) PFUbiquityLocation * permanentLocation;              //@synthesize permanentLocation=_permanentLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * safeSaveLocation;               //@synthesize safeSaveLocation=_safeSaveLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSError * safeSaveError;                             //@synthesize safeSaveError=_safeSaveError - In the implementation block
@property (nonatomic,readonly) BOOL isRegistered;                                   //@synthesize isRegistered=_isRegistered - In the implementation block
@property (nonatomic,readonly) BOOL continueCheckingUpload;                         //@synthesize continueCheckingUpload=_continueCheckingUpload - In the implementation block
@property (nonatomic,readonly) BOOL safeSaveSuccess;                                //@synthesize safeSaveSuccess=_safeSaveSuccess - In the implementation block
@property (nonatomic,readonly) BOOL moveAfterSave;                                  //@synthesize moveAfterSave=_moveAfterSave - In the implementation block
@property (nonatomic,readonly) BOOL existsAtSafeSaveLocation; 
@property (nonatomic,readonly) BOOL existsAtPermanentLocation; 
@property (nonatomic,readonly) BOOL existsInCloud; 
@property (nonatomic,readonly) BOOL downloadSuccess;                                //@synthesize downloadSuccess=_downloadSuccess - In the implementation block
@property (nonatomic,readonly) BOOL continueCheckingDownload;                       //@synthesize continueCheckingDownload=_continueCheckingDownload - In the implementation block
@property (nonatomic,readonly) NSError * downloadError;                             //@synthesize downloadError=_downloadError - In the implementation block
-(NSString *)localPeerID;
-(BOOL)continueCheckingDownload;
-(void)checkFileDownload;
-(BOOL)continueCheckingUpload;
-(void)checkSafeSaveFileUpload;
-(PFUbiquityLocation *)permanentLocation;
-(PFUbiquityLocation *)safeSaveLocation;
-(id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3 ;
-(BOOL)existsInCloud;
-(BOOL)loadFile:(id*)arg1 ;
-(BOOL)downloadLatestVersion:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)moveToPermanentLocation:(id*)arg1 ;
-(BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)safeSaveFile:(BOOL)arg1 moveToPermanentLocation:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)existsAtSafeSaveLocation;
-(BOOL)waitForFileToUpload:(id*)arg1 ;
-(BOOL)isFileUploaded:(id*)arg1 ;
-(BOOL)existsAtPermanentLocation;
-(BOOL)removeFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFileDownloaded:(id*)arg1 ;
-(BOOL)waitForFileToDownload:(id*)arg1 ;
-(void)checkSafeSaveFileUploadAsync;
-(void)setSafeSaveSuccess:(BOOL)arg1 ;
-(void)safeSaveFinishedUpload;
-(void)setSafeSaveError:(NSError *)arg1 ;
-(void)setDownloadSuccess:(BOOL)arg1 ;
-(void)downloadFinished;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)safeSaveError;
-(BOOL)safeSaveSuccess;
-(BOOL)moveAfterSave;
-(BOOL)downloadSuccess;
-(NSError *)downloadError;
-(BOOL)isRegistered;
-(BOOL)writeFile:(id*)arg1 ;
-(BOOL)removeFile:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(PFUbiquityLocation *)currentLocation;
-(void)setCurrentLocation:(PFUbiquityLocation *)arg1 ;
@end

