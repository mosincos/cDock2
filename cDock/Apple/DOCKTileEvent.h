//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOCKEvent.h"

@class Tile;

@interface DOCKTileEvent : DOCKEvent
{
    Tile *_tile;
}

@property(readonly, nonatomic) Tile *tile; // @synthesize tile=_tile;
- (void).cxx_destruct;
- (id)initWithTile:(id)arg1;

@end

