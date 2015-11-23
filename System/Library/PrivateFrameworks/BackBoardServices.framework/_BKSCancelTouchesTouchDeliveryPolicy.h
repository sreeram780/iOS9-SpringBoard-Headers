/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	unsigned _contextId;
	NSObject*<OS_xpc_object> _assertionEndpoint;
	double _initialTouchTimestamp;

}

@property (nonatomic,readonly) unsigned contextId;                        //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,readonly) double initialTouchTimestamp;              //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)contextId;
-(void)setAssertionEndpoint:(id)arg1 ;
-(id)initWithContextId:(unsigned)arg1 initialTouchTimestamp:(double)arg2 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)assertionEndpoint;
-(double)initialTouchTimestamp;
@end

