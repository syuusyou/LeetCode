int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration)
{
    int poisonedTime = 0;
    int endTime = timeSeries[0];
    int i;


    for(int i = 0; i < timeSeriesSize; i++)
    {
        if(endTime < timeSeries[i])
        {
            endTime = timeSeries[i];
        }

        poisonedTime += (timeSeries[i] + duration - endTime);
        endTime = timeSeries[i] + duration;
    }

    return poisonedTime;
}
