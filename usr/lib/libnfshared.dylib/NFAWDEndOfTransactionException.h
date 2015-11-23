/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIEndOfTransactionExceptionEvent, NSString;

@interface NFAWDEndOfTransactionException : NSObject <NFAWDEventProtocol> {

	AWDNFCHCIEndOfTransactionExceptionEvent* _metric;

}

@property (nonatomic,retain) AWDNFCHCIEndOfTransactionExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setMetric:(AWDNFCHCIEndOfTransactionExceptionEvent *)arg1 ;
-(AWDNFCHCIEndOfTransactionExceptionEvent *)metric;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
@end

