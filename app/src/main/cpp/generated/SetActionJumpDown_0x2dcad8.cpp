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

// Function: SetActionJumpDown
// Address: 0x2dcad8 - 0x2dccd0
void SetActionJumpDown_0x2dcad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionJumpDown_0x2dcad8");
#endif

    switch (ctx->pc) {
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcb10u: goto label_2dcb10;
        case 0x2dcb34u: goto label_2dcb34;
        case 0x2dcb94u: goto label_2dcb94;
        case 0x2dcba4u: goto label_2dcba4;
        case 0x2dcbe4u: goto label_2dcbe4;
        case 0x2dcc14u: goto label_2dcc14;
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc44u: goto label_2dcc44;
        case 0x2dccb0u: goto label_2dccb0;
        default: break;
    }

    ctx->pc = 0x2dcad8u;

    // 0x2dcad8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2dcad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2dcadc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2dcadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2dcae0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2dcae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2dcae4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2dcae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2dcae8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2dcae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2dcaec: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2dcaecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2dcaf0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DCAF0u;
    SET_GPR_U32(ctx, 31, 0x2DCAF8u);
    ctx->pc = 0x2DCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAF0u;
    // 0x2dcaf4: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DCAF0u, 0x2DCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAF8u;
label_2dcaf8:
    // 0x2dcaf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dcaf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcafc: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2dcb00: 0x1840006c  blez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2DCB00u;
    {
        const bool branch_taken_0x2dcb00 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB00u;
        // 0x2dcb04: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb00) {
            ctx->pc = 0x2DCCB4u;
            goto label_2dccb4;
        }
    }
    ctx->pc = 0x2DCB08u;
    // 0x2dcb08: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DCB08u;
    SET_GPR_U32(ctx, 31, 0x2DCB10u);
    ctx->pc = 0x2DCB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB08u;
    // 0x2dcb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DCB08u, 0x2DCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB10u;
label_2dcb10:
    // 0x2dcb10: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2DCB10u;
    {
        const bool branch_taken_0x2dcb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB10u;
        // 0x2dcb14: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb10) {
            ctx->pc = 0x2DCCB4u;
            goto label_2dccb4;
        }
    }
    ctx->pc = 0x2DCB18u;
    // 0x2dcb18: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dcb1c: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dcb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dcb20: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dcb24: 0x1c600064  bgtz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2DCB24u;
    {
        const bool branch_taken_0x2dcb24 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2DCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB24u;
        // 0x2dcb28: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb24) {
            ctx->pc = 0x2DCCB8u;
            goto label_2dccb8;
        }
    }
    ctx->pc = 0x2DCB2Cu;
    // 0x2dcb2c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DCB2Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB34u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DCB2Cu, 0x2DCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB34u;
label_2dcb34:
    // 0x2dcb34: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2DCB34u;
    {
        const bool branch_taken_0x2dcb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB34u;
        // 0x2dcb38: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb34) {
            ctx->pc = 0x2DCCB4u;
            goto label_2dccb4;
        }
    }
    ctx->pc = 0x2DCB3Cu;
    // 0x2dcb3c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2dcb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dcb40: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2dcb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dcb44: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2dcb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dcb48: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2dcb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dcb4c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2dcb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dcb50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dcb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dcb54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dcb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dcb58: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x2dcb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2dcb5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dcb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dcb60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dcb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dcb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb68: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2dcb6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2dcb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2dcb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb74: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2dcb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2dcb78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dcb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2dcb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2dcb80: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2dcb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2dcb84: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2dcb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dcb88: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2dcb88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dcb8c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DCB8Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB94u);
    ctx->pc = 0x2DCB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB8Cu;
    // 0x2dcb90: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DCB8Cu, 0x2DCB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB94u;
label_2dcb94:
    // 0x2dcb94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2dcb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dcb98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dcb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb9c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DCB9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCBA4u);
    ctx->pc = 0x2DCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB9Cu;
    // 0x2dcba0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DCB9Cu, 0x2DCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBA4u;
label_2dcba4:
    // 0x2dcba4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2dcba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dcba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcbac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2dcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2dcbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2dcbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2dcbb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2dcbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dcbbc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2dcbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2dcbc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dcbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbc4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2dcbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2dcbc8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2dcbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcbcc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2dcbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2dcbd0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dcbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcbd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dcbd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbd8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2dcbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcbdc: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2DCBDCu;
    SET_GPR_U32(ctx, 31, 0x2DCBE4u);
    ctx->pc = 0x2DCBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBDCu;
    // 0x2dcbe0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2DCBDCu, 0x2DCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBE4u;
label_2dcbe4:
    // 0x2dcbe4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DCBE4u;
    {
        const bool branch_taken_0x2dcbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBE4u;
        // 0x2dcbe8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbe4) {
            ctx->pc = 0x2DCCB0u;
            goto label_2dccb0;
        }
    }
    ctx->pc = 0x2DCBECu;
    // 0x2dcbec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2dcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dcbf0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dcbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dcbf4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DCBF4u;
    {
        const bool branch_taken_0x2dcbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBF4u;
        // 0x2dcbf8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbf4) {
            ctx->pc = 0x2DCCB4u;
            goto label_2dccb4;
        }
    }
    ctx->pc = 0x2DCBFCu;
    // 0x2dcbfc: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2dcbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dcc00: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2dcc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc04: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x2dcc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcc08: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2dcc08u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2dcc0c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2DCC0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC14u);
    ctx->pc = 0x2DCC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC0Cu;
    // 0x2dcc10: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2DCC0Cu, 0x2DCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC14u;
label_2dcc14:
    // 0x2dcc14: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2dcc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dcc18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dcc18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dcc1c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2dcc1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2dcc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc24: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2dcc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2dcc28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dcc28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dcc2c: 0xc051e62  jal         func_147988
    ctx->pc = 0x2DCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC34u);
    ctx->pc = 0x2DCC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC2Cu;
    // 0x2dcc30: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2DCC2Cu, 0x2DCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC34u;
label_2dcc34:
    // 0x2dcc34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dcc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcc38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dcc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc3c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DCC3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC44u);
    ctx->pc = 0x2DCC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC3Cu;
    // 0x2dcc40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DCC3Cu, 0x2DCC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC44u;
label_2dcc44:
    // 0x2dcc44: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2dcc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcc48: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2dcc48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dcc4c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2dcc4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dcc50: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2dcc50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2dcc54: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2dcc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dcc58: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2dcc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2dcc5c: 0x26440660  addiu       $a0, $s2, 0x660
    ctx->pc = 0x2dcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
    // 0x2dcc60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dcc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcc64: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCC64u;
    {
        const bool branch_taken_0x2dcc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC64u;
        // 0x2dcc68: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc64) {
            ctx->pc = 0x2DCC84u;
            goto label_2dcc84;
        }
    }
    ctx->pc = 0x2DCC6Cu;
    // 0x2dcc6c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2dcc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcc70: 0xe6400660  swc1        $f0, 0x660($s2)
    ctx->pc = 0x2dcc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1632), bits); }
    // 0x2dcc74: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2dcc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcc78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2dcc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2dcc7c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2dcc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcc80: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2dcc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2dcc84:
    // 0x2dcc84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dcc88: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dcc88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dcc8c: 0xe6540670  swc1        $f20, 0x670($s2)
    ctx->pc = 0x2dcc8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1648), bits); }
    // 0x2dcc90: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dcc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dcc94: 0x2508ccd0  addiu       $t0, $t0, -0x3330
    ctx->pc = 0x2dcc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954192));
    // 0x2dcc98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dcc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dcc9c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2dcc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dcca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dcca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dcca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcca8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DCCA8u;
    SET_GPR_U32(ctx, 31, 0x2DCCB0u);
    ctx->pc = 0x2DCCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCA8u;
    // 0x2dccac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DCCA8u, 0x2DCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCB0u;
label_2dccb0:
    // 0x2dccb0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2dccb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2dccb4:
    // 0x2dccb4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2dccb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2dccb8:
    // 0x2dccb8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2dccb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2dccbc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2dccbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dccc0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2dccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dccc4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2dccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dccc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCC8u;
        // 0x2dcccc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCCD0u;
}
