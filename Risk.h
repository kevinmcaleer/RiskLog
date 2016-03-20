//
//  Risk.h
//  RiskLog
//
//  Created by Kevin McAleer on 17/11/2009.
//  Copyright 2009 Stoneage Software Ltd. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "Project.h"


@interface Risk :  Project  
{
}

@property (nonatomic, retain) NSString * Author;
@property (nonatomic, retain) NSString * Description;
@property (nonatomic, retain) NSString * Proximity;
@property (nonatomic, retain) NSString * ID;
@property (nonatomic, retain) NSString * Countermeasure;
@property (nonatomic, retain) NSDecimalNumber * Probability;
@property (nonatomic, retain) NSDecimalNumber * Impact;
@property (nonatomic, retain) NSDate * DateOfLastUpdate;
@property (nonatomic, retain) NSDate * DateIdentified;
@property (nonatomic, retain) NSString * RiskCategory;
@property (nonatomic, retain) NSString * Status;
@property (nonatomic, retain) NSString * Comments;
@property (nonatomic, retain) NSManagedObject * Owner;
@property (nonatomic,retain) NSDecimalNumber *Exposure;

@end



