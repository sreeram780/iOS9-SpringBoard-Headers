/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3ExportSession.h>

@interface ML3DAAPExportSession : ML3ExportSession {

	unsigned _currentListingContainerCode;
	unsigned _currentSongsContainerCode;
	int _updateType;

}
-(id)end;
-(void)_endCurrentListingContainer;
-(void)_endCurrentSongsContainer;
-(void)_setSongsContainer:(unsigned)arg1 ;
-(void)_setListingContainer:(unsigned)arg1 ;
-(id)_trackExportItemForPersistendId:(long long)arg1 ;
-(id)_playlistExportItemForPersistentId:(long long)arg1 ;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 updateType:(int)arg3 ;
-(id)begin:(unsigned)arg1 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
@end

