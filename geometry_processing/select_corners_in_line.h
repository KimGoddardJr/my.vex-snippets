int row[] = neighbours(0, @ptnum);
int edgy = pointedge(0, @ptnum, @ptnum - 1);

vector pos;
vector pos_two;
int pnt_two;

//For each pont in the row I source a target point and its neighbour

foreach (int pnt; row)

{
    pnt_two = pnt - 2;
    pos = point(0, "P", pnt);
    pos_two = point(0, "P", pnt_two);
    vector plusPose = normalize(pos - @P);
    vector minusPose = normalize(@P - pos_two);

    //This measures the angle between 2 points
    float dotp = dot(plusPose, minusPose);
    float angle = rint(degrees(acos(dotp)));

    if (angle >= chf("min"))
    {
        if (angle <= chf("max"))

        {
            @corner_grp = 1;
        }
    }
}