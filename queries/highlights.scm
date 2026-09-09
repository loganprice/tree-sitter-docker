; Instruction keywords
[
  "FROM"
  "RUN"
  "CMD"
  "LABEL"
  "EXPOSE"
  "ENV"
  "ADD"
  "COPY"
  "ENTRYPOINT"
  "VOLUME"
  "USER"
  "WORKDIR"
  "ARG"
  "ONBUILD"
  "STOPSIGNAL"
  "HEALTHCHECK"
  "SHELL"
  "MAINTAINER"
  "AS"
] @keyword

"NONE" @constant.builtin

(cross_build_instruction (cross_build_command) @keyword)

; Parser directives & Comments
(comment) @comment
(parser_directive) @keyword.directive

; Flags and Parameters
(param_name) @attribute

; FROM instruction
(from_instruction as: (image_alias) @type)

; Variables and Expansions
(expansion) @variable
(expansion (variable) @variable)
(expansion operator: (_) @operator)

; Environment and Arguments
(env_pair name: (_) @variable)
(arg_instruction name: (_) @variable)

; Labels
(label_pair key: (_) @property)

; Ports and Networks
(expose_port port: (_) @number)
(expose_port protocol: (_) @type)

; User and Signal
(user_instruction user: (_) @variable)
(user_instruction group: (_) @variable)
(stopsignal_instruction signal: (_) @constant)

; Strings
(double_quoted_string) @string
(single_quoted_string) @string
(escape_sequence) @string.escape

; Heredocs
(heredoc_marker) @label
(heredoc_line) @string
(heredoc_end) @label

; Numbers
(number) @number
