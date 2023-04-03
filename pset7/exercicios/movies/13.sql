-- Em 13.sql , escreva uma consulta SQL para listar os nomes de todas as pessoas que estrelaram um filme no qual Kevin Bacon também estrelou.
-- Sua consulta deve gerar uma tabela com uma única coluna para o nome de cada pessoa.
-- Pode haver várias pessoas chamadas Kevin Bacon no banco de dados. Certifique-sede selecionar apenas Kevin Bacon nascido em 1958.
-- O próprio Kevin Bacon não deve ser incluído na lista resultante.

SELECT DISTINCT name FROM people
JOIN stars ON people.id = stars.person_id
JOIN movies ON movies.id = stars.movie_id
WHERE movies.id IN (
SELECT DISTINCT movie_id FROM stars
JOIN people ON people.id = stars.person_id
JOIN movies ON movies.id = stars.movie_id
WHERE people.name = 'Kevin Bacon'
AND people.birth = 1958 )
AND people.name != 'Kevin Bacon';