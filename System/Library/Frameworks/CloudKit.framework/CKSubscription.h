/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate, CKNotificationInfo, CKRecordZoneID;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying> {

	NSString* _subscriptionID;
	long long _subscriptionType;
	NSString* _recordType;
	NSPredicate* _predicate;
	unsigned long long _subscriptionOptions;
	CKNotificationInfo* _notificationInfo;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy) NSString * subscriptionID;                             //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (assign,nonatomic) long long subscriptionType;                          //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (nonatomic,copy) NSString * recordType;                                 //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) unsigned long long subscriptionOptions;              //@synthesize subscriptionOptions=_subscriptionOptions - In the implementation block
@property (nonatomic,copy) CKNotificationInfo * notificationInfo;                 //@synthesize notificationInfo=_notificationInfo - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                               //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(void)_validateSubscriptionOptions:(unsigned long long)arg1 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(CKNotificationInfo *)notificationInfo;
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
-(id)_initWithSubscriptionType:(long long)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
-(CKRecordZoneID *)zoneID;
-(id)CKPropertiesDescription;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)_initBare;
-(NSString *)subscriptionID;
-(void)setRecordType:(NSString *)arg1 ;
-(NSString *)recordType;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(void)setSubscriptionType:(long long)arg1 ;
-(long long)subscriptionType;
-(void)setSubscriptionOptions:(unsigned long long)arg1 ;
-(unsigned long long)subscriptionOptions;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
@end

