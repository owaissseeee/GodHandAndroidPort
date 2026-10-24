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

// Function: func_00238F10
// Address: 0x238f10 - 0x239240
void func_00238F10_0x238f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00238F10_0x238f10");
#endif

    switch (ctx->pc) {
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        case 0x238f3cu: goto label_238f3c;
        case 0x238f40u: goto label_238f40;
        case 0x238f44u: goto label_238f44;
        case 0x238f48u: goto label_238f48;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f50u: goto label_238f50;
        case 0x238f54u: goto label_238f54;
        case 0x238f58u: goto label_238f58;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f60u: goto label_238f60;
        case 0x238f64u: goto label_238f64;
        case 0x238f68u: goto label_238f68;
        case 0x238f6cu: goto label_238f6c;
        case 0x238f70u: goto label_238f70;
        case 0x238f74u: goto label_238f74;
        case 0x238f78u: goto label_238f78;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f80u: goto label_238f80;
        case 0x238f84u: goto label_238f84;
        case 0x238f88u: goto label_238f88;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f90u: goto label_238f90;
        case 0x238f94u: goto label_238f94;
        case 0x238f98u: goto label_238f98;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fa0u: goto label_238fa0;
        case 0x238fa4u: goto label_238fa4;
        case 0x238fa8u: goto label_238fa8;
        case 0x238facu: goto label_238fac;
        case 0x238fb0u: goto label_238fb0;
        case 0x238fb4u: goto label_238fb4;
        case 0x238fb8u: goto label_238fb8;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fc0u: goto label_238fc0;
        case 0x238fc4u: goto label_238fc4;
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        case 0x239104u: goto label_239104;
        case 0x239108u: goto label_239108;
        case 0x23910cu: goto label_23910c;
        case 0x239110u: goto label_239110;
        case 0x239114u: goto label_239114;
        case 0x239118u: goto label_239118;
        case 0x23911cu: goto label_23911c;
        case 0x239120u: goto label_239120;
        case 0x239124u: goto label_239124;
        case 0x239128u: goto label_239128;
        case 0x23912cu: goto label_23912c;
        case 0x239130u: goto label_239130;
        case 0x239134u: goto label_239134;
        case 0x239138u: goto label_239138;
        case 0x23913cu: goto label_23913c;
        case 0x239140u: goto label_239140;
        case 0x239144u: goto label_239144;
        case 0x239148u: goto label_239148;
        case 0x23914cu: goto label_23914c;
        case 0x239150u: goto label_239150;
        case 0x239154u: goto label_239154;
        case 0x239158u: goto label_239158;
        case 0x23915cu: goto label_23915c;
        case 0x239160u: goto label_239160;
        case 0x239164u: goto label_239164;
        case 0x239168u: goto label_239168;
        case 0x23916cu: goto label_23916c;
        case 0x239170u: goto label_239170;
        case 0x239174u: goto label_239174;
        case 0x239178u: goto label_239178;
        case 0x23917cu: goto label_23917c;
        case 0x239180u: goto label_239180;
        case 0x239184u: goto label_239184;
        case 0x239188u: goto label_239188;
        case 0x23918cu: goto label_23918c;
        case 0x239190u: goto label_239190;
        case 0x239194u: goto label_239194;
        case 0x239198u: goto label_239198;
        case 0x23919cu: goto label_23919c;
        case 0x2391a0u: goto label_2391a0;
        case 0x2391a4u: goto label_2391a4;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391acu: goto label_2391ac;
        case 0x2391b0u: goto label_2391b0;
        case 0x2391b4u: goto label_2391b4;
        case 0x2391b8u: goto label_2391b8;
        case 0x2391bcu: goto label_2391bc;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391c4u: goto label_2391c4;
        case 0x2391c8u: goto label_2391c8;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d0u: goto label_2391d0;
        case 0x2391d4u: goto label_2391d4;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391dcu: goto label_2391dc;
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e4u: goto label_2391e4;
        case 0x2391e8u: goto label_2391e8;
        case 0x2391ecu: goto label_2391ec;
        case 0x2391f0u: goto label_2391f0;
        case 0x2391f4u: goto label_2391f4;
        case 0x2391f8u: goto label_2391f8;
        case 0x2391fcu: goto label_2391fc;
        case 0x239200u: goto label_239200;
        case 0x239204u: goto label_239204;
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        default: break;
    }

    ctx->pc = 0x238f10u;

label_238f10:
    // 0x238f10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238f14:
    // 0x238f14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_238f18:
    // 0x238f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238f1c:
    // 0x238f1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_238f20:
    // 0x238f20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x238f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_238f24:
    // 0x238f24: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x238f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238f28:
    // 0x238f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_238f2c:
    // 0x238f2c: 0xc0b6dac  jal         func_2DB6B0
label_238f30:
    if (ctx->pc == 0x238F30u) {
        ctx->pc = 0x238F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F2Cu;
        // 0x238f30: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F34u;
        goto label_238f34;
    }
    ctx->pc = 0x238F2Cu;
    SET_GPR_U32(ctx, 31, 0x238F34u);
    ctx->pc = 0x238F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F2Cu;
    // 0x238f30: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x238F2Cu, 0x238F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F34u;
label_238f34:
    // 0x238f34: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_238f38:
    // 0x238f38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238f3c:
    // 0x238f3c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x238f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_238f40:
    // 0x238f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238f44:
    // 0x238f44: 0xc04d476  jal         func_1351D8
label_238f48:
    if (ctx->pc == 0x238F48u) {
        ctx->pc = 0x238F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F44u;
        // 0x238f48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F4Cu;
        goto label_238f4c;
    }
    ctx->pc = 0x238F44u;
    SET_GPR_U32(ctx, 31, 0x238F4Cu);
    ctx->pc = 0x238F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F44u;
    // 0x238f48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238F44u, 0x238F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F4Cu;
label_238f4c:
    // 0x238f4c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x238f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_238f50:
    // 0x238f50: 0x10710033  beq         $v1, $s1, . + 4 + (0x33 << 2)
label_238f54:
    if (ctx->pc == 0x238F54u) {
        ctx->pc = 0x238F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F50u;
        // 0x238f54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F58u;
        goto label_238f58;
    }
    ctx->pc = 0x238F50u;
    {
        const bool branch_taken_0x238f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x238F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F50u;
        // 0x238f54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f50) {
            ctx->pc = 0x239020u;
            goto label_239020;
        }
    }
    ctx->pc = 0x238F58u;
label_238f58:
    // 0x238f58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_238f5c:
    if (ctx->pc == 0x238F5Cu) {
        ctx->pc = 0x238F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F58u;
        // 0x238f5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F60u;
        goto label_238f60;
    }
    ctx->pc = 0x238F58u;
    {
        const bool branch_taken_0x238f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f58) {
            ctx->pc = 0x238F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238F58u;
            // 0x238f5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238F70u;
            goto label_238f70;
        }
    }
    ctx->pc = 0x238F60u;
label_238f60:
    // 0x238f60: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_238f64:
    if (ctx->pc == 0x238F64u) {
        ctx->pc = 0x238F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F60u;
        // 0x238f64: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F68u;
        goto label_238f68;
    }
    ctx->pc = 0x238F60u;
    {
        const bool branch_taken_0x238f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f60) {
            ctx->pc = 0x238F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238F60u;
            // 0x238f64: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238F88u;
            goto label_238f88;
        }
    }
    ctx->pc = 0x238F68u;
label_238f68:
    // 0x238f68: 0x100000ae  b           . + 4 + (0xAE << 2)
label_238f6c:
    if (ctx->pc == 0x238F6Cu) {
        ctx->pc = 0x238F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F68u;
        // 0x238f6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F70u;
        goto label_238f70;
    }
    ctx->pc = 0x238F68u;
    {
        const bool branch_taken_0x238f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F68u;
        // 0x238f6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f68) {
            ctx->pc = 0x239224u;
            goto label_239224;
        }
    }
    ctx->pc = 0x238F70u;
label_238f70:
    // 0x238f70: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
label_238f74:
    if (ctx->pc == 0x238F74u) {
        ctx->pc = 0x238F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F70u;
        // 0x238f74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F78u;
        goto label_238f78;
    }
    ctx->pc = 0x238F70u;
    {
        const bool branch_taken_0x238f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F70u;
        // 0x238f74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f70) {
            ctx->pc = 0x2390F8u;
            goto label_2390f8;
        }
    }
    ctx->pc = 0x238F78u;
label_238f78:
    // 0x238f78: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
label_238f7c:
    if (ctx->pc == 0x238F7Cu) {
        ctx->pc = 0x238F80u;
        goto label_238f80;
    }
    ctx->pc = 0x238F78u;
    {
        const bool branch_taken_0x238f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x238f78) {
            ctx->pc = 0x239164u;
            goto label_239164;
        }
    }
    ctx->pc = 0x238F80u;
label_238f80:
    // 0x238f80: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_238f84:
    if (ctx->pc == 0x238F84u) {
        ctx->pc = 0x238F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F80u;
        // 0x238f84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F88u;
        goto label_238f88;
    }
    ctx->pc = 0x238F80u;
    {
        const bool branch_taken_0x238f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F80u;
        // 0x238f84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f80) {
            ctx->pc = 0x239224u;
            goto label_239224;
        }
    }
    ctx->pc = 0x238F88u;
label_238f88:
    // 0x238f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238f8c:
    // 0x238f8c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x238f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_238f90:
    // 0x238f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238f94:
    // 0x238f94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_238f98:
    // 0x238f98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238f98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238f9c:
    // 0x238f9c: 0x8c4539dc  lw          $a1, 0x39DC($v0)
    ctx->pc = 0x238f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14812)));
label_238fa0:
    // 0x238fa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238fa4:
    // 0x238fa4: 0x8c4639e0  lw          $a2, 0x39E0($v0)
    ctx->pc = 0x238fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14816)));
label_238fa8:
    // 0x238fa8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_238fac:
    // 0x238fac: 0xc0aa15e  jal         func_2A8578
label_238fb0:
    if (ctx->pc == 0x238FB0u) {
        ctx->pc = 0x238FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FACu;
        // 0x238fb0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FB4u;
        goto label_238fb4;
    }
    ctx->pc = 0x238FACu;
    SET_GPR_U32(ctx, 31, 0x238FB4u);
    ctx->pc = 0x238FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FACu;
    // 0x238fb0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238FACu, 0x238FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FB4u;
label_238fb4:
    // 0x238fb4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x238fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_238fb8:
    // 0x238fb8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x238fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_238fbc:
    // 0x238fbc: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_238fc0:
    // 0x238fc0: 0xc07e804  jal         func_1FA010
label_238fc4:
    if (ctx->pc == 0x238FC4u) {
        ctx->pc = 0x238FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FC0u;
        // 0x238fc4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FC8u;
        goto label_238fc8;
    }
    ctx->pc = 0x238FC0u;
    SET_GPR_U32(ctx, 31, 0x238FC8u);
    ctx->pc = 0x238FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FC0u;
    // 0x238fc4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x238FC0u, 0x238FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FC8u;
label_238fc8:
    // 0x238fc8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_238fcc:
    // 0x238fcc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_238fd0:
    // 0x238fd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_238fd4:
    if (ctx->pc == 0x238FD4u) {
        ctx->pc = 0x238FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FD0u;
        // 0x238fd4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FD8u;
        goto label_238fd8;
    }
    ctx->pc = 0x238FD0u;
    {
        const bool branch_taken_0x238fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FD0u;
        // 0x238fd4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fd0) {
            ctx->pc = 0x238FF0u;
            goto label_238ff0;
        }
    }
    ctx->pc = 0x238FD8u;
label_238fd8:
    // 0x238fd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_238fdc:
    // 0x238fdc: 0x2442a3e0  addiu       $v0, $v0, -0x5C20
    ctx->pc = 0x238fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
label_238fe0:
    // 0x238fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_238fe4:
    // 0x238fe4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238fe8:
    // 0x238fe8: 0x800008  jr          $a0
label_238fec:
    if (ctx->pc == 0x238FECu) {
        ctx->pc = 0x238FF0u;
        goto label_238ff0;
    }
    ctx->pc = 0x238FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238FF0u: goto label_238ff0;
            case 0x238FF8u: goto label_238ff8;
            case 0x239000u: goto label_239000;
            case 0x239008u: goto label_239008;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238FF0u;
label_238ff0:
    // 0x238ff0: 0x10000006  b           . + 4 + (0x6 << 2)
label_238ff4:
    if (ctx->pc == 0x238FF4u) {
        ctx->pc = 0x238FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF0u;
        // 0x238ff4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FF8u;
        goto label_238ff8;
    }
    ctx->pc = 0x238FF0u;
    {
        const bool branch_taken_0x238ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF0u;
        // 0x238ff4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ff0) {
            ctx->pc = 0x23900Cu;
            goto label_23900c;
        }
    }
    ctx->pc = 0x238FF8u;
label_238ff8:
    // 0x238ff8: 0x10000004  b           . + 4 + (0x4 << 2)
label_238ffc:
    if (ctx->pc == 0x238FFCu) {
        ctx->pc = 0x238FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF8u;
        // 0x238ffc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239000u;
        goto label_239000;
    }
    ctx->pc = 0x238FF8u;
    {
        const bool branch_taken_0x238ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF8u;
        // 0x238ffc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ff8) {
            ctx->pc = 0x23900Cu;
            goto label_23900c;
        }
    }
    ctx->pc = 0x239000u;
label_239000:
    // 0x239000: 0x10000002  b           . + 4 + (0x2 << 2)
label_239004:
    if (ctx->pc == 0x239004u) {
        ctx->pc = 0x239004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239000u;
        // 0x239004: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239008u;
        goto label_239008;
    }
    ctx->pc = 0x239000u;
    {
        const bool branch_taken_0x239000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239000u;
        // 0x239004: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239000) {
            ctx->pc = 0x23900Cu;
            goto label_23900c;
        }
    }
    ctx->pc = 0x239008u;
label_239008:
    // 0x239008: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x239008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23900c:
    // 0x23900c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x23900cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_239010:
    // 0x239010: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239014:
    // 0x239014: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x239014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
label_239018:
    // 0x239018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23901c:
    // 0x23901c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23901cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239020:
    // 0x239020: 0xc055f06  jal         func_157C18
label_239024:
    if (ctx->pc == 0x239024u) {
        ctx->pc = 0x239024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239020u;
        // 0x239024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239028u;
        goto label_239028;
    }
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x239024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239020u;
    // 0x239024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239020u, 0x239028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23902c:
    if (ctx->pc == 0x23902Cu) {
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239030u;
        goto label_239030;
    }
    ctx->pc = 0x239028u;
    {
        const bool branch_taken_0x239028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239028) {
            ctx->pc = 0x239040u;
            goto label_239040;
        }
    }
    ctx->pc = 0x239030u;
label_239030:
    // 0x239030: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x239030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_239034:
    // 0x239034: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x239034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_239038:
    // 0x239038: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x239038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_23903c:
    // 0x23903c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23903cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_239040:
    // 0x239040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_239044:
    // 0x239044: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_239048:
    // 0x239048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23904c:
    // 0x23904c: 0xc053e7c  jal         func_14F9F0
label_239050:
    if (ctx->pc == 0x239050u) {
        ctx->pc = 0x239050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23904Cu;
        // 0x239050: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239054u;
        goto label_239054;
    }
    ctx->pc = 0x23904Cu;
    SET_GPR_U32(ctx, 31, 0x239054u);
    ctx->pc = 0x239050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23904Cu;
    // 0x239050: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23904Cu, 0x239054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239054u;
label_239054:
    // 0x239054: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x239054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_239058:
    // 0x239058: 0xc053e4a  jal         func_14F928
label_23905c:
    if (ctx->pc == 0x23905Cu) {
        ctx->pc = 0x23905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239058u;
        // 0x23905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239060u;
        goto label_239060;
    }
    ctx->pc = 0x239058u;
    SET_GPR_U32(ctx, 31, 0x239060u);
    ctx->pc = 0x23905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239058u;
    // 0x23905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239058u, 0x239060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239060u;
label_239060:
    // 0x239060: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_239064:
    // 0x239064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239068:
    if (ctx->pc == 0x239068u) {
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23906Cu;
        goto label_23906c;
    }
    ctx->pc = 0x239064u;
    {
        const bool branch_taken_0x239064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239064) {
            ctx->pc = 0x239078u;
            goto label_239078;
        }
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239070:
    // 0x239070: 0x10000014  b           . + 4 + (0x14 << 2)
label_239074:
    if (ctx->pc == 0x239074u) {
        ctx->pc = 0x239074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239070u;
        // 0x239074: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239078u;
        goto label_239078;
    }
    ctx->pc = 0x239070u;
    {
        const bool branch_taken_0x239070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239070u;
        // 0x239074: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239070) {
            ctx->pc = 0x2390C4u;
            goto label_2390c4;
        }
    }
    ctx->pc = 0x239078u;
label_239078:
    // 0x239078: 0xc0b6ddc  jal         func_2DB770
label_23907c:
    if (ctx->pc == 0x23907Cu) {
        ctx->pc = 0x239080u;
        goto label_239080;
    }
    ctx->pc = 0x239078u;
    SET_GPR_U32(ctx, 31, 0x239080u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x239078u, 0x239080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239080u;
label_239080:
    // 0x239080: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_239084:
    // 0x239084: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x239084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_239088:
    // 0x239088: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x239088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23908c:
    // 0x23908c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x23908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_239090:
    // 0x239090: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_239094:
    if (ctx->pc == 0x239094u) {
        ctx->pc = 0x239094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239090u;
        // 0x239094: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239098u;
        goto label_239098;
    }
    ctx->pc = 0x239090u;
    {
        const bool branch_taken_0x239090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239090) {
            ctx->pc = 0x239094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239090u;
            // 0x239094: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2390A8u;
            goto label_2390a8;
        }
    }
    ctx->pc = 0x239098u;
label_239098:
    // 0x239098: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x239098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_23909c:
    // 0x23909c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2390a0:
    // 0x2390a0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2390a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2390a4:
    // 0x2390a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2390a8:
    // 0x2390a8: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
label_2390ac:
    // 0x2390ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2390acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2390b0:
    // 0x2390b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2390b4:
    if (ctx->pc == 0x2390B4u) {
        ctx->pc = 0x2390B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390B0u;
        // 0x2390b4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390B8u;
        goto label_2390b8;
    }
    ctx->pc = 0x2390B0u;
    {
        const bool branch_taken_0x2390b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390b0) {
            ctx->pc = 0x2390B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2390B0u;
            // 0x2390b4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2390C8u;
            goto label_2390c8;
        }
    }
    ctx->pc = 0x2390B8u;
label_2390b8:
    // 0x2390b8: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2390b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2390bc:
    // 0x2390bc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2390bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2390c0:
    // 0x2390c0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2390c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2390c4:
    // 0x2390c4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2390c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2390c8:
    // 0x2390c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2390c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2390cc:
    // 0x2390cc: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_2390d0:
    if (ctx->pc == 0x2390D0u) {
        ctx->pc = 0x2390D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390CCu;
        // 0x2390d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390D4u;
        goto label_2390d4;
    }
    ctx->pc = 0x2390CCu;
    {
        const bool branch_taken_0x2390cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390cc) {
            ctx->pc = 0x2390D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2390CCu;
            // 0x2390d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239224u;
            goto label_239224;
        }
    }
    ctx->pc = 0x2390D4u;
label_2390d4:
    // 0x2390d4: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x2390d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2390d8:
    // 0x2390d8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_2390dc:
    if (ctx->pc == 0x2390DCu) {
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390E0u;
        goto label_2390e0;
    }
    ctx->pc = 0x2390D8u;
    {
        const bool branch_taken_0x2390d8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390d8) {
            ctx->pc = 0x2390F0u;
            goto label_2390f0;
        }
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2390e4:
    // 0x2390e4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2390e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2390e8:
    // 0x2390e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2390e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2390ec:
    // 0x2390ec: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2390ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2390f0:
    // 0x2390f0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2390f4:
    if (ctx->pc == 0x2390F4u) {
        ctx->pc = 0x2390F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F0u;
        // 0x2390f4: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390F8u;
        goto label_2390f8;
    }
    ctx->pc = 0x2390F0u;
    {
        const bool branch_taken_0x2390f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F0u;
        // 0x2390f4: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390f0) {
            ctx->pc = 0x239220u;
            goto label_239220;
        }
    }
    ctx->pc = 0x2390F8u;
label_2390f8:
    // 0x2390f8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2390f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2390fc:
    // 0x2390fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2390fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239100:
    // 0x239100: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_239104:
    // 0x239104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239108:
    // 0x239108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23910c:
    // 0x23910c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23910cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239110:
    // 0x239110: 0x8c4539e4  lw          $a1, 0x39E4($v0)
    ctx->pc = 0x239110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14820)));
label_239114:
    // 0x239114: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239118:
    // 0x239118: 0x8c4639e8  lw          $a2, 0x39E8($v0)
    ctx->pc = 0x239118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14824)));
label_23911c:
    // 0x23911c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_239120:
    // 0x239120: 0xc0aa15e  jal         func_2A8578
label_239124:
    if (ctx->pc == 0x239124u) {
        ctx->pc = 0x239124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239120u;
        // 0x239124: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239128u;
        goto label_239128;
    }
    ctx->pc = 0x239120u;
    SET_GPR_U32(ctx, 31, 0x239128u);
    ctx->pc = 0x239124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239120u;
    // 0x239124: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239120u, 0x239128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239128u;
label_239128:
    // 0x239128: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_23912c:
    // 0x23912c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_239130:
    // 0x239130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x239130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_239134:
    // 0x239134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239138:
    // 0x239138: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x239138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23913c:
    // 0x23913c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23913cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239140:
    // 0x239140: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x239140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
label_239144:
    // 0x239144: 0xc0c1880  jal         func_306200
label_239148:
    if (ctx->pc == 0x239148u) {
        ctx->pc = 0x239148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239144u;
        // 0x239148: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23914Cu;
        goto label_23914c;
    }
    ctx->pc = 0x239144u;
    SET_GPR_U32(ctx, 31, 0x23914Cu);
    ctx->pc = 0x239148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239144u;
    // 0x239148: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x239144u, 0x23914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23914Cu;
label_23914c:
    // 0x23914c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23914cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239150:
    // 0x239150: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x239150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_239154:
    // 0x239154: 0xa6110568  sh          $s1, 0x568($s0)
    ctx->pc = 0x239154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 17));
label_239158:
    // 0x239158: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23915c:
    // 0x23915c: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x23915cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
label_239160:
    // 0x239160: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239164:
    // 0x239164: 0xc055f06  jal         func_157C18
label_239168:
    if (ctx->pc == 0x239168u) {
        ctx->pc = 0x239168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239164u;
        // 0x239168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23916Cu;
        goto label_23916c;
    }
    ctx->pc = 0x239164u;
    SET_GPR_U32(ctx, 31, 0x23916Cu);
    ctx->pc = 0x239168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239164u;
    // 0x239168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239164u, 0x23916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23916Cu;
label_23916c:
    // 0x23916c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_239170:
    if (ctx->pc == 0x239170u) {
        ctx->pc = 0x239174u;
        goto label_239174;
    }
    ctx->pc = 0x23916Cu;
    {
        const bool branch_taken_0x23916c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23916c) {
            ctx->pc = 0x2391A4u;
            goto label_2391a4;
        }
    }
    ctx->pc = 0x239174u;
label_239174:
    // 0x239174: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x239174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_239178:
    // 0x239178: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x239178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23917c:
    // 0x23917c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_239180:
    if (ctx->pc == 0x239180u) {
        ctx->pc = 0x239180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23917Cu;
        // 0x239180: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239184u;
        goto label_239184;
    }
    ctx->pc = 0x23917Cu;
    {
        const bool branch_taken_0x23917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23917Cu;
        // 0x239180: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23917c) {
            ctx->pc = 0x23919Cu;
            goto label_23919c;
        }
    }
    ctx->pc = 0x239184u;
label_239184:
    // 0x239184: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x239184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_239188:
    // 0x239188: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x239188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_23918c:
    // 0x23918c: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x23918cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_239190:
    // 0x239190: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x239190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_239194:
    // 0x239194: 0x10000022  b           . + 4 + (0x22 << 2)
label_239198:
    if (ctx->pc == 0x239198u) {
        ctx->pc = 0x239198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239194u;
        // 0x239198: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23919Cu;
        goto label_23919c;
    }
    ctx->pc = 0x239194u;
    {
        const bool branch_taken_0x239194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239194u;
        // 0x239198: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239194) {
            ctx->pc = 0x239220u;
            goto label_239220;
        }
    }
    ctx->pc = 0x23919Cu;
label_23919c:
    // 0x23919c: 0xc09c176  jal         func_2705D8
label_2391a0:
    if (ctx->pc == 0x2391A0u) {
        ctx->pc = 0x2391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23919Cu;
        // 0x2391a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391A4u;
        goto label_2391a4;
    }
    ctx->pc = 0x23919Cu;
    SET_GPR_U32(ctx, 31, 0x2391A4u);
    ctx->pc = 0x2391A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23919Cu;
    // 0x2391a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23919Cu, 0x2391A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391A4u;
label_2391a4:
    // 0x2391a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2391a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2391a8:
    // 0x2391a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2391a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2391ac:
    // 0x2391ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2391acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2391b0:
    // 0x2391b0: 0xc053e7c  jal         func_14F9F0
label_2391b4:
    if (ctx->pc == 0x2391B4u) {
        ctx->pc = 0x2391B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B0u;
        // 0x2391b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391B8u;
        goto label_2391b8;
    }
    ctx->pc = 0x2391B0u;
    SET_GPR_U32(ctx, 31, 0x2391B8u);
    ctx->pc = 0x2391B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391B0u;
    // 0x2391b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2391B0u, 0x2391B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391B8u;
label_2391b8:
    // 0x2391b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2391b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2391bc:
    // 0x2391bc: 0xc053e4a  jal         func_14F928
label_2391c0:
    if (ctx->pc == 0x2391C0u) {
        ctx->pc = 0x2391C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391BCu;
        // 0x2391c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391C4u;
        goto label_2391c4;
    }
    ctx->pc = 0x2391BCu;
    SET_GPR_U32(ctx, 31, 0x2391C4u);
    ctx->pc = 0x2391C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391BCu;
    // 0x2391c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2391BCu, 0x2391C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391C4u;
label_2391c4:
    // 0x2391c4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2391c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2391c8:
    // 0x2391c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2391c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2391cc:
    // 0x2391cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2391d0:
    if (ctx->pc == 0x2391D0u) {
        ctx->pc = 0x2391D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391CCu;
        // 0x2391d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391D4u;
        goto label_2391d4;
    }
    ctx->pc = 0x2391CCu;
    {
        const bool branch_taken_0x2391cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391CCu;
        // 0x2391d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391cc) {
            ctx->pc = 0x23921Cu;
            goto label_23921c;
        }
    }
    ctx->pc = 0x2391D4u;
label_2391d4:
    // 0x2391d4: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2391d8:
    // 0x2391d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2391dc:
    if (ctx->pc == 0x2391DCu) {
        ctx->pc = 0x2391DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391D8u;
        // 0x2391dc: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391E0u;
        goto label_2391e0;
    }
    ctx->pc = 0x2391D8u;
    {
        const bool branch_taken_0x2391d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391D8u;
        // 0x2391dc: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391d8) {
            ctx->pc = 0x239220u;
            goto label_239220;
        }
    }
    ctx->pc = 0x2391E0u;
label_2391e0:
    // 0x2391e0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2391e4:
    // 0x2391e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2391e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2391e8:
    // 0x2391e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2391e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2391ec:
    // 0x2391ec: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2391f0:
    // 0x2391f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2391f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2391f4:
    // 0x2391f4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2391f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2391f8:
    // 0x2391f8: 0x40f809  jalr        $v0
label_2391fc:
    if (ctx->pc == 0x2391FCu) {
        ctx->pc = 0x2391FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F8u;
        // 0x2391fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239200u;
        goto label_239200;
    }
    ctx->pc = 0x2391F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239200u);
        ctx->pc = 0x2391FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F8u;
        // 0x2391fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391F8u, 0x239200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239200u;
label_239200:
    // 0x239200: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x239200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_239204:
    // 0x239204: 0x5c600006  bgtzl       $v1, . + 4 + (0x6 << 2)
label_239208:
    if (ctx->pc == 0x239208u) {
        ctx->pc = 0x239208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239204u;
        // 0x239208: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23920Cu;
        goto label_23920c;
    }
    ctx->pc = 0x239204u;
    {
        const bool branch_taken_0x239204 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x239204) {
            ctx->pc = 0x239208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239204u;
            // 0x239208: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239220u;
            goto label_239220;
        }
    }
    ctx->pc = 0x23920Cu;
label_23920c:
    // 0x23920c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239210:
    // 0x239210: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x239210u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_239214:
    // 0x239214: 0x10000002  b           . + 4 + (0x2 << 2)
label_239218:
    if (ctx->pc == 0x239218u) {
        ctx->pc = 0x239218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239214u;
        // 0x239218: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23921Cu;
        goto label_23921c;
    }
    ctx->pc = 0x239214u;
    {
        const bool branch_taken_0x239214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239214u;
        // 0x239218: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239214) {
            ctx->pc = 0x239220u;
            goto label_239220;
        }
    }
    ctx->pc = 0x23921Cu;
label_23921c:
    // 0x23921c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x23921cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_239220:
    // 0x239220: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x239220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239224:
    // 0x239224: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x239224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239228:
    // 0x239228: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x239228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23922c:
    // 0x23922c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239230:
    // 0x239230: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x239230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_239234:
    // 0x239234: 0x3e00008  jr          $ra
label_239238:
    if (ctx->pc == 0x239238u) {
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23923Cu;
        goto label_23923c;
    }
    ctx->pc = 0x239234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23923Cu;
label_23923c:
    // 0x23923c: 0x0  nop
    ctx->pc = 0x23923cu;
    // NOP
    ctx->pc = 0x239240u;
}
