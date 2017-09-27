//
//  MDCPerson.h
//  BrianHW1_Polymorphism
//
//  Created by Brian Martinez on 9/26/17.
//  Copyright © 2017 Brian Martinez. All rights reserved.
//

#import "Person.h"

@interface MDCPerson : Person
{
    NSString *campus;
    NSString *role;
}



-(id)initWithcampus: (NSString *) personCampus;
//set campus
-(void)setCampus: (NSString *) personCampus;

-(id)initWithRole: (NSString *) personRole;
//set role
-(void)setRole: (NSString *) personRole;

@end
