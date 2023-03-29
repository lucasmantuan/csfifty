SELECT AVG(songs.energy) FROM songs
INNER JOIN artists
ON artists.id = songs.artist_id
WHERE artists.name = 'Drake';