//
//  Pokemon.h
//  PokeDex
//
//  Created by Elber Carneiro on 7/29/15.
//  Copyright (c) 2015 Elber Carneiro. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Pokemon : NSObject

#define PROPERTY_PREFIX @"poke_"

// "id" is a reserved word, so I added a "poke_" prefix to all the properties.
// When I do the JSON parsing and I have to use the respondsToSelector method
// I'll have to add the prefix as well.
@property (nonatomic) NSUInteger poke_id;
@property (nonatomic) NSString *poke_name;
@property (nonatomic) NSString *poke_image_uri;
@property (nonatomic) NSString *poke_resource_uri;
@property (nonatomic) NSMutableArray *poke_types;

@end
