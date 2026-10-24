#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __throw_type_match_rtti
// Address: 0x31f508 - 0x31f9d0
void ps2___throw_type_match_rtti_0x31f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_rtti_0x31f508");
#endif

    switch (ctx->pc) {
        case 0x31f508u: goto label_31f508;
        case 0x31f50cu: goto label_31f50c;
        case 0x31f510u: goto label_31f510;
        case 0x31f514u: goto label_31f514;
        case 0x31f518u: goto label_31f518;
        case 0x31f51cu: goto label_31f51c;
        case 0x31f520u: goto label_31f520;
        case 0x31f524u: goto label_31f524;
        case 0x31f528u: goto label_31f528;
        case 0x31f52cu: goto label_31f52c;
        case 0x31f530u: goto label_31f530;
        case 0x31f534u: goto label_31f534;
        case 0x31f538u: goto label_31f538;
        case 0x31f53cu: goto label_31f53c;
        case 0x31f540u: goto label_31f540;
        case 0x31f544u: goto label_31f544;
        case 0x31f548u: goto label_31f548;
        case 0x31f54cu: goto label_31f54c;
        case 0x31f550u: goto label_31f550;
        case 0x31f554u: goto label_31f554;
        case 0x31f558u: goto label_31f558;
        case 0x31f55cu: goto label_31f55c;
        case 0x31f560u: goto label_31f560;
        case 0x31f564u: goto label_31f564;
        case 0x31f568u: goto label_31f568;
        case 0x31f56cu: goto label_31f56c;
        case 0x31f570u: goto label_31f570;
        case 0x31f574u: goto label_31f574;
        case 0x31f578u: goto label_31f578;
        case 0x31f57cu: goto label_31f57c;
        case 0x31f580u: goto label_31f580;
        case 0x31f584u: goto label_31f584;
        case 0x31f588u: goto label_31f588;
        case 0x31f58cu: goto label_31f58c;
        case 0x31f590u: goto label_31f590;
        case 0x31f594u: goto label_31f594;
        case 0x31f598u: goto label_31f598;
        case 0x31f59cu: goto label_31f59c;
        case 0x31f5a0u: goto label_31f5a0;
        case 0x31f5a4u: goto label_31f5a4;
        case 0x31f5a8u: goto label_31f5a8;
        case 0x31f5acu: goto label_31f5ac;
        case 0x31f5b0u: goto label_31f5b0;
        case 0x31f5b4u: goto label_31f5b4;
        case 0x31f5b8u: goto label_31f5b8;
        case 0x31f5bcu: goto label_31f5bc;
        case 0x31f5c0u: goto label_31f5c0;
        case 0x31f5c4u: goto label_31f5c4;
        case 0x31f5c8u: goto label_31f5c8;
        case 0x31f5ccu: goto label_31f5cc;
        case 0x31f5d0u: goto label_31f5d0;
        case 0x31f5d4u: goto label_31f5d4;
        case 0x31f5d8u: goto label_31f5d8;
        case 0x31f5dcu: goto label_31f5dc;
        case 0x31f5e0u: goto label_31f5e0;
        case 0x31f5e4u: goto label_31f5e4;
        case 0x31f5e8u: goto label_31f5e8;
        case 0x31f5ecu: goto label_31f5ec;
        case 0x31f5f0u: goto label_31f5f0;
        case 0x31f5f4u: goto label_31f5f4;
        case 0x31f5f8u: goto label_31f5f8;
        case 0x31f5fcu: goto label_31f5fc;
        case 0x31f600u: goto label_31f600;
        case 0x31f604u: goto label_31f604;
        case 0x31f608u: goto label_31f608;
        case 0x31f60cu: goto label_31f60c;
        case 0x31f610u: goto label_31f610;
        case 0x31f614u: goto label_31f614;
        case 0x31f618u: goto label_31f618;
        case 0x31f61cu: goto label_31f61c;
        case 0x31f620u: goto label_31f620;
        case 0x31f624u: goto label_31f624;
        case 0x31f628u: goto label_31f628;
        case 0x31f62cu: goto label_31f62c;
        case 0x31f630u: goto label_31f630;
        case 0x31f634u: goto label_31f634;
        case 0x31f638u: goto label_31f638;
        case 0x31f63cu: goto label_31f63c;
        case 0x31f640u: goto label_31f640;
        case 0x31f644u: goto label_31f644;
        case 0x31f648u: goto label_31f648;
        case 0x31f64cu: goto label_31f64c;
        case 0x31f650u: goto label_31f650;
        case 0x31f654u: goto label_31f654;
        case 0x31f658u: goto label_31f658;
        case 0x31f65cu: goto label_31f65c;
        case 0x31f660u: goto label_31f660;
        case 0x31f664u: goto label_31f664;
        case 0x31f668u: goto label_31f668;
        case 0x31f66cu: goto label_31f66c;
        case 0x31f670u: goto label_31f670;
        case 0x31f674u: goto label_31f674;
        case 0x31f678u: goto label_31f678;
        case 0x31f67cu: goto label_31f67c;
        case 0x31f680u: goto label_31f680;
        case 0x31f684u: goto label_31f684;
        case 0x31f688u: goto label_31f688;
        case 0x31f68cu: goto label_31f68c;
        case 0x31f690u: goto label_31f690;
        case 0x31f694u: goto label_31f694;
        case 0x31f698u: goto label_31f698;
        case 0x31f69cu: goto label_31f69c;
        case 0x31f6a0u: goto label_31f6a0;
        case 0x31f6a4u: goto label_31f6a4;
        case 0x31f6a8u: goto label_31f6a8;
        case 0x31f6acu: goto label_31f6ac;
        case 0x31f6b0u: goto label_31f6b0;
        case 0x31f6b4u: goto label_31f6b4;
        case 0x31f6b8u: goto label_31f6b8;
        case 0x31f6bcu: goto label_31f6bc;
        case 0x31f6c0u: goto label_31f6c0;
        case 0x31f6c4u: goto label_31f6c4;
        case 0x31f6c8u: goto label_31f6c8;
        case 0x31f6ccu: goto label_31f6cc;
        case 0x31f6d0u: goto label_31f6d0;
        case 0x31f6d4u: goto label_31f6d4;
        case 0x31f6d8u: goto label_31f6d8;
        case 0x31f6dcu: goto label_31f6dc;
        case 0x31f6e0u: goto label_31f6e0;
        case 0x31f6e4u: goto label_31f6e4;
        case 0x31f6e8u: goto label_31f6e8;
        case 0x31f6ecu: goto label_31f6ec;
        case 0x31f6f0u: goto label_31f6f0;
        case 0x31f6f4u: goto label_31f6f4;
        case 0x31f6f8u: goto label_31f6f8;
        case 0x31f6fcu: goto label_31f6fc;
        case 0x31f700u: goto label_31f700;
        case 0x31f704u: goto label_31f704;
        case 0x31f708u: goto label_31f708;
        case 0x31f70cu: goto label_31f70c;
        case 0x31f710u: goto label_31f710;
        case 0x31f714u: goto label_31f714;
        case 0x31f718u: goto label_31f718;
        case 0x31f71cu: goto label_31f71c;
        case 0x31f720u: goto label_31f720;
        case 0x31f724u: goto label_31f724;
        case 0x31f728u: goto label_31f728;
        case 0x31f72cu: goto label_31f72c;
        case 0x31f730u: goto label_31f730;
        case 0x31f734u: goto label_31f734;
        case 0x31f738u: goto label_31f738;
        case 0x31f73cu: goto label_31f73c;
        case 0x31f740u: goto label_31f740;
        case 0x31f744u: goto label_31f744;
        case 0x31f748u: goto label_31f748;
        case 0x31f74cu: goto label_31f74c;
        case 0x31f750u: goto label_31f750;
        case 0x31f754u: goto label_31f754;
        case 0x31f758u: goto label_31f758;
        case 0x31f75cu: goto label_31f75c;
        case 0x31f760u: goto label_31f760;
        case 0x31f764u: goto label_31f764;
        case 0x31f768u: goto label_31f768;
        case 0x31f76cu: goto label_31f76c;
        case 0x31f770u: goto label_31f770;
        case 0x31f774u: goto label_31f774;
        case 0x31f778u: goto label_31f778;
        case 0x31f77cu: goto label_31f77c;
        case 0x31f780u: goto label_31f780;
        case 0x31f784u: goto label_31f784;
        case 0x31f788u: goto label_31f788;
        case 0x31f78cu: goto label_31f78c;
        case 0x31f790u: goto label_31f790;
        case 0x31f794u: goto label_31f794;
        case 0x31f798u: goto label_31f798;
        case 0x31f79cu: goto label_31f79c;
        case 0x31f7a0u: goto label_31f7a0;
        case 0x31f7a4u: goto label_31f7a4;
        case 0x31f7a8u: goto label_31f7a8;
        case 0x31f7acu: goto label_31f7ac;
        case 0x31f7b0u: goto label_31f7b0;
        case 0x31f7b4u: goto label_31f7b4;
        case 0x31f7b8u: goto label_31f7b8;
        case 0x31f7bcu: goto label_31f7bc;
        case 0x31f7c0u: goto label_31f7c0;
        case 0x31f7c4u: goto label_31f7c4;
        case 0x31f7c8u: goto label_31f7c8;
        case 0x31f7ccu: goto label_31f7cc;
        case 0x31f7d0u: goto label_31f7d0;
        case 0x31f7d4u: goto label_31f7d4;
        case 0x31f7d8u: goto label_31f7d8;
        case 0x31f7dcu: goto label_31f7dc;
        case 0x31f7e0u: goto label_31f7e0;
        case 0x31f7e4u: goto label_31f7e4;
        case 0x31f7e8u: goto label_31f7e8;
        case 0x31f7ecu: goto label_31f7ec;
        case 0x31f7f0u: goto label_31f7f0;
        case 0x31f7f4u: goto label_31f7f4;
        case 0x31f7f8u: goto label_31f7f8;
        case 0x31f7fcu: goto label_31f7fc;
        case 0x31f800u: goto label_31f800;
        case 0x31f804u: goto label_31f804;
        case 0x31f808u: goto label_31f808;
        case 0x31f80cu: goto label_31f80c;
        case 0x31f810u: goto label_31f810;
        case 0x31f814u: goto label_31f814;
        case 0x31f818u: goto label_31f818;
        case 0x31f81cu: goto label_31f81c;
        case 0x31f820u: goto label_31f820;
        case 0x31f824u: goto label_31f824;
        case 0x31f828u: goto label_31f828;
        case 0x31f82cu: goto label_31f82c;
        case 0x31f830u: goto label_31f830;
        case 0x31f834u: goto label_31f834;
        case 0x31f838u: goto label_31f838;
        case 0x31f83cu: goto label_31f83c;
        case 0x31f840u: goto label_31f840;
        case 0x31f844u: goto label_31f844;
        case 0x31f848u: goto label_31f848;
        case 0x31f84cu: goto label_31f84c;
        case 0x31f850u: goto label_31f850;
        case 0x31f854u: goto label_31f854;
        case 0x31f858u: goto label_31f858;
        case 0x31f85cu: goto label_31f85c;
        case 0x31f860u: goto label_31f860;
        case 0x31f864u: goto label_31f864;
        case 0x31f868u: goto label_31f868;
        case 0x31f86cu: goto label_31f86c;
        case 0x31f870u: goto label_31f870;
        case 0x31f874u: goto label_31f874;
        case 0x31f878u: goto label_31f878;
        case 0x31f87cu: goto label_31f87c;
        case 0x31f880u: goto label_31f880;
        case 0x31f884u: goto label_31f884;
        case 0x31f888u: goto label_31f888;
        case 0x31f88cu: goto label_31f88c;
        case 0x31f890u: goto label_31f890;
        case 0x31f894u: goto label_31f894;
        case 0x31f898u: goto label_31f898;
        case 0x31f89cu: goto label_31f89c;
        case 0x31f8a0u: goto label_31f8a0;
        case 0x31f8a4u: goto label_31f8a4;
        case 0x31f8a8u: goto label_31f8a8;
        case 0x31f8acu: goto label_31f8ac;
        case 0x31f8b0u: goto label_31f8b0;
        case 0x31f8b4u: goto label_31f8b4;
        case 0x31f8b8u: goto label_31f8b8;
        case 0x31f8bcu: goto label_31f8bc;
        case 0x31f8c0u: goto label_31f8c0;
        case 0x31f8c4u: goto label_31f8c4;
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8ccu: goto label_31f8cc;
        case 0x31f8d0u: goto label_31f8d0;
        case 0x31f8d4u: goto label_31f8d4;
        case 0x31f8d8u: goto label_31f8d8;
        case 0x31f8dcu: goto label_31f8dc;
        case 0x31f8e0u: goto label_31f8e0;
        case 0x31f8e4u: goto label_31f8e4;
        case 0x31f8e8u: goto label_31f8e8;
        case 0x31f8ecu: goto label_31f8ec;
        case 0x31f8f0u: goto label_31f8f0;
        case 0x31f8f4u: goto label_31f8f4;
        case 0x31f8f8u: goto label_31f8f8;
        case 0x31f8fcu: goto label_31f8fc;
        case 0x31f900u: goto label_31f900;
        case 0x31f904u: goto label_31f904;
        case 0x31f908u: goto label_31f908;
        case 0x31f90cu: goto label_31f90c;
        case 0x31f910u: goto label_31f910;
        case 0x31f914u: goto label_31f914;
        case 0x31f918u: goto label_31f918;
        case 0x31f91cu: goto label_31f91c;
        case 0x31f920u: goto label_31f920;
        case 0x31f924u: goto label_31f924;
        case 0x31f928u: goto label_31f928;
        case 0x31f92cu: goto label_31f92c;
        case 0x31f930u: goto label_31f930;
        case 0x31f934u: goto label_31f934;
        case 0x31f938u: goto label_31f938;
        case 0x31f93cu: goto label_31f93c;
        case 0x31f940u: goto label_31f940;
        case 0x31f944u: goto label_31f944;
        case 0x31f948u: goto label_31f948;
        case 0x31f94cu: goto label_31f94c;
        case 0x31f950u: goto label_31f950;
        case 0x31f954u: goto label_31f954;
        case 0x31f958u: goto label_31f958;
        case 0x31f95cu: goto label_31f95c;
        case 0x31f960u: goto label_31f960;
        case 0x31f964u: goto label_31f964;
        case 0x31f968u: goto label_31f968;
        case 0x31f96cu: goto label_31f96c;
        case 0x31f970u: goto label_31f970;
        case 0x31f974u: goto label_31f974;
        case 0x31f978u: goto label_31f978;
        case 0x31f97cu: goto label_31f97c;
        case 0x31f980u: goto label_31f980;
        case 0x31f984u: goto label_31f984;
        case 0x31f988u: goto label_31f988;
        case 0x31f98cu: goto label_31f98c;
        case 0x31f990u: goto label_31f990;
        case 0x31f994u: goto label_31f994;
        case 0x31f998u: goto label_31f998;
        case 0x31f99cu: goto label_31f99c;
        case 0x31f9a0u: goto label_31f9a0;
        case 0x31f9a4u: goto label_31f9a4;
        case 0x31f9a8u: goto label_31f9a8;
        case 0x31f9acu: goto label_31f9ac;
        case 0x31f9b0u: goto label_31f9b0;
        case 0x31f9b4u: goto label_31f9b4;
        case 0x31f9b8u: goto label_31f9b8;
        case 0x31f9bcu: goto label_31f9bc;
        case 0x31f9c0u: goto label_31f9c0;
        case 0x31f9c4u: goto label_31f9c4;
        case 0x31f9c8u: goto label_31f9c8;
        case 0x31f9ccu: goto label_31f9cc;
        default: break;
    }

    ctx->pc = 0x31f508u;

label_31f508:
    // 0x31f508: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31f508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_31f50c:
    // 0x31f50c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x31f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_31f510:
    // 0x31f510: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31f514:
    // 0x31f514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31f518:
    // 0x31f518: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x31f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_31f51c:
    // 0x31f51c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31f51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31f520:
    // 0x31f520: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_31f524:
    // 0x31f524: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x31f524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31f528:
    // 0x31f528: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x31f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_31f52c:
    // 0x31f52c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x31f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_31f530:
    // 0x31f530: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x31f530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_31f534:
    // 0x31f534: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31f534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_31f538:
    // 0x31f538: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x31f538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_31f53c:
    // 0x31f53c: 0xc0c7b90  jal         func_31EE40
label_31f540:
    if (ctx->pc == 0x31F540u) {
        ctx->pc = 0x31F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F53Cu;
        // 0x31f540: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F544u;
        goto label_31f544;
    }
    ctx->pc = 0x31F53Cu;
    SET_GPR_U32(ctx, 31, 0x31F544u);
    ctx->pc = 0x31F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F53Cu;
    // 0x31f540: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31F53Cu, 0x31F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F544u;
label_31f544:
    // 0x31f544: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
label_31f548:
    if (ctx->pc == 0x31F548u) {
        ctx->pc = 0x31F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F544u;
        // 0x31f548: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F54Cu;
        goto label_31f54c;
    }
    ctx->pc = 0x31F544u;
    {
        const bool branch_taken_0x31f544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F544u;
        // 0x31f548: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f544) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F54Cu;
label_31f54c:
    // 0x31f54c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_31f550:
    if (ctx->pc == 0x31F550u) {
        ctx->pc = 0x31F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F54Cu;
        // 0x31f550: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F554u;
        goto label_31f554;
    }
    ctx->pc = 0x31F54Cu;
    {
        const bool branch_taken_0x31f54c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F54Cu;
        // 0x31f550: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f54c) {
            ctx->pc = 0x31F55Cu;
            goto label_31f55c;
        }
    }
    ctx->pc = 0x31F554u;
label_31f554:
    // 0x31f554: 0x1000000d  b           . + 4 + (0xD << 2)
label_31f558:
    if (ctx->pc == 0x31F558u) {
        ctx->pc = 0x31F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F554u;
        // 0x31f558: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F55Cu;
        goto label_31f55c;
    }
    ctx->pc = 0x31F554u;
    {
        const bool branch_taken_0x31f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F554u;
        // 0x31f558: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f554) {
            ctx->pc = 0x31F58Cu;
            goto label_31f58c;
        }
    }
    ctx->pc = 0x31F55Cu;
label_31f55c:
    // 0x31f55c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f560:
    // 0x31f560: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f564:
    // 0x31f564: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f564u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f568:
    // 0x31f568: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x31f568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
label_31f56c:
    // 0x31f56c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f56cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f570:
    // 0x31f570: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f574:
    // 0x31f574: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f578:
    // 0x31f578: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f57c:
    // 0x31f57c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x31f57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_31f580:
    // 0x31f580: 0xc0c7eba  jal         func_31FAE8
label_31f584:
    if (ctx->pc == 0x31F584u) {
        ctx->pc = 0x31F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F580u;
        // 0x31f584: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F588u;
        goto label_31f588;
    }
    ctx->pc = 0x31F580u;
    SET_GPR_U32(ctx, 31, 0x31F588u);
    ctx->pc = 0x31F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F580u;
    // 0x31f584: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F580u, 0x31F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F588u;
label_31f588:
    // 0x31f588: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x31f588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f58c:
    // 0x31f58c: 0x5540007b  bnel        $t2, $zero, . + 4 + (0x7B << 2)
label_31f590:
    if (ctx->pc == 0x31F590u) {
        ctx->pc = 0x31F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F58Cu;
        // 0x31f590: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F594u;
        goto label_31f594;
    }
    ctx->pc = 0x31F58Cu;
    {
        const bool branch_taken_0x31f58c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f58c) {
            ctx->pc = 0x31F590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F58Cu;
            // 0x31f590: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F77Cu;
            goto label_31f77c;
        }
    }
    ctx->pc = 0x31F594u;
label_31f594:
    // 0x31f594: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_31f598:
    if (ctx->pc == 0x31F598u) {
        ctx->pc = 0x31F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F594u;
        // 0x31f598: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F59Cu;
        goto label_31f59c;
    }
    ctx->pc = 0x31F594u;
    {
        const bool branch_taken_0x31f594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f594) {
            ctx->pc = 0x31F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F594u;
            // 0x31f598: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F5A4u;
            goto label_31f5a4;
        }
    }
    ctx->pc = 0x31F59Cu;
label_31f59c:
    // 0x31f59c: 0x1000000c  b           . + 4 + (0xC << 2)
label_31f5a0:
    if (ctx->pc == 0x31F5A0u) {
        ctx->pc = 0x31F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F59Cu;
        // 0x31f5a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5A4u;
        goto label_31f5a4;
    }
    ctx->pc = 0x31F59Cu;
    {
        const bool branch_taken_0x31f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F59Cu;
        // 0x31f5a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f59c) {
            ctx->pc = 0x31F5D0u;
            goto label_31f5d0;
        }
    }
    ctx->pc = 0x31F5A4u;
label_31f5a4:
    // 0x31f5a4: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f5a8:
    // 0x31f5a8: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f5ac:
    // 0x31f5ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x31f5acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f5b0:
    // 0x31f5b0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f5b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f5b4:
    // 0x31f5b4: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x31f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_31f5b8:
    // 0x31f5b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f5bc:
    // 0x31f5bc: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f5c0:
    // 0x31f5c0: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_31f5c4:
    // 0x31f5c4: 0xc0c7eba  jal         func_31FAE8
label_31f5c8:
    if (ctx->pc == 0x31F5C8u) {
        ctx->pc = 0x31F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5C4u;
        // 0x31f5c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5CCu;
        goto label_31f5cc;
    }
    ctx->pc = 0x31F5C4u;
    SET_GPR_U32(ctx, 31, 0x31F5CCu);
    ctx->pc = 0x31F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5C4u;
    // 0x31f5c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F5C4u, 0x31F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5CCu;
label_31f5cc:
    // 0x31f5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f5d0:
    // 0x31f5d0: 0x120000f3  beqz        $s0, . + 4 + (0xF3 << 2)
label_31f5d4:
    if (ctx->pc == 0x31F5D4u) {
        ctx->pc = 0x31F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5D0u;
        // 0x31f5d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5D8u;
        goto label_31f5d8;
    }
    ctx->pc = 0x31F5D0u;
    {
        const bool branch_taken_0x31f5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5D0u;
        // 0x31f5d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f5d0) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F5D8u;
label_31f5d8:
    // 0x31f5d8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_31f5dc:
    if (ctx->pc == 0x31F5DCu) {
        ctx->pc = 0x31F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5D8u;
        // 0x31f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F5E0u;
        goto label_31f5e0;
    }
    ctx->pc = 0x31F5D8u;
    {
        const bool branch_taken_0x31f5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5D8u;
        // 0x31f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f5d8) {
            ctx->pc = 0x31F60Cu;
            goto label_31f60c;
        }
    }
    ctx->pc = 0x31F5E0u;
label_31f5e0:
    // 0x31f5e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31f5e4:
    // 0x31f5e4: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f5e8:
    // 0x31f5e8: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f5ec:
    // 0x31f5ec: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x31f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_31f5f0:
    // 0x31f5f0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f5f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f5f4:
    // 0x31f5f4: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f5f8:
    // 0x31f5f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f5fc:
    // 0x31f5fc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x31f5fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f600:
    // 0x31f600: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x31f600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_31f604:
    // 0x31f604: 0xc0c7eba  jal         func_31FAE8
label_31f608:
    if (ctx->pc == 0x31F608u) {
        ctx->pc = 0x31F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F604u;
        // 0x31f608: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F60Cu;
        goto label_31f60c;
    }
    ctx->pc = 0x31F604u;
    SET_GPR_U32(ctx, 31, 0x31F60Cu);
    ctx->pc = 0x31F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F604u;
    // 0x31f608: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F604u, 0x31F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F60Cu;
label_31f60c:
    // 0x31f60c: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
label_31f610:
    if (ctx->pc == 0x31F610u) {
        ctx->pc = 0x31F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F60Cu;
        // 0x31f610: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F614u;
        goto label_31f614;
    }
    ctx->pc = 0x31F60Cu;
    {
        const bool branch_taken_0x31f60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f60c) {
            ctx->pc = 0x31F610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F60Cu;
            // 0x31f610: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F614u;
label_31f614:
    // 0x31f614: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x31f614u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31f618:
    // 0x31f618: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x31f618u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f61c:
    // 0x31f61c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_31f620:
    if (ctx->pc == 0x31F620u) {
        ctx->pc = 0x31F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F61Cu;
        // 0x31f620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F624u;
        goto label_31f624;
    }
    ctx->pc = 0x31F61Cu;
    {
        const bool branch_taken_0x31f61c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F61Cu;
        // 0x31f620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f61c) {
            ctx->pc = 0x31F650u;
            goto label_31f650;
        }
    }
    ctx->pc = 0x31F624u;
label_31f624:
    // 0x31f624: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f628:
    // 0x31f628: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f62c:
    // 0x31f62c: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f62cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f630:
    // 0x31f630: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x31f630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_31f634:
    // 0x31f634: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f634u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f638:
    // 0x31f638: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f63c:
    // 0x31f63c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f640:
    // 0x31f640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f644:
    // 0x31f644: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x31f644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_31f648:
    // 0x31f648: 0xc0c7eba  jal         func_31FAE8
label_31f64c:
    if (ctx->pc == 0x31F64Cu) {
        ctx->pc = 0x31F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F648u;
        // 0x31f64c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F650u;
        goto label_31f650;
    }
    ctx->pc = 0x31F648u;
    SET_GPR_U32(ctx, 31, 0x31F650u);
    ctx->pc = 0x31F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F648u;
    // 0x31f64c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F648u, 0x31F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F650u;
label_31f650:
    // 0x31f650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31f654:
    if (ctx->pc == 0x31F654u) {
        ctx->pc = 0x31F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F650u;
        // 0x31f654: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F658u;
        goto label_31f658;
    }
    ctx->pc = 0x31F650u;
    {
        const bool branch_taken_0x31f650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F650u;
        // 0x31f654: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f650) {
            ctx->pc = 0x31F660u;
            goto label_31f660;
        }
    }
    ctx->pc = 0x31F658u;
label_31f658:
    // 0x31f658: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x31f658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f65c:
    // 0x31f65c: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x31f65cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_31f660:
    // 0x31f660: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_31f664:
    if (ctx->pc == 0x31F664u) {
        ctx->pc = 0x31F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F660u;
        // 0x31f664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F668u;
        goto label_31f668;
    }
    ctx->pc = 0x31F660u;
    {
        const bool branch_taken_0x31f660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F660u;
        // 0x31f664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f660) {
            ctx->pc = 0x31F694u;
            goto label_31f694;
        }
    }
    ctx->pc = 0x31F668u;
label_31f668:
    // 0x31f668: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31f66c:
    // 0x31f66c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f670:
    // 0x31f670: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f670u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f674:
    // 0x31f674: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x31f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_31f678:
    // 0x31f678: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f678u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f67c:
    // 0x31f67c: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f680:
    // 0x31f680: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f684:
    // 0x31f684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f688:
    // 0x31f688: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x31f688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_31f68c:
    // 0x31f68c: 0xc0c7eba  jal         func_31FAE8
label_31f690:
    if (ctx->pc == 0x31F690u) {
        ctx->pc = 0x31F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F68Cu;
        // 0x31f690: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F694u;
        goto label_31f694;
    }
    ctx->pc = 0x31F68Cu;
    SET_GPR_U32(ctx, 31, 0x31F694u);
    ctx->pc = 0x31F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F68Cu;
    // 0x31f690: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F68Cu, 0x31F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F694u;
label_31f694:
    // 0x31f694: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31f698:
    if (ctx->pc == 0x31F698u) {
        ctx->pc = 0x31F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F694u;
        // 0x31f698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F69Cu;
        goto label_31f69c;
    }
    ctx->pc = 0x31F694u;
    {
        const bool branch_taken_0x31f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F694u;
        // 0x31f698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f694) {
            ctx->pc = 0x31F6A4u;
            goto label_31f6a4;
        }
    }
    ctx->pc = 0x31F69Cu;
label_31f69c:
    // 0x31f69c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x31f69cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f6a0:
    // 0x31f6a0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x31f6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_31f6a4:
    // 0x31f6a4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x31f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_31f6a8:
    // 0x31f6a8: 0x32540001  andi        $s4, $s2, 0x1
    ctx->pc = 0x31f6a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_31f6ac:
    // 0x31f6ac: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x31f6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31f6b0:
    // 0x31f6b0: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_31f6b4:
    if (ctx->pc == 0x31F6B4u) {
        ctx->pc = 0x31F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6B0u;
        // 0x31f6b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F6B8u;
        goto label_31f6b8;
    }
    ctx->pc = 0x31F6B0u;
    {
        const bool branch_taken_0x31f6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6B0u;
        // 0x31f6b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6b0) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F6B8u;
label_31f6b8:
    // 0x31f6b8: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x31f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_31f6bc:
    // 0x31f6bc: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x31f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_31f6c0:
    // 0x31f6c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31f6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_31f6c4:
    // 0x31f6c4: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_31f6c8:
    if (ctx->pc == 0x31F6C8u) {
        ctx->pc = 0x31F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6C4u;
        // 0x31f6c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F6CCu;
        goto label_31f6cc;
    }
    ctx->pc = 0x31F6C4u;
    {
        const bool branch_taken_0x31f6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6C4u;
        // 0x31f6c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6c4) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F6CCu;
label_31f6cc:
    // 0x31f6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f6d0:
    // 0x31f6d0: 0xc0c7b90  jal         func_31EE40
label_31f6d4:
    if (ctx->pc == 0x31F6D4u) {
        ctx->pc = 0x31F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6D0u;
        // 0x31f6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F6D8u;
        goto label_31f6d8;
    }
    ctx->pc = 0x31F6D0u;
    SET_GPR_U32(ctx, 31, 0x31F6D8u);
    ctx->pc = 0x31F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6D0u;
    // 0x31f6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31F6D0u, 0x31F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6D8u;
label_31f6d8:
    // 0x31f6d8: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_31f6dc:
    if (ctx->pc == 0x31F6DCu) {
        ctx->pc = 0x31F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6D8u;
        // 0x31f6dc: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F6E0u;
        goto label_31f6e0;
    }
    ctx->pc = 0x31F6D8u;
    {
        const bool branch_taken_0x31f6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f6d8) {
            ctx->pc = 0x31F6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F6D8u;
            // 0x31f6dc: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F6E0u;
label_31f6e0:
    // 0x31f6e0: 0xc0c7ee6  jal         func_31FB98
label_31f6e4:
    if (ctx->pc == 0x31F6E4u) {
        ctx->pc = 0x31F6E8u;
        goto label_31f6e8;
    }
    ctx->pc = 0x31F6E0u;
    SET_GPR_U32(ctx, 31, 0x31F6E8u);
    ctx->pc = 0x31FB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB98u, 0x31F6E0u, 0x31F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6E8u;
label_31f6e8:
    // 0x31f6e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f6ec:
    // 0x31f6ec: 0xc0c7b90  jal         func_31EE40
label_31f6f0:
    if (ctx->pc == 0x31F6F0u) {
        ctx->pc = 0x31F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6ECu;
        // 0x31f6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F6F4u;
        goto label_31f6f4;
    }
    ctx->pc = 0x31F6ECu;
    SET_GPR_U32(ctx, 31, 0x31F6F4u);
    ctx->pc = 0x31F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6ECu;
    // 0x31f6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31F6ECu, 0x31F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6F4u;
label_31f6f4:
    // 0x31f6f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31f6f8:
    if (ctx->pc == 0x31F6F8u) {
        ctx->pc = 0x31F6FCu;
        goto label_31f6fc;
    }
    ctx->pc = 0x31F6F4u;
    {
        const bool branch_taken_0x31f6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6f4) {
            ctx->pc = 0x31F734u;
            goto label_31f734;
        }
    }
    ctx->pc = 0x31F6FCu;
label_31f6fc:
    // 0x31f6fc: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
label_31f700:
    if (ctx->pc == 0x31F700u) {
        ctx->pc = 0x31F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6FCu;
        // 0x31f700: 0x3c080032  lui         $t0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F704u;
        goto label_31f704;
    }
    ctx->pc = 0x31F6FCu;
    {
        const bool branch_taken_0x31f6fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6FCu;
        // 0x31f700: 0x3c080032  lui         $t0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6fc) {
            ctx->pc = 0x31F998u;
            goto label_31f998;
        }
    }
    ctx->pc = 0x31F704u;
label_31f704:
    // 0x31f704: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f708:
    // 0x31f708: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f70c:
    // 0x31f70c: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x31f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_31f710:
    // 0x31f710: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f710u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f714:
    // 0x31f714: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f718:
    // 0x31f718: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f71c:
    // 0x31f71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f720:
    // 0x31f720: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x31f720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_31f724:
    // 0x31f724: 0xc0c7eba  jal         func_31FAE8
label_31f728:
    if (ctx->pc == 0x31F728u) {
        ctx->pc = 0x31F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F724u;
        // 0x31f728: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F72Cu;
        goto label_31f72c;
    }
    ctx->pc = 0x31F724u;
    SET_GPR_U32(ctx, 31, 0x31F72Cu);
    ctx->pc = 0x31F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F724u;
    // 0x31f728: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F724u, 0x31F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F72Cu;
label_31f72c:
    // 0x31f72c: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_31f730:
    if (ctx->pc == 0x31F730u) {
        ctx->pc = 0x31F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F72Cu;
        // 0x31f730: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F734u;
        goto label_31f734;
    }
    ctx->pc = 0x31F72Cu;
    {
        const bool branch_taken_0x31f72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f72c) {
            ctx->pc = 0x31F730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F72Cu;
            // 0x31f730: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F734u;
label_31f734:
    // 0x31f734: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_31f738:
    if (ctx->pc == 0x31F738u) {
        ctx->pc = 0x31F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F734u;
        // 0x31f738: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F73Cu;
        goto label_31f73c;
    }
    ctx->pc = 0x31F734u;
    {
        const bool branch_taken_0x31f734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f734) {
            ctx->pc = 0x31F738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F734u;
            // 0x31f738: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F744u;
            goto label_31f744;
        }
    }
    ctx->pc = 0x31F73Cu;
label_31f73c:
    // 0x31f73c: 0x1000000c  b           . + 4 + (0xC << 2)
label_31f740:
    if (ctx->pc == 0x31F740u) {
        ctx->pc = 0x31F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F73Cu;
        // 0x31f740: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F744u;
        goto label_31f744;
    }
    ctx->pc = 0x31F73Cu;
    {
        const bool branch_taken_0x31f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F73Cu;
        // 0x31f740: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f73c) {
            ctx->pc = 0x31F770u;
            goto label_31f770;
        }
    }
    ctx->pc = 0x31F744u;
label_31f744:
    // 0x31f744: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f748:
    // 0x31f748: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f748u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f74c:
    // 0x31f74c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x31f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
label_31f750:
    // 0x31f750: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f750u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f754:
    // 0x31f754: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f758:
    // 0x31f758: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f75c:
    // 0x31f75c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f760:
    // 0x31f760: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x31f760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_31f764:
    // 0x31f764: 0xc0c7eba  jal         func_31FAE8
label_31f768:
    if (ctx->pc == 0x31F768u) {
        ctx->pc = 0x31F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F764u;
        // 0x31f768: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F76Cu;
        goto label_31f76c;
    }
    ctx->pc = 0x31F764u;
    SET_GPR_U32(ctx, 31, 0x31F76Cu);
    ctx->pc = 0x31F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F764u;
    // 0x31f768: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F764u, 0x31F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F76Cu;
label_31f76c:
    // 0x31f76c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x31f76cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f770:
    // 0x31f770: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_31f774:
    if (ctx->pc == 0x31F774u) {
        ctx->pc = 0x31F778u;
        goto label_31f778;
    }
    ctx->pc = 0x31F770u;
    {
        const bool branch_taken_0x31f770 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f770) {
            ctx->pc = 0x31F7A8u;
            goto label_31f7a8;
        }
    }
    ctx->pc = 0x31F778u;
label_31f778:
    // 0x31f778: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x31f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_31f77c:
    // 0x31f77c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31f77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f780:
    // 0x31f780: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x31f780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31f784:
    // 0x31f784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f788:
    // 0x31f788: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x31f788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_31f78c:
    // 0x31f78c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f78cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f790:
    // 0x31f790: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31f794:
    // 0x31f794: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f798:
    // 0x31f798: 0x40f809  jalr        $v0
label_31f79c:
    if (ctx->pc == 0x31F79Cu) {
        ctx->pc = 0x31F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F798u;
        // 0x31f79c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7A0u;
        goto label_31f7a0;
    }
    ctx->pc = 0x31F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F7A0u);
        ctx->pc = 0x31F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F798u;
        // 0x31f79c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F798u, 0x31F7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F7A0u;
label_31f7a0:
    // 0x31f7a0: 0x1000007e  b           . + 4 + (0x7E << 2)
label_31f7a4:
    if (ctx->pc == 0x31F7A4u) {
        ctx->pc = 0x31F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7A0u;
        // 0x31f7a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7A8u;
        goto label_31f7a8;
    }
    ctx->pc = 0x31F7A0u;
    {
        const bool branch_taken_0x31f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7A0u;
        // 0x31f7a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7a0) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F7A8u;
label_31f7a8:
    // 0x31f7a8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_31f7ac:
    if (ctx->pc == 0x31F7ACu) {
        ctx->pc = 0x31F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7A8u;
        // 0x31f7ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7B0u;
        goto label_31f7b0;
    }
    ctx->pc = 0x31F7A8u;
    {
        const bool branch_taken_0x31f7a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7a8) {
            ctx->pc = 0x31F7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F7A8u;
            // 0x31f7ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F7B8u;
            goto label_31f7b8;
        }
    }
    ctx->pc = 0x31F7B0u;
label_31f7b0:
    // 0x31f7b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_31f7b4:
    if (ctx->pc == 0x31F7B4u) {
        ctx->pc = 0x31F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7B0u;
        // 0x31f7b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7B8u;
        goto label_31f7b8;
    }
    ctx->pc = 0x31F7B0u;
    {
        const bool branch_taken_0x31f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7B0u;
        // 0x31f7b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7b0) {
            ctx->pc = 0x31F7E4u;
            goto label_31f7e4;
        }
    }
    ctx->pc = 0x31F7B8u;
label_31f7b8:
    // 0x31f7b8: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f7bc:
    // 0x31f7bc: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f7c0:
    // 0x31f7c0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x31f7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f7c4:
    // 0x31f7c4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f7c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f7c8:
    // 0x31f7c8: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x31f7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_31f7cc:
    // 0x31f7cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f7d0:
    // 0x31f7d0: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f7d4:
    // 0x31f7d4: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x31f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_31f7d8:
    // 0x31f7d8: 0xc0c7eba  jal         func_31FAE8
label_31f7dc:
    if (ctx->pc == 0x31F7DCu) {
        ctx->pc = 0x31F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7D8u;
        // 0x31f7dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7E0u;
        goto label_31f7e0;
    }
    ctx->pc = 0x31F7D8u;
    SET_GPR_U32(ctx, 31, 0x31F7E0u);
    ctx->pc = 0x31F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F7D8u;
    // 0x31f7dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F7D8u, 0x31F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F7E0u;
label_31f7e0:
    // 0x31f7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f7e4:
    // 0x31f7e4: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_31f7e8:
    if (ctx->pc == 0x31F7E8u) {
        ctx->pc = 0x31F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E4u;
        // 0x31f7e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7ECu;
        goto label_31f7ec;
    }
    ctx->pc = 0x31F7E4u;
    {
        const bool branch_taken_0x31f7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E4u;
        // 0x31f7e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7e4) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F7ECu;
label_31f7ec:
    // 0x31f7ec: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_31f7f0:
    if (ctx->pc == 0x31F7F0u) {
        ctx->pc = 0x31F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7ECu;
        // 0x31f7f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7F4u;
        goto label_31f7f4;
    }
    ctx->pc = 0x31F7ECu;
    {
        const bool branch_taken_0x31f7ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7ec) {
            ctx->pc = 0x31F7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F7ECu;
            // 0x31f7f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F7FCu;
            goto label_31f7fc;
        }
    }
    ctx->pc = 0x31F7F4u;
label_31f7f4:
    // 0x31f7f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_31f7f8:
    if (ctx->pc == 0x31F7F8u) {
        ctx->pc = 0x31F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7F4u;
        // 0x31f7f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7FCu;
        goto label_31f7fc;
    }
    ctx->pc = 0x31F7F4u;
    {
        const bool branch_taken_0x31f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7F4u;
        // 0x31f7f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7f4) {
            ctx->pc = 0x31F828u;
            goto label_31f828;
        }
    }
    ctx->pc = 0x31F7FCu;
label_31f7fc:
    // 0x31f7fc: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31f800:
    // 0x31f800: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f800u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
label_31f804:
    // 0x31f804: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x31f804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f808:
    // 0x31f808: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f808u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f80c:
    // 0x31f80c: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x31f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_31f810:
    // 0x31f810: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f814:
    // 0x31f814: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
label_31f818:
    // 0x31f818: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_31f81c:
    // 0x31f81c: 0xc0c7eba  jal         func_31FAE8
label_31f820:
    if (ctx->pc == 0x31F820u) {
        ctx->pc = 0x31F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F81Cu;
        // 0x31f820: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F824u;
        goto label_31f824;
    }
    ctx->pc = 0x31F81Cu;
    SET_GPR_U32(ctx, 31, 0x31F824u);
    ctx->pc = 0x31F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F81Cu;
    // 0x31f820: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F81Cu, 0x31F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F824u;
label_31f824:
    // 0x31f824: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f828:
    // 0x31f828: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_31f82c:
    if (ctx->pc == 0x31F82Cu) {
        ctx->pc = 0x31F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F828u;
        // 0x31f82c: 0x3c1e0032  lui         $fp, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F830u;
        goto label_31f830;
    }
    ctx->pc = 0x31F828u;
    {
        const bool branch_taken_0x31f828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F828u;
        // 0x31f82c: 0x3c1e0032  lui         $fp, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f828) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F830u;
label_31f830:
    // 0x31f830: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x31f830u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31f834:
    // 0x31f834: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x31f834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31f838:
    // 0x31f838: 0x3c150032  lui         $s5, 0x32
    ctx->pc = 0x31f838u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
label_31f83c:
    // 0x31f83c: 0x10000024  b           . + 4 + (0x24 << 2)
label_31f840:
    if (ctx->pc == 0x31F840u) {
        ctx->pc = 0x31F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F83Cu;
        // 0x31f840: 0x3c170032  lui         $s7, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F844u;
        goto label_31f844;
    }
    ctx->pc = 0x31F83Cu;
    {
        const bool branch_taken_0x31f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F83Cu;
        // 0x31f840: 0x3c170032  lui         $s7, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f83c) {
            ctx->pc = 0x31F8D0u;
            goto label_31f8d0;
        }
    }
    ctx->pc = 0x31F844u;
label_31f844:
    // 0x31f844: 0x0  nop
    ctx->pc = 0x31f844u;
    // NOP
label_31f848:
    // 0x31f848: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_31f84c:
    if (ctx->pc == 0x31F84Cu) {
        ctx->pc = 0x31F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F848u;
        // 0x31f84c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F850u;
        goto label_31f850;
    }
    ctx->pc = 0x31F848u;
    {
        const bool branch_taken_0x31f848 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f848) {
            ctx->pc = 0x31F84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F848u;
            // 0x31f84c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F858u;
            goto label_31f858;
        }
    }
    ctx->pc = 0x31F850u;
label_31f850:
    // 0x31f850: 0x1000000a  b           . + 4 + (0xA << 2)
label_31f854:
    if (ctx->pc == 0x31F854u) {
        ctx->pc = 0x31F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F850u;
        // 0x31f854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F858u;
        goto label_31f858;
    }
    ctx->pc = 0x31F850u;
    {
        const bool branch_taken_0x31f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F850u;
        // 0x31f854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f850) {
            ctx->pc = 0x31F87Cu;
            goto label_31f87c;
        }
    }
    ctx->pc = 0x31F858u;
label_31f858:
    // 0x31f858: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x31f858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f85c:
    // 0x31f85c: 0x26e501f0  addiu       $a1, $s7, 0x1F0
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
label_31f860:
    // 0x31f860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f864:
    // 0x31f864: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f864u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f868:
    // 0x31f868: 0x26a8f4a0  addiu       $t0, $s5, -0xB60
    ctx->pc = 0x31f868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964384));
label_31f86c:
    // 0x31f86c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f870:
    // 0x31f870: 0xc0c7eba  jal         func_31FAE8
label_31f874:
    if (ctx->pc == 0x31F874u) {
        ctx->pc = 0x31F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F870u;
        // 0x31f874: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F878u;
        goto label_31f878;
    }
    ctx->pc = 0x31F870u;
    SET_GPR_U32(ctx, 31, 0x31F878u);
    ctx->pc = 0x31F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F870u;
    // 0x31f874: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F870u, 0x31F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F878u;
label_31f878:
    // 0x31f878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f87c:
    // 0x31f87c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_31f880:
    if (ctx->pc == 0x31F880u) {
        ctx->pc = 0x31F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F87Cu;
        // 0x31f880: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F884u;
        goto label_31f884;
    }
    ctx->pc = 0x31F87Cu;
    {
        const bool branch_taken_0x31f87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f87c) {
            ctx->pc = 0x31F880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F87Cu;
            // 0x31f880: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F88Cu;
            goto label_31f88c;
        }
    }
    ctx->pc = 0x31F884u;
label_31f884:
    // 0x31f884: 0x1000000a  b           . + 4 + (0xA << 2)
label_31f888:
    if (ctx->pc == 0x31F888u) {
        ctx->pc = 0x31F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F884u;
        // 0x31f888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F88Cu;
        goto label_31f88c;
    }
    ctx->pc = 0x31F884u;
    {
        const bool branch_taken_0x31f884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F884u;
        // 0x31f888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f884) {
            ctx->pc = 0x31F8B0u;
            goto label_31f8b0;
        }
    }
    ctx->pc = 0x31F88Cu;
label_31f88c:
    // 0x31f88c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x31f88cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f890:
    // 0x31f890: 0x26e501f0  addiu       $a1, $s7, 0x1F0
    ctx->pc = 0x31f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
label_31f894:
    // 0x31f894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f898:
    // 0x31f898: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f898u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f89c:
    // 0x31f89c: 0x26a8f4a0  addiu       $t0, $s5, -0xB60
    ctx->pc = 0x31f89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964384));
label_31f8a0:
    // 0x31f8a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f8a4:
    // 0x31f8a4: 0xc0c7eba  jal         func_31FAE8
label_31f8a8:
    if (ctx->pc == 0x31F8A8u) {
        ctx->pc = 0x31F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8A4u;
        // 0x31f8a8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8ACu;
        goto label_31f8ac;
    }
    ctx->pc = 0x31F8A4u;
    SET_GPR_U32(ctx, 31, 0x31F8ACu);
    ctx->pc = 0x31F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8A4u;
    // 0x31f8a8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F8A4u, 0x31F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8ACu;
label_31f8ac:
    // 0x31f8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f8b0:
    // 0x31f8b0: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_31f8b4:
    if (ctx->pc == 0x31F8B4u) {
        ctx->pc = 0x31F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B0u;
        // 0x31f8b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8B8u;
        goto label_31f8b8;
    }
    ctx->pc = 0x31F8B0u;
    {
        const bool branch_taken_0x31f8b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B0u;
        // 0x31f8b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8b0) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F8B8u;
label_31f8b8:
    // 0x31f8b8: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_31f8bc:
    if (ctx->pc == 0x31F8BCu) {
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8C0u;
        goto label_31f8c0;
    }
    ctx->pc = 0x31F8B8u;
    {
        const bool branch_taken_0x31f8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8b8) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F8C0u;
label_31f8c0:
    // 0x31f8c0: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x31f8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31f8c4:
    // 0x31f8c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31f8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31f8c8:
    // 0x31f8c8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x31f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31f8cc:
    // 0x31f8cc: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x31f8ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_31f8d0:
    // 0x31f8d0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_31f8d4:
    if (ctx->pc == 0x31F8D4u) {
        ctx->pc = 0x31F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8D0u;
        // 0x31f8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8D8u;
        goto label_31f8d8;
    }
    ctx->pc = 0x31F8D0u;
    {
        const bool branch_taken_0x31f8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8D0u;
        // 0x31f8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8d0) {
            ctx->pc = 0x31F8FCu;
            goto label_31f8fc;
        }
    }
    ctx->pc = 0x31F8D8u;
label_31f8d8:
    // 0x31f8d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31f8dc:
    // 0x31f8dc: 0x27c50180  addiu       $a1, $fp, 0x180
    ctx->pc = 0x31f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 384));
label_31f8e0:
    // 0x31f8e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f8e4:
    // 0x31f8e4: 0x26a8f4a0  addiu       $t0, $s5, -0xB60
    ctx->pc = 0x31f8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964384));
label_31f8e8:
    // 0x31f8e8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f8e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f8ec:
    // 0x31f8ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x31f8ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f8f0:
    // 0x31f8f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f8f4:
    // 0x31f8f4: 0xc0c7eba  jal         func_31FAE8
label_31f8f8:
    if (ctx->pc == 0x31F8F8u) {
        ctx->pc = 0x31F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8F4u;
        // 0x31f8f8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8FCu;
        goto label_31f8fc;
    }
    ctx->pc = 0x31F8F4u;
    SET_GPR_U32(ctx, 31, 0x31F8FCu);
    ctx->pc = 0x31F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8F4u;
    // 0x31f8f8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F8F4u, 0x31F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8FCu;
label_31f8fc:
    // 0x31f8fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31f900:
    if (ctx->pc == 0x31F900u) {
        ctx->pc = 0x31F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8FCu;
        // 0x31f900: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F904u;
        goto label_31f904;
    }
    ctx->pc = 0x31F8FCu;
    {
        const bool branch_taken_0x31f8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8FCu;
        // 0x31f900: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8fc) {
            ctx->pc = 0x31F90Cu;
            goto label_31f90c;
        }
    }
    ctx->pc = 0x31F904u;
label_31f904:
    // 0x31f904: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x31f904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f908:
    // 0x31f908: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x31f908u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_31f90c:
    // 0x31f90c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_31f910:
    if (ctx->pc == 0x31F910u) {
        ctx->pc = 0x31F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F90Cu;
        // 0x31f910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F914u;
        goto label_31f914;
    }
    ctx->pc = 0x31F90Cu;
    {
        const bool branch_taken_0x31f90c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F90Cu;
        // 0x31f910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f90c) {
            ctx->pc = 0x31F938u;
            goto label_31f938;
        }
    }
    ctx->pc = 0x31F914u;
label_31f914:
    // 0x31f914: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31f918:
    // 0x31f918: 0x27c50180  addiu       $a1, $fp, 0x180
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 384));
label_31f91c:
    // 0x31f91c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f920:
    // 0x31f920: 0x26a8f4a0  addiu       $t0, $s5, -0xB60
    ctx->pc = 0x31f920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964384));
label_31f924:
    // 0x31f924: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f924u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31f928:
    // 0x31f928: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x31f928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f92c:
    // 0x31f92c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31f930:
    // 0x31f930: 0xc0c7eba  jal         func_31FAE8
label_31f934:
    if (ctx->pc == 0x31F934u) {
        ctx->pc = 0x31F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F930u;
        // 0x31f934: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F938u;
        goto label_31f938;
    }
    ctx->pc = 0x31F930u;
    SET_GPR_U32(ctx, 31, 0x31F938u);
    ctx->pc = 0x31F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F930u;
    // 0x31f934: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31F930u, 0x31F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F938u;
label_31f938:
    // 0x31f938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31f93c:
    if (ctx->pc == 0x31F93Cu) {
        ctx->pc = 0x31F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F938u;
        // 0x31f93c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F940u;
        goto label_31f940;
    }
    ctx->pc = 0x31F938u;
    {
        const bool branch_taken_0x31f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F938u;
        // 0x31f93c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f938) {
            ctx->pc = 0x31F948u;
            goto label_31f948;
        }
    }
    ctx->pc = 0x31F940u;
label_31f940:
    // 0x31f940: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x31f940u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31f944:
    // 0x31f944: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x31f944u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_31f948:
    // 0x31f948: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x31f948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_31f94c:
    // 0x31f94c: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x31f94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_31f950:
    // 0x31f950: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x31f950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_31f954:
    // 0x31f954: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_31f958:
    if (ctx->pc == 0x31F958u) {
        ctx->pc = 0x31F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F954u;
        // 0x31f958: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F95Cu;
        goto label_31f95c;
    }
    ctx->pc = 0x31F954u;
    {
        const bool branch_taken_0x31f954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F954u;
        // 0x31f958: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f954) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F95Cu;
label_31f95c:
    // 0x31f95c: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x31f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_31f960:
    // 0x31f960: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x31f960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_31f964:
    // 0x31f964: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_31f968:
    if (ctx->pc == 0x31F968u) {
        ctx->pc = 0x31F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F964u;
        // 0x31f968: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F96Cu;
        goto label_31f96c;
    }
    ctx->pc = 0x31F964u;
    {
        const bool branch_taken_0x31f964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F964u;
        // 0x31f968: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f964) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F96Cu;
label_31f96c:
    // 0x31f96c: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_31f970:
    if (ctx->pc == 0x31F970u) {
        ctx->pc = 0x31F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F96Cu;
        // 0x31f970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F974u;
        goto label_31f974;
    }
    ctx->pc = 0x31F96Cu;
    {
        const bool branch_taken_0x31f96c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f96c) {
            ctx->pc = 0x31F970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F96Cu;
            // 0x31f970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F988u;
            goto label_31f988;
        }
    }
    ctx->pc = 0x31F974u;
label_31f974:
    // 0x31f974: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x31f974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_31f978:
    // 0x31f978: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_31f97c:
    if (ctx->pc == 0x31F97Cu) {
        ctx->pc = 0x31F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F978u;
        // 0x31f97c: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F980u;
        goto label_31f980;
    }
    ctx->pc = 0x31F978u;
    {
        const bool branch_taken_0x31f978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F978u;
        // 0x31f97c: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f978) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F980u;
label_31f980:
    // 0x31f980: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_31f984:
    if (ctx->pc == 0x31F984u) {
        ctx->pc = 0x31F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F980u;
        // 0x31f984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F988u;
        goto label_31f988;
    }
    ctx->pc = 0x31F980u;
    {
        const bool branch_taken_0x31f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F980u;
        // 0x31f984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f980) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F988u;
label_31f988:
    // 0x31f988: 0xc0c7b90  jal         func_31EE40
label_31f98c:
    if (ctx->pc == 0x31F98Cu) {
        ctx->pc = 0x31F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F988u;
        // 0x31f98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F990u;
        goto label_31f990;
    }
    ctx->pc = 0x31F988u;
    SET_GPR_U32(ctx, 31, 0x31F990u);
    ctx->pc = 0x31F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F988u;
    // 0x31f98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31F988u, 0x31F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F990u;
label_31f990:
    // 0x31f990: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_31f994:
    if (ctx->pc == 0x31F994u) {
        ctx->pc = 0x31F998u;
        goto label_31f998;
    }
    ctx->pc = 0x31F990u;
    {
        const bool branch_taken_0x31f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f990) {
            ctx->pc = 0x31F848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f848;
        }
    }
    ctx->pc = 0x31F998u;
label_31f998:
    // 0x31f998: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x31f998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_31f99c:
    // 0x31f99c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31f9a0:
    // 0x31f9a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_31f9a4:
    // 0x31f9a4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x31f9a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_31f9a8:
    // 0x31f9a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x31f9a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_31f9ac:
    // 0x31f9ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x31f9acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31f9b0:
    // 0x31f9b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x31f9b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31f9b4:
    // 0x31f9b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x31f9b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31f9b8:
    // 0x31f9b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x31f9b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31f9bc:
    // 0x31f9bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31f9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31f9c0:
    // 0x31f9c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x31f9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31f9c4:
    // 0x31f9c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31f9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31f9c8:
    // 0x31f9c8: 0x3e00008  jr          $ra
label_31f9cc:
    if (ctx->pc == 0x31F9CCu) {
        ctx->pc = 0x31F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9C8u;
        // 0x31f9cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9D0u;
        goto label_fallthrough_0x31f9c8;
    }
    ctx->pc = 0x31F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9C8u;
        // 0x31f9cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31f9c8:
    ctx->pc = 0x31F9D0u;
}
