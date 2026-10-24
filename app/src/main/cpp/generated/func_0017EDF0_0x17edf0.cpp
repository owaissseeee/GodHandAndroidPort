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

// Function: func_0017EDF0
// Address: 0x17edf0 - 0x17ee40
void func_0017EDF0_0x17edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EDF0_0x17edf0");
#endif

    switch (ctx->pc) {
        case 0x17ee14u: goto label_17ee14;
        case 0x17ee2cu: goto label_17ee2c;
        default: break;
    }

    ctx->pc = 0x17edf0u;

    // 0x17edf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17edf4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17edf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17edfc: 0x8c625a08  lw          $v0, 0x5A08($v1)
    ctx->pc = 0x17edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A08u));
    // 0x17ee00: 0x24705a08  addiu       $s0, $v1, 0x5A08
    ctx->pc = 0x17ee00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23048));
    // 0x17ee04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EE04u;
    {
        const bool branch_taken_0x17ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE04u;
        // 0x17ee08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee04) {
            ctx->pc = 0x17EE2Cu;
            goto label_17ee2c;
        }
    }
    ctx->pc = 0x17EE0Cu;
    // 0x17ee0c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x17EE0Cu;
    SET_GPR_U32(ctx, 31, 0x17EE14u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x17EE0Cu, 0x17EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE14u;
label_17ee14:
    // 0x17ee14: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17ee18: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17ee18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17ee1c: 0x24a522f0  addiu       $a1, $a1, 0x22F0
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8944));
    // 0x17ee20: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x17ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x17ee24: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17EE24u;
    SET_GPR_U32(ctx, 31, 0x17EE2Cu);
    ctx->pc = 0x17EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE24u;
    // 0x17ee28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17EE24u, 0x17EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE2Cu;
label_17ee2c:
    // 0x17ee2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ee34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee38: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE38u;
        // 0x17ee3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE40u;
}
