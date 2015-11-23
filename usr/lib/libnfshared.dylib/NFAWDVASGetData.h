/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class NSData, NSString, AWDNFCHCEVASGetData;

@interface NFAWDVASGetData : NSObject <NFAWDEventProtocol> {

	BOOL signupOnly;
	unsigned version;
	unsigned terminalCapabilities;
	unsigned filterType;
	unsigned filterValue;
	unsigned swStatus;
	NSData* merchantID;
	NSString* merchantURL;
	AWDNFCHCEVASGetData* _metric;

}

@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL signupOnly; 
@property (assign,nonatomic) unsigned terminalCapabilities; 
@property (nonatomic,retain) NSData * merchantID; 
@property (nonatomic,retain) NSString * merchantURL; 
@property (assign,nonatomic) unsigned filterType; 
@property (assign,nonatomic) unsigned filterValue; 
@property (assign,nonatomic) unsigned swStatus; 
@property (nonatomic,retain) AWDNFCHCEVASGetData * metric;               //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(unsigned)filterType;
-(void)setFilterType:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setMetric:(AWDNFCHCEVASGetData *)arg1 ;
-(AWDNFCHCEVASGetData *)metric;
-(void)setFilterValue:(unsigned)arg1 ;
-(unsigned)filterValue;
-(void)setMerchantID:(NSData *)arg1 ;
-(void)setMerchantURL:(NSString *)arg1 ;
-(void)setSignupOnly:(BOOL)arg1 ;
-(void)setTerminalCapabilities:(unsigned)arg1 ;
-(void)setSwStatus:(unsigned)arg1 ;
-(BOOL)signupOnly;
-(unsigned)terminalCapabilities;
-(NSData *)merchantID;
-(NSString *)merchantURL;
-(unsigned)swStatus;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

