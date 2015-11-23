/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertInfoTrustDescription.h>

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {

	SecTrustRef _trust;
	int _action;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_expirationDate;
-(void)dealloc;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 ;
-(unsigned long long)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned long long)arg1 ;
-(id)summaryTitle;
-(id)summarySubtitle;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1 ;
-(id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1 ;
-(id)certificateExpirationDateAtIndex:(unsigned long long)arg1 ;
-(BOOL)isRootCertificate;
-(BOOL)isTrusted;
@end

