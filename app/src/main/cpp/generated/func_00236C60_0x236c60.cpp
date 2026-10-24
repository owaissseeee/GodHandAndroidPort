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

// Function: func_00236C60
// Address: 0x236c60 - 0x236d98
void func_00236C60_0x236c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00236C60_0x236c60");
#endif

    switch (ctx->pc) {
        case 0x236c7cu: goto label_236c7c;
        case 0x236c94u: goto label_236c94;
        case 0x236cecu: goto label_236cec;
        case 0x236d44u: goto label_236d44;
        case 0x236d70u: goto label_236d70;
        case 0x236d7cu: goto label_236d7c;
        default: break;
    }

    ctx->pc = 0x236c60u;

    // 0x236c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x236c64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x236c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x236C74u;
    SET_GPR_U32(ctx, 31, 0x236C7Cu);
    ctx->pc = 0x236C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C74u;
    // 0x236c78: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x236C74u, 0x236C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C7Cu;
label_236c7c:
    // 0x236c7c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x236c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x236c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c84: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x236c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x236c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c8c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x236C8Cu;
    SET_GPR_U32(ctx, 31, 0x236C94u);
    ctx->pc = 0x236C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C8Cu;
    // 0x236c90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x236C8Cu, 0x236C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C94u;
label_236c94:
    // 0x236c94: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236c9c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x236c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236ca0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x236CA0u;
    {
        const bool branch_taken_0x236ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CA0u;
        // 0x236ca4: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ca0) {
            ctx->pc = 0x236CBCu;
            goto label_236cbc;
        }
    }
    ctx->pc = 0x236CA8u;
    // 0x236ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236cac: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x236CACu;
    {
        const bool branch_taken_0x236cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x236cac) {
            ctx->pc = 0x236CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236CACu;
            // 0x236cb0: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D04u;
            goto label_236d04;
        }
    }
    ctx->pc = 0x236CB4u;
    // 0x236cb4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x236CB4u;
    {
        const bool branch_taken_0x236cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CB4u;
        // 0x236cb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cb4) {
            ctx->pc = 0x236D80u;
            goto label_236d80;
        }
    }
    ctx->pc = 0x236CBCu;
label_236cbc:
    // 0x236cbc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cc4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ccc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236cd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cd4: 0x8c451d98  lw          $a1, 0x1D98($v0)
    ctx->pc = 0x236cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7576)));
    // 0x236cd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236cd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cdc: 0x8c461d9c  lw          $a2, 0x1D9C($v0)
    ctx->pc = 0x236cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7580)));
    // 0x236ce0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236ce4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236CE4u;
    SET_GPR_U32(ctx, 31, 0x236CECu);
    ctx->pc = 0x236CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CE4u;
    // 0x236ce8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236CE4u, 0x236CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CECu;
label_236cec:
    // 0x236cec: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236cf0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x236cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x236cf4: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x236cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x236cf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236cfc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236d00: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x236d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_236d04:
    // 0x236d04: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x236d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x236d08: 0x8604056e  lh          $a0, 0x56E($s0)
    ctx->pc = 0x236d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x236d0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236d10: 0x9603056e  lhu         $v1, 0x56E($s0)
    ctx->pc = 0x236d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x236d14: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236D14u;
    {
        const bool branch_taken_0x236d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D14u;
        // 0x236d18: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d14) {
            ctx->pc = 0x236D3Cu;
            goto label_236d3c;
        }
    }
    ctx->pc = 0x236D1Cu;
    // 0x236d1c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x236d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x236d20: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x236d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x236d24: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x236d24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x236d28: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x236d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x236d2c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x236d2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236d30: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x236d30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236d34: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x236d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x236d38: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x236d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_236d3c:
    // 0x236d3c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236D3Cu;
    SET_GPR_U32(ctx, 31, 0x236D44u);
    ctx->pc = 0x236D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D3Cu;
    // 0x236d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236D3Cu, 0x236D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D44u;
label_236d44:
    // 0x236d44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236D44u;
    {
        const bool branch_taken_0x236d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D44u;
        // 0x236d48: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d44) {
            ctx->pc = 0x236D5Cu;
            goto label_236d5c;
        }
    }
    ctx->pc = 0x236D4Cu;
    // 0x236d4c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x236d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x236d50: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x236d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x236d54: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x236d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x236d58: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x236d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_236d5c:
    // 0x236d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236d60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d68: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236D68u;
    SET_GPR_U32(ctx, 31, 0x236D70u);
    ctx->pc = 0x236D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D68u;
    // 0x236d6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236D68u, 0x236D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D70u;
label_236d70:
    // 0x236d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d74: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236D74u;
    SET_GPR_U32(ctx, 31, 0x236D7Cu);
    ctx->pc = 0x236D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D74u;
    // 0x236d78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236D74u, 0x236D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D7Cu;
label_236d7c:
    // 0x236d7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236d80:
    // 0x236d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d88: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x236d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x236D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D8Cu;
        // 0x236d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D94u;
    // 0x236d94: 0x0  nop
    ctx->pc = 0x236d94u;
    // NOP
    ctx->pc = 0x236d98u;
}
