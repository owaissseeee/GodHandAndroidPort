#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __deregister_frame_info
// Address: 0x7ccef8 - 0x7ccf70
void ps2___deregister_frame_info_0x7ccef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___deregister_frame_info_0x7ccef8");
#endif

    switch (ctx->pc) {
        case 0x7ccf18u: goto label_7ccf18;
        case 0x7ccf3cu: goto label_7ccf3c;
        default: break;
    }

    ctx->pc = 0x7ccef8u;

    // 0x7ccef8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ccefc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ccefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ccf00: 0x8c431958  lw          $v1, 0x1958($v0)
    ctx->pc = 0x7ccf00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D1958u));
    // 0x7ccf04: 0x24451958  addiu       $a1, $v0, 0x1958
    ctx->pc = 0x7ccf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6488));
    // 0x7ccf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7ccf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7ccf0c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x7CCF0Cu;
    {
        const bool branch_taken_0x7ccf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCF0Cu;
        // 0x7ccf10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccf0c) {
            ctx->pc = 0x7CCF4Cu;
            goto label_7ccf4c;
        }
    }
    ctx->pc = 0x7CCF14u;
    // 0x7ccf14: 0x0  nop
    ctx->pc = 0x7ccf14u;
    // NOP
label_7ccf18:
    // 0x7ccf18: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x7ccf18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7ccf1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ccf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ccf20: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CCF20u;
    {
        const bool branch_taken_0x7ccf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x7CCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCF20u;
        // 0x7ccf24: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccf20) {
            ctx->pc = 0x7CCF44u;
            goto label_7ccf44;
        }
    }
    ctx->pc = 0x7CCF28u;
    // 0x7ccf28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7ccf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ccf2c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x7CCF2Cu;
    {
        const bool branch_taken_0x7ccf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCF2Cu;
        // 0x7ccf30: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccf2c) {
            ctx->pc = 0x7CCF5Cu;
            goto label_7ccf5c;
        }
    }
    ctx->pc = 0x7CCF34u;
    // 0x7ccf34: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x7CCF34u;
    SET_GPR_U32(ctx, 31, 0x7CCF3Cu);
    ctx->pc = 0x7CCF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCF34u;
    // 0x7ccf38: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x7CCF34u, 0x7CCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCF3Cu;
label_7ccf3c:
    // 0x7ccf3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7CCF3Cu;
    {
        const bool branch_taken_0x7ccf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCF3Cu;
        // 0x7ccf40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccf3c) {
            ctx->pc = 0x7CCF60u;
            goto label_7ccf60;
        }
    }
    ctx->pc = 0x7CCF44u;
label_7ccf44:
    // 0x7ccf44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CCF44u;
    {
        const bool branch_taken_0x7ccf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCF44u;
        // 0x7ccf48: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccf44) {
            ctx->pc = 0x7CCF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ccf18;
        }
    }
    ctx->pc = 0x7CCF4Cu;
label_7ccf4c:
    // 0x7ccf4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ccf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ccf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ccf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ccf54: 0x80e9ed2  j           func_3A7B48
    ctx->pc = 0x7CCF54u;
    ctx->pc = 0x7CCF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCF54u;
    // 0x7ccf58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x7CCF54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CCF5Cu;
label_7ccf5c:
    // 0x7ccf5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7ccf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7ccf60:
    // 0x7ccf60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ccf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ccf64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ccf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ccf68: 0x3e00008  jr          $ra
    ctx->pc = 0x7CCF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCF68u;
        // 0x7ccf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CCF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CCF70u;
}
} // namespace gh_mcport
