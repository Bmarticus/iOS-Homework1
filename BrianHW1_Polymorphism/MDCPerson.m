//
//  MDCPerson.m
//  BrianHW1_Polymorphism
//
//  Created by Brian Martinez on 9/26/17.
//  Copyright © 2017 Brian Martinez. All rights reserved.
//

#import "MDCPerson.h"

@implementation MDCPerson

-(void)setCampus: (NSString *) personCampus{
    campus = personCampus;
}
-(id)initWithcampus:(NSString *)personCampus{
    [self setCampus:personCampus];
    return self;
}

-(void)setRole:(NSString *)personRole{
    role = personRole;
}
-(id)initWithRole:(NSString *)personRole{
    [self setRole:personRole];
    return self;
}


@end
