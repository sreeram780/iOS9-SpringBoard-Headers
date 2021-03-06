/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerContainerItem.h>

@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {

	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	NSURL* _cachedURL;
	NSURL* _cachedURLInLocalContainer;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	NSNumber* _cachedFileObjectID;
	BOOL _cachedRenameable;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)url;
-(long long)type;
-(id)title;
-(id)initWithMetadataItem:(id)arg1 ;
-(id)modificationDate;
-(id)contentType;
-(void)cacheValues:(id)arg1 ;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(id)subtitle;
-(id)subtitle2;
-(id)urlInLocalContainer;
-(id)tags;
-(id)sortDate;
-(void)_modelChanged;
-(unsigned long long)indentationLevel;
-(id)sortPath;
-(BOOL)renameable;
@end

