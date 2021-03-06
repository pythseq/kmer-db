/*
This file is a part of Kmer-db software distributed under GNU GPL 3 licence.
The homepage of the Kmer-db project is http://sun.aei.polsl.pl/REFRESH/kmer-db

Authors: Sebastian Deorowicz, Adam Gudys, Maciej Dlugosz, Marek Kokot, Agnieszka Danek

Version: 1.1
Date   : 2018-06-12
*/

#include "kmer_db.h"
#include "log.h"

#include "console.h"

// *****************************************************************************************
/*
build-kmers E:\Data\kmers\kmc250.list d:\kmer.db
all2all d:\kmer.db d:\matrix.csv
one2all d:\kmer.db E:\Data\kmers\kmc250\GCF_000171975.1_ASM17197v1_genomic_s d:\vector.csv
distance d:\matrix.csv
list-patterns d:\kmer.db d:\patterns.txt

minhash E:\Data\kmers\kmc250.list 0.1
build-mh E:\Data\kmers\kmc250.list d:\kmerdb\kmer-mh.db
all2all d:\kmerdb\kmer-mh.db d:\kmerdb\matrix-mh.csv
one2all d:\kmerdb\kmer-mh.db E:\Data\kmers\kmc250\GCF_000171975.1_ASM17197v1_genomic_s d:\vector-mh.csv


build E:\Data\kmers\genomes250.list d:\kmerdb\genomes.db
all2all d:\kmerdb\genomes.db d:\kmerdb\matrix-genomes.csv

build -f 0.1 E:\Data\kmers\genomes250.list d:\kmerdb\genomes_0.1.db
all2all d:\kmerdb\genomes_0.1.db d:\kmerdb\matrix-genomes_0.1.csv


build -f 0.001 -k 20 E:\Data\kmers\genomes1000.list d:\from_genome.db
all2all d:\from_genome.db d:\from_genome.csv

minhash 0.001 E:\Data\kmers\kmc1000.list 
build-mh E:\Data\kmers\kmc1000.list  d:\from_minhash.db
all2all d:\from_minhash.db d:\from_minhash.csv

*/
int main(int argc, char **argv)
{
	Console console;
	console.parse(argc, argv);

	return 0;
}
