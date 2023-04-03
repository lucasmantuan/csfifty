-- Em 12.sql, escreva uma consulta SQL para listar os títulos de todos os filmes em que Johnny Depp e Helena Bonham Carter estrelaram juntos.
-- Sua consulta deve gerar uma tabela com uma única coluna para o título de cada filme.
-- Você pode presumir que há apenas uma pessoa no banco de dados com o nome Johnny Depp.
-- Você pode presumir que há apenas uma pessoa no banco de dados com o nome Helena Bonham Carter.

SELECT people.name, movies.title FROM movies
INNER JOIN stars ON stars.movie_id = movies.id
INNER JOIN people ON stars.person_id = people.id
WHERE people.name = 'Johnny Depp'
OR people.name = 'Helena Bonham Carter';