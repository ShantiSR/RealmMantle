//
//  ArticleListResponseModel.m
//  RealmMantle
//
//  Created by Santiago Sánchez Rodríguez on 30/7/15.
//  Copyright (c) 2015 Shanti Rodríguez. All rights reserved.
//

#import "ArticleListResponseModel.h"

@class ArticleModel;

@implementation ArticleListResponseModel

#pragma mark - Mantle JSONKeyPathsByPropertyKey

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"articles" : @"response.docs",
             @"status" : @"status"
             };
}

#pragma mark - JSON Transformer

+ (NSValueTransformer *)articlesJSONTransformer {
    return [MTLJSONAdapter arrayTransformerWithModelClass:ArticleModel.class];
}

@end
