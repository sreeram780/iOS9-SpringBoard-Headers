/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol SubCalURLRequestDelegate;
@class NSURL, NSString, DAStatusReport, NSURLConnection, NSMutableData, NSFileHandle, NSDate, NSTimer;

@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate> {

	BOOL _useFileCache;
	BOOL _sendDataUpdateCallback;
	NSURL* _url;
	id<SubCalURLRequestDelegate> _delegate;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	NSString* _filePath;
	DAStatusReport* _statusReport;
	NSURLConnection* _connection;
	NSMutableData* _connectionData;
	NSFileHandle* _fileHandle;
	NSDate* _startTime;
	NSTimer* _idleTimer;
	NSString* _startRunloopDescriptionString;

}

@property (nonatomic,copy) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (assign,nonatomic,__weak) id<SubCalURLRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * username;                                         //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL useFileCache;                                         //@synthesize useFileCache=_useFileCache - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                             //@synthesize statusReport=_statusReport - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * connectionData;                            //@synthesize connectionData=_connectionData - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                                 //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) BOOL sendDataUpdateCallback;                               //@synthesize sendDataUpdateCallback=_sendDataUpdateCallback - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                                       //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) NSString * startRunloopDescriptionString;                  //@synthesize startRunloopDescriptionString=_startRunloopDescriptionString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeFileCache;
+(id)_cachedICSFilesDirectory;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<SubCalURLRequestDelegate>)arg1 ;
-(id<SubCalURLRequestDelegate>)delegate;
-(double)timestamp;
-(NSURL *)url;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)_idleTimerFired;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSDate *)startTime;
-(NSURLConnection *)connection;
-(void)startConnection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(DAStatusReport *)statusReport;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(void)setUseFileCache:(BOOL)arg1 ;
-(NSString *)startRunloopDescriptionString;
-(void)_setHeadersOnRequest:(id)arg1 ;
-(void)_markStartTime;
-(void)_createIdleTimer;
-(void)_markEndTime;
-(void)setSendDataUpdateCallback:(BOOL)arg1 ;
-(void)_extendIdleTimer;
-(void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3 ;
-(void)_openFileHandle;
-(BOOL)useFileCache;
-(void)_receivedDataForFile:(id)arg1 ;
-(BOOL)sendDataUpdateCallback;
-(void)setStartRunloopDescriptionString:(NSString *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)_cancelIdleTimer;
-(NSMutableData *)connectionData;
-(void)setConnectionData:(NSMutableData *)arg1 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
@end

