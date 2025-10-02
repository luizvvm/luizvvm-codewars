def better_than_average(class_points, your_points):
    media = sum(class_points)
    media = (media + your_points)/(len(class_points) + 1);
    return True if (your_points) > media else False;
​