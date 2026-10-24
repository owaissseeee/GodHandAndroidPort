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

// Function: func_00180CD8
// Address: 0x180cd8 - 0x180fd0
void func_00180CD8_0x180cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00180CD8_0x180cd8");
#endif

    switch (ctx->pc) {
        case 0x180d48u: goto label_180d48;
        case 0x180d58u: goto label_180d58;
        case 0x180d94u: goto label_180d94;
        case 0x180da4u: goto label_180da4;
        case 0x180dc0u: goto label_180dc0;
        case 0x180dd0u: goto label_180dd0;
        case 0x180de4u: goto label_180de4;
        case 0x180df4u: goto label_180df4;
        case 0x180e08u: goto label_180e08;
        case 0x180e18u: goto label_180e18;
        case 0x180e28u: goto label_180e28;
        case 0x180e38u: goto label_180e38;
        case 0x180e60u: goto label_180e60;
        case 0x180efcu: goto label_180efc;
        case 0x180f14u: goto label_180f14;
        case 0x180f2cu: goto label_180f2c;
        case 0x180f84u: goto label_180f84;
        case 0x180f9cu: goto label_180f9c;
        case 0x180fb4u: goto label_180fb4;
        default: break;
    }

    ctx->pc = 0x180cd8u;

    // 0x180cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ce8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x180ce8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x180cec: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x180cecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x180cf0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x180cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x180cf4: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x180cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x180cf8: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x180cfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x180cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180d00: 0x0  nop
    ctx->pc = 0x180d00u;
    // NOP
    // 0x180d04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x180d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x180d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180d0c: 0x0  nop
    ctx->pc = 0x180d0cu;
    // NOP
    // 0x180d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x180d14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x180d14u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x180d18: 0x58600038  blezl       $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x180D18u;
    {
        const bool branch_taken_0x180d18 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x180d18) {
            ctx->pc = 0x180D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D18u;
            // 0x180d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DFCu;
            goto label_180dfc;
        }
    }
    ctx->pc = 0x180D20u;
    // 0x180d20: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x180d24: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x180d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x180d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180d2c: 0x0  nop
    ctx->pc = 0x180d2cu;
    // NOP
    // 0x180d30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d34: 0x0  nop
    ctx->pc = 0x180d34u;
    // NOP
    // 0x180d38: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x180D38u;
    {
        const bool branch_taken_0x180d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D38u;
        // 0x180d3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d38) {
            ctx->pc = 0x180D68u;
            goto label_180d68;
        }
    }
    ctx->pc = 0x180D40u;
    // 0x180d40: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180D40u;
    SET_GPR_U32(ctx, 31, 0x180D48u);
    ctx->pc = 0x180D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D40u;
    // 0x180d44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180D40u, 0x180D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D48u;
label_180d48:
    // 0x180d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180d50: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180D50u;
    SET_GPR_U32(ctx, 31, 0x180D58u);
    ctx->pc = 0x180D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D50u;
    // 0x180d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180D50u, 0x180D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D58u;
label_180d58:
    // 0x180d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180d60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x180D60u;
    {
        const bool branch_taken_0x180d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D60u;
        // 0x180d64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d60) {
            ctx->pc = 0x180DDCu;
            goto label_180ddc;
        }
    }
    ctx->pc = 0x180D68u;
label_180d68:
    // 0x180d68: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x180d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x180d6c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x180d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x180d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180d74: 0x0  nop
    ctx->pc = 0x180d74u;
    // NOP
    // 0x180d78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d7c: 0x0  nop
    ctx->pc = 0x180d7cu;
    // NOP
    // 0x180d80: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x180D80u;
    {
        const bool branch_taken_0x180d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D80u;
        // 0x180d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d80) {
            ctx->pc = 0x180DB4u;
            goto label_180db4;
        }
    }
    ctx->pc = 0x180D88u;
    // 0x180d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180d8c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180D8Cu;
    SET_GPR_U32(ctx, 31, 0x180D94u);
    ctx->pc = 0x180D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D8Cu;
    // 0x180d90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180D8Cu, 0x180D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D94u;
label_180d94:
    // 0x180d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d98: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180d9c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180D9Cu;
    SET_GPR_U32(ctx, 31, 0x180DA4u);
    ctx->pc = 0x180DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D9Cu;
    // 0x180da0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180D9Cu, 0x180DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DA4u;
label_180da4:
    // 0x180da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180da8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180dac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x180DACu;
    {
        const bool branch_taken_0x180dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DACu;
        // 0x180db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180dac) {
            ctx->pc = 0x180DDCu;
            goto label_180ddc;
        }
    }
    ctx->pc = 0x180DB4u;
label_180db4:
    // 0x180db4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180db8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180DB8u;
    SET_GPR_U32(ctx, 31, 0x180DC0u);
    ctx->pc = 0x180DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DB8u;
    // 0x180dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180DB8u, 0x180DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DC0u;
label_180dc0:
    // 0x180dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180dc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180dc8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180DC8u;
    SET_GPR_U32(ctx, 31, 0x180DD0u);
    ctx->pc = 0x180DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DC8u;
    // 0x180dcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180DC8u, 0x180DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DD0u;
label_180dd0:
    // 0x180dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180dd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180dd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180ddc:
    // 0x180ddc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180DDCu;
    SET_GPR_U32(ctx, 31, 0x180DE4u);
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180DDCu, 0x180DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DE4u;
label_180de4:
    // 0x180de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180de8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180dec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180DECu;
    SET_GPR_U32(ctx, 31, 0x180DF4u);
    ctx->pc = 0x180DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DECu;
    // 0x180df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180DECu, 0x180DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DF4u;
label_180df4:
    // 0x180df4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x180DF4u;
    {
        const bool branch_taken_0x180df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DF4u;
        // 0x180df8: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180df4) {
            ctx->pc = 0x180E64u;
            goto label_180e64;
        }
    }
    ctx->pc = 0x180DFCu;
label_180dfc:
    // 0x180dfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180e00: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180E00u;
    SET_GPR_U32(ctx, 31, 0x180E08u);
    ctx->pc = 0x180E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E00u;
    // 0x180e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180E00u, 0x180E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E08u;
label_180e08:
    // 0x180e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180e10: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180E10u;
    SET_GPR_U32(ctx, 31, 0x180E18u);
    ctx->pc = 0x180E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E10u;
    // 0x180e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180E10u, 0x180E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E18u;
label_180e18:
    // 0x180e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180e20: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180E20u;
    SET_GPR_U32(ctx, 31, 0x180E28u);
    ctx->pc = 0x180E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E20u;
    // 0x180e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180E20u, 0x180E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E28u;
label_180e28:
    // 0x180e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180e30: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x180E30u;
    SET_GPR_U32(ctx, 31, 0x180E38u);
    ctx->pc = 0x180E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E30u;
    // 0x180e34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x180E30u, 0x180E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E38u;
label_180e38:
    // 0x180e38: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x180e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x180e3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180e40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x180e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x180e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e48: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x180e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x180e4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x180e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180e54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180e58: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180E58u;
    SET_GPR_U32(ctx, 31, 0x180E60u);
    ctx->pc = 0x180E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E58u;
    // 0x180e5c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180E58u, 0x180E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E60u;
label_180e60:
    // 0x180e60: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x180e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_180e64:
    // 0x180e64: 0x86030548  lh          $v1, 0x548($s0)
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x180e68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180e6c: 0x0  nop
    ctx->pc = 0x180e6cu;
    // NOP
    // 0x180e70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x180e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x180e74: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x180e78: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x180e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x180e7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x180e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180e84: 0x0  nop
    ctx->pc = 0x180e84u;
    // NOP
    // 0x180e88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x180e8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x180e8cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x180e90: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x180e90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e94: 0x0  nop
    ctx->pc = 0x180e94u;
    // NOP
    // 0x180e98: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x180E98u;
    {
        const bool branch_taken_0x180e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E98u;
        // 0x180e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e98) {
            ctx->pc = 0x180F34u;
            goto label_180f34;
        }
    }
    ctx->pc = 0x180EA0u;
    // 0x180ea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180ea4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x180ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x180ea8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x180ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x180eac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x180eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x180eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x180eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180eb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180eb8: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x180eb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x180ebc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x180ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x180ec0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180ec4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x180ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x180ec8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x180ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x180ecc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180ed0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x180ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x180ed4: 0x0  nop
    ctx->pc = 0x180ed4u;
    // NOP
    // 0x180ed8: 0x0  nop
    ctx->pc = 0x180ed8u;
    // NOP
    // 0x180edc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x180edcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x180ee0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x180ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x180ee4: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x180ee4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x180ee8: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x180ee8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x180eec: 0x4614b581  sub.s       $f22, $f22, $f20
    ctx->pc = 0x180eecu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x180ef0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x180ef0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x180ef4: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180EF4u;
    SET_GPR_U32(ctx, 31, 0x180EFCu);
    ctx->pc = 0x180EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EF4u;
    // 0x180ef8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180EF4u, 0x180EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180EFCu;
label_180efc:
    // 0x180efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180f04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x180f04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x180f08: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x180f08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x180f0c: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180F0Cu;
    SET_GPR_U32(ctx, 31, 0x180F14u);
    ctx->pc = 0x180F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F0Cu;
    // 0x180f10: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180F0Cu, 0x180F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F14u;
label_180f14:
    // 0x180f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f18: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x180f18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x180f1c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x180f1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x180f20: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x180f20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x180f24: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180F24u;
    SET_GPR_U32(ctx, 31, 0x180F2Cu);
    ctx->pc = 0x180F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F24u;
    // 0x180f28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180F24u, 0x180F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F2Cu;
label_180f2c:
    // 0x180f2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x180F2Cu;
    {
        const bool branch_taken_0x180f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F2Cu;
        // 0x180f30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f2c) {
            ctx->pc = 0x180FB8u;
            goto label_180fb8;
        }
    }
    ctx->pc = 0x180F34u;
label_180f34:
    // 0x180f34: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x180f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x180f38: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x180f3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180f40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x180f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x180f44: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x180f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x180f48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180f4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x180f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x180f50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180f54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x180f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x180f58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180f5c: 0x0  nop
    ctx->pc = 0x180f5cu;
    // NOP
    // 0x180f60: 0x0  nop
    ctx->pc = 0x180f60u;
    // NOP
    // 0x180f64: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x180f64u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x180f68: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x180f68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x180f6c: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x180f6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x180f70: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x180f70u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x180f74: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x180f74u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x180f78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x180f78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180f7c: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180F7Cu;
    SET_GPR_U32(ctx, 31, 0x180F84u);
    ctx->pc = 0x180F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F7Cu;
    // 0x180f80: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180F7Cu, 0x180F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F84u;
label_180f84:
    // 0x180f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180f8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x180f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180f90: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x180f90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x180f94: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180F94u;
    SET_GPR_U32(ctx, 31, 0x180F9Cu);
    ctx->pc = 0x180F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F94u;
    // 0x180f98: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180F94u, 0x180F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F9Cu;
label_180f9c:
    // 0x180f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x180fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180fa4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x180fa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x180fa8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x180fa8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x180fac: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x180FACu;
    SET_GPR_U32(ctx, 31, 0x180FB4u);
    ctx->pc = 0x180FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FACu;
    // 0x180fb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x180FACu, 0x180FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FB4u;
label_180fb4:
    // 0x180fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180fb8:
    // 0x180fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180fbc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x180fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x180fc0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x180fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x180fc4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x180fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x180fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x180FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FC8u;
        // 0x180fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180FD0u;
}
