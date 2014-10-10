//
//  Beacon.h
//  PathPlugSDK
//
//  Created by Berk Taner on 15/09/14.
//  Copyright (c) 2014 Arkenus. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Interaction;
/**
 *  Beacon Object to encapsulate data
 */
@interface Beacon : NSObject

@property (nonatomic, retain) NSNumber * active;
@property (nonatomic, retain) NSNumber * base_signal_strength;
@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSNumber * last_distance;
@property (nonatomic, retain) NSNumber * major;
@property (nonatomic, retain) NSNumber * minor;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * puuid;
@property (nonatomic, retain) NSString * tag;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSMutableSet *hasInteraction;
@end

@interface Beacon (CoreDataGeneratedAccessors)

- (void)addHasInteractionObject:(Interaction *)value;
- (void)removeHasInteractionObject:(Interaction *)value;
- (void)addHasInteraction:(NSSet *)values;
- (void)removeHasInteraction:(NSSet *)values;

@end
