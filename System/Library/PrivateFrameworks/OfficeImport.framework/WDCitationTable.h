/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {

	WDDocument* mDocument;
	NSMutableDictionary* mCitations;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)citationIDs;
@end

