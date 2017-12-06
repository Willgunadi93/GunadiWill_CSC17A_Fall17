/* 
 * File:   stats.h
 * Author: William Gunadi
 * Purpose: Structure to hold stats
 * Created on November 8, 2017, 12:57 PM
 */

#ifndef STATS_H
#define STATS_H

struct stats{
    char* name;
    
};

struct brdSet{
    char* name;
    int shpDwn;
    int shpCtr;
    int counter = 0;
    int hits = 0;
    int misses = 0;
    int guesses = 0;
    int maxShp = 10;
    int *recScore;
};

#endif /* STATS_H */

