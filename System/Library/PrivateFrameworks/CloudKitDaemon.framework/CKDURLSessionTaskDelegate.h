/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSOperationQueue, NSString;


@protocol CKDURLSessionTaskDelegate <NSObject>
@property (nonatomic,readonly) NSOperationQueue * delegateQueue; 
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,readonly) NSObject*<OS_voucher> voucher; 
@required
-(NSOperationQueue *)delegateQueue;
-(NSString *)sectionID;
-(void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSessionTask:(id)arg1 needNewBodyStream:(/*^block*/id)arg2;
-(void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
-(void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
-(void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2;
-(id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2;
-(void)URLSessionTaskIsWaitingForConnection:(id)arg1;
-(void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
-(NSObject*<OS_voucher>)voucher;

@end

