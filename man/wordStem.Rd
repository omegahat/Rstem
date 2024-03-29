\name{wordStem}
\alias{wordStem}
\title{Get the common root/stem of words}
\description{
  This function computes the stems of each of the
  given words in the vector.
  This reduces a word to its base component,
  making it easier to compare words
  like win, winning, winner.
  See \url{http://snowball.tartarus.org/} for
  more information about the concept and algorithms
  for stemming.
  
}
\usage{
wordStem(words, language = character(), warnTested = FALSE)
}
%- maybe also 'usage' for other objects documented here.
\arguments{
  \item{words}{a character vector of words whose stems are to be
    computed.}
  \item{language}{the name of a recognized language for the package.
    This should either be a single string which is an element in the
    vector  returned by \code{\link{getStemLanguages}}, or
    alternatively a character vector of length 3
    giving the names of the routines for
    creating and closing a Snowball \code{SN\_env} environment
    and performing the stem (in that order).
    See the example below.
  }
  \item{warnTested}{an option to control whether a warning is issued
    about languages which have not been explicitly tested as part of the
    unit testing of the code.  For the most part, one can ignore these
    warnings and so they are turned off. In the future, we might
    consider controlling this with a global option, but for now
    we suppress the warnings by default.
  }
}
\details{
  This uses Dr. Martin Porter's stemming algorithm
  and the interface generated by  Snowball
  \url{http://snowball.tartarus.org/}.
  
}
\value{
  A character vector with as many elements
  as there are in the input vector
  with the corresponding elements being the
  stem of the  word.
}
\references{
See \url{http://snowball.tartarus.org/}
}
\author{Duncan Temple Lang <duncan@wald.ucdavis.edu>}


\examples{

   # Simple example
   # "win"    "win"    "winner"
 wordStem(c("win", "winning", "winner"))


  # test the supplied vocabulary.
 testWords = readLines(system.file("words", "english", "voc.txt", package = "Rstem"))
 validate = readLines(system.file("words", "english", "output.txt", package = "Rstem"))

\dontrun{
 # Read the test words directly from the snowball site over the Web
 testWords = readLines(url("http://snowball.tartarus.org/english/voc.txt"))
}


 testOut = wordStem(testWords)
 all(validate == testOut)

  # Specify the language from one of the built-in languages.
 testOut = wordStem(testWords, "english")
 all(validate == testOut)

\dontrun{
  # To illustrate using the dynamic lookup of symbols that allows one
  # to easily add new languages or create and close environment
  # routines (for example, to manage pools if this were an efficiency
  # issue!)
 testOut = wordStem(testWords, c("testDynCreate", "testDynClose", "testDynStem"))
}
}
\keyword{IO}
\keyword{utilities}
