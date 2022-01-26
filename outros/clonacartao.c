#include <stdio.h>
#include <cs50.h>
#include <math.h>

int counter(long y);

long number, counter1, digits, z;
int x, sum, first_digit;

int main(void)
{
	    number = get_long("Number: ");
	        counter(number);
		    counter1 = 100;
		        
		        for (int i = 0; i < x; i++)
				    {
					            z = ((number % counter1) - (number % (counter1 / 10))) / (counter1 / 10);
						            counter1 *= 100;
							            z *= 2;
								            if (z > 10)
										            {
												                z = (z % 10) + 1;
														        }
									            sum += z;
										        }
			    
			    counter1 = 10;
			        for (int i = 0; i < x; i++)
					    {
						            z = ((number % counter1) - (number % (counter1 / 10))) / (counter1 / 10);
							            counter1 *= 100;
								            sum += z;
									        }
				    
				    counter1 = pow(10, x); 
				        counter1 /= 100;
					    first_digit = (number / counter1);
					        
					        if (sum % 10 == 0)
							    {
								            if ((x == 15) && (first_digit == 34))
										            {
												                printf("AMEX\n");
														        }
									            if ((x == 15) && (first_digit == 37))
											            {
													                printf("AMEX\n");
															        }
										            if (x == 16)
												            {
														                if ((first_digit > 50) && (first_digit < 56))
																	            {
																			                    printf("MASTERCARD\n");
																					                }
																            if (first_digit == 4)
																		                {
																					                printf("VISA\n");
																							            }
																	            }
											            if ((x == 13) && (first_digit == 4))
													            {
															                printf("VISA\n");
																	        }
												            else
														            {
																                printf("INVALID\n");
																		        }
													        }
						    else
							        {
									        printf("INVALID\n");
										    }
}       

int counter(long y)
{
	    counter1 = 10;
	        for (int i = 0; i < 16; i++)
			    {
				            digits = number % counter1;
					            x++;
						            counter1 *= 10;
							            if (digits == number)
									            {
											                break;
													        }
								        }
		    return x;
}
