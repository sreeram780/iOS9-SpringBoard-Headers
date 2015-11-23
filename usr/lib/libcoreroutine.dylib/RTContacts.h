/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNContactStore, NSMutableArray;

@interface RTContacts : NSObject {

	CNContactStore* _contactStore;
	NSMutableArray* _meCards;

}

@property (retain) CNContactStore * contactStore;                   //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * meCards;              //@synthesize meCards=_meCards - In the implementation block
+(id)contactFetchKeys;
+(id)entryTypeToString:(long long)arg1 ;
-(CNContactStore *)contactStore;
-(void)dealloc;
-(id)init;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSMutableArray *)meCards;
-(void)setMeCards:(NSMutableArray *)arg1 ;
-(void)fetchMeCardMapItemsOfType:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)getMeCardPostalAddressesOfType:(long long)arg1 ;
-(id)getMeCardLocationsOfType:(long long)arg1 ;
@end

