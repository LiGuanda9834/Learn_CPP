#BSUB -J job_name
#BSUB -n 1
#BSUB -o %J.lsf.out
#BSUB -e %J.lsf.err
#BSUB -W 60
#BSUB -q batch
#BSUB -R "span[ptile=36]"

module purge
module load compilers/intel-2017u4

cd $LS_SUBCWD

./HelloWorld
