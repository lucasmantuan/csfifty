SELECT * FROM songs
INNER JOIN artists
ON artists.id = songs.artist_id
WHERE artists.id = 'Post Malone';