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

// Function: mwsfcre_ConvBufFmtFromMwsfd
// Address: 0x342e00 - 0x342e50
void mwsfcre_ConvBufFmtFromMwsfd_0x342e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfcre_ConvBufFmtFromMwsfd_0x342e00");
#endif

    switch (ctx->pc) {
        case 0x342e3cu: goto label_342e3c;
        default: break;
    }

    ctx->pc = 0x342e00u;

    // 0x342e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x342e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342e0c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x342E0Cu;
    {
        const bool branch_taken_0x342e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x342E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E0Cu;
        // 0x342e10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e0c) {
            ctx->pc = 0x342E40u;
            goto label_342e40;
        }
    }
    ctx->pc = 0x342E14u;
    // 0x342e14: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x342E14u;
    {
        const bool branch_taken_0x342e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E14u;
        // 0x342e18: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e14) {
            ctx->pc = 0x342E40u;
            goto label_342e40;
        }
    }
    ctx->pc = 0x342E1Cu;
    // 0x342e1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x342e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342e20: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342E20u;
    {
        const bool branch_taken_0x342e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x342E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E20u;
        // 0x342e24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e20) {
            ctx->pc = 0x342E40u;
            goto label_342e40;
        }
    }
    ctx->pc = 0x342E28u;
    // 0x342e28: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342E28u;
    {
        const bool branch_taken_0x342e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x342E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E28u;
        // 0x342e2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e28) {
            ctx->pc = 0x342E40u;
            goto label_342e40;
        }
    }
    ctx->pc = 0x342E30u;
    // 0x342e30: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x342e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x342e34: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x342E34u;
    SET_GPR_U32(ctx, 31, 0x342E3Cu);
    ctx->pc = 0x342E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E34u;
    // 0x342e38: 0x24847140  addiu       $a0, $a0, 0x7140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x342E34u, 0x342E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E3Cu;
label_342e3c:
    // 0x342e3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x342e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_342e40:
    // 0x342e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342e44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x342e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342e48: 0x3e00008  jr          $ra
    ctx->pc = 0x342E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E48u;
        // 0x342e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E50u;
}
