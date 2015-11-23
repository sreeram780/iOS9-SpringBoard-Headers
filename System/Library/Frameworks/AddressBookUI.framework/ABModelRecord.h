/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSArray;

@interface ABModelRecord : NSObject {

	int _recordID;
	CFStringRef _sortKey;
	long long _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;

}
-(id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(BOOL)arg3 namePieces:(id)arg4 sortKey:(CFStringRef)arg5 ;
-(long long)highlightIndex;
-(id)namePieces;
-(void)dealloc;
-(BOOL)isGroup;
-(int)recordID;
-(CFStringRef)sortKey;
@end

