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

// Function: floorf
// Address: 0x3a4d18 - 0x3a4e00
void floorf_0x3a4d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("floorf_0x3a4d18");
#endif

    switch (ctx->pc) {
        case 0x3a4d98u: goto label_3a4d98;
        default: break;
    }

    ctx->pc = 0x3a4d18u;

    // 0x3a4d18: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a4d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a4d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a4d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d20: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x3a4d20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x3a4d24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a4d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a4d28: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x3a4d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x3a4d2c: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x3a4d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x3a4d30: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A4D30u;
    {
        const bool branch_taken_0x3a4d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4d30) {
            ctx->pc = 0x3A4D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4D30u;
            // 0x3a4d34: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4DE0u;
            goto label_3a4de0;
        }
    }
    ctx->pc = 0x3A4D38u;
    // 0x3a4d38: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A4D38u;
    {
        const bool branch_taken_0x3a4d38 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3a4d38) {
            ctx->pc = 0x3A4D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4D38u;
            // 0x3a4d3c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4D84u;
            goto label_3a4d84;
        }
    }
    ctx->pc = 0x3A4D40u;
    // 0x3a4d40: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a4d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a4d44: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a4d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a4d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4d4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a4d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4d50: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3a4d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a4d54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a4d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a4d58: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x3A4D58u;
    {
        const bool branch_taken_0x3a4d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a4d58) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4D60u;
    // 0x3a4d60: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4D60u;
    {
        const bool branch_taken_0x3a4d60 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3A4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D60u;
        // 0x3a4d64: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d60) {
            ctx->pc = 0x3A4D70u;
            goto label_3a4d70;
        }
    }
    ctx->pc = 0x3A4D68u;
    // 0x3a4d68: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A4D68u;
    {
        const bool branch_taken_0x3a4d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D68u;
        // 0x3a4d6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d68) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4D70u;
label_3a4d70:
    // 0x3a4d70: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3a4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3a4d74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4d78: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3a4d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3a4d7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A4D7Cu;
    {
        const bool branch_taken_0x3a4d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D7Cu;
        // 0x3a4d80: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d7c) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4D84u;
label_3a4d84:
    // 0x3a4d84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4d88: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x3a4d88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3a4d8c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x3a4d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3a4d90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4D90u;
    {
        const bool branch_taken_0x3a4d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4d90) {
            ctx->pc = 0x3A4DA0u;
            goto label_3a4da0;
        }
    }
    ctx->pc = 0x3A4D98u;
label_3a4d98:
    // 0x3a4d98: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D98u;
        // 0x3a4d9c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4DA0u;
label_3a4da0:
    // 0x3a4da0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a4da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a4da4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a4da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a4da8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4dac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a4dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4db0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3a4db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a4db4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a4db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a4db8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3A4DB8u;
    {
        const bool branch_taken_0x3a4db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a4db8) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4DC0u;
    // 0x3a4dc0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4DC0u;
    {
        const bool branch_taken_0x3a4dc0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3A4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC0u;
        // 0x3a4dc4: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dc0) {
            ctx->pc = 0x3A4DD8u;
            goto label_3a4dd8;
        }
    }
    ctx->pc = 0x3A4DC8u;
    // 0x3a4dc8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3a4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3a4dcc: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x3a4dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3a4dd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a4dd4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x3a4dd4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_3a4dd8:
    // 0x3a4dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4DD8u;
    {
        const bool branch_taken_0x3a4dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD8u;
        // 0x3a4ddc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dd8) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4DE0u;
label_3a4de0:
    // 0x3a4de0: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3A4DE0u;
    {
        const bool branch_taken_0x3a4de0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a4de0) {
            ctx->pc = 0x3A4D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4d98;
        }
    }
    ctx->pc = 0x3A4DE8u;
    // 0x3a4de8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DE8u;
        // 0x3a4dec: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4DF0u;
label_3a4df0:
    // 0x3a4df0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x3a4df0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a4df4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DF4u;
        // 0x3a4df8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4DFCu;
    // 0x3a4dfc: 0x0  nop
    ctx->pc = 0x3a4dfcu;
    // NOP
    ctx->pc = 0x3a4e00u;
}
