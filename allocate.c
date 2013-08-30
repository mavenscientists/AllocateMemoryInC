  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;

	ptr = (int *)malloc(sizeof(int)); //allocating memory using the malloc function

	if (ptr == 0)
	{
		printf("ERROR: Memory is full");
		return 1;
	}

	*ptr = 10;
	printf("Value: %d\n", *ptr);

	free(ptr); // free the allocated memory using free function
	
	return 0;
}
