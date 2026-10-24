#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: R040Init__Fv
// Address: 0x79a4d8 - 0x79a8b8
void R040Init__Fv_0x79a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R040Init__Fv_0x79a4d8");
#endif

    switch (ctx->pc) {
        case 0x79a4d8u: goto label_79a4d8;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4e4u: goto label_79a4e4;
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
        case 0x79a548u: goto label_79a548;
        case 0x79a54cu: goto label_79a54c;
        case 0x79a550u: goto label_79a550;
        case 0x79a554u: goto label_79a554;
        case 0x79a558u: goto label_79a558;
        case 0x79a55cu: goto label_79a55c;
        case 0x79a560u: goto label_79a560;
        case 0x79a564u: goto label_79a564;
        case 0x79a568u: goto label_79a568;
        case 0x79a56cu: goto label_79a56c;
        case 0x79a570u: goto label_79a570;
        case 0x79a574u: goto label_79a574;
        case 0x79a578u: goto label_79a578;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a580u: goto label_79a580;
        case 0x79a584u: goto label_79a584;
        case 0x79a588u: goto label_79a588;
        case 0x79a58cu: goto label_79a58c;
        case 0x79a590u: goto label_79a590;
        case 0x79a594u: goto label_79a594;
        case 0x79a598u: goto label_79a598;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5a4u: goto label_79a5a4;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5acu: goto label_79a5ac;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5b8u: goto label_79a5b8;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d4u: goto label_79a5d4;
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5dcu: goto label_79a5dc;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a5fcu: goto label_79a5fc;
        case 0x79a600u: goto label_79a600;
        case 0x79a604u: goto label_79a604;
        case 0x79a608u: goto label_79a608;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a610u: goto label_79a610;
        case 0x79a614u: goto label_79a614;
        case 0x79a618u: goto label_79a618;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a620u: goto label_79a620;
        case 0x79a624u: goto label_79a624;
        case 0x79a628u: goto label_79a628;
        case 0x79a62cu: goto label_79a62c;
        case 0x79a630u: goto label_79a630;
        case 0x79a634u: goto label_79a634;
        case 0x79a638u: goto label_79a638;
        case 0x79a63cu: goto label_79a63c;
        case 0x79a640u: goto label_79a640;
        case 0x79a644u: goto label_79a644;
        case 0x79a648u: goto label_79a648;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a650u: goto label_79a650;
        case 0x79a654u: goto label_79a654;
        case 0x79a658u: goto label_79a658;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a660u: goto label_79a660;
        case 0x79a664u: goto label_79a664;
        case 0x79a668u: goto label_79a668;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a670u: goto label_79a670;
        case 0x79a674u: goto label_79a674;
        case 0x79a678u: goto label_79a678;
        case 0x79a67cu: goto label_79a67c;
        case 0x79a680u: goto label_79a680;
        case 0x79a684u: goto label_79a684;
        case 0x79a688u: goto label_79a688;
        case 0x79a68cu: goto label_79a68c;
        case 0x79a690u: goto label_79a690;
        case 0x79a694u: goto label_79a694;
        case 0x79a698u: goto label_79a698;
        case 0x79a69cu: goto label_79a69c;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a4u: goto label_79a6a4;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6acu: goto label_79a6ac;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6b4u: goto label_79a6b4;
        case 0x79a6b8u: goto label_79a6b8;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6c4u: goto label_79a6c4;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6ccu: goto label_79a6cc;
        case 0x79a6d0u: goto label_79a6d0;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e0u: goto label_79a6e0;
        case 0x79a6e4u: goto label_79a6e4;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a6f4u: goto label_79a6f4;
        case 0x79a6f8u: goto label_79a6f8;
        case 0x79a6fcu: goto label_79a6fc;
        case 0x79a700u: goto label_79a700;
        case 0x79a704u: goto label_79a704;
        case 0x79a708u: goto label_79a708;
        case 0x79a70cu: goto label_79a70c;
        case 0x79a710u: goto label_79a710;
        case 0x79a714u: goto label_79a714;
        case 0x79a718u: goto label_79a718;
        case 0x79a71cu: goto label_79a71c;
        case 0x79a720u: goto label_79a720;
        case 0x79a724u: goto label_79a724;
        case 0x79a728u: goto label_79a728;
        case 0x79a72cu: goto label_79a72c;
        case 0x79a730u: goto label_79a730;
        case 0x79a734u: goto label_79a734;
        case 0x79a738u: goto label_79a738;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a740u: goto label_79a740;
        case 0x79a744u: goto label_79a744;
        case 0x79a748u: goto label_79a748;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a750u: goto label_79a750;
        case 0x79a754u: goto label_79a754;
        case 0x79a758u: goto label_79a758;
        case 0x79a75cu: goto label_79a75c;
        case 0x79a760u: goto label_79a760;
        case 0x79a764u: goto label_79a764;
        case 0x79a768u: goto label_79a768;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a770u: goto label_79a770;
        case 0x79a774u: goto label_79a774;
        case 0x79a778u: goto label_79a778;
        case 0x79a77cu: goto label_79a77c;
        case 0x79a780u: goto label_79a780;
        case 0x79a784u: goto label_79a784;
        case 0x79a788u: goto label_79a788;
        case 0x79a78cu: goto label_79a78c;
        case 0x79a790u: goto label_79a790;
        case 0x79a794u: goto label_79a794;
        case 0x79a798u: goto label_79a798;
        case 0x79a79cu: goto label_79a79c;
        case 0x79a7a0u: goto label_79a7a0;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7a8u: goto label_79a7a8;
        case 0x79a7acu: goto label_79a7ac;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7b8u: goto label_79a7b8;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7ccu: goto label_79a7cc;
        case 0x79a7d0u: goto label_79a7d0;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7d8u: goto label_79a7d8;
        case 0x79a7dcu: goto label_79a7dc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a7f4u: goto label_79a7f4;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a7fcu: goto label_79a7fc;
        case 0x79a800u: goto label_79a800;
        case 0x79a804u: goto label_79a804;
        case 0x79a808u: goto label_79a808;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a810u: goto label_79a810;
        case 0x79a814u: goto label_79a814;
        case 0x79a818u: goto label_79a818;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a820u: goto label_79a820;
        case 0x79a824u: goto label_79a824;
        case 0x79a828u: goto label_79a828;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a830u: goto label_79a830;
        case 0x79a834u: goto label_79a834;
        case 0x79a838u: goto label_79a838;
        case 0x79a83cu: goto label_79a83c;
        case 0x79a840u: goto label_79a840;
        case 0x79a844u: goto label_79a844;
        case 0x79a848u: goto label_79a848;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a850u: goto label_79a850;
        case 0x79a854u: goto label_79a854;
        case 0x79a858u: goto label_79a858;
        case 0x79a85cu: goto label_79a85c;
        case 0x79a860u: goto label_79a860;
        case 0x79a864u: goto label_79a864;
        case 0x79a868u: goto label_79a868;
        case 0x79a86cu: goto label_79a86c;
        case 0x79a870u: goto label_79a870;
        case 0x79a874u: goto label_79a874;
        case 0x79a878u: goto label_79a878;
        case 0x79a87cu: goto label_79a87c;
        case 0x79a880u: goto label_79a880;
        case 0x79a884u: goto label_79a884;
        case 0x79a888u: goto label_79a888;
        case 0x79a88cu: goto label_79a88c;
        case 0x79a890u: goto label_79a890;
        case 0x79a894u: goto label_79a894;
        case 0x79a898u: goto label_79a898;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8b4u: goto label_79a8b4;
        default: break;
    }

    ctx->pc = 0x79a4d8u;

label_79a4d8:
    // 0x79a4d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_79a4dc:
    // 0x79a4dc: 0x24041be0  addiu       $a0, $zero, 0x1BE0
    ctx->pc = 0x79a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
label_79a4e0:
    // 0x79a4e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_79a4e4:
    // 0x79a4e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_79a4e8:
    // 0x79a4e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_79a4ec:
    // 0x79a4ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_79a4f0:
    // 0x79a4f0: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_79a4f4:
    // 0x79a4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a4f8:
    // 0x79a4f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x79a4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a4fc:
    // 0x79a4fc: 0xc1e6460  jal         func_799180
label_79a500:
    if (ctx->pc == 0x79A500u) {
        ctx->pc = 0x79A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4FCu;
        // 0x79a500: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A504u;
        goto label_79a504;
    }
    ctx->pc = 0x79A4FCu;
    SET_GPR_U32(ctx, 31, 0x79A504u);
    ctx->pc = 0x79A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4FCu;
    // 0x79a500: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79A4FCu, 0x79A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A504u;
label_79a504:
    // 0x79a504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a508:
    // 0x79a508: 0xc1e6488  jal         func_799220
label_79a50c:
    if (ctx->pc == 0x79A50Cu) {
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A510u;
        goto label_79a510;
    }
    ctx->pc = 0x79A508u;
    SET_GPR_U32(ctx, 31, 0x79A510u);
    ctx->pc = 0x79A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A508u;
    // 0x79a50c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799220u, 0x79A508u, 0x79A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0xc07ba72  jal         func_1EE9C8
label_79a514:
    if (ctx->pc == 0x79A514u) {
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x26040f00  addiu       $a0, $s0, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A518u;
        goto label_79a518;
    }
    ctx->pc = 0x79A510u;
    SET_GPR_U32(ctx, 31, 0x79A518u);
    ctx->pc = 0x79A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A510u;
    // 0x79a514: 0x26040f00  addiu       $a0, $s0, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE9C8u, 0x79A510u, 0x79A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_79a51c:
    // 0x79a51c: 0xae50c800  sw          $s0, -0x3800($s2)
    ctx->pc = 0x79a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952960), GPR_U32(ctx, 16));
label_79a520:
    // 0x79a520: 0x8c649b70  lw          $a0, -0x6490($v1)
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941552)));
label_79a524:
    // 0x79a524: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_79a528:
    // 0x79a528: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_79a52c:
    // 0x79a52c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_79a530:
    // 0x79a530: 0x544000c4  bnel        $v0, $zero, . + 4 + (0xC4 << 2)
label_79a534:
    if (ctx->pc == 0x79A534u) {
        ctx->pc = 0x79A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A530u;
        // 0x79a534: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A538u;
        goto label_79a538;
    }
    ctx->pc = 0x79A530u;
    {
        const bool branch_taken_0x79a530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a530) {
            ctx->pc = 0x79A534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A530u;
            // 0x79a534: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A844u;
            goto label_79a844;
        }
    }
    ctx->pc = 0x79A538u;
label_79a538:
    // 0x79a538: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79a538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_79a53c:
    // 0x79a53c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a540:
    // 0x79a540: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79a540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a544:
    // 0x79a544: 0x8c43c804  lw          $v1, -0x37FC($v0)
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
label_79a548:
    // 0x79a548: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x79a548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_79a54c:
    // 0x79a54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a550:
    // 0x79a550: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x79a550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_79a554:
    // 0x79a554: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x79a554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
label_79a558:
    // 0x79a558: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x79a558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
label_79a55c:
    // 0x79a55c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_79a560:
    if (ctx->pc == 0x79A560u) {
        ctx->pc = 0x79A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A55Cu;
        // 0x79a560: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A564u;
        goto label_79a564;
    }
    ctx->pc = 0x79A55Cu;
    {
        const bool branch_taken_0x79a55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A55Cu;
        // 0x79a560: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a55c) {
            ctx->pc = 0x79A578u;
            goto label_79a578;
        }
    }
    ctx->pc = 0x79A564u;
label_79a564:
    // 0x79a564: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a568:
    // 0x79a568: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_79a56c:
    if (ctx->pc == 0x79A56Cu) {
        ctx->pc = 0x79A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A568u;
        // 0x79a56c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A570u;
        goto label_79a570;
    }
    ctx->pc = 0x79A568u;
    {
        const bool branch_taken_0x79a568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A568u;
        // 0x79a56c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a568) {
            ctx->pc = 0x79A578u;
            goto label_79a578;
        }
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_79a574:
    if (ctx->pc == 0x79A574u) {
        ctx->pc = 0x79A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A570u;
        // 0x79a574: 0x8e63c804  lw          $v1, -0x37FC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A578u;
        goto label_79a578;
    }
    ctx->pc = 0x79A570u;
    {
        const bool branch_taken_0x79a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A570u;
        // 0x79a574: 0x8e63c804  lw          $v1, -0x37FC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a570) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A578u;
label_79a578:
    // 0x79a578: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79a57c:
    // 0x79a57c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_79a580:
    // 0x79a580: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_79a584:
    // 0x79a584: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_79a588:
    // 0x79a588: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_79a58c:
    // 0x79a58c: 0xc07fa28  jal         func_1FE8A0
label_79a590:
    if (ctx->pc == 0x79A590u) {
        ctx->pc = 0x79A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A58Cu;
        // 0x79a590: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A594u;
        goto label_79a594;
    }
    ctx->pc = 0x79A58Cu;
    SET_GPR_U32(ctx, 31, 0x79A594u);
    ctx->pc = 0x79A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A58Cu;
    // 0x79a590: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79A58Cu, 0x79A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A594u;
label_79a594:
    // 0x79a594: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79a594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_79a598:
    // 0x79a598: 0xc0c3ea6  jal         func_30FA98
label_79a59c:
    if (ctx->pc == 0x79A59Cu) {
        ctx->pc = 0x79A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A598u;
        // 0x79a59c: 0x24040440  addiu       $a0, $zero, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5A0u;
        goto label_79a5a0;
    }
    ctx->pc = 0x79A598u;
    SET_GPR_U32(ctx, 31, 0x79A5A0u);
    ctx->pc = 0x79A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A598u;
    // 0x79a59c: 0x24040440  addiu       $a0, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A598u, 0x79A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A0u;
label_79a5a0:
    // 0x79a5a0: 0x8e23c800  lw          $v1, -0x3800($s1)
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a5a4:
    // 0x79a5a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a5a8:
    // 0x79a5a8: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a5ac:
    // 0x79a5ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a5b0:
    // 0x79a5b0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_79a5b4:
    if (ctx->pc == 0x79A5B4u) {
        ctx->pc = 0x79A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B0u;
        // 0x79a5b4: 0x8e63c804  lw          $v1, -0x37FC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5B8u;
        goto label_79a5b8;
    }
    ctx->pc = 0x79A5B0u;
    {
        const bool branch_taken_0x79a5b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B0u;
        // 0x79a5b4: 0x8e63c804  lw          $v1, -0x37FC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5b0) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A5B8u;
label_79a5b8:
    // 0x79a5b8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79a5bc:
    // 0x79a5bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a5c0:
    // 0x79a5c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a5c4:
    // 0x79a5c4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a5c8:
    // 0x79a5c8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a5cc:
    // 0x79a5cc: 0x40f809  jalr        $v0
label_79a5d0:
    if (ctx->pc == 0x79A5D0u) {
        ctx->pc = 0x79A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5CCu;
        // 0x79a5d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5D4u;
        goto label_79a5d4;
    }
    ctx->pc = 0x79A5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A5D4u);
        ctx->pc = 0x79A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5CCu;
        // 0x79a5d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5CCu, 0x79A5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A5D4u;
label_79a5d4:
    // 0x79a5d4: 0x8e23c800  lw          $v1, -0x3800($s1)
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a5d8:
    // 0x79a5d8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_79a5dc:
    // 0x79a5dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a5dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79a5e0:
    // 0x79a5e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a5e4:
    // 0x79a5e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a5e8:
    // 0x79a5e8: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a5ec:
    // 0x79a5ec: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_79a5f0:
    // 0x79a5f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79a5f4:
    // 0x79a5f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79a5f8:
    // 0x79a5f8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a5fc:
    // 0x79a5fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79a600:
    // 0x79a600: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79a600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79a604:
    // 0x79a604: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_79a608:
    // 0x79a608: 0x40f809  jalr        $v0
label_79a60c:
    if (ctx->pc == 0x79A60Cu) {
        ctx->pc = 0x79A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A608u;
        // 0x79a60c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A610u;
        goto label_79a610;
    }
    ctx->pc = 0x79A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A610u);
        ctx->pc = 0x79A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A608u;
        // 0x79a60c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A608u, 0x79A610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A610u;
label_79a610:
    // 0x79a610: 0x8e23c800  lw          $v1, -0x3800($s1)
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a614:
    // 0x79a614: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_79a618:
    // 0x79a618: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79a61c:
    // 0x79a61c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a620:
    // 0x79a620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a624:
    // 0x79a624: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a628:
    // 0x79a628: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_79a62c:
    // 0x79a62c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79a630:
    // 0x79a630: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79a630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79a634:
    // 0x79a634: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a638:
    // 0x79a638: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79a638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79a63c:
    // 0x79a63c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79a640:
    // 0x79a640: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x79a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79a644:
    // 0x79a644: 0x40f809  jalr        $v0
label_79a648:
    if (ctx->pc == 0x79A648u) {
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A64Cu;
        goto label_79a64c;
    }
    ctx->pc = 0x79A644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A64Cu);
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A644u, 0x79A64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A64Cu;
label_79a64c:
    // 0x79a64c: 0x8e63c804  lw          $v1, -0x37FC($s3)
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952964)));
label_79a650:
    // 0x79a650: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a654:
    // 0x79a654: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_79a658:
    if (ctx->pc == 0x79A658u) {
        ctx->pc = 0x79A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A654u;
        // 0x79a658: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A65Cu;
        goto label_79a65c;
    }
    ctx->pc = 0x79A654u;
    {
        const bool branch_taken_0x79a654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A654u;
        // 0x79a658: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a654) {
            ctx->pc = 0x79A6A8u;
            goto label_79a6a8;
        }
    }
    ctx->pc = 0x79A65Cu;
label_79a65c:
    // 0x79a65c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_79a660:
    if (ctx->pc == 0x79A660u) {
        ctx->pc = 0x79A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A65Cu;
        // 0x79a660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A664u;
        goto label_79a664;
    }
    ctx->pc = 0x79A65Cu;
    {
        const bool branch_taken_0x79a65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A65Cu;
        // 0x79a660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a65c) {
            ctx->pc = 0x79A674u;
            goto label_79a674;
        }
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_79a668:
    if (ctx->pc == 0x79A668u) {
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A66Cu;
        goto label_79a66c;
    }
    ctx->pc = 0x79A664u;
    {
        const bool branch_taken_0x79a664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a664) {
            ctx->pc = 0x79A688u;
            goto label_79a688;
        }
    }
    ctx->pc = 0x79A66Cu;
label_79a66c:
    // 0x79a66c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_79a670:
    if (ctx->pc == 0x79A670u) {
        ctx->pc = 0x79A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A66Cu;
        // 0x79a670: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A674u;
        goto label_79a674;
    }
    ctx->pc = 0x79A66Cu;
    {
        const bool branch_taken_0x79a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A66Cu;
        // 0x79a670: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a66c) {
            ctx->pc = 0x79A6E8u;
            goto label_79a6e8;
        }
    }
    ctx->pc = 0x79A674u;
label_79a674:
    // 0x79a674: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79a678:
    // 0x79a678: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_79a67c:
    if (ctx->pc == 0x79A67Cu) {
        ctx->pc = 0x79A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A678u;
        // 0x79a67c: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A680u;
        goto label_79a680;
    }
    ctx->pc = 0x79A678u;
    {
        const bool branch_taken_0x79a678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A678u;
        // 0x79a67c: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a678) {
            ctx->pc = 0x79A6C8u;
            goto label_79a6c8;
        }
    }
    ctx->pc = 0x79A680u;
label_79a680:
    // 0x79a680: 0x10000019  b           . + 4 + (0x19 << 2)
label_79a684:
    if (ctx->pc == 0x79A684u) {
        ctx->pc = 0x79A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A680u;
        // 0x79a684: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A688u;
        goto label_79a688;
    }
    ctx->pc = 0x79A680u;
    {
        const bool branch_taken_0x79a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A680u;
        // 0x79a684: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a680) {
            ctx->pc = 0x79A6E8u;
            goto label_79a6e8;
        }
    }
    ctx->pc = 0x79A688u;
label_79a688:
    // 0x79a688: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a68c:
    // 0x79a68c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a690:
    // 0x79a690: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_79a694:
    if (ctx->pc == 0x79A694u) {
        ctx->pc = 0x79A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A690u;
        // 0x79a694: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A698u;
        goto label_79a698;
    }
    ctx->pc = 0x79A690u;
    {
        const bool branch_taken_0x79a690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a690) {
            ctx->pc = 0x79A694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A690u;
            // 0x79a694: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A698u;
label_79a698:
    // 0x79a698: 0xc06199e  jal         func_186678
label_79a69c:
    if (ctx->pc == 0x79A69Cu) {
        ctx->pc = 0x79A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A698u;
        // 0x79a69c: 0x240500c3  addiu       $a1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6A0u;
        goto label_79a6a0;
    }
    ctx->pc = 0x79A698u;
    SET_GPR_U32(ctx, 31, 0x79A6A0u);
    ctx->pc = 0x79A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A698u;
    // 0x79a69c: 0x240500c3  addiu       $a1, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186678u, 0x79A698u, 0x79A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A0u;
label_79a6a0:
    // 0x79a6a0: 0x10000010  b           . + 4 + (0x10 << 2)
label_79a6a4:
    if (ctx->pc == 0x79A6A4u) {
        ctx->pc = 0x79A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A0u;
        // 0x79a6a4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6A8u;
        goto label_79a6a8;
    }
    ctx->pc = 0x79A6A0u;
    {
        const bool branch_taken_0x79a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A0u;
        // 0x79a6a4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a0) {
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6A8u;
label_79a6a8:
    // 0x79a6a8: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a6ac:
    // 0x79a6ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a6b0:
    // 0x79a6b0: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_79a6b4:
    if (ctx->pc == 0x79A6B4u) {
        ctx->pc = 0x79A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B0u;
        // 0x79a6b4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6B8u;
        goto label_79a6b8;
    }
    ctx->pc = 0x79A6B0u;
    {
        const bool branch_taken_0x79a6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6b0) {
            ctx->pc = 0x79A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6B0u;
            // 0x79a6b4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6B8u;
label_79a6b8:
    // 0x79a6b8: 0xc06199e  jal         func_186678
label_79a6bc:
    if (ctx->pc == 0x79A6BCu) {
        ctx->pc = 0x79A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B8u;
        // 0x79a6bc: 0x24050186  addiu       $a1, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6C0u;
        goto label_79a6c0;
    }
    ctx->pc = 0x79A6B8u;
    SET_GPR_U32(ctx, 31, 0x79A6C0u);
    ctx->pc = 0x79A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B8u;
    // 0x79a6bc: 0x24050186  addiu       $a1, $zero, 0x186 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186678u, 0x79A6B8u, 0x79A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_79a6c4:
    if (ctx->pc == 0x79A6C4u) {
        ctx->pc = 0x79A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C0u;
        // 0x79a6c4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6C8u;
        goto label_79a6c8;
    }
    ctx->pc = 0x79A6C0u;
    {
        const bool branch_taken_0x79a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C0u;
        // 0x79a6c4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c0) {
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6C8u;
label_79a6c8:
    // 0x79a6c8: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a6cc:
    // 0x79a6cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a6d0:
    // 0x79a6d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_79a6d4:
    if (ctx->pc == 0x79A6D4u) {
        ctx->pc = 0x79A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D0u;
        // 0x79a6d4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6D8u;
        goto label_79a6d8;
    }
    ctx->pc = 0x79A6D0u;
    {
        const bool branch_taken_0x79a6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6d0) {
            ctx->pc = 0x79A6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6D0u;
            // 0x79a6d4: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6D8u;
label_79a6d8:
    // 0x79a6d8: 0xc06199e  jal         func_186678
label_79a6dc:
    if (ctx->pc == 0x79A6DCu) {
        ctx->pc = 0x79A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D8u;
        // 0x79a6dc: 0x24050249  addiu       $a1, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6E0u;
        goto label_79a6e0;
    }
    ctx->pc = 0x79A6D8u;
    SET_GPR_U32(ctx, 31, 0x79A6E0u);
    ctx->pc = 0x79A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D8u;
    // 0x79a6dc: 0x24050249  addiu       $a1, $zero, 0x249 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186678u, 0x79A6D8u, 0x79A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E0u;
label_79a6e0:
    // 0x79a6e0: 0x8e24c800  lw          $a0, -0x3800($s1)
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a6e4:
    // 0x79a6e4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_79a6e8:
    // 0x79a6e8: 0xc1e64dc  jal         func_799370
label_79a6ec:
    if (ctx->pc == 0x79A6ECu) {
        ctx->pc = 0x79A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6E8u;
        // 0x79a6ec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6F0u;
        goto label_79a6f0;
    }
    ctx->pc = 0x79A6E8u;
    SET_GPR_U32(ctx, 31, 0x79A6F0u);
    ctx->pc = 0x79A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E8u;
    // 0x79a6ec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799370u, 0x79A6E8u, 0x79A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6F0u;
label_79a6f0:
    // 0x79a6f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_79a6f4:
    if (ctx->pc == 0x79A6F4u) {
        ctx->pc = 0x79A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F0u;
        // 0x79a6f4: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6F8u;
        goto label_79a6f8;
    }
    ctx->pc = 0x79A6F0u;
    {
        const bool branch_taken_0x79a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F0u;
        // 0x79a6f4: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6f0) {
            ctx->pc = 0x79A708u;
            goto label_79a708;
        }
    }
    ctx->pc = 0x79A6F8u;
label_79a6f8:
    // 0x79a6f8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a6fc:
    // 0x79a6fc: 0x24a5c030  addiu       $a1, $a1, -0x3FD0
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
label_79a700:
    // 0x79a700: 0xc0b0e24  jal         func_2C3890
label_79a704:
    if (ctx->pc == 0x79A704u) {
        ctx->pc = 0x79A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A700u;
        // 0x79a704: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A708u;
        goto label_79a708;
    }
    ctx->pc = 0x79A700u;
    SET_GPR_U32(ctx, 31, 0x79A708u);
    ctx->pc = 0x79A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A700u;
    // 0x79a704: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A700u, 0x79A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A708u;
label_79a708:
    // 0x79a708: 0x8e63c804  lw          $v1, -0x37FC($s3)
    ctx->pc = 0x79a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952964)));
label_79a70c:
    // 0x79a70c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x79a70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_79a710:
    // 0x79a710: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_79a714:
    if (ctx->pc == 0x79A714u) {
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A718u;
        goto label_79a718;
    }
    ctx->pc = 0x79A710u;
    {
        const bool branch_taken_0x79a710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a710) {
            ctx->pc = 0x79A7ECu;
            goto label_79a7ec;
        }
    }
    ctx->pc = 0x79A718u;
label_79a718:
    // 0x79a718: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a71c:
    // 0x79a71c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_79a720:
    // 0x79a720: 0x2442c4e0  addiu       $v0, $v0, -0x3B20
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952160));
label_79a724:
    // 0x79a724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a728:
    // 0x79a728: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a72c:
    // 0x79a72c: 0x800008  jr          $a0
label_79a730:
    if (ctx->pc == 0x79A730u) {
        ctx->pc = 0x79A734u;
        goto label_79a734;
    }
    ctx->pc = 0x79A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A734u: goto label_79a734;
            case 0x79A748u: goto label_79a748;
            case 0x79A75Cu: goto label_79a75c;
            case 0x79A770u: goto label_79a770;
            case 0x79A784u: goto label_79a784;
            case 0x79A798u: goto label_79a798;
            case 0x79A7A4u: goto label_79a7a4;
            case 0x79A7BCu: goto label_79a7bc;
            case 0x79A7D0u: goto label_79a7d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A72Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A734u;
label_79a734:
    // 0x79a734: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a738:
    // 0x79a738: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_79a73c:
    // 0x79a73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a740:
    // 0x79a740: 0x10000028  b           . + 4 + (0x28 << 2)
label_79a744:
    if (ctx->pc == 0x79A744u) {
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A748u;
        goto label_79a748;
    }
    ctx->pc = 0x79A740u;
    {
        const bool branch_taken_0x79a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a740) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A748u;
label_79a748:
    // 0x79a748: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a74c:
    // 0x79a74c: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
label_79a750:
    // 0x79a750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a754:
    // 0x79a754: 0x10000023  b           . + 4 + (0x23 << 2)
label_79a758:
    if (ctx->pc == 0x79A758u) {
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A75Cu;
        goto label_79a75c;
    }
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A75Cu;
label_79a75c:
    // 0x79a75c: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a760:
    // 0x79a760: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_79a764:
    // 0x79a764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a768:
    // 0x79a768: 0x1000001e  b           . + 4 + (0x1E << 2)
label_79a76c:
    if (ctx->pc == 0x79A76Cu) {
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A770u;
        goto label_79a770;
    }
    ctx->pc = 0x79A768u;
    {
        const bool branch_taken_0x79a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a768) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a774:
    // 0x79a774: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_79a778:
    // 0x79a778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a77c:
    // 0x79a77c: 0x10000019  b           . + 4 + (0x19 << 2)
label_79a780:
    if (ctx->pc == 0x79A780u) {
        ctx->pc = 0x79A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A77Cu;
        // 0x79a780: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A784u;
        goto label_79a784;
    }
    ctx->pc = 0x79A77Cu;
    {
        const bool branch_taken_0x79a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A77Cu;
        // 0x79a780: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a77c) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A784u;
label_79a784:
    // 0x79a784: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a788:
    // 0x79a788: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_79a78c:
    // 0x79a78c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a790:
    // 0x79a790: 0x10000014  b           . + 4 + (0x14 << 2)
label_79a794:
    if (ctx->pc == 0x79A794u) {
        ctx->pc = 0x79A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A790u;
        // 0x79a794: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A798u;
        goto label_79a798;
    }
    ctx->pc = 0x79A790u;
    {
        const bool branch_taken_0x79a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A790u;
        // 0x79a794: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a790) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A798u;
label_79a798:
    // 0x79a798: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a79c:
    // 0x79a79c: 0x1000000e  b           . + 4 + (0xE << 2)
label_79a7a0:
    if (ctx->pc == 0x79A7A0u) {
        ctx->pc = 0x79A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A79Cu;
        // 0x79a7a0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7A4u;
        goto label_79a7a4;
    }
    ctx->pc = 0x79A79Cu;
    {
        const bool branch_taken_0x79a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A79Cu;
        // 0x79a7a0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a79c) {
            ctx->pc = 0x79A7D8u;
            goto label_79a7d8;
        }
    }
    ctx->pc = 0x79A7A4u;
label_79a7a4:
    // 0x79a7a4: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a7a8:
    // 0x79a7a8: 0x3c01459a  lui         $at, 0x459A
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17818 << 16));
label_79a7ac:
    // 0x79a7ac: 0x3421b000  ori         $at, $at, 0xB000
    ctx->pc = 0x79a7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45056);
label_79a7b0:
    // 0x79a7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a7b4:
    // 0x79a7b4: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a7b8:
    if (ctx->pc == 0x79A7B8u) {
        ctx->pc = 0x79A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B4u;
        // 0x79a7b8: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7BCu;
        goto label_79a7bc;
    }
    ctx->pc = 0x79A7B4u;
    {
        const bool branch_taken_0x79a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B4u;
        // 0x79a7b8: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b4) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A7BCu;
label_79a7bc:
    // 0x79a7bc: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a7c0:
    // 0x79a7c0: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_79a7c4:
    // 0x79a7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a7c8:
    // 0x79a7c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_79a7cc:
    if (ctx->pc == 0x79A7CCu) {
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7D0u;
        goto label_79a7d0;
    }
    ctx->pc = 0x79A7C8u;
    {
        const bool branch_taken_0x79a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c8) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A7D0u;
label_79a7d0:
    // 0x79a7d0: 0x8e22c800  lw          $v0, -0x3800($s1)
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a7d4:
    // 0x79a7d4: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_79a7d8:
    // 0x79a7d8: 0x3c01458c  lui         $at, 0x458C
    ctx->pc = 0x79a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17804 << 16));
label_79a7dc:
    // 0x79a7dc: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x79a7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
label_79a7e0:
    // 0x79a7e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a7e4:
    // 0x79a7e4: 0x0  nop
    ctx->pc = 0x79a7e4u;
    // NOP
label_79a7e8:
    // 0x79a7e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79a7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79a7ec:
    // 0x79a7ec: 0x8e24c800  lw          $a0, -0x3800($s1)
    ctx->pc = 0x79a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a7f0:
    // 0x79a7f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a7f4:
    // 0x79a7f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a7f8:
    // 0x79a7f8: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x79a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79a7fc:
    // 0x79a7fc: 0xc1e663a  jal         func_7998E8
label_79a800:
    if (ctx->pc == 0x79A800u) {
        ctx->pc = 0x79A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7FCu;
        // 0x79a800: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A804u;
        goto label_79a804;
    }
    ctx->pc = 0x79A7FCu;
    SET_GPR_U32(ctx, 31, 0x79A804u);
    ctx->pc = 0x79A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7FCu;
    // 0x79a800: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7998E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7998E8u, 0x79A7FCu, 0x79A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A804u;
label_79a804:
    // 0x79a804: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a808:
    // 0x79a808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a80c:
    // 0x79a80c: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x79a80cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
label_79a810:
    // 0x79a810: 0xc0b42b0  jal         func_2D0AC0
label_79a814:
    if (ctx->pc == 0x79A814u) {
        ctx->pc = 0x79A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A810u;
        // 0x79a814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A818u;
        goto label_79a818;
    }
    ctx->pc = 0x79A810u;
    SET_GPR_U32(ctx, 31, 0x79A818u);
    ctx->pc = 0x79A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A810u;
    // 0x79a814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AC0u, 0x79A810u, 0x79A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A818u;
label_79a818:
    // 0x79a818: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a81c:
    // 0x79a81c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a820:
    // 0x79a820: 0x24a5a8c0  addiu       $a1, $a1, -0x5740
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944960));
label_79a824:
    // 0x79a824: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a828:
    // 0x79a828: 0xa040001a  sb          $zero, 0x1A($v0)
    ctx->pc = 0x79a828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 0));
label_79a82c:
    // 0x79a82c: 0xc0b0e24  jal         func_2C3890
label_79a830:
    if (ctx->pc == 0x79A830u) {
        ctx->pc = 0x79A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A82Cu;
        // 0x79a830: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A834u;
        goto label_79a834;
    }
    ctx->pc = 0x79A82Cu;
    SET_GPR_U32(ctx, 31, 0x79A834u);
    ctx->pc = 0x79A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A82Cu;
    // 0x79a830: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A82Cu, 0x79A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0xc0c6be8  jal         func_31AFA0
label_79a838:
    if (ctx->pc == 0x79A838u) {
        ctx->pc = 0x79A83Cu;
        goto label_79a83c;
    }
    ctx->pc = 0x79A834u;
    SET_GPR_U32(ctx, 31, 0x79A83Cu);
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x79A834u, 0x79A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A83Cu;
label_79a83c:
    // 0x79a83c: 0x10000017  b           . + 4 + (0x17 << 2)
label_79a840:
    if (ctx->pc == 0x79A840u) {
        ctx->pc = 0x79A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A83Cu;
        // 0x79a840: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A844u;
        goto label_79a844;
    }
    ctx->pc = 0x79A83Cu;
    {
        const bool branch_taken_0x79a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A83Cu;
        // 0x79a840: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a83c) {
            ctx->pc = 0x79A89Cu;
            goto label_79a89c;
        }
    }
    ctx->pc = 0x79A844u;
label_79a844:
    // 0x79a844: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a848:
    // 0x79a848: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
label_79a84c:
    // 0x79a84c: 0xc04fccc  jal         func_13F330
label_79a850:
    if (ctx->pc == 0x79A850u) {
        ctx->pc = 0x79A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A84Cu;
        // 0x79a850: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A854u;
        goto label_79a854;
    }
    ctx->pc = 0x79A84Cu;
    SET_GPR_U32(ctx, 31, 0x79A854u);
    ctx->pc = 0x79A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A84Cu;
    // 0x79a850: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x79A84Cu, 0x79A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A854u;
label_79a854:
    // 0x79a854: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x79a854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
label_79a858:
    // 0x79a858: 0xc04f206  jal         func_13C818
label_79a85c:
    if (ctx->pc == 0x79A85Cu) {
        ctx->pc = 0x79A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A858u;
        // 0x79a85c: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A860u;
        goto label_79a860;
    }
    ctx->pc = 0x79A858u;
    SET_GPR_U32(ctx, 31, 0x79A860u);
    ctx->pc = 0x79A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A858u;
    // 0x79a85c: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x79A858u, 0x79A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A860u;
label_79a860:
    // 0x79a860: 0x8e44c800  lw          $a0, -0x3800($s2)
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952960)));
label_79a864:
    // 0x79a864: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_79a868:
    // 0x79a868: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x79a868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
label_79a86c:
    // 0x79a86c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a870:
    // 0x79a870: 0x24840f00  addiu       $a0, $a0, 0xF00
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3840));
label_79a874:
    // 0x79a874: 0xc07bf9c  jal         func_1EFE70
label_79a878:
    if (ctx->pc == 0x79A878u) {
        ctx->pc = 0x79A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A874u;
        // 0x79a878: 0xa21105b5  sb          $s1, 0x5B5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1461), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A87Cu;
        goto label_79a87c;
    }
    ctx->pc = 0x79A874u;
    SET_GPR_U32(ctx, 31, 0x79A87Cu);
    ctx->pc = 0x79A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A874u;
    // 0x79a878: 0xa21105b5  sb          $s1, 0x5B5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1461), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x79A874u, 0x79A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A87Cu;
label_79a87c:
    // 0x79a87c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a880:
    // 0x79a880: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a884:
    // 0x79a884: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a888:
    // 0x79a888: 0x24a5c200  addiu       $a1, $a1, -0x3E00
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
label_79a88c:
    // 0x79a88c: 0xa21105b5  sb          $s1, 0x5B5($s0)
    ctx->pc = 0x79a88cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1461), (uint8_t)GPR_U32(ctx, 17));
label_79a890:
    // 0x79a890: 0xc0b0e24  jal         func_2C3890
label_79a894:
    if (ctx->pc == 0x79A894u) {
        ctx->pc = 0x79A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A890u;
        // 0x79a894: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A898u;
        goto label_79a898;
    }
    ctx->pc = 0x79A890u;
    SET_GPR_U32(ctx, 31, 0x79A898u);
    ctx->pc = 0x79A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A890u;
    // 0x79a894: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A890u, 0x79A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A898u;
label_79a898:
    // 0x79a898: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a89c:
    // 0x79a89c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a8a0:
    // 0x79a8a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a8a4:
    // 0x79a8a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a8a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a8a8:
    // 0x79a8a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a8ac:
    // 0x79a8ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x79a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a8b0:
    // 0x79a8b0: 0x3e00008  jr          $ra
label_79a8b4:
    if (ctx->pc == 0x79A8B4u) {
        ctx->pc = 0x79A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B0u;
        // 0x79a8b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8B8u;
        goto label_fallthrough_0x79a8b0;
    }
    ctx->pc = 0x79A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B0u;
        // 0x79a8b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a8b0:
    ctx->pc = 0x79A8B8u;
}
} // namespace gh_r040
