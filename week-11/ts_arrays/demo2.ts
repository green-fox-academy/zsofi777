/*var sample:string[]

sample=["one","two","three","four","five"]

document.write(sample[2])
document.write(sample[0])
document.write(sample[4])*/

var matrix: number[][] = new Array();

matrix.push([1,2,3]);
matrix.push([4,5,6]);
matrix.push([7,8,9]);

var matrix: number[][] = [
    [1,2,3],[4,5,6],[7,8,9]
];

document.write(matrix[1][2].toString());    //1-es or, 2-es oszlop -> 6
                                            //toString, mert write csak stringet kezel    