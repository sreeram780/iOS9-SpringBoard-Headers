/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _ISOCountryCode;
	NSString* _formattedAddress;

}

@property (nonatomic,readonly) NSMutableDictionary * addressDictionary; 
@property (nonatomic,copy) NSString * street;                                        //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * city;                                          //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * country;                                       //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * ISOCountryCode;                                //@synthesize ISOCountryCode=_ISOCountryCode - In the implementation block
@property (nonatomic,copy) NSString * formattedAddress;                              //@synthesize formattedAddress=_formattedAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCountryCode;
+(id)postalAddressWithDictionary:(id)arg1 ;
+(id)addressFormatsDictionary;
+(id)localizedAddressFormatDictionaryForCountryCode:(id)arg1 ;
+(id)localizedCountryNameForCountryCode:(id)arg1 ;
+(id)postalAddressWithDictionaryRepresentation:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)keyboardSettingsForAddressPart:(id)arg1 ;
-(NSMutableDictionary *)addressDictionary;
-(id)initWithPostalAddress:(id)arg1 ;
-(void)setFormattedAddress:(NSString *)arg1 ;
-(NSString *)city;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)formattedAddress;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)street;
-(BOOL)isValid:(id*)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)ISOCountryCode;
-(NSString *)postalCode;
@end

