/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContainerPredicate.h>

@class NSString;

@interface CNiOSABDisabledContainersPredicate : CNPredicate <CNiOSContainerPredicate> {

	BOOL _includesDisabledContainers;

}

@property (nonatomic,readonly) BOOL includesDisabledContainers;              //@synthesize includesDisabledContainers=_includesDisabledContainers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CFArrayRef)cn_copyContainersInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(BOOL)includesDisabledContainers;
-(id)initWithDisabledContainersIncluded:(BOOL)arg1 ;
-(NSString *)description;
@end

