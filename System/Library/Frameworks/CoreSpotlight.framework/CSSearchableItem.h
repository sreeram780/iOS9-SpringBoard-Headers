/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSIndexQueuableItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchableItemAttributeSet, NSString, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying> {

	CSSearchableItemAttributeSet* _attributeSet;

}

@property (copy) NSString * uniqueIdentifier; 
@property (copy) NSString * domainIdentifier; 
@property (copy) NSDate * expirationDate; 
@property (retain) CSSearchableItemAttributeSet * attributeSet;              //@synthesize attributeSet=_attributeSet - In the implementation block
@property (assign) BOOL representsDeepLink; 
@property (assign) BOOL noIndex; 
@property (assign) BOOL isUpdate; 
@property (copy) NSString * bundleID; 
@property (copy) NSString * protection; 
+(id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)searchableItem;
-(void)_standardizePeople:(id)arg1 ;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(void)_standardizeHTML:(id)arg1 ;
-(void)_fixBrokenAuthors:(id)arg1 ;
-(void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 itemPersons:(id)arg3 personDictionary:(id)arg4 contactProperties:(id)arg5 nameKey:(id)arg6 emailKey:(id)arg7 contactIdentifierKey:(id)arg8 personKey:(id)arg9 attributeSet:(id)arg10 ;
-(void)standardizeAttributes;
-(id)filteredSpotlightAttributes;
-(BOOL)noIndex;
-(BOOL)representsDeepLink;
-(id)_propertiesDescription;
-(id)initWithAttributeSet:(id)arg1 ;
-(BOOL)_isFullyFormed;
-(BOOL)_hasAttributesOfType:(id)arg1 ;
-(void)_updateWithSearchableItem:(id)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setNoIndex:(BOOL)arg1 ;
-(void)setRepresentsDeepLink:(BOOL)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)setAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(NSString *)domainIdentifier;
-(BOOL)isUpdate;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(CSSearchableItemAttributeSet *)attributeSet;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3 ;
-(void)setProtection:(NSString *)arg1 ;
-(NSString *)protection;
-(void)setDomainIdentifier:(NSString *)arg1 ;
@end

