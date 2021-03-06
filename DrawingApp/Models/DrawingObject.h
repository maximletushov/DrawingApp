//
//  DrawingObject.h
//  DrawingApp
//
//  Created by Maxim on 5/7/14.
//  Copyright (c) 2014 Maxim Letushov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Project;

@interface DrawingObject : NSManagedObject

@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, retain) NSData * pointsData;
@property (nonatomic, retain) NSNumber * lineWidth;
@property (nonatomic, retain) NSData * strokeColorData;
@property (nonatomic, retain) NSData * fillColorData;
@property (nonatomic, retain) NSNumber * zIndex;
@property (nonatomic, retain) NSNumber * translationX;
@property (nonatomic, retain) NSNumber * translationY;
@property (nonatomic, retain) NSNumber * scale;
@property (nonatomic, retain) NSNumber * angle;
@property (nonatomic, retain) Project *project;

@end
