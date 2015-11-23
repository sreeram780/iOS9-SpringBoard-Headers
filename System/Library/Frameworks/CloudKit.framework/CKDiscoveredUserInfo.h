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

@class CKRecordID, CNContact, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _userRecordID;
	CNContact* _displayContact;

}

@property (nonatomic,copy,readonly) CKRecordID * userRecordID;               //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) CNContact * displayContact;              //@synthesize displayContact=_displayContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(CNContact *)displayContact;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithUserRecordID:(id)arg1 displayContact:(id)arg2 ;
-(CKRecordID *)userRecordID;
@end
