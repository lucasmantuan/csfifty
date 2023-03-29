SELECT name FROM songs
WHERE artist_id
JOIN SELECT id FROM artists
WHERE name = 'Post Malone';