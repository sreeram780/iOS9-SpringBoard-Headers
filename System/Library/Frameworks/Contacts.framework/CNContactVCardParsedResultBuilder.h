/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardParsedResultBuilder.h>

@class CNMutableContact, NSString;

@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder> {

	CNMutableContact* _contact;
	BOOL _empty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)socialProfileFromDictionaryTransform;
+(/*^block*/id)instantMessageAddressFromDictionaryTransform;
+(id)contactKeyForVCardKey:(id)arg1 ;
+(/*^block*/id)contactValueTransformForVCardKey:(id)arg1 ;
+(id)labeledValuesWithValues:(id)arg1 transform:(/*^block*/id)arg2 labels:(id)arg3 isPrimaries:(id)arg4 ;
-(long long)personFlags;
-(BOOL)setPersonFlags:(long long)arg1 ;
-(long long)contactTypeFromPersonFlags:(long long)arg1 ;
-(long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(long long)arg2 ;
-(BOOL)canSetValueForProperty:(id)arg1 ;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4 ;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(void)setUnknownProperties:(id)arg1 ;
-(id)validCountryCodes;
-(long long)displayNameOrderFromPersonFlags:(long long)arg1 ;
-(long long)personFlagsByAddingDisplayNameOrder:(long long)arg1 toFlags:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(id)valueForProperty:(id)arg1 ;
-(id)build;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
@end

