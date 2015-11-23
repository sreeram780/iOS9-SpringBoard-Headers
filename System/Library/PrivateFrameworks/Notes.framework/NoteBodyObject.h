/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexable.h>

@class NSString, NoteObject, NSData;

@interface NoteBodyObject : NSManagedObject <ICSearchIndexable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (nonatomic,retain) NoteObject * owner; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
-(id)identifier;
-(id)modificationDate;
-(id)objectIdentifier;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(void)deleteFromNoteContextUsingIndexerContext:(id)arg1 ;
-(long long)visibilityTestingType;
-(id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1 ;
-(unsigned long long)searchResultsSection;
-(BOOL)isHiddenFromSearch;
-(id)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1 ;
-(BOOL)shouldUpdateIndexForChangedValues:(id)arg1 ;
-(id)targetSearchIndexable;
-(NSString *)contentAsPlainText;
-(id)contentAsPlainTextPreservingNewlines;
@end

