bool is_red(int r, int g, int b){
	return 8>sqrt(pow(r-255,2)+pow(g,2)+pow(b,2));
}
