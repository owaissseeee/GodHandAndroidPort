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

// Function: func_00236D98
// Address: 0x236d98 - 0x236ed0
void func_00236D98_0x236d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00236D98_0x236d98");
#endif

    switch (ctx->pc) {
        case 0x236db4u: goto label_236db4;
        case 0x236dccu: goto label_236dcc;
        case 0x236e24u: goto label_236e24;
        case 0x236e7cu: goto label_236e7c;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eb4u: goto label_236eb4;
        default: break;
    }

    ctx->pc = 0x236d98u;

    // 0x236d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x236d9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x236da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236dac: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x236DACu;
    SET_GPR_U32(ctx, 31, 0x236DB4u);
    ctx->pc = 0x236DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DACu;
    // 0x236db0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x236DACu, 0x236DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DB4u;
label_236db4:
    // 0x236db4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x236db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x236db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dbc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x236dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x236dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dc4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x236DC4u;
    SET_GPR_U32(ctx, 31, 0x236DCCu);
    ctx->pc = 0x236DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC4u;
    // 0x236dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x236DC4u, 0x236DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DCCu;
label_236dcc:
    // 0x236dcc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236dd4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x236dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236dd8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x236DD8u;
    {
        const bool branch_taken_0x236dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DD8u;
        // 0x236ddc: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dd8) {
            ctx->pc = 0x236DF4u;
            goto label_236df4;
        }
    }
    ctx->pc = 0x236DE0u;
    // 0x236de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236de4: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x236DE4u;
    {
        const bool branch_taken_0x236de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x236de4) {
            ctx->pc = 0x236DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236DE4u;
            // 0x236de8: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E3Cu;
            goto label_236e3c;
        }
    }
    ctx->pc = 0x236DECu;
    // 0x236dec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x236DECu;
    {
        const bool branch_taken_0x236dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DECu;
        // 0x236df0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dec) {
            ctx->pc = 0x236EB8u;
            goto label_236eb8;
        }
    }
    ctx->pc = 0x236DF4u;
label_236df4:
    // 0x236df4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dfc: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236e00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236e08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e0c: 0x8c452ef8  lw          $a1, 0x2EF8($v0)
    ctx->pc = 0x236e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12024)));
    // 0x236e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e14: 0x8c462efc  lw          $a2, 0x2EFC($v0)
    ctx->pc = 0x236e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12028)));
    // 0x236e18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236e1c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236E1Cu;
    SET_GPR_U32(ctx, 31, 0x236E24u);
    ctx->pc = 0x236E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E1Cu;
    // 0x236e20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236E1Cu, 0x236E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E24u;
label_236e24:
    // 0x236e24: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236e28: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x236e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x236e2c: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x236e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x236e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236e34: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236e38: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x236e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_236e3c:
    // 0x236e3c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x236e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x236e40: 0x8604056e  lh          $a0, 0x56E($s0)
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x236e44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236e48: 0x9603056e  lhu         $v1, 0x56E($s0)
    ctx->pc = 0x236e48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x236e4c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236E4Cu;
    {
        const bool branch_taken_0x236e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E4Cu;
        // 0x236e50: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e4c) {
            ctx->pc = 0x236E74u;
            goto label_236e74;
        }
    }
    ctx->pc = 0x236E54u;
    // 0x236e54: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x236e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x236e58: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x236e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x236e5c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x236e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x236e60: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x236e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x236e64: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x236e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236e68: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x236e68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236e6c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x236e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x236e70: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x236e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_236e74:
    // 0x236e74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236E74u;
    SET_GPR_U32(ctx, 31, 0x236E7Cu);
    ctx->pc = 0x236E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E74u;
    // 0x236e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236E74u, 0x236E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E7Cu;
label_236e7c:
    // 0x236e7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236E7Cu;
    {
        const bool branch_taken_0x236e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E7Cu;
        // 0x236e80: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e7c) {
            ctx->pc = 0x236E94u;
            goto label_236e94;
        }
    }
    ctx->pc = 0x236E84u;
    // 0x236e84: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x236e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x236e88: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x236e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x236e8c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x236e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x236e90: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x236e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_236e94:
    // 0x236e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236e98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ea0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236EA0u;
    SET_GPR_U32(ctx, 31, 0x236EA8u);
    ctx->pc = 0x236EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EA0u;
    // 0x236ea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236EA0u, 0x236EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EA8u;
label_236ea8:
    // 0x236ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236eac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236EACu;
    SET_GPR_U32(ctx, 31, 0x236EB4u);
    ctx->pc = 0x236EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EACu;
    // 0x236eb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236EACu, 0x236EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EB4u;
label_236eb4:
    // 0x236eb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236eb8:
    // 0x236eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236ec0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x236ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x236EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EC4u;
        // 0x236ec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236ECCu;
    // 0x236ecc: 0x0  nop
    ctx->pc = 0x236eccu;
    // NOP
    ctx->pc = 0x236ed0u;
}
