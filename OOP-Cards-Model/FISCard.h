//
//  FISCard.h
//  OOP-Cards-Model
//
//  Created by Flatiron School on 6/15/16.
//  Copyright © 2016 Al Tyus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISCard : NSObject

@property(strong, nonatomic, readonly)NSString *suit;
@property(strong, nonatomic, readonly)NSString *rank;
@property(strong, nonatomic, readonly)NSString *cardLabel;
@property(nonatomic, readonly)NSUInteger cardValue;

-(instancetype)initWithSuit: (NSString*)suit rank: (NSString*)rank;
//-(instancetype)initWithSuit:(NSString *)suit rank:(NSString *)rank cardLabel: (NSString*)cardLabel cardValue: (NSUInteger)cardValue;

+(NSArray*)validSuits;
+(NSArray*)validRanks;


@end
