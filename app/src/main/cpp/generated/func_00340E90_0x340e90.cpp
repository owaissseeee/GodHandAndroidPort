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

// Function: func_00340E90
// Address: 0x340e90 - 0x340ef8
void func_00340E90_0x340e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340E90_0x340e90");
#endif

    switch (ctx->pc) {
        case 0x340eb0u: goto label_340eb0;
        case 0x340eccu: goto label_340ecc;
        default: break;
    }

    ctx->pc = 0x340e90u;

    // 0x340e90: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x340e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x340e94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340e98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x340e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340e9c: 0x24a57040  addiu       $a1, $a1, 0x7040
    ctx->pc = 0x340e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28736));
    // 0x340ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340ea4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x340ea8: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x340EA8u;
    SET_GPR_U32(ctx, 31, 0x340EB0u);
    ctx->pc = 0x340EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340EA8u;
    // 0x340eac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x340EA8u, 0x340EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340EB0u;
label_340eb0:
    // 0x340eb0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x340eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x340eb4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x340eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x340eb8: 0x24a57048  addiu       $a1, $a1, 0x7048
    ctx->pc = 0x340eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28744));
    // 0x340ebc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x340EBCu;
    {
        const bool branch_taken_0x340ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EBCu;
        // 0x340ec0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ebc) {
            ctx->pc = 0x340EE0u;
            goto label_340ee0;
        }
    }
    ctx->pc = 0x340EC4u;
    // 0x340ec4: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x340EC4u;
    SET_GPR_U32(ctx, 31, 0x340ECCu);
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x340EC4u, 0x340ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340ECCu;
label_340ecc:
    // 0x340ecc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x340ECCu;
    {
        const bool branch_taken_0x340ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340ecc) {
            ctx->pc = 0x340ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340ECCu;
            // 0x340ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340EE4u;
            goto label_340ee4;
        }
    }
    ctx->pc = 0x340ED4u;
    // 0x340ed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x340ED4u;
    {
        const bool branch_taken_0x340ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340ED4u;
        // 0x340ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ed4) {
            ctx->pc = 0x340EE4u;
            goto label_340ee4;
        }
    }
    ctx->pc = 0x340EDCu;
    // 0x340edc: 0x0  nop
    ctx->pc = 0x340edcu;
    // NOP
label_340ee0:
    // 0x340ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340ee4:
    // 0x340ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340ee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340eec: 0x3e00008  jr          $ra
    ctx->pc = 0x340EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EECu;
        // 0x340ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340EF4u;
    // 0x340ef4: 0x0  nop
    ctx->pc = 0x340ef4u;
    // NOP
    ctx->pc = 0x340ef8u;
}
