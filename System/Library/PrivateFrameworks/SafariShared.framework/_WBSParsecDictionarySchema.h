/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSchema.h>

@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema {

	NSDictionary* _keysToSchemata;

}

@property (nonatomic,copy) NSDictionary * keysToSchemata;              //@synthesize keysToSchemata=_keysToSchemata - In the implementation block
-(id)initWithSchemaDictionary:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
-(BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)keysToSchemata;
-(void)setKeysToSchemata:(NSDictionary *)arg1 ;
@end

