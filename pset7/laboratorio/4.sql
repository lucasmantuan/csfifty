SELECT name, danceability, energy, valence
FROM songs
WHERE danceability > 0.75
ORDER BY name;