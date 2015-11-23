/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNContactChangesObserver;
@class NSArray, CNContact;

@interface CNContactChangesObserverProxy : NSObject {

	BOOL _unify;
	id<CNContactChangesObserver> _observer;
	NSArray* _keysToFetch;
	CNContact* _contactSnapshot;

}

@property (assign,nonatomic,__weak) id<CNContactChangesObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                                                //@synthesize unify=_unify - In the implementation block
@property (nonatomic,retain) CNContact * contactSnapshot;                               //@synthesize contactSnapshot=_contactSnapshot - In the implementation block
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
-(CNContact *)contactSnapshot;
-(void)setContactSnapshot:(CNContact *)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(id<CNContactChangesObserver>)observer;
-(void)setObserver:(id<CNContactChangesObserver>)arg1 ;
@end

