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

// Function: func_00237078
// Address: 0x237078 - 0x2373b0
void func_00237078_0x237078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00237078_0x237078");
#endif

    switch (ctx->pc) {
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        case 0x2370c8u: goto label_2370c8;
        case 0x2370ccu: goto label_2370cc;
        case 0x2370d0u: goto label_2370d0;
        case 0x2370d4u: goto label_2370d4;
        case 0x2370d8u: goto label_2370d8;
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370e4u: goto label_2370e4;
        case 0x2370e8u: goto label_2370e8;
        case 0x2370ecu: goto label_2370ec;
        case 0x2370f0u: goto label_2370f0;
        case 0x2370f4u: goto label_2370f4;
        case 0x2370f8u: goto label_2370f8;
        case 0x2370fcu: goto label_2370fc;
        case 0x237100u: goto label_237100;
        case 0x237104u: goto label_237104;
        case 0x237108u: goto label_237108;
        case 0x23710cu: goto label_23710c;
        case 0x237110u: goto label_237110;
        case 0x237114u: goto label_237114;
        case 0x237118u: goto label_237118;
        case 0x23711cu: goto label_23711c;
        case 0x237120u: goto label_237120;
        case 0x237124u: goto label_237124;
        case 0x237128u: goto label_237128;
        case 0x23712cu: goto label_23712c;
        case 0x237130u: goto label_237130;
        case 0x237134u: goto label_237134;
        case 0x237138u: goto label_237138;
        case 0x23713cu: goto label_23713c;
        case 0x237140u: goto label_237140;
        case 0x237144u: goto label_237144;
        case 0x237148u: goto label_237148;
        case 0x23714cu: goto label_23714c;
        case 0x237150u: goto label_237150;
        case 0x237154u: goto label_237154;
        case 0x237158u: goto label_237158;
        case 0x23715cu: goto label_23715c;
        case 0x237160u: goto label_237160;
        case 0x237164u: goto label_237164;
        case 0x237168u: goto label_237168;
        case 0x23716cu: goto label_23716c;
        case 0x237170u: goto label_237170;
        case 0x237174u: goto label_237174;
        case 0x237178u: goto label_237178;
        case 0x23717cu: goto label_23717c;
        case 0x237180u: goto label_237180;
        case 0x237184u: goto label_237184;
        case 0x237188u: goto label_237188;
        case 0x23718cu: goto label_23718c;
        case 0x237190u: goto label_237190;
        case 0x237194u: goto label_237194;
        case 0x237198u: goto label_237198;
        case 0x23719cu: goto label_23719c;
        case 0x2371a0u: goto label_2371a0;
        case 0x2371a4u: goto label_2371a4;
        case 0x2371a8u: goto label_2371a8;
        case 0x2371acu: goto label_2371ac;
        case 0x2371b0u: goto label_2371b0;
        case 0x2371b4u: goto label_2371b4;
        case 0x2371b8u: goto label_2371b8;
        case 0x2371bcu: goto label_2371bc;
        case 0x2371c0u: goto label_2371c0;
        case 0x2371c4u: goto label_2371c4;
        case 0x2371c8u: goto label_2371c8;
        case 0x2371ccu: goto label_2371cc;
        case 0x2371d0u: goto label_2371d0;
        case 0x2371d4u: goto label_2371d4;
        case 0x2371d8u: goto label_2371d8;
        case 0x2371dcu: goto label_2371dc;
        case 0x2371e0u: goto label_2371e0;
        case 0x2371e4u: goto label_2371e4;
        case 0x2371e8u: goto label_2371e8;
        case 0x2371ecu: goto label_2371ec;
        case 0x2371f0u: goto label_2371f0;
        case 0x2371f4u: goto label_2371f4;
        case 0x2371f8u: goto label_2371f8;
        case 0x2371fcu: goto label_2371fc;
        case 0x237200u: goto label_237200;
        case 0x237204u: goto label_237204;
        case 0x237208u: goto label_237208;
        case 0x23720cu: goto label_23720c;
        case 0x237210u: goto label_237210;
        case 0x237214u: goto label_237214;
        case 0x237218u: goto label_237218;
        case 0x23721cu: goto label_23721c;
        case 0x237220u: goto label_237220;
        case 0x237224u: goto label_237224;
        case 0x237228u: goto label_237228;
        case 0x23722cu: goto label_23722c;
        case 0x237230u: goto label_237230;
        case 0x237234u: goto label_237234;
        case 0x237238u: goto label_237238;
        case 0x23723cu: goto label_23723c;
        case 0x237240u: goto label_237240;
        case 0x237244u: goto label_237244;
        case 0x237248u: goto label_237248;
        case 0x23724cu: goto label_23724c;
        case 0x237250u: goto label_237250;
        case 0x237254u: goto label_237254;
        case 0x237258u: goto label_237258;
        case 0x23725cu: goto label_23725c;
        case 0x237260u: goto label_237260;
        case 0x237264u: goto label_237264;
        case 0x237268u: goto label_237268;
        case 0x23726cu: goto label_23726c;
        case 0x237270u: goto label_237270;
        case 0x237274u: goto label_237274;
        case 0x237278u: goto label_237278;
        case 0x23727cu: goto label_23727c;
        case 0x237280u: goto label_237280;
        case 0x237284u: goto label_237284;
        case 0x237288u: goto label_237288;
        case 0x23728cu: goto label_23728c;
        case 0x237290u: goto label_237290;
        case 0x237294u: goto label_237294;
        case 0x237298u: goto label_237298;
        case 0x23729cu: goto label_23729c;
        case 0x2372a0u: goto label_2372a0;
        case 0x2372a4u: goto label_2372a4;
        case 0x2372a8u: goto label_2372a8;
        case 0x2372acu: goto label_2372ac;
        case 0x2372b0u: goto label_2372b0;
        case 0x2372b4u: goto label_2372b4;
        case 0x2372b8u: goto label_2372b8;
        case 0x2372bcu: goto label_2372bc;
        case 0x2372c0u: goto label_2372c0;
        case 0x2372c4u: goto label_2372c4;
        case 0x2372c8u: goto label_2372c8;
        case 0x2372ccu: goto label_2372cc;
        case 0x2372d0u: goto label_2372d0;
        case 0x2372d4u: goto label_2372d4;
        case 0x2372d8u: goto label_2372d8;
        case 0x2372dcu: goto label_2372dc;
        case 0x2372e0u: goto label_2372e0;
        case 0x2372e4u: goto label_2372e4;
        case 0x2372e8u: goto label_2372e8;
        case 0x2372ecu: goto label_2372ec;
        case 0x2372f0u: goto label_2372f0;
        case 0x2372f4u: goto label_2372f4;
        case 0x2372f8u: goto label_2372f8;
        case 0x2372fcu: goto label_2372fc;
        case 0x237300u: goto label_237300;
        case 0x237304u: goto label_237304;
        case 0x237308u: goto label_237308;
        case 0x23730cu: goto label_23730c;
        case 0x237310u: goto label_237310;
        case 0x237314u: goto label_237314;
        case 0x237318u: goto label_237318;
        case 0x23731cu: goto label_23731c;
        case 0x237320u: goto label_237320;
        case 0x237324u: goto label_237324;
        case 0x237328u: goto label_237328;
        case 0x23732cu: goto label_23732c;
        case 0x237330u: goto label_237330;
        case 0x237334u: goto label_237334;
        case 0x237338u: goto label_237338;
        case 0x23733cu: goto label_23733c;
        case 0x237340u: goto label_237340;
        case 0x237344u: goto label_237344;
        case 0x237348u: goto label_237348;
        case 0x23734cu: goto label_23734c;
        case 0x237350u: goto label_237350;
        case 0x237354u: goto label_237354;
        case 0x237358u: goto label_237358;
        case 0x23735cu: goto label_23735c;
        case 0x237360u: goto label_237360;
        case 0x237364u: goto label_237364;
        case 0x237368u: goto label_237368;
        case 0x23736cu: goto label_23736c;
        case 0x237370u: goto label_237370;
        case 0x237374u: goto label_237374;
        case 0x237378u: goto label_237378;
        case 0x23737cu: goto label_23737c;
        case 0x237380u: goto label_237380;
        case 0x237384u: goto label_237384;
        case 0x237388u: goto label_237388;
        case 0x23738cu: goto label_23738c;
        case 0x237390u: goto label_237390;
        case 0x237394u: goto label_237394;
        case 0x237398u: goto label_237398;
        case 0x23739cu: goto label_23739c;
        case 0x2373a0u: goto label_2373a0;
        case 0x2373a4u: goto label_2373a4;
        case 0x2373a8u: goto label_2373a8;
        case 0x2373acu: goto label_2373ac;
        default: break;
    }

    ctx->pc = 0x237078u;

label_237078:
    // 0x237078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23707c:
    // 0x23707c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_237080:
    // 0x237080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237084:
    // 0x237084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_237088:
    // 0x237088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23708c:
    // 0x23708c: 0xc0b6dac  jal         func_2DB6B0
label_237090:
    if (ctx->pc == 0x237090u) {
        ctx->pc = 0x237090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23708Cu;
        // 0x237090: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x237094u;
        goto label_237094;
    }
    ctx->pc = 0x23708Cu;
    SET_GPR_U32(ctx, 31, 0x237094u);
    ctx->pc = 0x237090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23708Cu;
    // 0x237090: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23708Cu, 0x237094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237094u;
label_237094:
    // 0x237094: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x237094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_237098:
    // 0x237098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23709c:
    // 0x23709c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x23709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_2370a0:
    // 0x2370a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2370a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2370a4:
    // 0x2370a4: 0xc04d476  jal         func_1351D8
label_2370a8:
    if (ctx->pc == 0x2370A8u) {
        ctx->pc = 0x2370A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370A4u;
        // 0x2370a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370ACu;
        goto label_2370ac;
    }
    ctx->pc = 0x2370A4u;
    SET_GPR_U32(ctx, 31, 0x2370ACu);
    ctx->pc = 0x2370A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370A4u;
    // 0x2370a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2370A4u, 0x2370ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370ACu;
label_2370ac:
    // 0x2370ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2370acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2370b0:
    // 0x2370b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2370b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2370b4:
    // 0x2370b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2370b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2370b8:
    // 0x2370b8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2370b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2370bc:
    // 0x2370bc: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_2370c0:
    if (ctx->pc == 0x2370C0u) {
        ctx->pc = 0x2370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370BCu;
        // 0x2370c0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370C4u;
        goto label_2370c4;
    }
    ctx->pc = 0x2370BCu;
    {
        const bool branch_taken_0x2370bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370BCu;
        // 0x2370c0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370bc) {
            ctx->pc = 0x2371A8u;
            goto label_2371a8;
        }
    }
    ctx->pc = 0x2370C4u;
label_2370c4:
    // 0x2370c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2370c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2370c8:
    // 0x2370c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2370cc:
    if (ctx->pc == 0x2370CCu) {
        ctx->pc = 0x2370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C8u;
        // 0x2370cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370D0u;
        goto label_2370d0;
    }
    ctx->pc = 0x2370C8u;
    {
        const bool branch_taken_0x2370c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2370c8) {
            ctx->pc = 0x2370CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2370C8u;
            // 0x2370cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2370E0u;
            goto label_2370e0;
        }
    }
    ctx->pc = 0x2370D0u;
label_2370d0:
    // 0x2370d0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_2370d4:
    if (ctx->pc == 0x2370D4u) {
        ctx->pc = 0x2370D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370D0u;
        // 0x2370d4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370D8u;
        goto label_2370d8;
    }
    ctx->pc = 0x2370D0u;
    {
        const bool branch_taken_0x2370d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2370d0) {
            ctx->pc = 0x2370D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2370D0u;
            // 0x2370d4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2370F8u;
            goto label_2370f8;
        }
    }
    ctx->pc = 0x2370D8u;
label_2370d8:
    // 0x2370d8: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2370dc:
    if (ctx->pc == 0x2370DCu) {
        ctx->pc = 0x2370DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370D8u;
        // 0x2370dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370E0u;
        goto label_2370e0;
    }
    ctx->pc = 0x2370D8u;
    {
        const bool branch_taken_0x2370d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370D8u;
        // 0x2370dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370d8) {
            ctx->pc = 0x23739Cu;
            goto label_23739c;
        }
    }
    ctx->pc = 0x2370E0u;
label_2370e0:
    // 0x2370e0: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
label_2370e4:
    if (ctx->pc == 0x2370E4u) {
        ctx->pc = 0x2370E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370E0u;
        // 0x2370e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370E8u;
        goto label_2370e8;
    }
    ctx->pc = 0x2370E0u;
    {
        const bool branch_taken_0x2370e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2370E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370E0u;
        // 0x2370e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370e0) {
            ctx->pc = 0x2372ACu;
            goto label_2372ac;
        }
    }
    ctx->pc = 0x2370E8u;
label_2370e8:
    // 0x2370e8: 0x50620082  beql        $v1, $v0, . + 4 + (0x82 << 2)
label_2370ec:
    if (ctx->pc == 0x2370ECu) {
        ctx->pc = 0x2370ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370E8u;
        // 0x2370ec: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370F0u;
        goto label_2370f0;
    }
    ctx->pc = 0x2370E8u;
    {
        const bool branch_taken_0x2370e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2370e8) {
            ctx->pc = 0x2370ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2370E8u;
            // 0x2370ec: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2372F4u;
            goto label_2372f4;
        }
    }
    ctx->pc = 0x2370F0u;
label_2370f0:
    // 0x2370f0: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2370f4:
    if (ctx->pc == 0x2370F4u) {
        ctx->pc = 0x2370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F0u;
        // 0x2370f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370F8u;
        goto label_2370f8;
    }
    ctx->pc = 0x2370F0u;
    {
        const bool branch_taken_0x2370f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F0u;
        // 0x2370f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370f0) {
            ctx->pc = 0x23739Cu;
            goto label_23739c;
        }
    }
    ctx->pc = 0x2370F8u;
label_2370f8:
    // 0x2370f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2370f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2370fc:
    // 0x2370fc: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2370fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_237100:
    // 0x237100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237104:
    // 0x237104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237108:
    // 0x237108: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23710c:
    // 0x23710c: 0x8c45240c  lw          $a1, 0x240C($v0)
    ctx->pc = 0x23710cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9228)));
label_237110:
    // 0x237110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237114:
    // 0x237114: 0x8c462410  lw          $a2, 0x2410($v0)
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9232)));
label_237118:
    // 0x237118: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23711c:
    // 0x23711c: 0xc0aa15e  jal         func_2A8578
label_237120:
    if (ctx->pc == 0x237120u) {
        ctx->pc = 0x237120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23711Cu;
        // 0x237120: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237124u;
        goto label_237124;
    }
    ctx->pc = 0x23711Cu;
    SET_GPR_U32(ctx, 31, 0x237124u);
    ctx->pc = 0x237120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23711Cu;
    // 0x237120: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23711Cu, 0x237124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237124u;
label_237124:
    // 0x237124: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x237124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_237128:
    // 0x237128: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_23712c:
    // 0x23712c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x23712cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_237130:
    // 0x237130: 0xc07e804  jal         func_1FA010
label_237134:
    if (ctx->pc == 0x237134u) {
        ctx->pc = 0x237134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237130u;
        // 0x237134: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237138u;
        goto label_237138;
    }
    ctx->pc = 0x237130u;
    SET_GPR_U32(ctx, 31, 0x237138u);
    ctx->pc = 0x237134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237130u;
    // 0x237134: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x237130u, 0x237138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237138u;
label_237138:
    // 0x237138: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x237138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23713c:
    // 0x23713c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23713cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_237140:
    // 0x237140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_237144:
    if (ctx->pc == 0x237144u) {
        ctx->pc = 0x237144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237140u;
        // 0x237144: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237148u;
        goto label_237148;
    }
    ctx->pc = 0x237140u;
    {
        const bool branch_taken_0x237140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237140u;
        // 0x237144: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237140) {
            ctx->pc = 0x237160u;
            goto label_237160;
        }
    }
    ctx->pc = 0x237148u;
label_237148:
    // 0x237148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23714c:
    // 0x23714c: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x23714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_237150:
    // 0x237150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237154:
    // 0x237154: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x237154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_237158:
    // 0x237158: 0x800008  jr          $a0
label_23715c:
    if (ctx->pc == 0x23715Cu) {
        ctx->pc = 0x237160u;
        goto label_237160;
    }
    ctx->pc = 0x237158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237160u: goto label_237160;
            case 0x237168u: goto label_237168;
            case 0x237170u: goto label_237170;
            case 0x237178u: goto label_237178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237158u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x237160u;
label_237160:
    // 0x237160: 0x10000006  b           . + 4 + (0x6 << 2)
label_237164:
    if (ctx->pc == 0x237164u) {
        ctx->pc = 0x237164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237160u;
        // 0x237164: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237168u;
        goto label_237168;
    }
    ctx->pc = 0x237160u;
    {
        const bool branch_taken_0x237160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237160u;
        // 0x237164: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237160) {
            ctx->pc = 0x23717Cu;
            goto label_23717c;
        }
    }
    ctx->pc = 0x237168u;
label_237168:
    // 0x237168: 0x10000004  b           . + 4 + (0x4 << 2)
label_23716c:
    if (ctx->pc == 0x23716Cu) {
        ctx->pc = 0x23716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237168u;
        // 0x23716c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237170u;
        goto label_237170;
    }
    ctx->pc = 0x237168u;
    {
        const bool branch_taken_0x237168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237168u;
        // 0x23716c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237168) {
            ctx->pc = 0x23717Cu;
            goto label_23717c;
        }
    }
    ctx->pc = 0x237170u;
label_237170:
    // 0x237170: 0x10000002  b           . + 4 + (0x2 << 2)
label_237174:
    if (ctx->pc == 0x237174u) {
        ctx->pc = 0x237174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237170u;
        // 0x237174: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237178u;
        goto label_237178;
    }
    ctx->pc = 0x237170u;
    {
        const bool branch_taken_0x237170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237170u;
        // 0x237174: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237170) {
            ctx->pc = 0x23717Cu;
            goto label_23717c;
        }
    }
    ctx->pc = 0x237178u;
label_237178:
    // 0x237178: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x237178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23717c:
    // 0x23717c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x23717cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_237180:
    // 0x237180: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x237180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_237184:
    // 0x237184: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x237184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_237188:
    // 0x237188: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_23718c:
    if (ctx->pc == 0x23718Cu) {
        ctx->pc = 0x23718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237188u;
        // 0x23718c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237190u;
        goto label_237190;
    }
    ctx->pc = 0x237188u;
    {
        const bool branch_taken_0x237188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237188u;
        // 0x23718c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237188) {
            ctx->pc = 0x237194u;
            goto label_237194;
        }
    }
    ctx->pc = 0x237190u;
label_237190:
    // 0x237190: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x237190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_237194:
    // 0x237194: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x237194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237198:
    // 0x237198: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x237198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23719c:
    // 0x23719c: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x23719cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
label_2371a0:
    // 0x2371a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2371a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2371a4:
    // 0x2371a4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2371a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2371a8:
    // 0x2371a8: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2371a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_2371ac:
    // 0x2371ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2371b0:
    if (ctx->pc == 0x2371B0u) {
        ctx->pc = 0x2371B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371ACu;
        // 0x2371b0: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371B4u;
        goto label_2371b4;
    }
    ctx->pc = 0x2371ACu;
    {
        const bool branch_taken_0x2371ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371ACu;
        // 0x2371b0: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371ac) {
            ctx->pc = 0x2371D4u;
            goto label_2371d4;
        }
    }
    ctx->pc = 0x2371B4u;
label_2371b4:
    // 0x2371b4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2371b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2371b8:
    // 0x2371b8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2371bc:
    // 0x2371bc: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x2371bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_2371c0:
    // 0x2371c0: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x2371c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_2371c4:
    // 0x2371c4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2371c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2371c8:
    // 0x2371c8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2371c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2371cc:
    // 0x2371cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2371ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2371d0:
    // 0x2371d0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2371d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2371d4:
    // 0x2371d4: 0xc055f06  jal         func_157C18
label_2371d8:
    if (ctx->pc == 0x2371D8u) {
        ctx->pc = 0x2371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371D4u;
        // 0x2371d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371DCu;
        goto label_2371dc;
    }
    ctx->pc = 0x2371D4u;
    SET_GPR_U32(ctx, 31, 0x2371DCu);
    ctx->pc = 0x2371D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371D4u;
    // 0x2371d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2371D4u, 0x2371DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371DCu;
label_2371dc:
    // 0x2371dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2371e0:
    if (ctx->pc == 0x2371E0u) {
        ctx->pc = 0x2371E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371DCu;
        // 0x2371e0: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371E4u;
        goto label_2371e4;
    }
    ctx->pc = 0x2371DCu;
    {
        const bool branch_taken_0x2371dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371DCu;
        // 0x2371e0: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371dc) {
            ctx->pc = 0x2371F4u;
            goto label_2371f4;
        }
    }
    ctx->pc = 0x2371E4u;
label_2371e4:
    // 0x2371e4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2371e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_2371e8:
    // 0x2371e8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2371e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_2371ec:
    // 0x2371ec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2371ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_2371f0:
    // 0x2371f0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2371f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2371f4:
    // 0x2371f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2371f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2371f8:
    // 0x2371f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2371f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2371fc:
    // 0x2371fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2371fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237200:
    // 0x237200: 0xc053e7c  jal         func_14F9F0
label_237204:
    if (ctx->pc == 0x237204u) {
        ctx->pc = 0x237204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237200u;
        // 0x237204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237208u;
        goto label_237208;
    }
    ctx->pc = 0x237200u;
    SET_GPR_U32(ctx, 31, 0x237208u);
    ctx->pc = 0x237204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237200u;
    // 0x237204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237200u, 0x237208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237208u;
label_237208:
    // 0x237208: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x237208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_23720c:
    // 0x23720c: 0xc053e4a  jal         func_14F928
label_237210:
    if (ctx->pc == 0x237210u) {
        ctx->pc = 0x237210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23720Cu;
        // 0x237210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237214u;
        goto label_237214;
    }
    ctx->pc = 0x23720Cu;
    SET_GPR_U32(ctx, 31, 0x237214u);
    ctx->pc = 0x237210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23720Cu;
    // 0x237210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23720Cu, 0x237214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237214u;
label_237214:
    // 0x237214: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_237218:
    // 0x237218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23721c:
    if (ctx->pc == 0x23721Cu) {
        ctx->pc = 0x23721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237218u;
        // 0x23721c: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237220u;
        goto label_237220;
    }
    ctx->pc = 0x237218u;
    {
        const bool branch_taken_0x237218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237218u;
        // 0x23721c: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237218) {
            ctx->pc = 0x23722Cu;
            goto label_23722c;
        }
    }
    ctx->pc = 0x237220u;
label_237220:
    // 0x237220: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x237220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_237224:
    // 0x237224: 0x10000014  b           . + 4 + (0x14 << 2)
label_237228:
    if (ctx->pc == 0x237228u) {
        ctx->pc = 0x237228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237224u;
        // 0x237228: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23722Cu;
        goto label_23722c;
    }
    ctx->pc = 0x237224u;
    {
        const bool branch_taken_0x237224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237224u;
        // 0x237228: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237224) {
            ctx->pc = 0x237278u;
            goto label_237278;
        }
    }
    ctx->pc = 0x23722Cu;
label_23722c:
    // 0x23722c: 0xc0b6ddc  jal         func_2DB770
label_237230:
    if (ctx->pc == 0x237230u) {
        ctx->pc = 0x237234u;
        goto label_237234;
    }
    ctx->pc = 0x23722Cu;
    SET_GPR_U32(ctx, 31, 0x237234u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x23722Cu, 0x237234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237234u;
label_237234:
    // 0x237234: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x237234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_237238:
    // 0x237238: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_23723c:
    // 0x23723c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_237240:
    // 0x237240: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x237240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_237244:
    // 0x237244: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237248:
    if (ctx->pc == 0x237248u) {
        ctx->pc = 0x237248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237244u;
        // 0x237248: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23724Cu;
        goto label_23724c;
    }
    ctx->pc = 0x237244u;
    {
        const bool branch_taken_0x237244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237244) {
            ctx->pc = 0x237248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237244u;
            // 0x237248: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23725Cu;
            goto label_23725c;
        }
    }
    ctx->pc = 0x23724Cu;
label_23724c:
    // 0x23724c: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x23724cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_237250:
    // 0x237250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_237254:
    // 0x237254: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x237254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_237258:
    // 0x237258: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x237258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23725c:
    // 0x23725c: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
label_237260:
    // 0x237260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237264:
    // 0x237264: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237268:
    if (ctx->pc == 0x237268u) {
        ctx->pc = 0x237268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237264u;
        // 0x237268: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23726Cu;
        goto label_23726c;
    }
    ctx->pc = 0x237264u;
    {
        const bool branch_taken_0x237264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237264) {
            ctx->pc = 0x237268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237264u;
            // 0x237268: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23727Cu;
            goto label_23727c;
        }
    }
    ctx->pc = 0x23726Cu;
label_23726c:
    // 0x23726c: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x23726cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_237270:
    // 0x237270: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x237270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_237274:
    // 0x237274: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x237274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_237278:
    // 0x237278: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x237278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_23727c:
    // 0x23727c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_237280:
    // 0x237280: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
label_237284:
    if (ctx->pc == 0x237284u) {
        ctx->pc = 0x237284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237280u;
        // 0x237284: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237288u;
        goto label_237288;
    }
    ctx->pc = 0x237280u;
    {
        const bool branch_taken_0x237280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237280) {
            ctx->pc = 0x237284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237280u;
            // 0x237284: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23739Cu;
            goto label_23739c;
        }
    }
    ctx->pc = 0x237288u;
label_237288:
    // 0x237288: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x237288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_23728c:
    // 0x23728c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_237290:
    if (ctx->pc == 0x237290u) {
        ctx->pc = 0x237290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23728Cu;
        // 0x237290: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237294u;
        goto label_237294;
    }
    ctx->pc = 0x23728Cu;
    {
        const bool branch_taken_0x23728c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x237290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23728Cu;
        // 0x237290: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23728c) {
            ctx->pc = 0x2372A4u;
            goto label_2372a4;
        }
    }
    ctx->pc = 0x237294u;
label_237294:
    // 0x237294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x237294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237298:
    // 0x237298: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x237298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_23729c:
    // 0x23729c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23729cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2372a0:
    // 0x2372a0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2372a4:
    // 0x2372a4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2372a8:
    if (ctx->pc == 0x2372A8u) {
        ctx->pc = 0x2372A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372A4u;
        // 0x2372a8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2372ACu;
        goto label_2372ac;
    }
    ctx->pc = 0x2372A4u;
    {
        const bool branch_taken_0x2372a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372A4u;
        // 0x2372a8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372a4) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x2372ACu;
label_2372ac:
    // 0x2372ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2372acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2372b0:
    // 0x2372b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2372b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2372b4:
    // 0x2372b4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2372b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_2372b8:
    // 0x2372b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2372b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2372bc:
    // 0x2372bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2372bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2372c0:
    // 0x2372c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2372c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2372c4:
    // 0x2372c4: 0x8c452420  lw          $a1, 0x2420($v0)
    ctx->pc = 0x2372c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9248)));
label_2372c8:
    // 0x2372c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2372c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2372cc:
    // 0x2372cc: 0x8c462424  lw          $a2, 0x2424($v0)
    ctx->pc = 0x2372ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9252)));
label_2372d0:
    // 0x2372d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2372d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2372d4:
    // 0x2372d4: 0xc0aa15e  jal         func_2A8578
label_2372d8:
    if (ctx->pc == 0x2372D8u) {
        ctx->pc = 0x2372D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D4u;
        // 0x2372d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2372DCu;
        goto label_2372dc;
    }
    ctx->pc = 0x2372D4u;
    SET_GPR_U32(ctx, 31, 0x2372DCu);
    ctx->pc = 0x2372D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372D4u;
    // 0x2372d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2372D4u, 0x2372DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372DCu;
label_2372dc:
    // 0x2372dc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2372dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2372e0:
    // 0x2372e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2372e4:
    // 0x2372e4: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x2372e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
label_2372e8:
    // 0x2372e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2372ec:
    // 0x2372ec: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2372ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2372f0:
    // 0x2372f0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_2372f4:
    // 0x2372f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2372f8:
    if (ctx->pc == 0x2372F8u) {
        ctx->pc = 0x2372F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372F4u;
        // 0x2372f8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2372FCu;
        goto label_2372fc;
    }
    ctx->pc = 0x2372F4u;
    {
        const bool branch_taken_0x2372f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372F4u;
        // 0x2372f8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372f4) {
            ctx->pc = 0x23731Cu;
            goto label_23731c;
        }
    }
    ctx->pc = 0x2372FCu;
label_2372fc:
    // 0x2372fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2372fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_237300:
    // 0x237300: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_237304:
    // 0x237304: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x237304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_237308:
    // 0x237308: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_23730c:
    // 0x23730c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23730cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_237310:
    // 0x237310: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x237310u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_237314:
    // 0x237314: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x237314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_237318:
    // 0x237318: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x237318u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_23731c:
    // 0x23731c: 0xc055f06  jal         func_157C18
label_237320:
    if (ctx->pc == 0x237320u) {
        ctx->pc = 0x237320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23731Cu;
        // 0x237320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237324u;
        goto label_237324;
    }
    ctx->pc = 0x23731Cu;
    SET_GPR_U32(ctx, 31, 0x237324u);
    ctx->pc = 0x237320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23731Cu;
    // 0x237320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23731Cu, 0x237324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237324u;
label_237324:
    // 0x237324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_237328:
    if (ctx->pc == 0x237328u) {
        ctx->pc = 0x23732Cu;
        goto label_23732c;
    }
    ctx->pc = 0x237324u;
    {
        const bool branch_taken_0x237324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237324) {
            ctx->pc = 0x237334u;
            goto label_237334;
        }
    }
    ctx->pc = 0x23732Cu;
label_23732c:
    // 0x23732c: 0xc09c176  jal         func_2705D8
label_237330:
    if (ctx->pc == 0x237330u) {
        ctx->pc = 0x237330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23732Cu;
        // 0x237330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237334u;
        goto label_237334;
    }
    ctx->pc = 0x23732Cu;
    SET_GPR_U32(ctx, 31, 0x237334u);
    ctx->pc = 0x237330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23732Cu;
    // 0x237330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23732Cu, 0x237334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237334u;
label_237334:
    // 0x237334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237338:
    // 0x237338: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23733c:
    // 0x23733c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237340:
    // 0x237340: 0xc053e7c  jal         func_14F9F0
label_237344:
    if (ctx->pc == 0x237344u) {
        ctx->pc = 0x237344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237340u;
        // 0x237344: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237348u;
        goto label_237348;
    }
    ctx->pc = 0x237340u;
    SET_GPR_U32(ctx, 31, 0x237348u);
    ctx->pc = 0x237344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237340u;
    // 0x237344: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237340u, 0x237348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237348u;
label_237348:
    // 0x237348: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x237348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_23734c:
    // 0x23734c: 0xc053e4a  jal         func_14F928
label_237350:
    if (ctx->pc == 0x237350u) {
        ctx->pc = 0x237350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23734Cu;
        // 0x237350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237354u;
        goto label_237354;
    }
    ctx->pc = 0x23734Cu;
    SET_GPR_U32(ctx, 31, 0x237354u);
    ctx->pc = 0x237350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23734Cu;
    // 0x237350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23734Cu, 0x237354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237354u;
label_237354:
    // 0x237354: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x237354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_237358:
    // 0x237358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23735c:
    // 0x23735c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_237360:
    if (ctx->pc == 0x237360u) {
        ctx->pc = 0x237360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23735Cu;
        // 0x237360: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237364u;
        goto label_237364;
    }
    ctx->pc = 0x23735Cu;
    {
        const bool branch_taken_0x23735c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23735Cu;
        // 0x237360: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23735c) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x237364u;
label_237364:
    // 0x237364: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_237368:
    // 0x237368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23736c:
    // 0x23736c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23736cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237370:
    // 0x237370: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x237370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_237374:
    // 0x237374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237378:
    // 0x237378: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_23737c:
    // 0x23737c: 0x40f809  jalr        $v0
label_237380:
    if (ctx->pc == 0x237380u) {
        ctx->pc = 0x237380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23737Cu;
        // 0x237380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237384u;
        goto label_237384;
    }
    ctx->pc = 0x23737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237384u);
        ctx->pc = 0x237380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23737Cu;
        // 0x237380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23737Cu, 0x237384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237384u;
label_237384:
    // 0x237384: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x237384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_237388:
    // 0x237388: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_23738c:
    if (ctx->pc == 0x23738Cu) {
        ctx->pc = 0x23738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237388u;
        // 0x23738c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237390u;
        goto label_237390;
    }
    ctx->pc = 0x237388u;
    {
        const bool branch_taken_0x237388 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x237388) {
            ctx->pc = 0x23738Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237388u;
            // 0x23738c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23739Cu;
            goto label_23739c;
        }
    }
    ctx->pc = 0x237390u;
label_237390:
    // 0x237390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237394:
    // 0x237394: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x237394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_237398:
    // 0x237398: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23739c:
    // 0x23739c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23739cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2373a0:
    // 0x2373a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2373a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2373a4:
    // 0x2373a4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2373a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2373a8:
    // 0x2373a8: 0x3e00008  jr          $ra
label_2373ac:
    if (ctx->pc == 0x2373ACu) {
        ctx->pc = 0x2373ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A8u;
        // 0x2373ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373B0u;
        goto label_fallthrough_0x2373a8;
    }
    ctx->pc = 0x2373A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A8u;
        // 0x2373ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2373A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2373a8:
    ctx->pc = 0x2373B0u;
}
