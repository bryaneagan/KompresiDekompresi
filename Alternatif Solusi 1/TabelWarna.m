img = imread('Foto_18220041_Bryan Eagan.jpg');
ycbcr = rgb2ycbcr(img);
y = ycbcr(:,:,1); % y channel
cb = ycbcr(:,:,2); % cb channel
cr = ycbcr(:,:,3); % cr channel
figure(), imshow(y), title('Y Version');
imtool(y); 

