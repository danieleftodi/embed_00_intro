//
//  common/snippets.h
//  11_Awesome_adventures
//
//  Created by Daniel Eftodi on 2021-10-12.
//

#ifndef snippets_h
#define snippets_h

sf_argv = f_argv[i];


if ( strcmp(sf_argv.substr(0,1).c_str(), "-") ) {
    printf("First char in varibale is: %s", sf_argv.substr(0,1).c_str() );
    for (int u = 1; u < sf_argv.length(); u++) {
        printf("char in f_argv: %s and lenght is: %lu\n", sf_argv.substr(0,1).c_str(), sf_argv.length());

    }
    std::cout << "\n";
}


cf_argv = sf_argv.substr(0,1);

switch ( sf_argv.substr(0,1) ) {
    case '-':
        printf("sf_argv: %s\n", sf_argv.substr(0,1).c_str());
        break;

    default:
        break;
}


#endif /* snippets_h */
