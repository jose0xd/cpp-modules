/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:35:30 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 20:01:44 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery Creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const
		ShrubberyCreationForm &other)
{
	(void)other;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream	outfile((this->target + "_shrubbery").c_str());
	if (!outfile)
		throw "Cannot open file " + this->target + "_shrubbery";

	outfile <<
"        &&& &&  & &&\n\
      && &//&||& ()|/ @, &&\n\
      &//(/&/&||/& /_/)_&/_&\n\
   &() &//&|()|/&// '%/  & ()\n\
  &_|_&&_| |& |&&/&__%_/_& &&\n\
&&   && & &| &| /& & % ()& /&&\n\
 ()&_---()&|&||&&-&&--%---()~\n\
     &&      |||\n\
             |||\n\
             |||\n\
             |||\n\
       , -=-~  .-^- _\n\
ejm97         `\n\
\n\
              ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888|88/8o\n\
   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'\n\
   %&&%&%&/%&&%@@|@@/ /@@@88888|88888'\n\
   %&&%/ %&%%&&@@| V /@@' `88|8 `/88'\n\
   `&%| ` /%&'    |.|        | '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
jgs /// ._///_/__/  ,|_//__///.  |_//__/_\n\
\n\
                     ; ; ;\n\
                   ;        ;  ;     ;;    ;\n\
                ;                 ;         ;  ;\n\
                                ;\n\
                               ;                ;;\n\
               ;          ;            ;              ;\n\
               ;            ';,        ;               ;\n\
               ;              'b      *\n\
                ;              '$    ;;                ;;\n\
               ;    ;           $:   ;:               ;\n\
             ;;      ;  ;;      *;  @):        ;   ; ;\n\
                          ;     :@,@):   ,;**:'   ;\n\
              ;      ;,         :@@*: ;;**'      ;   ;\n\
                       ';o;    ;:(@';@*''  ;\n\
               ;  ;       'bq,;;:,@@*'   ,*      ;  ;\n\
                          ,p$q8,:@)'  ;p*'      ;\n\
                   ;     '  ; '@@Pp@@*'    ;  ;\n\
                    ;  ; ;;    Y7'.'     ;  ;\n\
                              :@):.\n\
                             .:@:'.\n\
                           .::(@:.      -Sam Blumenstein-" << std::endl;

	outfile.close();
}
