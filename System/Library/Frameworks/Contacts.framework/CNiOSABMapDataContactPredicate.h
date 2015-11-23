/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABMapDataContactPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _mapString;

}

@property (nonatomic,copy,readonly) NSString * mapString;              //@synthesize mapString=_mapString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cn_supportsNativeSorting;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(_CFError*)arg5 ;
-(NSString *)mapString;
-(void)dealloc;
-(NSString *)description;
-(id)initWithString:(id)arg1 ;
@end

