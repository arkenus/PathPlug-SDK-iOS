//
//  Interaction.h
//  PathPlugSDK
//
//  Created by Berk Taner on 15/09/14.
//  Copyright (c) 2014 Arkenus. All rights reserved.
//

#import <Foundation/Foundation.h>

@class  Beacon;
@class SmartNote;
#import "VirtualTag.h"
@class AudioSign;
@interface Interaction : NSObject

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * tag;
@property (nonatomic, retain) NSNumber * distance;
@property (nonatomic, retain) NSNumber * priority;
@property (nonatomic, retain) NSString * interaction_type;
@property (nonatomic, retain) NSNumber * active;

// objects this interaction can contain
@property (nonatomic,retain) VirtualTag *virtualTag;
@property (nonatomic,retain) NSMutableSet *audioSignSet;
@property (nonatomic,retain) NSMutableSet *smartNoteSet;


@property (nonatomic, retain) Beacon *hasBeacon;
@end
