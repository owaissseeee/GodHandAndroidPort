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

// Function: func_00338EC8
// Address: 0x338ec8 - 0x338f30
void func_00338EC8_0x338ec8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338EC8_0x338ec8");
#endif


    // 0x338ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338ecc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338ECCu;
    {
        const bool branch_taken_0x338ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x338ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338ECCu;
        // 0x338ed0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ecc) {
            ctx->pc = 0x338EF0u;
            goto label_338ef0;
        }
    }
    // 0x338ed4: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338ed8: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338ee0: 0x248459b0  addiu       $a0, $a0, 0x59B0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22960));
    // 0x338ee4: 0x24a55920  addiu       $a1, $a1, 0x5920
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
    // 0x338ee8: 0x80ce292  j           func_338A48
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EE8u;
    // 0x338eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338EE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_338ef0:
    // 0x338ef0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x338ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338ef4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x338EF4u;
    {
        const bool branch_taken_0x338ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338ef4) {
            ctx->pc = 0x338EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338EF4u;
            // 0x338ef8: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338F18u;
            goto label_338f18;
        }
    }
    // 0x338efc: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338f00: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338f08: 0x248459c0  addiu       $a0, $a0, 0x59C0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22976));
    // 0x338f0c: 0x24a55950  addiu       $a1, $a1, 0x5950
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
    // 0x338f10: 0x80ce292  j           func_338A48
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F10u;
    // 0x338f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338F10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_338f18:
    // 0x338f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338f1c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x338f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x338f20: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x338f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x338f24: 0x3e00008  jr          $ra
    ctx->pc = 0x338F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F24u;
        // 0x338f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x338f2c: 0x0  nop
    // NOP
    ctx->pc = 0x338f30u;
}