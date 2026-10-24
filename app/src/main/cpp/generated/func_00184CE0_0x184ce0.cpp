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

// Function: func_00184CE0
// Address: 0x184ce0 - 0x184e60
void func_00184CE0_0x184ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00184CE0_0x184ce0");
#endif

    switch (ctx->pc) {
        case 0x184d6cu: goto label_184d6c;
        case 0x184d9cu: goto label_184d9c;
        case 0x184e34u: goto label_184e34;
        default: break;
    }

    ctx->pc = 0x184ce0u;

    // 0x184ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184ce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cf0: 0x86020622  lh          $v0, 0x622($s0)
    ctx->pc = 0x184cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1570)));
    // 0x184cf4: 0x86030630  lh          $v1, 0x630($s0)
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1584)));
    // 0x184cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184cfc: 0x0  nop
    ctx->pc = 0x184cfcu;
    // NOP
    // 0x184d00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x184d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184d04: 0x92050657  lbu         $a1, 0x657($s0)
    ctx->pc = 0x184d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1623)));
    // 0x184d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d0c: 0x0  nop
    ctx->pc = 0x184d0cu;
    // NOP
    // 0x184d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184d14: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x184d14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x184d18: 0x0  nop
    ctx->pc = 0x184d18u;
    // NOP
    // 0x184d1c: 0x0  nop
    ctx->pc = 0x184d1cu;
    // NOP
    // 0x184d20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184d20u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x184d24: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x184D24u;
    {
        const bool branch_taken_0x184d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D24u;
        // 0x184d28: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d24) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184D2Cu;
    // 0x184d2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x184d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x184d30: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x184d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x184d34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184d38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x184d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184d3c: 0x800008  jr          $a0
    ctx->pc = 0x184D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184D44u: goto label_184d44;
            case 0x184D74u: goto label_184d74;
            case 0x184DA4u: goto label_184da4;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DECu: goto label_184dec;
            case 0x184E10u: goto label_184e10;
            case 0x184E44u: goto label_184e44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184D3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x184D44u;
label_184d44:
    // 0x184d44: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x184d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x184d48: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x184d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x184d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d50: 0x0  nop
    ctx->pc = 0x184d50u;
    // NOP
    // 0x184d54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184d58: 0x0  nop
    ctx->pc = 0x184d58u;
    // NOP
    // 0x184d5c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x184D5Cu;
    {
        const bool branch_taken_0x184d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D5Cu;
        // 0x184d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d5c) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184D64u;
    // 0x184d64: 0xc061644  jal         func_185910
    ctx->pc = 0x184D64u;
    SET_GPR_U32(ctx, 31, 0x184D6Cu);
    ctx->pc = 0x184D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D64u;
    // 0x184d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185910u, 0x184D64u, 0x184D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D6Cu;
label_184d6c:
    // 0x184d6c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x184D6Cu;
    {
        const bool branch_taken_0x184d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D6Cu;
        // 0x184d70: 0x92020657  lbu         $v0, 0x657($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1623)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d6c) {
            ctx->pc = 0x184E38u;
            goto label_184e38;
        }
    }
    ctx->pc = 0x184D74u;
label_184d74:
    // 0x184d74: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x184d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x184d78: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x184d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x184d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d80: 0x0  nop
    ctx->pc = 0x184d80u;
    // NOP
    // 0x184d84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184d88: 0x0  nop
    ctx->pc = 0x184d88u;
    // NOP
    // 0x184d8c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x184D8Cu;
    {
        const bool branch_taken_0x184d8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D8Cu;
        // 0x184d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d8c) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184D94u;
    // 0x184d94: 0xc061644  jal         func_185910
    ctx->pc = 0x184D94u;
    SET_GPR_U32(ctx, 31, 0x184D9Cu);
    ctx->pc = 0x184D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D94u;
    // 0x184d98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185910u, 0x184D94u, 0x184D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D9Cu;
label_184d9c:
    // 0x184d9c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x184D9Cu;
    {
        const bool branch_taken_0x184d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D9Cu;
        // 0x184da0: 0x92020657  lbu         $v0, 0x657($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1623)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d9c) {
            ctx->pc = 0x184E38u;
            goto label_184e38;
        }
    }
    ctx->pc = 0x184DA4u;
label_184da4:
    // 0x184da4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x184da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x184da8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184dac: 0x0  nop
    ctx->pc = 0x184dacu;
    // NOP
    // 0x184db0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184db4: 0x0  nop
    ctx->pc = 0x184db4u;
    // NOP
    // 0x184db8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x184DB8u;
    {
        const bool branch_taken_0x184db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DB8u;
        // 0x184dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184db8) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184DC0u;
    // 0x184dc0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x184DC0u;
    {
        const bool branch_taken_0x184dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DC0u;
        // 0x184dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dc0) {
            ctx->pc = 0x184E2Cu;
            goto label_184e2c;
        }
    }
    ctx->pc = 0x184DC8u;
label_184dc8:
    // 0x184dc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x184dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x184dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184dd0: 0x0  nop
    ctx->pc = 0x184dd0u;
    // NOP
    // 0x184dd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184dd8: 0x0  nop
    ctx->pc = 0x184dd8u;
    // NOP
    // 0x184ddc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x184DDCu;
    {
        const bool branch_taken_0x184ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DDCu;
        // 0x184de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ddc) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184DE4u;
    // 0x184de4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x184DE4u;
    {
        const bool branch_taken_0x184de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DE4u;
        // 0x184de8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184de4) {
            ctx->pc = 0x184E2Cu;
            goto label_184e2c;
        }
    }
    ctx->pc = 0x184DECu;
label_184dec:
    // 0x184dec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x184decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x184df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184df4: 0x0  nop
    ctx->pc = 0x184df4u;
    // NOP
    // 0x184df8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184dfc: 0x0  nop
    ctx->pc = 0x184dfcu;
    // NOP
    // 0x184e00: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x184E00u;
    {
        const bool branch_taken_0x184e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E00u;
        // 0x184e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e00) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184E08u;
    // 0x184e08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184E08u;
    {
        const bool branch_taken_0x184e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E08u;
        // 0x184e0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e08) {
            ctx->pc = 0x184E2Cu;
            goto label_184e2c;
        }
    }
    ctx->pc = 0x184E10u;
label_184e10:
    // 0x184e10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184e14: 0x0  nop
    ctx->pc = 0x184e14u;
    // NOP
    // 0x184e18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184e1c: 0x0  nop
    ctx->pc = 0x184e1cu;
    // NOP
    // 0x184e20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x184E20u;
    {
        const bool branch_taken_0x184e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E20u;
        // 0x184e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e20) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184E28u;
    // 0x184e28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x184e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184e2c:
    // 0x184e2c: 0xc061688  jal         func_185A20
    ctx->pc = 0x184E2Cu;
    SET_GPR_U32(ctx, 31, 0x184E34u);
    ctx->pc = 0x185A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185A20u, 0x184E2Cu, 0x184E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E34u;
label_184e34:
    // 0x184e34: 0x92020657  lbu         $v0, 0x657($s0)
    ctx->pc = 0x184e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1623)));
label_184e38:
    // 0x184e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184E3Cu;
    {
        const bool branch_taken_0x184e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E3Cu;
        // 0x184e40: 0xa2020657  sb          $v0, 0x657($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1623), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e3c) {
            ctx->pc = 0x184E4Cu;
            goto label_184e4c;
        }
    }
    ctx->pc = 0x184E44u;
label_184e44:
    // 0x184e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184e48: 0xa202065e  sb          $v0, 0x65E($s0)
    ctx->pc = 0x184e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1630), (uint8_t)GPR_U32(ctx, 2));
label_184e4c:
    // 0x184e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e54: 0x3e00008  jr          $ra
    ctx->pc = 0x184E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E54u;
        // 0x184e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184E5Cu;
    // 0x184e5c: 0x0  nop
    ctx->pc = 0x184e5cu;
    // NOP
    ctx->pc = 0x184e60u;
}
