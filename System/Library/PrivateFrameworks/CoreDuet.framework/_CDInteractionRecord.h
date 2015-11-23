/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, _CDContactRecord;

@interface _CDInteractionRecord : NSManagedObject

@property (nonatomic,retain) NSString * bundleId; 
@property (nonatomic,retain) NSString * domainIdentifier; 
@property (nonatomic,retain) NSString * contentURL; 
@property (assign,nonatomic) double creationDate; 
@property (assign,nonatomic) long long direction; 
@property (assign,nonatomic) double endDate; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) NSString * locationUUID; 
@property (assign,nonatomic) long long mechanism; 
@property (assign,nonatomic) long long recipientCount; 
@property (assign,nonatomic) double startDate; 
@property (nonatomic,retain) NSString * account; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * keywords; 
@property (nonatomic,retain) NSSet * recipients; 
@property (nonatomic,retain) _CDContactRecord * sender; 
@end

