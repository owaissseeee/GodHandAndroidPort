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

// Function: GetPilotClassDesc_1BDE00
// Address: 0x1bde00 - 0x1bde50
void GetPilotClassDesc_1BDE00_0x1bde00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPilotClassDesc_1BDE00_0x1bde00");
#endif

    switch (ctx->pc) {
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde3cu: goto label_1bde3c;
        default: break;
    }

    ctx->pc = 0x1bde00u;

    // 0x1bde00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bde00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bde04: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1bde04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1bde08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bde08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bde0c: 0x8c625858  lw          $v0, 0x5858($v1)
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785858u));
    // 0x1bde10: 0x24705858  addiu       $s0, $v1, 0x5858
    ctx->pc = 0x1bde10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22616));
    // 0x1bde14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDE14u;
    {
        const bool branch_taken_0x1bde14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE14u;
        // 0x1bde18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde14) {
            ctx->pc = 0x1BDE3Cu;
            goto label_1bde3c;
        }
    }
    ctx->pc = 0x1BDE1Cu;
    // 0x1bde1c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1BDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE24u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1BDE1Cu, 0x1BDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE24u;
label_1bde24:
    // 0x1bde24: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1bde24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1bde28: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1bde2c: 0x24a594d0  addiu       $a1, $a1, -0x6B30
    ctx->pc = 0x1bde2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939856));
    // 0x1bde30: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1bde30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1bde34: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1BDE34u;
    SET_GPR_U32(ctx, 31, 0x1BDE3Cu);
    ctx->pc = 0x1BDE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE34u;
    // 0x1bde38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1BDE34u, 0x1BDE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE3Cu;
label_1bde3c:
    // 0x1bde3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bde3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bde40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bde44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE48u;
        // 0x1bde4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE50u;
}
