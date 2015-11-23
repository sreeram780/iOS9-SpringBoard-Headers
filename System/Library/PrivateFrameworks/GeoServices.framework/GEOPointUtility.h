/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2 ;
+(SCD_Struct_GE16)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3 ;
+(id)unpackZilchPoints:(id)arg1 ;
+(BOOL)zilchPointsSupported;
+(void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(unsigned long long)pointCount:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(BOOL)arg3 ;
+(id)unpackBasicPoints:(id)arg1 ;
@end

