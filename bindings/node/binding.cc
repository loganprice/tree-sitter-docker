#include <nan.h>
#include "tree_sitter/parser.h"

extern "C" const TSLanguage *tree_sitter_dockerfile(void);

static void Init(v8::Local<v8::Object> exports, v8::Local<v8::Value> module, void *priv) {
  Nan::HandleScope scope;
  v8::Local<v8::Object> instance = Nan::New<v8::Object>();
  Nan::Set(exports, Nan::New("name").ToLocalChecked(), Nan::New("dockerfile").ToLocalChecked());
  Nan::Set(exports, Nan::New("language").ToLocalChecked(), Nan::New<v8::External>((void*)tree_sitter_dockerfile()));
}

NODE_MODULE(tree_sitter_dockerfile_binding, Init)
