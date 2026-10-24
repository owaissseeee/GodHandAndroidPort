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

// Function: func_00338CD0
// Address: 0x338cd0 - 0x338d58
void func_00338CD0_0x338cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338CD0_0x338cd0");
#endif

    switch (ctx->pc) {
        case 0x338d40u: goto label_338d40;
        default: break;
    }

    ctx->pc = 0x338cd0u;

    // 0x338cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338cdc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x338CDCu;
    {
        const bool branch_taken_0x338cdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x338CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CDCu;
        // 0x338ce0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338cdc) {
            ctx->pc = 0x338D08u;
            goto label_338d08;
        }
    }
    ctx->pc = 0x338CE4u;
    // 0x338ce4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338ce8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338cf0: 0x24845910  addiu       $a0, $a0, 0x5910
    ctx->pc = 0x338cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22800));
    // 0x338cf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338cf8: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x338cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
    // 0x338cfc: 0x80ce292  j           func_338A48
    ctx->pc = 0x338CFCu;
    ctx->pc = 0x338D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CFCu;
    // 0x338d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338CFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338D04u;
    // 0x338d04: 0x0  nop
    ctx->pc = 0x338d04u;
    // NOP
label_338d08:
    // 0x338d08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x338d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x338d0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x338D0Cu;
    {
        const bool branch_taken_0x338d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D0Cu;
        // 0x338d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d0c) {
            ctx->pc = 0x338D38u;
            goto label_338d38;
        }
    }
    ctx->pc = 0x338D14u;
    // 0x338d14: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338d18: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338d20: 0x24845940  addiu       $a0, $a0, 0x5940
    ctx->pc = 0x338d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22848));
    // 0x338d24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338d28: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x338d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
    // 0x338d2c: 0x80ce292  j           func_338A48
    ctx->pc = 0x338D2Cu;
    ctx->pc = 0x338D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D2Cu;
    // 0x338d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338D2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338D34u;
    // 0x338d34: 0x0  nop
    ctx->pc = 0x338d34u;
    // NOP
label_338d38:
    // 0x338d38: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x338D38u;
    SET_GPR_U32(ctx, 31, 0x338D40u);
    ctx->pc = 0x338D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D38u;
    // 0x338d3c: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x338D38u, 0x338D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D40u;
label_338d40:
    // 0x338d40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x338d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x338d44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x338D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D4Cu;
        // 0x338d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D54u;
    // 0x338d54: 0x0  nop
    ctx->pc = 0x338d54u;
    // NOP
    ctx->pc = 0x338d58u;
}
