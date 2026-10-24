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

// Function: cSnd_GetBgmHitScale
// Address: 0x2d2cf0 - 0x2d2d68
void cSnd_GetBgmHitScale_0x2d2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_GetBgmHitScale_0x2d2cf0");
#endif

    switch (ctx->pc) {
        case 0x2d2d14u: goto label_2d2d14;
        default: break;
    }

    ctx->pc = 0x2d2cf0u;

    // 0x2d2cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2cf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d2cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d2cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d00: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d2d04: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D2D04u;
    {
        const bool branch_taken_0x2d2d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D04u;
        // 0x2d2d08: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d04) {
            ctx->pc = 0x2D2D48u;
            goto label_2d2d48;
        }
    }
    ctx->pc = 0x2D2D0Cu;
    // 0x2d2d0c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2D2D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D14u);
    ctx->pc = 0x2D2D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D0Cu;
    // 0x2d2d10: 0x24a5d100  addiu       $a1, $a1, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2D2D0Cu, 0x2D2D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D14u;
label_2d2d14:
    // 0x2d2d14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D2D14u;
    {
        const bool branch_taken_0x2d2d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d14) {
            ctx->pc = 0x2D2D48u;
            goto label_2d2d48;
        }
    }
    ctx->pc = 0x2D2D1Cu;
    // 0x2d2d1c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d2d20: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2d2d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2d2d24: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2d2d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2d2d28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2d2c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2d2d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2d30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d2d30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2d34: 0x0  nop
    ctx->pc = 0x2d2d34u;
    // NOP
    // 0x2d2d38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2D38u;
    {
        const bool branch_taken_0x2d2d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2d38) {
            ctx->pc = 0x2D2D48u;
            goto label_2d2d48;
        }
    }
    ctx->pc = 0x2D2D40u;
    // 0x2d2d40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2D40u;
    {
        const bool branch_taken_0x2d2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D40u;
        // 0x2d2d44: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d40) {
            ctx->pc = 0x2D2D54u;
            goto label_2d2d54;
        }
    }
    ctx->pc = 0x2D2D48u;
label_2d2d48:
    // 0x2d2d48: 0x3c013c93  lui         $at, 0x3C93
    ctx->pc = 0x2d2d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15507 << 16));
    // 0x2d2d4c: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x2d2d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x2d2d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2d54:
    // 0x2d2d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d2d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D5Cu;
        // 0x2d2d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2D64u;
    // 0x2d2d64: 0x0  nop
    ctx->pc = 0x2d2d64u;
    // NOP
    ctx->pc = 0x2d2d68u;
}
