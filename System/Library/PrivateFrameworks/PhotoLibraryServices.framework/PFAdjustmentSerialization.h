/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PFAdjustmentSerialization : NSObject
+(BOOL)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4 ;
+(BOOL)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3 ;
+(id)serializeDictionary:(id)arg1 error:(id*)arg2 ;
+(id)deserializeDictionaryFromData:(id)arg1 error:(id*)arg2 ;
+(id)serializeAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)deserializeAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
@end

