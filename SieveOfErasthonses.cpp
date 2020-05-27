            //SEIVE 

            const int MAX=1000000;
            vector <bool> SEIVE(MAX + 1, true);
                SEIVE[0] = SEIVE[1] = false;
                for (int i = 2; i * i <= MAX; ++i)
                    if (SEIVE[i])
                        for (int j = i * i; j <= MAX; j += i)
                            SEIVE[j] = false;