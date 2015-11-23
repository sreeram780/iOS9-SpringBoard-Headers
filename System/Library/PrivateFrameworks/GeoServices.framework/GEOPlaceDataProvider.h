/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOPlaceDataProvider : NSObject {

	BOOL _isLoading;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) BOOL isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(BOOL)isLoading;
-(void)cancelRequest;
-(id)finishedHandler;
-(void)requestCompleted;
-(void)cancelProviderRequest;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)providerDidCancel;
-(void)setErrorHandler:(id)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(id)errorHandler;
-(void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2 ;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2 ;
-(void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
@end
