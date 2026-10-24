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

// Function: func_001BC748
// Address: 0x1bc748 - 0x1bcb18
void func_001BC748_0x1bc748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BC748_0x1bc748");
#endif

    switch (ctx->pc) {
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc75cu: goto label_1bc75c;
        case 0x1bc760u: goto label_1bc760;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc76cu: goto label_1bc76c;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc774u: goto label_1bc774;
        case 0x1bc778u: goto label_1bc778;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc780u: goto label_1bc780;
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc78cu: goto label_1bc78c;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc79cu: goto label_1bc79c;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7a8u: goto label_1bc7a8;
        case 0x1bc7acu: goto label_1bc7ac;
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7b8u: goto label_1bc7b8;
        case 0x1bc7bcu: goto label_1bc7bc;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7c4u: goto label_1bc7c4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7ccu: goto label_1bc7cc;
        case 0x1bc7d0u: goto label_1bc7d0;
        case 0x1bc7d4u: goto label_1bc7d4;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7e0u: goto label_1bc7e0;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc7e8u: goto label_1bc7e8;
        case 0x1bc7ecu: goto label_1bc7ec;
        case 0x1bc7f0u: goto label_1bc7f0;
        case 0x1bc7f4u: goto label_1bc7f4;
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc7fcu: goto label_1bc7fc;
        case 0x1bc800u: goto label_1bc800;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc810u: goto label_1bc810;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc818u: goto label_1bc818;
        case 0x1bc81cu: goto label_1bc81c;
        case 0x1bc820u: goto label_1bc820;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc82cu: goto label_1bc82c;
        case 0x1bc830u: goto label_1bc830;
        case 0x1bc834u: goto label_1bc834;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc83cu: goto label_1bc83c;
        case 0x1bc840u: goto label_1bc840;
        case 0x1bc844u: goto label_1bc844;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc84cu: goto label_1bc84c;
        case 0x1bc850u: goto label_1bc850;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc858u: goto label_1bc858;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc860u: goto label_1bc860;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc86cu: goto label_1bc86c;
        case 0x1bc870u: goto label_1bc870;
        case 0x1bc874u: goto label_1bc874;
        case 0x1bc878u: goto label_1bc878;
        case 0x1bc87cu: goto label_1bc87c;
        case 0x1bc880u: goto label_1bc880;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc88cu: goto label_1bc88c;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc898u: goto label_1bc898;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8a0u: goto label_1bc8a0;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8a8u: goto label_1bc8a8;
        case 0x1bc8acu: goto label_1bc8ac;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8b4u: goto label_1bc8b4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8c0u: goto label_1bc8c0;
        case 0x1bc8c4u: goto label_1bc8c4;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc8ccu: goto label_1bc8cc;
        case 0x1bc8d0u: goto label_1bc8d0;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8dcu: goto label_1bc8dc;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8e8u: goto label_1bc8e8;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc8f0u: goto label_1bc8f0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc8fcu: goto label_1bc8fc;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc908u: goto label_1bc908;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc910u: goto label_1bc910;
        case 0x1bc914u: goto label_1bc914;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc920u: goto label_1bc920;
        case 0x1bc924u: goto label_1bc924;
        case 0x1bc928u: goto label_1bc928;
        case 0x1bc92cu: goto label_1bc92c;
        case 0x1bc930u: goto label_1bc930;
        case 0x1bc934u: goto label_1bc934;
        case 0x1bc938u: goto label_1bc938;
        case 0x1bc93cu: goto label_1bc93c;
        case 0x1bc940u: goto label_1bc940;
        case 0x1bc944u: goto label_1bc944;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc94cu: goto label_1bc94c;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc954u: goto label_1bc954;
        case 0x1bc958u: goto label_1bc958;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc960u: goto label_1bc960;
        case 0x1bc964u: goto label_1bc964;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc96cu: goto label_1bc96c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc974u: goto label_1bc974;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc97cu: goto label_1bc97c;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc984u: goto label_1bc984;
        case 0x1bc988u: goto label_1bc988;
        case 0x1bc98cu: goto label_1bc98c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc998u: goto label_1bc998;
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9a8u: goto label_1bc9a8;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9b0u: goto label_1bc9b0;
        case 0x1bc9b4u: goto label_1bc9b4;
        case 0x1bc9b8u: goto label_1bc9b8;
        case 0x1bc9bcu: goto label_1bc9bc;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9c4u: goto label_1bc9c4;
        case 0x1bc9c8u: goto label_1bc9c8;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9d4u: goto label_1bc9d4;
        case 0x1bc9d8u: goto label_1bc9d8;
        case 0x1bc9dcu: goto label_1bc9dc;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bc9e8u: goto label_1bc9e8;
        case 0x1bc9ecu: goto label_1bc9ec;
        case 0x1bc9f0u: goto label_1bc9f0;
        case 0x1bc9f4u: goto label_1bc9f4;
        case 0x1bc9f8u: goto label_1bc9f8;
        case 0x1bc9fcu: goto label_1bc9fc;
        case 0x1bca00u: goto label_1bca00;
        case 0x1bca04u: goto label_1bca04;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca0cu: goto label_1bca0c;
        case 0x1bca10u: goto label_1bca10;
        case 0x1bca14u: goto label_1bca14;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca20u: goto label_1bca20;
        case 0x1bca24u: goto label_1bca24;
        case 0x1bca28u: goto label_1bca28;
        case 0x1bca2cu: goto label_1bca2c;
        case 0x1bca30u: goto label_1bca30;
        case 0x1bca34u: goto label_1bca34;
        case 0x1bca38u: goto label_1bca38;
        case 0x1bca3cu: goto label_1bca3c;
        case 0x1bca40u: goto label_1bca40;
        case 0x1bca44u: goto label_1bca44;
        case 0x1bca48u: goto label_1bca48;
        case 0x1bca4cu: goto label_1bca4c;
        case 0x1bca50u: goto label_1bca50;
        case 0x1bca54u: goto label_1bca54;
        case 0x1bca58u: goto label_1bca58;
        case 0x1bca5cu: goto label_1bca5c;
        case 0x1bca60u: goto label_1bca60;
        case 0x1bca64u: goto label_1bca64;
        case 0x1bca68u: goto label_1bca68;
        case 0x1bca6cu: goto label_1bca6c;
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca74u: goto label_1bca74;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bca80u: goto label_1bca80;
        case 0x1bca84u: goto label_1bca84;
        case 0x1bca88u: goto label_1bca88;
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bca90u: goto label_1bca90;
        case 0x1bca94u: goto label_1bca94;
        case 0x1bca98u: goto label_1bca98;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa0u: goto label_1bcaa0;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcaa8u: goto label_1bcaa8;
        case 0x1bcaacu: goto label_1bcaac;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb0cu: goto label_1bcb0c;
        case 0x1bcb10u: goto label_1bcb10;
        case 0x1bcb14u: goto label_1bcb14;
        default: break;
    }

    ctx->pc = 0x1bc748u;

label_1bc748:
    // 0x1bc748: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1bc748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1bc74c:
    // 0x1bc74c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1bc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1bc750:
    // 0x1bc750: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1bc750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1bc754:
    // 0x1bc754: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc758:
    // 0x1bc758: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1bc758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1bc75c:
    // 0x1bc75c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bc75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc760:
    // 0x1bc760: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1bc760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1bc764:
    // 0x1bc764: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1bc764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1bc768:
    // 0x1bc768: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1bc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1bc76c:
    // 0x1bc76c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1bc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1bc770:
    // 0x1bc770: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1bc770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1bc774:
    // 0x1bc774: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bc774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1bc778:
    // 0x1bc778: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1bc778u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1bc77c:
    // 0x1bc77c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1bc77cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1bc780:
    // 0x1bc780: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1bc780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_1bc784:
    // 0x1bc784: 0x10700062  beq         $v1, $s0, . + 4 + (0x62 << 2)
label_1bc788:
    if (ctx->pc == 0x1BC788u) {
        ctx->pc = 0x1BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC784u;
        // 0x1bc788: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC78Cu;
        goto label_1bc78c;
    }
    ctx->pc = 0x1BC784u;
    {
        const bool branch_taken_0x1bc784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC784u;
        // 0x1bc788: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc784) {
            ctx->pc = 0x1BC910u;
            goto label_1bc910;
        }
    }
    ctx->pc = 0x1BC78Cu;
label_1bc78c:
    // 0x1bc78c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bc790:
    if (ctx->pc == 0x1BC790u) {
        ctx->pc = 0x1BC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC78Cu;
        // 0x1bc790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC794u;
        goto label_1bc794;
    }
    ctx->pc = 0x1BC78Cu;
    {
        const bool branch_taken_0x1bc78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC78Cu;
        // 0x1bc790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc78c) {
            ctx->pc = 0x1BC7A4u;
            goto label_1bc7a4;
        }
    }
    ctx->pc = 0x1BC794u;
label_1bc794:
    // 0x1bc794: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1bc798:
    if (ctx->pc == 0x1BC798u) {
        ctx->pc = 0x1BC79Cu;
        goto label_1bc79c;
    }
    ctx->pc = 0x1BC794u;
    {
        const bool branch_taken_0x1bc794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc794) {
            ctx->pc = 0x1BC7BCu;
            goto label_1bc7bc;
        }
    }
    ctx->pc = 0x1BC79Cu;
label_1bc79c:
    // 0x1bc79c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1bc7a0:
    if (ctx->pc == 0x1BC7A0u) {
        ctx->pc = 0x1BC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC79Cu;
        // 0x1bc7a0: 0x82420624  lb          $v0, 0x624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7A4u;
        goto label_1bc7a4;
    }
    ctx->pc = 0x1BC79Cu;
    {
        const bool branch_taken_0x1bc79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC79Cu;
        // 0x1bc7a0: 0x82420624  lb          $v0, 0x624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc79c) {
            ctx->pc = 0x1BC98Cu;
            goto label_1bc98c;
        }
    }
    ctx->pc = 0x1BC7A4u;
label_1bc7a4:
    // 0x1bc7a4: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
label_1bc7a8:
    if (ctx->pc == 0x1BC7A8u) {
        ctx->pc = 0x1BC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7A4u;
        // 0x1bc7a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7ACu;
        goto label_1bc7ac;
    }
    ctx->pc = 0x1BC7A4u;
    {
        const bool branch_taken_0x1bc7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7A4u;
        // 0x1bc7a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7a4) {
            ctx->pc = 0x1BC938u;
            goto label_1bc938;
        }
    }
    ctx->pc = 0x1BC7ACu;
label_1bc7ac:
    // 0x1bc7ac: 0x50620073  beql        $v1, $v0, . + 4 + (0x73 << 2)
label_1bc7b0:
    if (ctx->pc == 0x1BC7B0u) {
        ctx->pc = 0x1BC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7ACu;
        // 0x1bc7b0: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7B4u;
        goto label_1bc7b4;
    }
    ctx->pc = 0x1BC7ACu;
    {
        const bool branch_taken_0x1bc7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc7ac) {
            ctx->pc = 0x1BC7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC7ACu;
            // 0x1bc7b0: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC97Cu;
            goto label_1bc97c;
        }
    }
    ctx->pc = 0x1BC7B4u;
label_1bc7b4:
    // 0x1bc7b4: 0x10000075  b           . + 4 + (0x75 << 2)
label_1bc7b8:
    if (ctx->pc == 0x1BC7B8u) {
        ctx->pc = 0x1BC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7B4u;
        // 0x1bc7b8: 0x82420624  lb          $v0, 0x624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7BCu;
        goto label_1bc7bc;
    }
    ctx->pc = 0x1BC7B4u;
    {
        const bool branch_taken_0x1bc7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7B4u;
        // 0x1bc7b8: 0x82420624  lb          $v0, 0x624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7b4) {
            ctx->pc = 0x1BC98Cu;
            goto label_1bc98c;
        }
    }
    ctx->pc = 0x1BC7BCu;
label_1bc7bc:
    // 0x1bc7bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bc7c0:
    // 0x1bc7c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc7c4:
    // 0x1bc7c4: 0x0  nop
    ctx->pc = 0x1bc7c4u;
    // NOP
label_1bc7c8:
    // 0x1bc7c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bc7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bc7cc:
    // 0x1bc7cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bc7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bc7d0:
    // 0x1bc7d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bc7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bc7d4:
    // 0x1bc7d4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1bc7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1bc7d8:
    // 0x1bc7d8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1bc7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bc7dc:
    // 0x1bc7dc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1bc7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bc7e0:
    // 0x1bc7e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bc7e4:
    // 0x1bc7e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bc7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bc7e8:
    // 0x1bc7e8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1bc7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1bc7ec:
    // 0x1bc7ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bc7f0:
    // 0x1bc7f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1bc7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1bc7f4:
    // 0x1bc7f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bc7f8:
    // 0x1bc7f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1bc7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1bc7fc:
    // 0x1bc7fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1bc7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1bc800:
    // 0x1bc800: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x1bc800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_1bc804:
    // 0x1bc804: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x1bc804u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
label_1bc808:
    // 0x1bc808: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bc808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1bc80c:
    // 0x1bc80c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1bc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1bc810:
    // 0x1bc810: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x1bc810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
label_1bc814:
    // 0x1bc814: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x1bc814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
label_1bc818:
    // 0x1bc818: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1bc818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_1bc81c:
    // 0x1bc81c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1bc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bc820:
    // 0x1bc820: 0x9e4205b8  lwu         $v0, 0x5B8($s2)
    ctx->pc = 0x1bc820u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 1464)));
label_1bc824:
    // 0x1bc824: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x1bc824u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
label_1bc828:
    // 0x1bc828: 0x2117b  dsra        $v0, $v0, 5
    ctx->pc = 0x1bc828u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 5);
label_1bc82c:
    // 0x1bc82c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x1bc82cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
label_1bc830:
    // 0x1bc830: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bc834:
    // 0x1bc834: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x1bc834u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
label_1bc838:
    // 0x1bc838: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bc83c:
    if (ctx->pc == 0x1BC83Cu) {
        ctx->pc = 0x1BC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC838u;
        // 0x1bc83c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC840u;
        goto label_1bc840;
    }
    ctx->pc = 0x1BC838u;
    {
        const bool branch_taken_0x1bc838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC838u;
        // 0x1bc83c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc838) {
            ctx->pc = 0x1BC848u;
            goto label_1bc848;
        }
    }
    ctx->pc = 0x1BC840u;
label_1bc840:
    // 0x1bc840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc844:
    // 0x1bc844: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1bc844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1bc848:
    // 0x1bc848: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1bc848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bc84c:
    // 0x1bc84c: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1bc850:
    // 0x1bc850: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bc854:
    // 0x1bc854: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bc858:
    // 0x1bc858: 0x40f809  jalr        $v0
label_1bc85c:
    if (ctx->pc == 0x1BC85Cu) {
        ctx->pc = 0x1BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC858u;
        // 0x1bc85c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC860u;
        goto label_1bc860;
    }
    ctx->pc = 0x1BC858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC860u);
        ctx->pc = 0x1BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC858u;
        // 0x1bc85c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC858u, 0x1BC860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC860u;
label_1bc860:
    // 0x1bc860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc864:
    // 0x1bc864: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1bc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1bc868:
    // 0x1bc868: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1bc86c:
    if (ctx->pc == 0x1BC86Cu) {
        ctx->pc = 0x1BC870u;
        goto label_1bc870;
    }
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC888u;
            goto label_1bc888;
        }
    }
    ctx->pc = 0x1BC870u;
label_1bc870:
    // 0x1bc870: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1bc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc874:
    // 0x1bc874: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1bc874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1bc878:
    // 0x1bc878: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1bc878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc87c:
    // 0x1bc87c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1bc87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1bc880:
    // 0x1bc880: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1bc880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc884:
    // 0x1bc884: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1bc884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1bc888:
    // 0x1bc888: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1bc88c:
    // 0x1bc88c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bc88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bc890:
    // 0x1bc890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bc890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc894:
    // 0x1bc894: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1bc898:
    // 0x1bc898: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bc898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc89c:
    // 0x1bc89c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1bc89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bc8a0:
    // 0x1bc8a0: 0xc0c194a  jal         func_306528
label_1bc8a4:
    if (ctx->pc == 0x1BC8A4u) {
        ctx->pc = 0x1BC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8A0u;
        // 0x1bc8a4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8A8u;
        goto label_1bc8a8;
    }
    ctx->pc = 0x1BC8A0u;
    SET_GPR_U32(ctx, 31, 0x1BC8A8u);
    ctx->pc = 0x1BC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8A0u;
    // 0x1bc8a4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BC8A0u, 0x1BC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8A8u;
label_1bc8a8:
    // 0x1bc8a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1bc8ac:
    // 0x1bc8ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc8b0:
    // 0x1bc8b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bc8b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8b4:
    // 0x1bc8b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bc8b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8b8:
    // 0x1bc8b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8bc:
    // 0x1bc8bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bc8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8c0:
    // 0x1bc8c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc8c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8c4:
    // 0x1bc8c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc8c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8c8:
    // 0x1bc8c8: 0xc0b2e92  jal         func_2CBA48
label_1bc8cc:
    if (ctx->pc == 0x1BC8CCu) {
        ctx->pc = 0x1BC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C8u;
        // 0x1bc8cc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8D0u;
        goto label_1bc8d0;
    }
    ctx->pc = 0x1BC8C8u;
    SET_GPR_U32(ctx, 31, 0x1BC8D0u);
    ctx->pc = 0x1BC8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8C8u;
    // 0x1bc8cc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BC8C8u, 0x1BC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8D0u;
label_1bc8d0:
    // 0x1bc8d0: 0xc06f35c  jal         func_1BCD70
label_1bc8d4:
    if (ctx->pc == 0x1BC8D4u) {
        ctx->pc = 0x1BC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D0u;
        // 0x1bc8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8D8u;
        goto label_1bc8d8;
    }
    ctx->pc = 0x1BC8D0u;
    SET_GPR_U32(ctx, 31, 0x1BC8D8u);
    ctx->pc = 0x1BC8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8D0u;
    // 0x1bc8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCD70u, 0x1BC8D0u, 0x1BC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8D8u;
label_1bc8d8:
    // 0x1bc8d8: 0xc06de42  jal         func_1B7908
label_1bc8dc:
    if (ctx->pc == 0x1BC8DCu) {
        ctx->pc = 0x1BC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D8u;
        // 0x1bc8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8E0u;
        goto label_1bc8e0;
    }
    ctx->pc = 0x1BC8D8u;
    SET_GPR_U32(ctx, 31, 0x1BC8E0u);
    ctx->pc = 0x1BC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8D8u;
    // 0x1bc8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1BC8D8u, 0x1BC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8E0u;
label_1bc8e0:
    // 0x1bc8e0: 0x8e450644  lw          $a1, 0x644($s2)
    ctx->pc = 0x1bc8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1604)));
label_1bc8e4:
    // 0x1bc8e4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1bc8e8:
    if (ctx->pc == 0x1BC8E8u) {
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8ECu;
        goto label_1bc8ec;
    }
    ctx->pc = 0x1BC8E4u;
    {
        const bool branch_taken_0x1bc8e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8e4) {
            ctx->pc = 0x1BC900u;
            goto label_1bc900;
        }
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bc8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1bc8f0:
    // 0x1bc8f0: 0xc04bb16  jal         func_12EC58
label_1bc8f4:
    if (ctx->pc == 0x1BC8F4u) {
        ctx->pc = 0x1BC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8F0u;
        // 0x1bc8f4: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8F8u;
        goto label_1bc8f8;
    }
    ctx->pc = 0x1BC8F0u;
    SET_GPR_U32(ctx, 31, 0x1BC8F8u);
    ctx->pc = 0x1BC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8F0u;
    // 0x1bc8f4: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1BC8F0u, 0x1BC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8F8u;
label_1bc8f8:
    // 0x1bc8f8: 0xae400644  sw          $zero, 0x644($s2)
    ctx->pc = 0x1bc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1604), GPR_U32(ctx, 0));
label_1bc8fc:
    // 0x1bc8fc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1bc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1bc900:
    // 0x1bc900: 0xa25002f5  sb          $s0, 0x2F5($s2)
    ctx->pc = 0x1bc900u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 16));
label_1bc904:
    // 0x1bc904: 0xa642062c  sh          $v0, 0x62C($s2)
    ctx->pc = 0x1bc904u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1580), (uint16_t)GPR_U32(ctx, 2));
label_1bc908:
    // 0x1bc908: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1bc908u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc90c:
    // 0x1bc90c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1bc90cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bc910:
    // 0x1bc910: 0x9642062c  lhu         $v0, 0x62C($s2)
    ctx->pc = 0x1bc910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1580)));
label_1bc914:
    // 0x1bc914: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bc918:
    // 0x1bc918: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc91c:
    // 0x1bc91c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_1bc920:
    if (ctx->pc == 0x1BC920u) {
        ctx->pc = 0x1BC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC91Cu;
        // 0x1bc920: 0xa642062c  sh          $v0, 0x62C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC924u;
        goto label_1bc924;
    }
    ctx->pc = 0x1BC91Cu;
    {
        const bool branch_taken_0x1bc91c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1BC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC91Cu;
        // 0x1bc920: 0xa642062c  sh          $v0, 0x62C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc91c) {
            ctx->pc = 0x1BC988u;
            goto label_1bc988;
        }
    }
    ctx->pc = 0x1BC924u;
label_1bc924:
    // 0x1bc924: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bc928:
    // 0x1bc928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc92c:
    // 0x1bc92c: 0xa642062c  sh          $v0, 0x62C($s2)
    ctx->pc = 0x1bc92cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1580), (uint16_t)GPR_U32(ctx, 2));
label_1bc930:
    // 0x1bc930: 0x10000013  b           . + 4 + (0x13 << 2)
label_1bc934:
    if (ctx->pc == 0x1BC934u) {
        ctx->pc = 0x1BC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC930u;
        // 0x1bc934: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC938u;
        goto label_1bc938;
    }
    ctx->pc = 0x1BC930u;
    {
        const bool branch_taken_0x1bc930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC930u;
        // 0x1bc934: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc930) {
            ctx->pc = 0x1BC980u;
            goto label_1bc980;
        }
    }
    ctx->pc = 0x1BC938u;
label_1bc938:
    // 0x1bc938: 0x9642062c  lhu         $v0, 0x62C($s2)
    ctx->pc = 0x1bc938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1580)));
label_1bc93c:
    // 0x1bc93c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1bc93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1bc940:
    // 0x1bc940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc944:
    // 0x1bc944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bc948:
    // 0x1bc948: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bc948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc94c:
    // 0x1bc94c: 0xa642062c  sh          $v0, 0x62C($s2)
    ctx->pc = 0x1bc94cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1580), (uint16_t)GPR_U32(ctx, 2));
label_1bc950:
    // 0x1bc950: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1bc950u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1bc954:
    // 0x1bc954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc958:
    // 0x1bc958: 0x0  nop
    ctx->pc = 0x1bc958u;
    // NOP
label_1bc95c:
    // 0x1bc95c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bc960:
    // 0x1bc960: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bc960u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1bc964:
    // 0x1bc964: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1bc968:
    if (ctx->pc == 0x1BC968u) {
        ctx->pc = 0x1BC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC964u;
        // 0x1bc968: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC96Cu;
        goto label_1bc96c;
    }
    ctx->pc = 0x1BC964u;
    {
        const bool branch_taken_0x1bc964 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1BC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC964u;
        // 0x1bc968: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc964) {
            ctx->pc = 0x1BC988u;
            goto label_1bc988;
        }
    }
    ctx->pc = 0x1BC96Cu;
label_1bc96c:
    // 0x1bc96c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc970:
    // 0x1bc970: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1bc970u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc974:
    // 0x1bc974: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bc978:
    if (ctx->pc == 0x1BC978u) {
        ctx->pc = 0x1BC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC974u;
        // 0x1bc978: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC97Cu;
        goto label_1bc97c;
    }
    ctx->pc = 0x1BC974u;
    {
        const bool branch_taken_0x1bc974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC974u;
        // 0x1bc978: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc974) {
            ctx->pc = 0x1BC984u;
            goto label_1bc984;
        }
    }
    ctx->pc = 0x1BC97Cu;
label_1bc97c:
    // 0x1bc97c: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1bc97cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bc980:
    // 0x1bc980: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1bc980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc984:
    // 0x1bc984: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1bc984u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bc988:
    // 0x1bc988: 0x82420624  lb          $v0, 0x624($s2)
    ctx->pc = 0x1bc988u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
label_1bc98c:
    // 0x1bc98c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc990:
    // 0x1bc990: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1bc990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bc994:
    // 0x1bc994: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1bc998:
    if (ctx->pc == 0x1BC998u) {
        ctx->pc = 0x1BC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC994u;
        // 0x1bc998: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC99Cu;
        goto label_1bc99c;
    }
    ctx->pc = 0x1BC994u;
    {
        const bool branch_taken_0x1bc994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC994u;
        // 0x1bc998: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc994) {
            ctx->pc = 0x1BCAE4u;
            goto label_1bcae4;
        }
    }
    ctx->pc = 0x1BC99Cu;
label_1bc99c:
    // 0x1bc99c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1bc99cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1bc9a0:
    // 0x1bc9a0: 0x10530050  beq         $v0, $s3, . + 4 + (0x50 << 2)
label_1bc9a4:
    if (ctx->pc == 0x1BC9A4u) {
        ctx->pc = 0x1BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A0u;
        // 0x1bc9a4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9A8u;
        goto label_1bc9a8;
    }
    ctx->pc = 0x1BC9A0u;
    {
        const bool branch_taken_0x1bc9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A0u;
        // 0x1bc9a4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9a0) {
            ctx->pc = 0x1BCAE4u;
            goto label_1bcae4;
        }
    }
    ctx->pc = 0x1BC9A8u;
label_1bc9a8:
    // 0x1bc9a8: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1bc9ac:
    // 0x1bc9ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bc9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bc9b0:
    // 0x1bc9b0: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
label_1bc9b4:
    // 0x1bc9b4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1bc9b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bc9b8:
    // 0x1bc9b8: 0x24150060  addiu       $s5, $zero, 0x60
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1bc9bc:
    // 0x1bc9bc: 0x8e420628  lw          $v0, 0x628($s2)
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1576)));
label_1bc9c0:
    // 0x1bc9c0: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x1bc9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1bc9c4:
    // 0x1bc9c4: 0xc05ce40  jal         func_173900
label_1bc9c8:
    if (ctx->pc == 0x1BC9C8u) {
        ctx->pc = 0x1BC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C4u;
        // 0x1bc9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9CCu;
        goto label_1bc9cc;
    }
    ctx->pc = 0x1BC9C4u;
    SET_GPR_U32(ctx, 31, 0x1BC9CCu);
    ctx->pc = 0x1BC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9C4u;
    // 0x1bc9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1BC9C4u, 0x1BC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9CCu;
label_1bc9cc:
    // 0x1bc9cc: 0x5457003d  bnel        $v0, $s7, . + 4 + (0x3D << 2)
label_1bc9d0:
    if (ctx->pc == 0x1BC9D0u) {
        ctx->pc = 0x1BC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9CCu;
        // 0x1bc9d0: 0x82420624  lb          $v0, 0x624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9D4u;
        goto label_1bc9d4;
    }
    ctx->pc = 0x1BC9CCu;
    {
        const bool branch_taken_0x1bc9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1bc9cc) {
            ctx->pc = 0x1BC9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC9CCu;
            // 0x1bc9d0: 0x82420624  lb          $v0, 0x624($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCAC4u;
            goto label_1bcac4;
        }
    }
    ctx->pc = 0x1BC9D4u;
label_1bc9d4:
    // 0x1bc9d4: 0xc0a4bd4  jal         func_292F50
label_1bc9d8:
    if (ctx->pc == 0x1BC9D8u) {
        ctx->pc = 0x1BC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9D4u;
        // 0x1bc9d8: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9DCu;
        goto label_1bc9dc;
    }
    ctx->pc = 0x1BC9D4u;
    SET_GPR_U32(ctx, 31, 0x1BC9DCu);
    ctx->pc = 0x1BC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9D4u;
    // 0x1bc9d8: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1BC9D4u, 0x1BC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9DCu;
label_1bc9dc:
    // 0x1bc9dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1bc9dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1bc9e0:
    // 0x1bc9e0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1bc9e4:
    // 0x1bc9e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bc9e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc9e8:
    // 0x1bc9e8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bc9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bc9ec:
    // 0x1bc9ec: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bc9ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc9f0:
    // 0x1bc9f0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1bc9f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1bc9f4:
    // 0x1bc9f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1bc9f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1bc9f8:
    // 0x1bc9f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1bc9f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1bc9fc:
    // 0x1bc9fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bc9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca00:
    // 0x1bca00: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1bca00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1bca04:
    // 0x1bca04: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca08:
    // 0x1bca08: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1bca08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1bca0c:
    // 0x1bca0c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1bca0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bca10:
    // 0x1bca10: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1bca10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1bca14:
    // 0x1bca14: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1bca14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca18:
    // 0x1bca18: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1bca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1bca1c:
    // 0x1bca1c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bca1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bca20:
    // 0x1bca20: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca24:
    // 0x1bca24: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bca24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bca28:
    // 0x1bca28: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1bca28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1bca2c:
    // 0x1bca2c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1bca2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1bca30:
    // 0x1bca30: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1bca30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1bca34:
    // 0x1bca34: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca38:
    // 0x1bca38: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1bca38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1bca3c:
    // 0x1bca3c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca40:
    // 0x1bca40: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1bca40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1bca44:
    // 0x1bca44: 0xda240010  lqc2        $vf4, 0x10($s1)
    ctx->pc = 0x1bca44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_1bca48:
    // 0x1bca48: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1bca48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bca4c:
    // 0x1bca4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1bca4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1bca50:
    // 0x1bca50: 0xfa240010  sqc2        $vf4, 0x10($s1)
    ctx->pc = 0x1bca50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bca54:
    // 0x1bca54: 0xc07df68  jal         func_1F7DA0
label_1bca58:
    if (ctx->pc == 0x1BCA58u) {
        ctx->pc = 0x1BCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA54u;
        // 0x1bca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA5Cu;
        goto label_1bca5c;
    }
    ctx->pc = 0x1BCA54u;
    SET_GPR_U32(ctx, 31, 0x1BCA5Cu);
    ctx->pc = 0x1BCA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA54u;
    // 0x1bca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1BCA54u, 0x1BCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA5Cu;
label_1bca5c:
    // 0x1bca5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bca60:
    // 0x1bca60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bca60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bca64:
    // 0x1bca64: 0xc051dca  jal         func_147728
label_1bca68:
    if (ctx->pc == 0x1BCA68u) {
        ctx->pc = 0x1BCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA64u;
        // 0x1bca68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA6Cu;
        goto label_1bca6c;
    }
    ctx->pc = 0x1BCA64u;
    SET_GPR_U32(ctx, 31, 0x1BCA6Cu);
    ctx->pc = 0x1BCA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA64u;
    // 0x1bca68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1BCA64u, 0x1BCA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA6Cu;
label_1bca6c:
    // 0x1bca6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bca70:
    // 0x1bca70: 0xc051f10  jal         func_147C40
label_1bca74:
    if (ctx->pc == 0x1BCA74u) {
        ctx->pc = 0x1BCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA70u;
        // 0x1bca74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA78u;
        goto label_1bca78;
    }
    ctx->pc = 0x1BCA70u;
    SET_GPR_U32(ctx, 31, 0x1BCA78u);
    ctx->pc = 0x1BCA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA70u;
    // 0x1bca74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1BCA70u, 0x1BCA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA78u;
label_1bca78:
    // 0x1bca78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bca7c:
    // 0x1bca7c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1bca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1bca80:
    // 0x1bca80: 0xc051efe  jal         func_147BF8
label_1bca84:
    if (ctx->pc == 0x1BCA84u) {
        ctx->pc = 0x1BCA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA80u;
        // 0x1bca84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA88u;
        goto label_1bca88;
    }
    ctx->pc = 0x1BCA80u;
    SET_GPR_U32(ctx, 31, 0x1BCA88u);
    ctx->pc = 0x1BCA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA80u;
    // 0x1bca84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1BCA80u, 0x1BCA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA88u;
label_1bca88:
    // 0x1bca88: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1bca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1bca8c:
    // 0x1bca8c: 0xc051d4a  jal         func_147528
label_1bca90:
    if (ctx->pc == 0x1BCA90u) {
        ctx->pc = 0x1BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA8Cu;
        // 0x1bca90: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA94u;
        goto label_1bca94;
    }
    ctx->pc = 0x1BCA8Cu;
    SET_GPR_U32(ctx, 31, 0x1BCA94u);
    ctx->pc = 0x1BCA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA8Cu;
    // 0x1bca90: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1BCA8Cu, 0x1BCA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA94u;
label_1bca94:
    // 0x1bca94: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x1bca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bca98:
    // 0x1bca98: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1bca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bca9c:
    // 0x1bca9c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1bca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1bcaa0:
    // 0x1bcaa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcaa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bcaa4:
    // 0x1bcaa4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1bcaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcaa8:
    // 0x1bcaa8: 0x0  nop
    ctx->pc = 0x1bcaa8u;
    // NOP
label_1bcaac:
    // 0x1bcaac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1bcab0:
    if (ctx->pc == 0x1BCAB0u) {
        ctx->pc = 0x1BCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAACu;
        // 0x1bcab0: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAB4u;
        goto label_1bcab4;
    }
    ctx->pc = 0x1BCAACu;
    {
        const bool branch_taken_0x1bcaac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAACu;
        // 0x1bcab0: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcaac) {
            ctx->pc = 0x1BCAC0u;
            goto label_1bcac0;
        }
    }
    ctx->pc = 0x1BCAB4u;
label_1bcab4:
    // 0x1bcab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcab8:
    // 0x1bcab8: 0xc05bd90  jal         func_16F640
label_1bcabc:
    if (ctx->pc == 0x1BCABCu) {
        ctx->pc = 0x1BCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB8u;
        // 0x1bcabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAC0u;
        goto label_1bcac0;
    }
    ctx->pc = 0x1BCAB8u;
    SET_GPR_U32(ctx, 31, 0x1BCAC0u);
    ctx->pc = 0x1BCABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAB8u;
    // 0x1bcabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1BCAB8u, 0x1BCAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAC0u;
label_1bcac0:
    // 0x1bcac0: 0x82420624  lb          $v0, 0x624($s2)
    ctx->pc = 0x1bcac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1572)));
label_1bcac4:
    // 0x1bcac4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bcac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bcac8:
    // 0x1bcac8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1bcac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bcacc:
    // 0x1bcacc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bcad0:
    if (ctx->pc == 0x1BCAD0u) {
        ctx->pc = 0x1BCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCACCu;
        // 0x1bcad0: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAD4u;
        goto label_1bcad4;
    }
    ctx->pc = 0x1BCACCu;
    {
        const bool branch_taken_0x1bcacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCACCu;
        // 0x1bcad0: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcacc) {
            ctx->pc = 0x1BCAE0u;
            goto label_1bcae0;
        }
    }
    ctx->pc = 0x1BCAD4u;
label_1bcad4:
    // 0x1bcad4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1bcad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1bcad8:
    // 0x1bcad8: 0x5453ffb9  bnel        $v0, $s3, . + 4 + (-0x47 << 2)
label_1bcadc:
    if (ctx->pc == 0x1BCADCu) {
        ctx->pc = 0x1BCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAD8u;
        // 0x1bcadc: 0x8e420628  lw          $v0, 0x628($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAE0u;
        goto label_1bcae0;
    }
    ctx->pc = 0x1BCAD8u;
    {
        const bool branch_taken_0x1bcad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1bcad8) {
            ctx->pc = 0x1BCADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCAD8u;
            // 0x1bcadc: 0x8e420628  lw          $v0, 0x628($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc9c0;
        }
    }
    ctx->pc = 0x1BCAE0u;
label_1bcae0:
    // 0x1bcae0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1bcae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1bcae4:
    // 0x1bcae4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1bcae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1bcae8:
    // 0x1bcae8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1bcae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1bcaec:
    // 0x1bcaec: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1bcaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1bcaf0:
    // 0x1bcaf0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1bcaf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1bcaf4:
    // 0x1bcaf4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1bcaf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bcaf8:
    // 0x1bcaf8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1bcaf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bcafc:
    // 0x1bcafc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1bcafcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bcb00:
    // 0x1bcb00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bcb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bcb04:
    // 0x1bcb04: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1bcb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bcb08:
    // 0x1bcb08: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1bcb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bcb0c:
    // 0x1bcb0c: 0x3e00008  jr          $ra
label_1bcb10:
    if (ctx->pc == 0x1BCB10u) {
        ctx->pc = 0x1BCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB0Cu;
        // 0x1bcb10: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB14u;
        goto label_1bcb14;
    }
    ctx->pc = 0x1BCB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB0Cu;
        // 0x1bcb10: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCB14u;
label_1bcb14:
    // 0x1bcb14: 0x0  nop
    ctx->pc = 0x1bcb14u;
    // NOP
    ctx->pc = 0x1bcb18u;
}
