/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface TIAddressBook : NSObject {

	void* _addressBook;
	NSMutableArray* _observers;

}
-(void)dealloc;
-(id)init;
-(void)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(/*^block*/id)arg1 ;
-(void)addressBookChanged;
-(BOOL)hasObservers;
-(void)receiveTransientObserver:(/*^block*/id)arg1 ;
@end

