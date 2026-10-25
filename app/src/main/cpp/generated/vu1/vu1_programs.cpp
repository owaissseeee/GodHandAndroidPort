#include "ps2_vu1_impl.inl"

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::runImage<0x2CFD7F04D22A4C7Full>(VU1Interpreter &, const Vu1RunArgs &);
template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::runImage<0x390AE9C7C1A68D47ull>(VU1Interpreter &, const Vu1RunArgs &);
template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::runImage<0x4DFEF01657B65F6Aull>(VU1Interpreter &, const Vu1RunArgs &);
template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::runImage<0x5DCE334B68799D95ull>(VU1Interpreter &, const Vu1RunArgs &);
template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::runImage<0xCD8F1FC2068BD71Dull>(VU1Interpreter &, const Vu1RunArgs &);

void registerGeneratedVu1Programs()
{
    registerVu1CompiledProgram(0x2CFD7F04D22A4C7Full, &VU1InterpreterAccess::runImage<0x2CFD7F04D22A4C7Full>);
    registerVu1CompiledProgram(0x390AE9C7C1A68D47ull, &VU1InterpreterAccess::runImage<0x390AE9C7C1A68D47ull>);
    registerVu1CompiledProgram(0x4DFEF01657B65F6Aull, &VU1InterpreterAccess::runImage<0x4DFEF01657B65F6Aull>);
    registerVu1CompiledProgram(0x5DCE334B68799D95ull, &VU1InterpreterAccess::runImage<0x5DCE334B68799D95ull>);
    registerVu1CompiledProgram(0xCD8F1FC2068BD71Dull, &VU1InterpreterAccess::runImage<0xCD8F1FC2068BD71Dull>);
}
