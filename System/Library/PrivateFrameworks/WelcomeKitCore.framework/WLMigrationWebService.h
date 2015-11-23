/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WLMigrationWebServiceDelegate;
#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class WLURLSessionController, WLSourceDevice;

@interface WLMigrationWebService : NSObject {

	WLURLSessionController* _urlSessionController;
	BOOL _importsNilData;
	BOOL _needsPreImportPhase;
	WLSourceDevice* _device;
	id<WLMigrationWebServiceDelegate> _delegate;
	unsigned long long _expectedRecordCount;
	unsigned long long _importedRecordCount;

}

@property (nonatomic,retain,readonly) WLSourceDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,__weak,readonly) id<WLMigrationWebServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL importsNilData;                                              //@synthesize importsNilData=_importsNilData - In the implementation block
@property (assign,nonatomic) BOOL needsPreImportPhase;                                         //@synthesize needsPreImportPhase=_needsPreImportPhase - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedRecordCount;                         //@synthesize expectedRecordCount=_expectedRecordCount - In the implementation block
@property (nonatomic,readonly) unsigned long long importedRecordCount;                         //@synthesize importedRecordCount=_importedRecordCount - In the implementation block
+(unsigned long long)_downloadSegmentSize;
+(BOOL)_allowSegmentedDownloads;
+(id)_requestSerialQueue;
-(id<WLMigrationWebServiceDelegate>)delegate;
-(id)contentType;
-(id)urlScheme;
-(WLSourceDevice *)device;
-(id)dataType;
-(id)urlForAccounts;
-(double)urlRequestTimeout;
-(void)_fetchSummariesForAccount:(id)arg1 statistics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performRequest:(id)arg1 numberOfRetriesAllowed:(unsigned long long)arg2 startDate:(id)arg3 logString:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)urlForRecordSummariesWithAccount:(id)arg1 ;
-(id)recordSummaryWithInfo:(id)arg1 account:(id)arg2 ;
-(void)_downloadFileInSingleSegmentForSummary:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadFileInMultipleSegmentsForSummary:(id)arg1 account:(id)arg2 segmentCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)urlForRecordWithSummary:(id)arg1 account:(id)arg2 segmentByteRange:(NSRange*)arg3 ;
-(void)_performDownloadRequest:(id)arg1 toDestination:(id)arg2 numberOfRetriesAllowed:(unsigned long long)arg3 startDate:(id)arg4 logString:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_downloadSegmentsStartingAtByteLocation:(unsigned long long)arg1 ofSummary:(id)arg2 account:(id)arg3 toFileHandle:(id)arg4 segmentCompletion:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)didReceiveData:(id)arg1 response:(id)arg2 error:(id)arg3 forSummary:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)importsNilData;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldDownloadDataAsSeparateFileForSummary:(id)arg1 account:(id)arg2 ;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(BOOL)shouldRetryWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(unsigned long long)_newNumberOfRetriesAllowed:(unsigned long long)arg1 startDate:(id)arg2 ;
-(id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3 ;
-(void)fetchAccountsAndSummariesWithStatistics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadFileForSummary:(id)arg1 account:(id)arg2 segmentCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)downloadDataForSummary:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4 ;
-(void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2 ;
-(id)importWillBegin;
-(void)importDidEnd;
-(BOOL)_shouldDelayBetweenRequests;
-(void)setImportsNilData:(BOOL)arg1 ;
-(BOOL)needsPreImportPhase;
-(void)setNeedsPreImportPhase:(BOOL)arg1 ;
-(unsigned long long)expectedRecordCount;
-(unsigned long long)importedRecordCount;
@end

