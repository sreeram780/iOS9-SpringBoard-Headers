/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetResourceLoadingContentInformationRequestInternal, NSString, NSDate;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {

	AVAssetResourceLoadingContentInformationRequestInternal* _contentInformationRequest;

}

@property (nonatomic,copy) NSString * contentType; 
@property (assign,nonatomic) long long contentLength; 
@property (assign,getter=isByteRangeAccessSupported,nonatomic) BOOL byteRangeAccessSupported; 
@property (nonatomic,copy) NSDate * renewalDate; 
-(NSDate *)renewalDate;
-(id)initWithLoadingRequest:(id)arg1 ;
-(BOOL)isByteRangeAccessSupported;
-(BOOL)isDiskCachingPermitted;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setDiskCachingPermitted:(BOOL)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)contentType;
-(long long)contentLength;
-(void)finalize;
@end

