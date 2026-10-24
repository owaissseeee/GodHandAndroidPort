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

// Function: func_003BBEC0
// Address: 0x3bbec0 - 0x3bbf20
void func_003BBEC0_0x3bbec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BBEC0_0x3bbec0");
#endif

    switch (ctx->pc) {
        case 0x3bbef0u: goto label_3bbef0;
        default: break;
    }

    ctx->pc = 0x3bbec0u;

    // 0x3bbec0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3bbec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3bbec4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3bbec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bbec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bbec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bbecc: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x3bbeccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x3bbed0: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x3bbed0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3bbed4: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x3bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x3bbed8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3BBED8u;
    {
        const bool branch_taken_0x3bbed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBED8u;
        // 0x3bbedc: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbed8) {
            ctx->pc = 0x3BBF0Cu;
            goto label_3bbf0c;
        }
    }
    ctx->pc = 0x3BBEE0u;
    // 0x3bbee0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x3bbee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3bbee4: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x3bbee4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x3bbee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBEE8u;
    {
        const bool branch_taken_0x3bbee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEE8u;
        // 0x3bbeec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbee8) {
            ctx->pc = 0x3BBF00u;
            goto label_3bbf00;
        }
    }
    ctx->pc = 0x3BBEF0u;
label_3bbef0:
    // 0x3bbef0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x3bbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3bbef4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3bbef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbef8: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BBEF8u;
    {
        const bool branch_taken_0x3bbef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEF8u;
        // 0x3bbefc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbef8) {
            ctx->pc = 0x3BBF14u;
            goto label_3bbf14;
        }
    }
    ctx->pc = 0x3BBF00u;
label_3bbf00:
    // 0x3bbf00: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3bbf00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbf04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BBF04u;
    {
        const bool branch_taken_0x3bbf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF04u;
        // 0x3bbf08: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf04) {
            ctx->pc = 0x3BBEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbef0;
        }
    }
    ctx->pc = 0x3BBF0Cu;
label_3bbf0c:
    // 0x3bbf0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bbf10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bbf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3bbf14:
    // 0x3bbf14: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF14u;
        // 0x3bbf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBF1Cu;
    // 0x3bbf1c: 0x0  nop
    ctx->pc = 0x3bbf1cu;
    // NOP
    ctx->pc = 0x3bbf20u;
}
