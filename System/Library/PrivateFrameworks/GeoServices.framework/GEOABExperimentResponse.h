/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOABExperimentResponse : PBCodable <NSCopying> {

	unsigned long long _refreshIntervalSeconds;
	double _timestamp;
	NSMutableArray* _assignments;
	NSString* _requestGuid;
	NSString* _sourceURL;
	BOOL _invalidatePoiCache;
	BOOL _invalidateTileCache;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) BOOL hasRequestGuid; 
@property (nonatomic,retain) NSString * requestGuid;                                 //@synthesize requestGuid=_requestGuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * assignments;                           //@synthesize assignments=_assignments - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidateTileCache; 
@property (assign,nonatomic) BOOL invalidateTileCache;                               //@synthesize invalidateTileCache=_invalidateTileCache - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatePoiCache; 
@property (assign,nonatomic) BOOL invalidatePoiCache;                                //@synthesize invalidatePoiCache=_invalidatePoiCache - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshIntervalSeconds; 
@property (assign,nonatomic) unsigned long long refreshIntervalSeconds;              //@synthesize refreshIntervalSeconds=_refreshIntervalSeconds - In the implementation block
-(id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sourceURL;
-(BOOL)hasSourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(BOOL)hasRequestGuid;
-(unsigned long long)assignmentsCount;
-(void)setInvalidateTileCache:(BOOL)arg1 ;
-(id)assignmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)invalidateTileCache;
-(BOOL)hasInvalidatePoiCache;
-(void)setHasRefreshIntervalSeconds:(BOOL)arg1 ;
-(NSMutableArray *)assignments;
-(void)setHasInvalidateTileCache:(BOOL)arg1 ;
-(unsigned long long)refreshIntervalSeconds;
-(BOOL)hasRefreshIntervalSeconds;
-(void)setInvalidatePoiCache:(BOOL)arg1 ;
-(void)clearAssignments;
-(BOOL)hasInvalidateTileCache;
-(NSString *)requestGuid;
-(void)addAssignment:(id)arg1 ;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(void)setRequestGuid:(NSString *)arg1 ;
-(BOOL)invalidatePoiCache;
-(void)setHasInvalidatePoiCache:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

