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

// Function: func_00238C50
// Address: 0x238c50 - 0x238f10
void func_00238C50_0x238c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00238C50_0x238c50");
#endif

    switch (ctx->pc) {
        case 0x238c6cu: goto label_238c6c;
        case 0x238c84u: goto label_238c84;
        case 0x238cf0u: goto label_238cf0;
        case 0x238d04u: goto label_238d04;
        case 0x238d58u: goto label_238d58;
        case 0x238d84u: goto label_238d84;
        case 0x238d90u: goto label_238d90;
        case 0x238dc8u: goto label_238dc8;
        case 0x238de8u: goto label_238de8;
        case 0x238ea0u: goto label_238ea0;
        case 0x238eb0u: goto label_238eb0;
        case 0x238ed8u: goto label_238ed8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef8u: goto label_238ef8;
        default: break;
    }

    ctx->pc = 0x238c50u;

    // 0x238c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238c54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238c64: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x238C64u;
    SET_GPR_U32(ctx, 31, 0x238C6Cu);
    ctx->pc = 0x238C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C64u;
    // 0x238c68: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x238C64u, 0x238C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C6Cu;
label_238c6c:
    // 0x238c6c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x238c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x238c70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c74: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x238c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x238c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c7c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x238C7Cu;
    SET_GPR_U32(ctx, 31, 0x238C84u);
    ctx->pc = 0x238C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C7Cu;
    // 0x238c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238C7Cu, 0x238C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C84u;
label_238c84:
    // 0x238c84: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x238c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c8c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x238C8Cu;
    {
        const bool branch_taken_0x238c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C8Cu;
        // 0x238c90: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c8c) {
            ctx->pc = 0x238D18u;
            goto label_238d18;
        }
    }
    ctx->pc = 0x238C94u;
    // 0x238c94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238C94u;
    {
        const bool branch_taken_0x238c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c94) {
            ctx->pc = 0x238C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C94u;
            // 0x238c98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CACu;
            goto label_238cac;
        }
    }
    ctx->pc = 0x238C9Cu;
    // 0x238c9c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x238C9Cu;
    {
        const bool branch_taken_0x238c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c9c) {
            ctx->pc = 0x238CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C9Cu;
            // 0x238ca0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CC4u;
            goto label_238cc4;
        }
    }
    ctx->pc = 0x238CA4u;
    // 0x238ca4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x238CA4u;
    {
        const bool branch_taken_0x238ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CA4u;
        // 0x238ca8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ca4) {
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238CACu;
label_238cac:
    // 0x238cac: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x238CACu;
    {
        const bool branch_taken_0x238cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CACu;
        // 0x238cb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cac) {
            ctx->pc = 0x238D98u;
            goto label_238d98;
        }
    }
    ctx->pc = 0x238CB4u;
    // 0x238cb4: 0x5062006e  beql        $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x238CB4u;
    {
        const bool branch_taken_0x238cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x238cb4) {
            ctx->pc = 0x238CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238CB4u;
            // 0x238cb8: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238E70u;
            goto label_238e70;
        }
    }
    ctx->pc = 0x238CBCu;
    // 0x238cbc: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x238CBCu;
    {
        const bool branch_taken_0x238cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CBCu;
        // 0x238cc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cbc) {
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238CC4u;
label_238cc4:
    // 0x238cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cc8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x238cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd8: 0x8c4533cc  lw          $a1, 0x33CC($v0)
    ctx->pc = 0x238cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13260)));
    // 0x238cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ce0: 0x8c4633d0  lw          $a2, 0x33D0($v0)
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13264)));
    // 0x238ce4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238ce8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238CE8u;
    SET_GPR_U32(ctx, 31, 0x238CF0u);
    ctx->pc = 0x238CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CE8u;
    // 0x238cec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238CE8u, 0x238CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x238cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x238cf4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x238CF4u;
    {
        const bool branch_taken_0x238cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238cf4) {
            ctx->pc = 0x238CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238CF4u;
            // 0x238cf8: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D08u;
            goto label_238d08;
        }
    }
    ctx->pc = 0x238CFCu;
    // 0x238cfc: 0xc09f73a  jal         func_27DCE8
    ctx->pc = 0x238CFCu;
    SET_GPR_U32(ctx, 31, 0x238D04u);
    ctx->pc = 0x27DCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCE8u, 0x238CFCu, 0x238D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D04u;
label_238d04:
    // 0x238d04: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_238d08:
    // 0x238d08: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x238d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x238d0c: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x238d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x238d10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238d14: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238d18:
    // 0x238d18: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d20: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x238d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x238d24: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x238d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x238d28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238D28u;
    {
        const bool branch_taken_0x238d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D28u;
        // 0x238d2c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d28) {
            ctx->pc = 0x238D50u;
            goto label_238d50;
        }
    }
    ctx->pc = 0x238D30u;
    // 0x238d30: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238d34: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x238d38: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x238d3c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238d40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x238d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238d44: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x238d44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238d48: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x238d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x238d4c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x238d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_238d50:
    // 0x238d50: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238D50u;
    SET_GPR_U32(ctx, 31, 0x238D58u);
    ctx->pc = 0x238D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D50u;
    // 0x238d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238D50u, 0x238D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D58u;
label_238d58:
    // 0x238d58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238D58u;
    {
        const bool branch_taken_0x238d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D58u;
        // 0x238d5c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d58) {
            ctx->pc = 0x238D70u;
            goto label_238d70;
        }
    }
    ctx->pc = 0x238D60u;
    // 0x238d60: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x238d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d64: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x238d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x238d68: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x238d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d6c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x238d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_238d70:
    // 0x238d70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238d74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d7c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238D7Cu;
    SET_GPR_U32(ctx, 31, 0x238D84u);
    ctx->pc = 0x238D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D7Cu;
    // 0x238d80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238D7Cu, 0x238D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D84u;
label_238d84:
    // 0x238d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d88: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238D88u;
    SET_GPR_U32(ctx, 31, 0x238D90u);
    ctx->pc = 0x238D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D88u;
    // 0x238d8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238D88u, 0x238D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D90u;
label_238d90:
    // 0x238d90: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x238D90u;
    {
        const bool branch_taken_0x238d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D90u;
        // 0x238d94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d90) {
            ctx->pc = 0x238EFCu;
            goto label_238efc;
        }
    }
    ctx->pc = 0x238D98u;
label_238d98:
    // 0x238d98: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x238d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238da0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x238da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x238da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238da8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238dac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238db0: 0x8c4533d4  lw          $a1, 0x33D4($v0)
    ctx->pc = 0x238db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13268)));
    // 0x238db4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238db8: 0x8c4633d8  lw          $a2, 0x33D8($v0)
    ctx->pc = 0x238db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13272)));
    // 0x238dbc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238dc0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238DC0u;
    SET_GPR_U32(ctx, 31, 0x238DC8u);
    ctx->pc = 0x238DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DC0u;
    // 0x238dc4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238DC0u, 0x238DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DC8u;
label_238dc8:
    // 0x238dc8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x238dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x238dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238dd0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x238dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x238dd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x238dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x238dd8: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x238ddc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x238ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x238de0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x238DE0u;
    SET_GPR_U32(ctx, 31, 0x238DE8u);
    ctx->pc = 0x238DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DE0u;
    // 0x238de4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x238DE0u, 0x238DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DE8u;
label_238de8:
    // 0x238de8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x238de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238dec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x238df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238DF0u;
    {
        const bool branch_taken_0x238df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DF0u;
        // 0x238df4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238df0) {
            ctx->pc = 0x238E10u;
            goto label_238e10;
        }
    }
    ctx->pc = 0x238DF8u;
    // 0x238df8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238dfc: 0x2442a3c0  addiu       $v0, $v0, -0x5C40
    ctx->pc = 0x238dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943680));
    // 0x238e00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238e04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238e08: 0x800008  jr          $a0
    ctx->pc = 0x238E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238E10u: goto label_238e10;
            case 0x238E20u: goto label_238e20;
            case 0x238E30u: goto label_238e30;
            case 0x238E40u: goto label_238e40;
            case 0x238E50u: goto label_238e50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238E10u;
label_238e10:
    // 0x238e10: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x238e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x238e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x238E18u;
    {
        const bool branch_taken_0x238e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E18u;
        // 0x238e1c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e18) {
            ctx->pc = 0x238E60u;
            goto label_238e60;
        }
    }
    ctx->pc = 0x238E20u;
label_238e20:
    // 0x238e20: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x238e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x238E28u;
    {
        const bool branch_taken_0x238e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E28u;
        // 0x238e2c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e28) {
            ctx->pc = 0x238E60u;
            goto label_238e60;
        }
    }
    ctx->pc = 0x238E30u;
label_238e30:
    // 0x238e30: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x238e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x238E38u;
    {
        const bool branch_taken_0x238e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E38u;
        // 0x238e3c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e38) {
            ctx->pc = 0x238E60u;
            goto label_238e60;
        }
    }
    ctx->pc = 0x238E40u;
label_238e40:
    // 0x238e40: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x238e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x238e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238E48u;
    {
        const bool branch_taken_0x238e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E48u;
        // 0x238e4c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e48) {
            ctx->pc = 0x238E60u;
            goto label_238e60;
        }
    }
    ctx->pc = 0x238E50u;
label_238e50:
    // 0x238e50: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x238e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x238e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e58: 0x0  nop
    ctx->pc = 0x238e58u;
    // NOP
    // 0x238e5c: 0xe60016e4  swc1        $f0, 0x16E4($s0)
    ctx->pc = 0x238e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
label_238e60:
    // 0x238e60: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238e64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238e68: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238e6c: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x238e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_238e70:
    // 0x238e70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238E70u;
    {
        const bool branch_taken_0x238e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E70u;
        // 0x238e74: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e70) {
            ctx->pc = 0x238E98u;
            goto label_238e98;
        }
    }
    ctx->pc = 0x238E78u;
    // 0x238e78: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x238e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238e7c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x238e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x238e80: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x238e84: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238e88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x238e88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238e8c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x238e8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238e90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x238e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x238e94: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x238e94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_238e98:
    // 0x238e98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238E98u;
    SET_GPR_U32(ctx, 31, 0x238EA0u);
    ctx->pc = 0x238E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E98u;
    // 0x238e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238E98u, 0x238EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EA0u;
label_238ea0:
    // 0x238ea0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x238EA0u;
    {
        const bool branch_taken_0x238ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EA0u;
        // 0x238ea4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ea0) {
            ctx->pc = 0x238ED8u;
            goto label_238ed8;
        }
    }
    ctx->pc = 0x238EA8u;
    // 0x238ea8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x238EA8u;
    SET_GPR_U32(ctx, 31, 0x238EB0u);
    ctx->pc = 0x238EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EA8u;
    // 0x238eac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x238EA8u, 0x238EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EB0u;
label_238eb0:
    // 0x238eb0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x238eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x238eb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x238EB4u;
    {
        const bool branch_taken_0x238eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB4u;
        // 0x238eb8: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238eb4) {
            ctx->pc = 0x238ED0u;
            goto label_238ed0;
        }
    }
    ctx->pc = 0x238EBCu;
    // 0x238ebc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x238ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ec0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x238ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x238ec4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x238ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238EC8u;
    {
        const bool branch_taken_0x238ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EC8u;
        // 0x238ecc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ec8) {
            ctx->pc = 0x238ED8u;
            goto label_238ed8;
        }
    }
    ctx->pc = 0x238ED0u;
label_238ed0:
    // 0x238ed0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x238ED0u;
    SET_GPR_U32(ctx, 31, 0x238ED8u);
    ctx->pc = 0x238ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238ED0u;
    // 0x238ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x238ED0u, 0x238ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238ED8u;
label_238ed8:
    // 0x238ed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238edc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ee4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238EE4u;
    SET_GPR_U32(ctx, 31, 0x238EECu);
    ctx->pc = 0x238EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EE4u;
    // 0x238ee8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238EE4u, 0x238EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EECu;
label_238eec:
    // 0x238eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ef0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238EF0u;
    SET_GPR_U32(ctx, 31, 0x238EF8u);
    ctx->pc = 0x238EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EF0u;
    // 0x238ef4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238EF0u, 0x238EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EF8u;
label_238ef8:
    // 0x238ef8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238efc:
    // 0x238efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f04: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x238f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238f08: 0x3e00008  jr          $ra
    ctx->pc = 0x238F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238F10u;
}
