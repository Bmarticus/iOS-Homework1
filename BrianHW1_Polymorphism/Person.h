//
//  Person.h
//  BrianHW1_Polymorphism
//
//  Created by Brian Martinez on 9/26/17.
//  Copyright © 2017 Brian Martinez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    NSString *gender;
    NSString *name;
}



@property (getter=getPersonName, setter=setPersonName: )NSString* aName;
@property (getter=getGender, setter=setGender: )NSString* aGender;

@end
