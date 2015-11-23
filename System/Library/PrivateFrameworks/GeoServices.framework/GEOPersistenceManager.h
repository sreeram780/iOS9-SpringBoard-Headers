/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOPersistenceManager : NSObject
+(BOOL)createMuidMappingDirectoryForPath:(id)arg1 WithError:(id*)arg2 ;
+(BOOL)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 toPath:(id)arg3 error:(id*)arg4 ;
+(BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 atPath:(id)arg3 error:(id*)arg4 ;
+(BOOL)phoneNumberMuidMappingFileExistsAtPath:(id)arg1 ;
+(BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 version:(id*)arg3 atPath:(id)arg4 error:(id*)arg5 ;
@end

