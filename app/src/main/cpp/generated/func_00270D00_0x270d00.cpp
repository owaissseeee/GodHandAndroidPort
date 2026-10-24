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

// Function: func_00270D00
// Address: 0x270d00 - 0x270db0
void func_00270D00_0x270d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00270D00_0x270d00");
#endif

    switch (ctx->pc) {
        case 0x270d14u: goto label_270d14;
        default: break;
    }

    ctx->pc = 0x270d00u;

    // 0x270d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270d04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x270d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270d0c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x270D0Cu;
    SET_GPR_U32(ctx, 31, 0x270D14u);
    ctx->pc = 0x270D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D0Cu;
    // 0x270d10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x270D0Cu, 0x270D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D14u;
label_270d14:
    // 0x270d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d18: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x270d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x270d1c: 0x24020221  addiu       $v0, $zero, 0x221
    ctx->pc = 0x270d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x270d20: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x270D20u;
    {
        const bool branch_taken_0x270d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D20u;
        // 0x270d24: 0x28620222  slti        $v0, $v1, 0x222 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)546) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d20) {
            ctx->pc = 0x270D4Cu;
            goto label_270d4c;
        }
    }
    ctx->pc = 0x270D28u;
    // 0x270d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270D28u;
    {
        const bool branch_taken_0x270d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D28u;
        // 0x270d2c: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d28) {
            ctx->pc = 0x270D40u;
            goto label_270d40;
        }
    }
    ctx->pc = 0x270D30u;
    // 0x270d30: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x270D30u;
    {
        const bool branch_taken_0x270d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D30u;
        // 0x270d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d30) {
            ctx->pc = 0x270DA0u;
            goto label_270da0;
        }
    }
    ctx->pc = 0x270D38u;
    // 0x270d38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x270D38u;
    {
        const bool branch_taken_0x270d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D38u;
        // 0x270d3c: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d38) {
            ctx->pc = 0x270D54u;
            goto label_270d54;
        }
    }
    ctx->pc = 0x270D40u;
label_270d40:
    // 0x270d40: 0x24020242  addiu       $v0, $zero, 0x242
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x270d44: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270D44u;
    {
        const bool branch_taken_0x270d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270d44) {
            ctx->pc = 0x270D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270D44u;
            // 0x270d48: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270D54u;
            goto label_270d54;
        }
    }
    ctx->pc = 0x270D4Cu;
label_270d4c:
    // 0x270d4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x270D4Cu;
    {
        const bool branch_taken_0x270d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D4Cu;
        // 0x270d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d4c) {
            ctx->pc = 0x270DA0u;
            goto label_270da0;
        }
    }
    ctx->pc = 0x270D54u;
label_270d54:
    // 0x270d54: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x270d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x270d58: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x270d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270d5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x270d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270d60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x270d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270d64: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x270d64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270d68: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x270d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270d6c: 0x0  nop
    ctx->pc = 0x270d6cu;
    // NOP
    // 0x270d70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x270D70u;
    {
        const bool branch_taken_0x270d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D70u;
        // 0x270d74: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d70) {
            ctx->pc = 0x270D7Cu;
            goto label_270d7c;
        }
    }
    ctx->pc = 0x270D78u;
    // 0x270d78: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x270d78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_270d7c:
    // 0x270d7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x270d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x270d80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x270d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x270d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270d88: 0x0  nop
    ctx->pc = 0x270d88u;
    // NOP
    // 0x270d8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x270d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270d90: 0x0  nop
    ctx->pc = 0x270d90u;
    // NOP
    // 0x270d94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x270D94u;
    {
        const bool branch_taken_0x270d94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D94u;
        // 0x270d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d94) {
            ctx->pc = 0x270DA0u;
            goto label_270da0;
        }
    }
    ctx->pc = 0x270D9Cu;
    // 0x270d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270da0:
    // 0x270da0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x270da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270da8: 0x3e00008  jr          $ra
    ctx->pc = 0x270DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DA8u;
        // 0x270dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270DB0u;
}
