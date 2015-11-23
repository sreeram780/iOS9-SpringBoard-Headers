/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class NSData, AWDNFCSEAIDSelectEvent, NSString;

@interface NFAWDSelect : NSObject <NFAWDEventProtocol> {

	NSData* aid;
	AWDNFCSEAIDSelectEvent* _metric;

}

@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) AWDNFCSEAIDSelectEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setMetric:(AWDNFCSEAIDSelectEvent *)arg1 ;
-(AWDNFCSEAIDSelectEvent *)metric;
-(void)setAid:(NSData *)arg1 ;
-(NSData *)aid;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

