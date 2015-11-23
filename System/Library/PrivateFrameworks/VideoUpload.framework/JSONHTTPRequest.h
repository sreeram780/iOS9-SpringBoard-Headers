/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol JSONHTTPRequestDelegate;
@class NSMutableURLRequest, NSURLConnection, NSMutableData, NSData, OAURLRequestSigner, NSString, NSDictionary, NSHTTPURLResponse;

@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSMutableURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	NSData* _overridePostBody;
	id<JSONHTTPRequestDelegate> _delegate;
	BOOL _receivedValidResponse;
	OAURLRequestSigner* _signer;
	NSString* _HTTPRequestBoundary;
	BOOL _signsMultipartPOSTData;
	BOOL _allowsCellularAccess;
	int _HTTPMethod;
	int _responseType;
	NSDictionary* _getParams;
	NSDictionary* _postParams;
	NSDictionary* _unsignedPostParams;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,retain) NSDictionary * getParams;                       //@synthesize getParams=_getParams - In the implementation block
@property (nonatomic,retain) NSDictionary * postParams;                      //@synthesize postParams=_postParams - In the implementation block
@property (nonatomic,retain) NSDictionary * unsignedPostParams;              //@synthesize unsignedPostParams=_unsignedPostParams - In the implementation block
@property (assign,nonatomic) BOOL signsMultipartPOSTData;                    //@synthesize signsMultipartPOSTData=_signsMultipartPOSTData - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;                 //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) int HTTPMethod;                                 //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) int responseType;                               //@synthesize responseType=_responseType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)encodedStringForParameterDictionary:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(NSHTTPURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)allowsCellularAccess;
-(int)HTTPMethod;
-(void)setResponseType:(int)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)setHTTPMethod:(int)arg1 ;
-(int)responseType;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 signer:(id)arg3 ;
-(id)HTTPRequestBoundary;
-(id)_multipartParamData:(id)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(void)setHTTPHeader:(id)arg1 value:(id)arg2 ;
-(void)setOverridePostBody:(id)arg1 ;
-(NSDictionary *)getParams;
-(void)setGetParams:(NSDictionary *)arg1 ;
-(NSDictionary *)postParams;
-(void)setPostParams:(NSDictionary *)arg1 ;
-(NSDictionary *)unsignedPostParams;
-(void)setUnsignedPostParams:(NSDictionary *)arg1 ;
-(BOOL)signsMultipartPOSTData;
-(void)setSignsMultipartPOSTData:(BOOL)arg1 ;
@end

