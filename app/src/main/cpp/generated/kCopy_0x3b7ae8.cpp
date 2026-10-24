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

// Function: kCopy
// Address: 0x3b7ae8 - 0x3b7b20
void kCopy_0x3b7ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x3b7ae8");
#endif

    switch (ctx->pc) {
        case 0x3b7af8u: goto label_3b7af8;
        default: break;
    }

    ctx->pc = 0x3b7ae8u;

    // 0x3b7ae8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x3b7ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3b7aec: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3B7AECu;
    {
        const bool branch_taken_0x3b7aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AECu;
        // 0x3b7af0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7aec) {
            ctx->pc = 0x3B7B18u;
            goto label_3b7b18;
        }
    }
    ctx->pc = 0x3B7AF4u;
    // 0x3b7af4: 0x0  nop
    ctx->pc = 0x3b7af4u;
    // NOP
label_3b7af8:
    // 0x3b7af8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b7afc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b7afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3b7b00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3b7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3b7b04: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3b7b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b7b08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3b7b0c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b7b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b7b10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B7B10u;
    {
        const bool branch_taken_0x3b7b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b10) {
            ctx->pc = 0x3B7AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7af8;
        }
    }
    ctx->pc = 0x3B7B18u;
label_3b7b18:
    // 0x3b7b18: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7B18u;
        // 0x3b7b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7B20u;
}
