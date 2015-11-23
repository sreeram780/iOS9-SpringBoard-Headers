/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentPDFModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(int)populateSearchStrings:(id)arg1 url:(id)arg2 maxStringLength:(unsigned long long)arg3 isCancelledBlock:(/*^block*/id)arg4 ;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(void)generatePreviews;
-(id)generateSearchIndexStringsOperation;
-(int)populateSearchStrings:(id)arg1 ;
@end

