#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079A800
// Address: 0x79a800 - 0x79ac50
void func_0079A800_0x79a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A800_0x79a800");
#endif

    switch (ctx->pc) {
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
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8bcu: goto label_79a8bc;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        case 0x79a920u: goto label_79a920;
        case 0x79a924u: goto label_79a924;
        case 0x79a928u: goto label_79a928;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a930u: goto label_79a930;
        case 0x79a934u: goto label_79a934;
        case 0x79a938u: goto label_79a938;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a940u: goto label_79a940;
        case 0x79a944u: goto label_79a944;
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa6cu: goto label_79aa6c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa74u: goto label_79aa74;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa84u: goto label_79aa84;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa94u: goto label_79aa94;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aaa4u: goto label_79aaa4;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aaacu: goto label_79aaac;
        case 0x79aab0u: goto label_79aab0;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaecu: goto label_79aaec;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79aafcu: goto label_79aafc;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab04u: goto label_79ab04;
        case 0x79ab08u: goto label_79ab08;
        case 0x79ab0cu: goto label_79ab0c;
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab14u: goto label_79ab14;
        case 0x79ab18u: goto label_79ab18;
        case 0x79ab1cu: goto label_79ab1c;
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab24u: goto label_79ab24;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab38u: goto label_79ab38;
        case 0x79ab3cu: goto label_79ab3c;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abc8u: goto label_79abc8;
        case 0x79abccu: goto label_79abcc;
        case 0x79abd0u: goto label_79abd0;
        case 0x79abd4u: goto label_79abd4;
        case 0x79abd8u: goto label_79abd8;
        case 0x79abdcu: goto label_79abdc;
        case 0x79abe0u: goto label_79abe0;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abe8u: goto label_79abe8;
        case 0x79abecu: goto label_79abec;
        case 0x79abf0u: goto label_79abf0;
        case 0x79abf4u: goto label_79abf4;
        case 0x79abf8u: goto label_79abf8;
        case 0x79abfcu: goto label_79abfc;
        case 0x79ac00u: goto label_79ac00;
        case 0x79ac04u: goto label_79ac04;
        case 0x79ac08u: goto label_79ac08;
        case 0x79ac0cu: goto label_79ac0c;
        case 0x79ac10u: goto label_79ac10;
        case 0x79ac14u: goto label_79ac14;
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac24u: goto label_79ac24;
        case 0x79ac28u: goto label_79ac28;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac30u: goto label_79ac30;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac38u: goto label_79ac38;
        case 0x79ac3cu: goto label_79ac3c;
        case 0x79ac40u: goto label_79ac40;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac48u: goto label_79ac48;
        case 0x79ac4cu: goto label_79ac4c;
        default: break;
    }

    ctx->pc = 0x79a800u;

label_79a800:
    // 0x79a800: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_79a804:
    // 0x79a804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a808:
    // 0x79a808: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_79a80c:
    // 0x79a80c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_79a810:
    // 0x79a810: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x79a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_79a814:
    // 0x79a814: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x79a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_79a818:
    // 0x79a818: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x79a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_79a81c:
    // 0x79a81c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79a81cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a820:
    // 0x79a820: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x79a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_79a824:
    // 0x79a824: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x79a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_79a828:
    // 0x79a828: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x79a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_79a82c:
    // 0x79a82c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x79a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_79a830:
    // 0x79a830: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x79a830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_79a834:
    // 0x79a834: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x79a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_79a838:
    // 0x79a838: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x79a838u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_79a83c:
    // 0x79a83c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x79a83cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_79a840:
    // 0x79a840: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x79a840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_79a844:
    // 0x79a844: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79a848:
    // 0x79a848: 0xc0b56a8  jal         func_2D5AA0
label_79a84c:
    if (ctx->pc == 0x79A84Cu) {
        ctx->pc = 0x79A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A848u;
        // 0x79a84c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A850u;
        goto label_79a850;
    }
    ctx->pc = 0x79A848u;
    SET_GPR_U32(ctx, 31, 0x79A850u);
    ctx->pc = 0x79A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A848u;
    // 0x79a84c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A848u, 0x79A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A850u;
label_79a850:
    // 0x79a850: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x79a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_79a854:
    // 0x79a854: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_79a858:
    // 0x79a858: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a85c:
    // 0x79a85c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x79a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79a860:
    // 0x79a860: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_79a864:
    // 0x79a864: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x79a864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_79a868:
    // 0x79a868: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a86c:
    // 0x79a86c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a870:
    // 0x79a870: 0x3c01c260  lui         $at, 0xC260
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49760 << 16));
label_79a874:
    // 0x79a874: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x79a874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_79a878:
    // 0x79a878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a87c:
    // 0x79a87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a880:
    // 0x79a880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a884:
    // 0x79a884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a888:
    // 0x79a888: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79a888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a88c:
    // 0x79a88c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a88cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a890:
    // 0x79a890: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79a890u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79a894:
    // 0x79a894: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79a894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79a898:
    // 0x79a898: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79a898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79a89c:
    // 0x79a89c: 0xc0a5874  jal         func_2961D0
label_79a8a0:
    if (ctx->pc == 0x79A8A0u) {
        ctx->pc = 0x79A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A89Cu;
        // 0x79a8a0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8A4u;
        goto label_79a8a4;
    }
    ctx->pc = 0x79A89Cu;
    SET_GPR_U32(ctx, 31, 0x79A8A4u);
    ctx->pc = 0x79A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A89Cu;
    // 0x79a8a0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x79A89Cu, 0x79A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A4u;
label_79a8a4:
    // 0x79a8a4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79a8a8:
    // 0x79a8a8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79a8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_79a8ac:
    // 0x79a8ac: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x79a8acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79a8b0:
    // 0x79a8b0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79a8b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a8b4:
    // 0x79a8b4: 0x3c1e005f  lui         $fp, 0x5F
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)95 << 16));
label_79a8b8:
    // 0x79a8b8: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79a8bc:
    // 0x79a8bc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x79a8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79a8c0:
    // 0x79a8c0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a8c4:
    // 0x79a8c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_79a8c8:
    if (ctx->pc == 0x79A8C8u) {
        ctx->pc = 0x79A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C4u;
        // 0x79a8c8: 0x27b70050  addiu       $s7, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8CCu;
        goto label_79a8cc;
    }
    ctx->pc = 0x79A8C4u;
    {
        const bool branch_taken_0x79a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C4u;
        // 0x79a8c8: 0x27b70050  addiu       $s7, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c4) {
            ctx->pc = 0x79A8F0u;
            goto label_79a8f0;
        }
    }
    ctx->pc = 0x79A8CCu;
label_79a8cc:
    // 0x79a8cc: 0x0  nop
    ctx->pc = 0x79a8ccu;
    // NOP
label_79a8d0:
    // 0x79a8d0: 0xc0a57ca  jal         func_295F28
label_79a8d4:
    if (ctx->pc == 0x79A8D4u) {
        ctx->pc = 0x79A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D0u;
        // 0x79a8d4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8D8u;
        goto label_79a8d8;
    }
    ctx->pc = 0x79A8D0u;
    SET_GPR_U32(ctx, 31, 0x79A8D8u);
    ctx->pc = 0x79A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D0u;
    // 0x79a8d4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79A8D0u, 0x79A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D8u;
label_79a8d8:
    // 0x79a8d8: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a8dc:
    // 0x79a8dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_79a8e0:
    // 0x79a8e0: 0x202a00a  movz        $s4, $s0, $v0
    ctx->pc = 0x79a8e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
label_79a8e4:
    // 0x79a8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a8e8:
    // 0x79a8e8: 0xc0b56a8  jal         func_2D5AA0
label_79a8ec:
    if (ctx->pc == 0x79A8ECu) {
        ctx->pc = 0x79A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E8u;
        // 0x79a8ec: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8F0u;
        goto label_79a8f0;
    }
    ctx->pc = 0x79A8E8u;
    SET_GPR_U32(ctx, 31, 0x79A8F0u);
    ctx->pc = 0x79A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8E8u;
    // 0x79a8ec: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A8E8u, 0x79A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F0u;
label_79a8f0:
    // 0x79a8f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a8f4:
    // 0x79a8f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79a8f8:
    // 0x79a8f8: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79a8fc:
    // 0x79a8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a900:
    // 0x79a900: 0xc0b0aa6  jal         func_2C2A98
label_79a904:
    if (ctx->pc == 0x79A904u) {
        ctx->pc = 0x79A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A900u;
        // 0x79a904: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A908u;
        goto label_79a908;
    }
    ctx->pc = 0x79A900u;
    SET_GPR_U32(ctx, 31, 0x79A908u);
    ctx->pc = 0x79A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A900u;
    // 0x79a904: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A900u, 0x79A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A908u;
label_79a908:
    // 0x79a908: 0x1450fff1  bne         $v0, $s0, . + 4 + (-0xF << 2)
label_79a90c:
    if (ctx->pc == 0x79A90Cu) {
        ctx->pc = 0x79A910u;
        goto label_79a910;
    }
    ctx->pc = 0x79A908u;
    {
        const bool branch_taken_0x79a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x79a908) {
            ctx->pc = 0x79A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8d0;
        }
    }
    ctx->pc = 0x79A910u;
label_79a910:
    // 0x79a910: 0xc0b0fa2  jal         func_2C3E88
label_79a914:
    if (ctx->pc == 0x79A914u) {
        ctx->pc = 0x79A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A910u;
        // 0x79a914: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A918u;
        goto label_79a918;
    }
    ctx->pc = 0x79A910u;
    SET_GPR_U32(ctx, 31, 0x79A918u);
    ctx->pc = 0x79A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A910u;
    // 0x79a914: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A910u, 0x79A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A918u;
label_79a918:
    // 0x79a918: 0x8fc48658  lw          $a0, -0x79A8($fp)
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
label_79a91c:
    // 0x79a91c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_79a920:
    // 0x79a920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a924:
    // 0x79a924: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79a928:
    // 0x79a928: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a92c:
    // 0x79a92c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_79a930:
    // 0x79a930: 0xc0b0e6c  jal         func_2C39B0
label_79a934:
    if (ctx->pc == 0x79A934u) {
        ctx->pc = 0x79A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A930u;
        // 0x79a934: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A938u;
        goto label_79a938;
    }
    ctx->pc = 0x79A930u;
    SET_GPR_U32(ctx, 31, 0x79A938u);
    ctx->pc = 0x79A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A930u;
    // 0x79a934: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A930u, 0x79A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A938u;
label_79a938:
    // 0x79a938: 0x1680002a  bnez        $s4, . + 4 + (0x2A << 2)
label_79a93c:
    if (ctx->pc == 0x79A93Cu) {
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A940u;
        goto label_79a940;
    }
    ctx->pc = 0x79A938u;
    {
        const bool branch_taken_0x79a938 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a938) {
            ctx->pc = 0x79A9E4u;
            goto label_79a9e4;
        }
    }
    ctx->pc = 0x79A940u;
label_79a940:
    // 0x79a940: 0xc0a572a  jal         func_295CA8
label_79a944:
    if (ctx->pc == 0x79A944u) {
        ctx->pc = 0x79A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A940u;
        // 0x79a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A948u;
        goto label_79a948;
    }
    ctx->pc = 0x79A940u;
    SET_GPR_U32(ctx, 31, 0x79A948u);
    ctx->pc = 0x79A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A940u;
    // 0x79a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A940u, 0x79A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A948u;
label_79a948:
    // 0x79a948: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_79a94c:
    if (ctx->pc == 0x79A94Cu) {
        ctx->pc = 0x79A950u;
        goto label_79a950;
    }
    ctx->pc = 0x79A948u;
    {
        const bool branch_taken_0x79a948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a948) {
            ctx->pc = 0x79A9E4u;
            goto label_79a9e4;
        }
    }
    ctx->pc = 0x79A950u;
label_79a950:
    // 0x79a950: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a954:
    // 0x79a954: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a958:
    // 0x79a958: 0xc0b0fb6  jal         func_2C3ED8
label_79a95c:
    if (ctx->pc == 0x79A95Cu) {
        ctx->pc = 0x79A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A958u;
        // 0x79a95c: 0x24a5c420  addiu       $a1, $a1, -0x3BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A960u;
        goto label_79a960;
    }
    ctx->pc = 0x79A958u;
    SET_GPR_U32(ctx, 31, 0x79A960u);
    ctx->pc = 0x79A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A958u;
    // 0x79a95c: 0x24a5c420  addiu       $a1, $a1, -0x3BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A958u, 0x79A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A960u;
label_79a960:
    // 0x79a960: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a964:
    // 0x79a964: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_79a968:
    // 0x79a968: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a96c:
    // 0x79a96c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a970:
    // 0x79a970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a974:
    // 0x79a974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a978:
    // 0x79a978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a97c:
    // 0x79a97c: 0xc0b2e28  jal         func_2CB8A0
label_79a980:
    if (ctx->pc == 0x79A980u) {
        ctx->pc = 0x79A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A97Cu;
        // 0x79a980: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A984u;
        goto label_79a984;
    }
    ctx->pc = 0x79A97Cu;
    SET_GPR_U32(ctx, 31, 0x79A984u);
    ctx->pc = 0x79A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A97Cu;
    // 0x79a980: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A97Cu, 0x79A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A984u;
label_79a984:
    // 0x79a984: 0xc0a573a  jal         func_295CE8
label_79a988:
    if (ctx->pc == 0x79A988u) {
        ctx->pc = 0x79A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A984u;
        // 0x79a988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A98Cu;
        goto label_79a98c;
    }
    ctx->pc = 0x79A984u;
    SET_GPR_U32(ctx, 31, 0x79A98Cu);
    ctx->pc = 0x79A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A984u;
    // 0x79a988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A984u, 0x79A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A98Cu;
label_79a98c:
    // 0x79a98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a990:
    // 0x79a990: 0xc0a56f0  jal         func_295BC0
label_79a994:
    if (ctx->pc == 0x79A994u) {
        ctx->pc = 0x79A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A990u;
        // 0x79a994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A998u;
        goto label_79a998;
    }
    ctx->pc = 0x79A990u;
    SET_GPR_U32(ctx, 31, 0x79A998u);
    ctx->pc = 0x79A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A990u;
    // 0x79a994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A990u, 0x79A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A998u;
label_79a998:
    // 0x79a998: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a99c:
    // 0x79a99c: 0xc0a56f0  jal         func_295BC0
label_79a9a0:
    if (ctx->pc == 0x79A9A0u) {
        ctx->pc = 0x79A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A99Cu;
        // 0x79a9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9A4u;
        goto label_79a9a4;
    }
    ctx->pc = 0x79A99Cu;
    SET_GPR_U32(ctx, 31, 0x79A9A4u);
    ctx->pc = 0x79A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A99Cu;
    // 0x79a9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A99Cu, 0x79A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A4u;
label_79a9a4:
    // 0x79a9a4: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a9a8:
    // 0x79a9a8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79a9ac:
    // 0x79a9ac: 0xc0b56a8  jal         func_2D5AA0
label_79a9b0:
    if (ctx->pc == 0x79A9B0u) {
        ctx->pc = 0x79A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9ACu;
        // 0x79a9b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9B4u;
        goto label_79a9b4;
    }
    ctx->pc = 0x79A9ACu;
    SET_GPR_U32(ctx, 31, 0x79A9B4u);
    ctx->pc = 0x79A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9ACu;
    // 0x79a9b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9ACu, 0x79A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B4u;
label_79a9b4:
    // 0x79a9b4: 0xc0a5860  jal         func_296180
label_79a9b8:
    if (ctx->pc == 0x79A9B8u) {
        ctx->pc = 0x79A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B4u;
        // 0x79a9b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9BCu;
        goto label_79a9bc;
    }
    ctx->pc = 0x79A9B4u;
    SET_GPR_U32(ctx, 31, 0x79A9BCu);
    ctx->pc = 0x79A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9B4u;
    // 0x79a9b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x79A9B4u, 0x79A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9BCu;
label_79a9bc:
    // 0x79a9bc: 0xc0b101e  jal         func_2C4078
label_79a9c0:
    if (ctx->pc == 0x79A9C0u) {
        ctx->pc = 0x79A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9BCu;
        // 0x79a9c0: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9C4u;
        goto label_79a9c4;
    }
    ctx->pc = 0x79A9BCu;
    SET_GPR_U32(ctx, 31, 0x79A9C4u);
    ctx->pc = 0x79A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9BCu;
    // 0x79a9c0: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A9BCu, 0x79A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C4u;
label_79a9c4:
    // 0x79a9c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a9c8:
    // 0x79a9c8: 0xc0a56f0  jal         func_295BC0
label_79a9cc:
    if (ctx->pc == 0x79A9CCu) {
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9D0u;
        goto label_79a9d0;
    }
    ctx->pc = 0x79A9C8u;
    SET_GPR_U32(ctx, 31, 0x79A9D0u);
    ctx->pc = 0x79A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C8u;
    // 0x79a9cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A9C8u, 0x79A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a9d4:
    // 0x79a9d4: 0xc0a56f0  jal         func_295BC0
label_79a9d8:
    if (ctx->pc == 0x79A9D8u) {
        ctx->pc = 0x79A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D4u;
        // 0x79a9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9DCu;
        goto label_79a9dc;
    }
    ctx->pc = 0x79A9D4u;
    SET_GPR_U32(ctx, 31, 0x79A9DCu);
    ctx->pc = 0x79A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D4u;
    // 0x79a9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A9D4u, 0x79A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9DCu;
label_79a9dc:
    // 0x79a9dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a9e0:
    if (ctx->pc == 0x79A9E0u) {
        ctx->pc = 0x79A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9DCu;
        // 0x79a9e0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9E4u;
        goto label_79a9e4;
    }
    ctx->pc = 0x79A9DCu;
    {
        const bool branch_taken_0x79a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9DCu;
        // 0x79a9e0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9dc) {
            ctx->pc = 0x79A9F0u;
            goto label_79a9f0;
        }
    }
    ctx->pc = 0x79A9E4u;
label_79a9e4:
    // 0x79a9e4: 0xc0a5860  jal         func_296180
label_79a9e8:
    if (ctx->pc == 0x79A9E8u) {
        ctx->pc = 0x79A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E4u;
        // 0x79a9e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ECu;
        goto label_79a9ec;
    }
    ctx->pc = 0x79A9E4u;
    SET_GPR_U32(ctx, 31, 0x79A9ECu);
    ctx->pc = 0x79A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E4u;
    // 0x79a9e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x79A9E4u, 0x79A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9ECu;
label_79a9ec:
    // 0x79a9ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a9f0:
    // 0x79a9f0: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a9f4:
    // 0x79a9f4: 0x2445c428  addiu       $a1, $v0, -0x3BD8
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951976));
label_79a9f8:
    // 0x79a9f8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a9fc:
    // 0x79a9fc: 0xc0b0fb6  jal         func_2C3ED8
label_79aa00:
    if (ctx->pc == 0x79AA00u) {
        ctx->pc = 0x79AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9FCu;
        // 0x79aa00: 0x24506ab0  addiu       $s0, $v0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA04u;
        goto label_79aa04;
    }
    ctx->pc = 0x79A9FCu;
    SET_GPR_U32(ctx, 31, 0x79AA04u);
    ctx->pc = 0x79AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9FCu;
    // 0x79aa00: 0x24506ab0  addiu       $s0, $v0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A9FCu, 0x79AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA04u;
label_79aa04:
    // 0x79aa04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79aa08:
    // 0x79aa08: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_79aa0c:
    // 0x79aa0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79aa10:
    // 0x79aa10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79aa14:
    // 0x79aa14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79aa14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aa18:
    // 0x79aa18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79aa18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aa1c:
    // 0x79aa1c: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79aa20:
    // 0x79aa20: 0xc0b2e28  jal         func_2CB8A0
label_79aa24:
    if (ctx->pc == 0x79AA24u) {
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA28u;
        goto label_79aa28;
    }
    ctx->pc = 0x79AA20u;
    SET_GPR_U32(ctx, 31, 0x79AA28u);
    ctx->pc = 0x79AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA20u;
    // 0x79aa24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AA20u, 0x79AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA28u;
label_79aa28:
    // 0x79aa28: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_79aa2c:
    // 0x79aa2c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_79aa30:
    // 0x79aa30: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x79aa30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_79aa34:
    // 0x79aa34: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x79aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_79aa38:
    // 0x79aa38: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x79aa38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_79aa3c:
    // 0x79aa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa40:
    // 0x79aa40: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x79aa40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
label_79aa44:
    // 0x79aa44: 0xc0a54b4  jal         func_2952D0
label_79aa48:
    if (ctx->pc == 0x79AA48u) {
        ctx->pc = 0x79AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA44u;
        // 0x79aa48: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA4Cu;
        goto label_79aa4c;
    }
    ctx->pc = 0x79AA44u;
    SET_GPR_U32(ctx, 31, 0x79AA4Cu);
    ctx->pc = 0x79AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA44u;
    // 0x79aa48: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AA44u, 0x79AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA4Cu;
label_79aa4c:
    // 0x79aa4c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79aa50:
    // 0x79aa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa54:
    // 0x79aa54: 0x8c43c500  lw          $v1, -0x3B00($v0)
    ctx->pc = 0x79aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
label_79aa58:
    // 0x79aa58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aa5c:
    // 0x79aa5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79aa60:
    // 0x79aa60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79aa64:
    // 0x79aa64: 0xc0a54b4  jal         func_2952D0
label_79aa68:
    if (ctx->pc == 0x79AA68u) {
        ctx->pc = 0x79AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA64u;
        // 0x79aa68: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA6Cu;
        goto label_79aa6c;
    }
    ctx->pc = 0x79AA64u;
    SET_GPR_U32(ctx, 31, 0x79AA6Cu);
    ctx->pc = 0x79AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA64u;
    // 0x79aa68: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AA64u, 0x79AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA6Cu;
label_79aa6c:
    // 0x79aa6c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79aa70:
    // 0x79aa70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa74:
    // 0x79aa74: 0x8c43c500  lw          $v1, -0x3B00($v0)
    ctx->pc = 0x79aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
label_79aa78:
    // 0x79aa78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aa7c:
    // 0x79aa7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79aa80:
    // 0x79aa80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79aa84:
    // 0x79aa84: 0xc0a54b4  jal         func_2952D0
label_79aa88:
    if (ctx->pc == 0x79AA88u) {
        ctx->pc = 0x79AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA84u;
        // 0x79aa88: 0x93a50050  lbu         $a1, 0x50($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA8Cu;
        goto label_79aa8c;
    }
    ctx->pc = 0x79AA84u;
    SET_GPR_U32(ctx, 31, 0x79AA8Cu);
    ctx->pc = 0x79AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA84u;
    // 0x79aa88: 0x93a50050  lbu         $a1, 0x50($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AA84u, 0x79AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA8Cu;
label_79aa8c:
    // 0x79aa8c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79aa90:
    // 0x79aa90: 0x8c43c500  lw          $v1, -0x3B00($v0)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
label_79aa94:
    // 0x79aa94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aa98:
    // 0x79aa98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79aa9c:
    // 0x79aa9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79aaa0:
    // 0x79aaa0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_79aaa4:
    // 0x79aaa4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79aaa8:
    // 0x79aaa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79aaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79aaac:
    // 0x79aaac: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79aab0:
    // 0x79aab0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79aab4:
    // 0x79aab4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79aab8:
    // 0x79aab8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79aab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79aabc:
    // 0x79aabc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79aabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79aac0:
    // 0x79aac0: 0xc0b0a92  jal         func_2C2A48
label_79aac4:
    if (ctx->pc == 0x79AAC4u) {
        ctx->pc = 0x79AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC0u;
        // 0x79aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAC8u;
        goto label_79aac8;
    }
    ctx->pc = 0x79AAC0u;
    SET_GPR_U32(ctx, 31, 0x79AAC8u);
    ctx->pc = 0x79AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAC0u;
    // 0x79aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AAC0u, 0x79AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAC8u;
label_79aac8:
    // 0x79aac8: 0xc0a573a  jal         func_295CE8
label_79aacc:
    if (ctx->pc == 0x79AACCu) {
        ctx->pc = 0x79AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC8u;
        // 0x79aacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAD0u;
        goto label_79aad0;
    }
    ctx->pc = 0x79AAC8u;
    SET_GPR_U32(ctx, 31, 0x79AAD0u);
    ctx->pc = 0x79AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAC8u;
    // 0x79aacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79AAC8u, 0x79AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAD0u;
label_79aad0:
    // 0x79aad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79aad4:
    // 0x79aad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79aad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79aad8:
    // 0x79aad8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79aadc:
    // 0x79aadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aae0:
    // 0x79aae0: 0xc0a57e0  jal         func_295F80
label_79aae4:
    if (ctx->pc == 0x79AAE4u) {
        ctx->pc = 0x79AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE0u;
        // 0x79aae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAE8u;
        goto label_79aae8;
    }
    ctx->pc = 0x79AAE0u;
    SET_GPR_U32(ctx, 31, 0x79AAE8u);
    ctx->pc = 0x79AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAE0u;
    // 0x79aae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AAE0u, 0x79AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAE8u;
label_79aae8:
    // 0x79aae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79aaec:
    // 0x79aaec: 0xc0a56f0  jal         func_295BC0
label_79aaf0:
    if (ctx->pc == 0x79AAF0u) {
        ctx->pc = 0x79AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAECu;
        // 0x79aaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAF4u;
        goto label_79aaf4;
    }
    ctx->pc = 0x79AAECu;
    SET_GPR_U32(ctx, 31, 0x79AAF4u);
    ctx->pc = 0x79AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAECu;
    // 0x79aaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79AAECu, 0x79AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF4u;
label_79aaf4:
    // 0x79aaf4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_79aaf8:
    // 0x79aaf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79aaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79aafc:
    // 0x79aafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab00:
    // 0x79ab00: 0xc0b0a92  jal         func_2C2A48
label_79ab04:
    if (ctx->pc == 0x79AB04u) {
        ctx->pc = 0x79AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB00u;
        // 0x79ab04: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB08u;
        goto label_79ab08;
    }
    ctx->pc = 0x79AB00u;
    SET_GPR_U32(ctx, 31, 0x79AB08u);
    ctx->pc = 0x79AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB00u;
    // 0x79ab04: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AB00u, 0x79AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB08u;
label_79ab08:
    // 0x79ab08: 0xc0a573a  jal         func_295CE8
label_79ab0c:
    if (ctx->pc == 0x79AB0Cu) {
        ctx->pc = 0x79AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB08u;
        // 0x79ab0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB10u;
        goto label_79ab10;
    }
    ctx->pc = 0x79AB08u;
    SET_GPR_U32(ctx, 31, 0x79AB10u);
    ctx->pc = 0x79AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB08u;
    // 0x79ab0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79AB08u, 0x79AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB10u;
label_79ab10:
    // 0x79ab10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79ab10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79ab14:
    // 0x79ab14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79ab14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ab18:
    // 0x79ab18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79ab1c:
    // 0x79ab1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ab1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ab20:
    // 0x79ab20: 0xc0a57e0  jal         func_295F80
label_79ab24:
    if (ctx->pc == 0x79AB24u) {
        ctx->pc = 0x79AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB20u;
        // 0x79ab24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB28u;
        goto label_79ab28;
    }
    ctx->pc = 0x79AB20u;
    SET_GPR_U32(ctx, 31, 0x79AB28u);
    ctx->pc = 0x79AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB20u;
    // 0x79ab24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AB20u, 0x79AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB28u;
label_79ab28:
    // 0x79ab28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79ab2c:
    // 0x79ab2c: 0xc0a56f0  jal         func_295BC0
label_79ab30:
    if (ctx->pc == 0x79AB30u) {
        ctx->pc = 0x79AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB2Cu;
        // 0x79ab30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB34u;
        goto label_79ab34;
    }
    ctx->pc = 0x79AB2Cu;
    SET_GPR_U32(ctx, 31, 0x79AB34u);
    ctx->pc = 0x79AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB2Cu;
    // 0x79ab30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79AB2Cu, 0x79AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB34u;
label_79ab34:
    // 0x79ab34: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_79ab38:
    // 0x79ab38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79ab38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ab3c:
    // 0x79ab3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab40:
    // 0x79ab40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79ab44:
    // 0x79ab44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79ab44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79ab48:
    // 0x79ab48: 0xc0b0a92  jal         func_2C2A48
label_79ab4c:
    if (ctx->pc == 0x79AB4Cu) {
        ctx->pc = 0x79AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB48u;
        // 0x79ab4c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB50u;
        goto label_79ab50;
    }
    ctx->pc = 0x79AB48u;
    SET_GPR_U32(ctx, 31, 0x79AB50u);
    ctx->pc = 0x79AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB48u;
    // 0x79ab4c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AB48u, 0x79AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB50u;
label_79ab50:
    // 0x79ab50: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x79ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_79ab54:
    // 0x79ab54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79ab54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79ab58:
    // 0x79ab58: 0xc0a573a  jal         func_295CE8
label_79ab5c:
    if (ctx->pc == 0x79AB5Cu) {
        ctx->pc = 0x79AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB58u;
        // 0x79ab5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB60u;
        goto label_79ab60;
    }
    ctx->pc = 0x79AB58u;
    SET_GPR_U32(ctx, 31, 0x79AB60u);
    ctx->pc = 0x79AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB58u;
    // 0x79ab5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79AB58u, 0x79AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB60u;
label_79ab60:
    // 0x79ab60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ab60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79ab64:
    // 0x79ab64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79ab68:
    // 0x79ab68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ab68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ab6c:
    // 0x79ab6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79ab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ab70:
    // 0x79ab70: 0xc0a57e0  jal         func_295F80
label_79ab74:
    if (ctx->pc == 0x79AB74u) {
        ctx->pc = 0x79AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB70u;
        // 0x79ab74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB78u;
        goto label_79ab78;
    }
    ctx->pc = 0x79AB70u;
    SET_GPR_U32(ctx, 31, 0x79AB78u);
    ctx->pc = 0x79AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB70u;
    // 0x79ab74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AB70u, 0x79AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB78u;
label_79ab78:
    // 0x79ab78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ab7c:
    // 0x79ab7c: 0xc0a56f0  jal         func_295BC0
label_79ab80:
    if (ctx->pc == 0x79AB80u) {
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB84u;
        goto label_79ab84;
    }
    ctx->pc = 0x79AB7Cu;
    SET_GPR_U32(ctx, 31, 0x79AB84u);
    ctx->pc = 0x79AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB7Cu;
    // 0x79ab80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79AB7Cu, 0x79AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB84u;
label_79ab84:
    // 0x79ab84: 0xc0b101e  jal         func_2C4078
label_79ab88:
    if (ctx->pc == 0x79AB88u) {
        ctx->pc = 0x79AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB84u;
        // 0x79ab88: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB8Cu;
        goto label_79ab8c;
    }
    ctx->pc = 0x79AB84u;
    SET_GPR_U32(ctx, 31, 0x79AB8Cu);
    ctx->pc = 0x79AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB84u;
    // 0x79ab88: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79AB84u, 0x79AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB8Cu;
label_79ab8c:
    // 0x79ab8c: 0xc0b0f04  jal         func_2C3C10
label_79ab90:
    if (ctx->pc == 0x79AB90u) {
        ctx->pc = 0x79AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB8Cu;
        // 0x79ab90: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB94u;
        goto label_79ab94;
    }
    ctx->pc = 0x79AB8Cu;
    SET_GPR_U32(ctx, 31, 0x79AB94u);
    ctx->pc = 0x79AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB8Cu;
    // 0x79ab90: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79AB8Cu, 0x79AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB94u;
label_79ab94:
    // 0x79ab94: 0x3c014037  lui         $at, 0x4037
    ctx->pc = 0x79ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16439 << 16));
label_79ab98:
    // 0x79ab98: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x79ab98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_79ab9c:
    // 0x79ab9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ab9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79aba0:
    // 0x79aba0: 0x3c01c27b  lui         $at, 0xC27B
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49787 << 16));
label_79aba4:
    // 0x79aba4: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79aba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_79aba8:
    // 0x79aba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79aba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79abac:
    // 0x79abac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x79abacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_79abb0:
    // 0x79abb0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x79abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_79abb4:
    // 0x79abb4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x79abb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_79abb8:
    // 0x79abb8: 0xc0b6dac  jal         func_2DB6B0
label_79abbc:
    if (ctx->pc == 0x79ABBCu) {
        ctx->pc = 0x79ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB8u;
        // 0x79abbc: 0xe655000c  swc1        $f21, 0xC($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABC0u;
        goto label_79abc0;
    }
    ctx->pc = 0x79ABB8u;
    SET_GPR_U32(ctx, 31, 0x79ABC0u);
    ctx->pc = 0x79ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABB8u;
    // 0x79abbc: 0xe655000c  swc1        $f21, 0xC($s2) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79ABB8u, 0x79ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABC0u;
label_79abc0:
    // 0x79abc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79abc4:
    // 0x79abc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79abc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79abc8:
    // 0x79abc8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x79abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79abcc:
    // 0x79abcc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x79abccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_79abd0:
    // 0x79abd0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_79abd4:
    // 0x79abd4: 0x60f809  jalr        $v1
label_79abd8:
    if (ctx->pc == 0x79ABD8u) {
        ctx->pc = 0x79ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD4u;
        // 0x79abd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABDCu;
        goto label_79abdc;
    }
    ctx->pc = 0x79ABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79ABDCu);
        ctx->pc = 0x79ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD4u;
        // 0x79abd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABD4u, 0x79ABDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79ABDCu;
label_79abdc:
    // 0x79abdc: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79abe0:
    // 0x79abe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79abe4:
    // 0x79abe4: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_79abe8:
    // 0x79abe8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_79abec:
    // 0x79abec: 0xe6760004  swc1        $f22, 0x4($s3)
    ctx->pc = 0x79abecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_79abf0:
    // 0x79abf0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_79abf4:
    // 0x79abf4: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x79abf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_79abf8:
    // 0x79abf8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79abfc:
    // 0x79abfc: 0x40f809  jalr        $v0
label_79ac00:
    if (ctx->pc == 0x79AC00u) {
        ctx->pc = 0x79AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABFCu;
        // 0x79ac00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC04u;
        goto label_79ac04;
    }
    ctx->pc = 0x79ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AC04u);
        ctx->pc = 0x79AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABFCu;
        // 0x79ac00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABFCu, 0x79AC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AC04u;
label_79ac04:
    // 0x79ac04: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x79ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79ac08:
    // 0x79ac08: 0xc0b5692  jal         func_2D5A48
label_79ac0c:
    if (ctx->pc == 0x79AC0Cu) {
        ctx->pc = 0x79AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC08u;
        // 0x79ac0c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC10u;
        goto label_79ac10;
    }
    ctx->pc = 0x79AC08u;
    SET_GPR_U32(ctx, 31, 0x79AC10u);
    ctx->pc = 0x79AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC08u;
    // 0x79ac0c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AC08u, 0x79AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC10u;
label_79ac10:
    // 0x79ac10: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79ac10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79ac14:
    // 0x79ac14: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79ac14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79ac18:
    // 0x79ac18: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79ac18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79ac1c:
    // 0x79ac1c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79ac1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79ac20:
    // 0x79ac20: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x79ac20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79ac24:
    // 0x79ac24: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x79ac24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79ac28:
    // 0x79ac28: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x79ac28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79ac2c:
    // 0x79ac2c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x79ac2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79ac30:
    // 0x79ac30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x79ac30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79ac34:
    // 0x79ac34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x79ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_79ac38:
    // 0x79ac38: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x79ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79ac3c:
    // 0x79ac3c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x79ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79ac40:
    // 0x79ac40: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x79ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79ac44:
    // 0x79ac44: 0x3e00008  jr          $ra
label_79ac48:
    if (ctx->pc == 0x79AC48u) {
        ctx->pc = 0x79AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC44u;
        // 0x79ac48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC4Cu;
        goto label_79ac4c;
    }
    ctx->pc = 0x79AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC44u;
        // 0x79ac48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC4Cu;
label_79ac4c:
    // 0x79ac4c: 0x0  nop
    ctx->pc = 0x79ac4cu;
    // NOP
    ctx->pc = 0x79ac50u;
}
} // namespace gh_r100
