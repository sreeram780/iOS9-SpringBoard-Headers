/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLLocalStreamTask.h>
#import <libobjc.A.dylib/SessionConnectionDelegate.h>

@class NSMutableArray, NSString;

@interface __NSCFURLLocalStreamTaskFromDataTask : __NSCFURLLocalStreamTask <SessionConnectionDelegate> {

	CFReadStreamRef _myReadToHisWrite;
	BOOL _myReadToHisWriteEOF;
	BOOL _myReadToHisWriteSignaled;
	SCD_Struct_NS30 _myReadToHisWriteError;
	CFWriteStreamRef _myWriteToHisRead;
	BOOL _myWriteToHisReadEOF;
	BOOL _myWriteToHisReadSignaled;
	SCD_Struct_NS30 _myWriteToHisReadError;
	NSMutableArray* _myWriteToHisReadWork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(id)initWithTask:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)connectionWillFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveConnectionCacheKey:(HTTPConnectionCacheKey*)arg2 ;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4 ;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2 ;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)_onqueue_ioTickFromDataTask;
-(void)_onqueue_ioTickFromDataTaskConversion:(const char*)arg1 ;
-(id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(void)_unimp:(const char*)arg1 ;
-(void)_onqueue_didFinishLoadingWithError:(id)arg1 ;
-(void)_onqueue_stFromDataTaskReadCallback:(unsigned long long)arg1 ;
-(void)_onqueue_stFromDataTaskWriteCallback:(unsigned long long)arg1 ;
-(void)dealloc;
@end

