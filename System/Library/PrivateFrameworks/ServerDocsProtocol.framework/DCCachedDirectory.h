/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ServerDocsProtocol/DCCachedItem.h>
#import <libobjc.A.dylib/DCCachedDirectory.h>
@class NSArray;


@protocol DCCachedDirectory
@property (retain,readonly) NSArray * contents; 
@property (retain,readonly) NSArray * localItems; 
@required
-(NSArray *)localItems;
-(NSArray *)contents;
-(BOOL)isDropBox;

@end


@class NSArray;

@interface DCCachedDirectory : DCCachedItem <DCCachedDirectory>

@property (retain,readonly) NSArray * contents; 
@property (retain,readonly) NSArray * localItems; 
+(id)_contentsWithFixedConstantsFromContentsPropertyListData:(id)arg1 ;
-(NSArray *)localItems;
-(NSArray *)contents;
-(id)_directoryPath;
-(BOOL)isDropBox;
-(id)_contentsFullPath;
-(id)_fileSystemMetadataWithoutNeedingLocking;
-(id)_localGenerationIdentifierFullPath;
-(id)_localGenerationIdentifier;
-(id)_parentContentsMetadataForChildAtRelativePath:(id)arg1 ;
@end

