var flipAndInvertImage = function (image) {
    for (let i = 0; i < image.length; i++) {
        image[i].reverse();
        image[i] = image[i].map(i => !i ? 1 : 0);
    }
    return image;
};

flipAndInvertImage([[1, 1, 0], [1, 0, 1], [0, 0, 0]])
