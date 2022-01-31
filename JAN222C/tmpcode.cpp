pair<int, long> oldseclastelem = (*(last-1));
        pair<int, long> newseclastelem;
        newseclastelem.first = oldseclastelem.first;
        newseclastelem.second = lastelem.second / 2;
        double multip = (double)newseclastelem.second / (double)oldseclastelem.second;
        if(isint(multip)){
            cout << "multiply " << oldseclastelem.second << " with " << multip << " to make " << newseclastelem.second << endl;
            operation tmp (multip);
            tmp.indices.push_back(oldseclastelem.first);
            ops.push_back(tmp);
            // Make changes to the real second last elem
            (*(last-1)).second = newseclastelem.second;

            // Make changes to the sum upto lastelem
            sumuptolastelem = sumuptolastelem  - oldseclastelem.second + newseclastelem.second;
            
            // Recursively call function on just smaller array
            cout << "calling with params (" << (*first).first << ":" << (*first).second <<"), (" << (*(last-1)).first << ":" << (*(last-1)).second <<"), " << sumuptolastelem << endl;
            checkandcorrect(first, last-1, sumuptolastelem);
            
        }