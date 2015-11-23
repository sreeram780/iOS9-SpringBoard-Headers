/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKQuery, CKRecordZoneID, CKQueryCursor, NSArray;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContent;
	CKQuery* _query;
	CKRecordZoneID* _zoneID;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;

}

@property (nonatomic,retain) CKQuery * query;                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                      //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                       //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                 //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKQuery *)query;
-(void)setQuery:(CKQuery *)arg1 ;
-(CKQueryCursor *)cursor;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(NSArray *)desiredKeys;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(unsigned long long)resultsLimit;
-(BOOL)shouldFetchAssetContent;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
@end

