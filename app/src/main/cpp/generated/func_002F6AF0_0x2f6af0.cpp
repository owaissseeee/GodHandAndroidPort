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

// Function: func_002F6AF0
// Address: 0x2f6af0 - 0x2f6b40
void func_002F6AF0_0x2f6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6AF0_0x2f6af0");
#endif

    switch (ctx->pc) {
        case 0x2f6b14u: goto label_2f6b14;
        case 0x2f6b2cu: goto label_2f6b2c;
        default: break;
    }

    ctx->pc = 0x2f6af0u;

    // 0x2f6af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6af4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f6af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f6afc: 0x8c626538  lw          $v0, 0x6538($v1)
    ctx->pc = 0x2f6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786538u));
    // 0x2f6b00: 0x24706538  addiu       $s0, $v1, 0x6538
    ctx->pc = 0x2f6b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25912));
    // 0x2f6b04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6B04u;
    {
        const bool branch_taken_0x2f6b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B04u;
        // 0x2f6b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b04) {
            ctx->pc = 0x2F6B2Cu;
            goto label_2f6b2c;
        }
    }
    ctx->pc = 0x2F6B0Cu;
    // 0x2f6b0c: 0xc0bbe98  jal         func_2EFA60
    ctx->pc = 0x2F6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B14u);
    ctx->pc = 0x2EFA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA60u, 0x2F6B0Cu, 0x2F6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B14u;
label_2f6b14:
    // 0x2f6b14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f6b18: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f6b1c: 0x24a5f590  addiu       $a1, $a1, -0xA70
    ctx->pc = 0x2f6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964624));
    // 0x2f6b20: 0x24c663f8  addiu       $a2, $a2, 0x63F8
    ctx->pc = 0x2f6b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25592));
    // 0x2f6b24: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F6B24u;
    SET_GPR_U32(ctx, 31, 0x2F6B2Cu);
    ctx->pc = 0x2F6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B24u;
    // 0x2f6b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F6B24u, 0x2F6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B2Cu;
label_2f6b2c:
    // 0x2f6b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6b34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f6b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B38u;
        // 0x2f6b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6B40u;
}
