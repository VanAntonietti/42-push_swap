/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:00:38 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/30 16:19:45 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void swap(int* a, int* b)
{
	int t;
	
    t = *a;
    *a = *b;
    *b = t;
}

static int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i;
	int j;

	i = (low - 1);
	j = low;
    while(j <= high - 1)
    {
        if (arr[j] < pivot)
        {
            i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	int pi;
	if (low < high)
	{
		pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
