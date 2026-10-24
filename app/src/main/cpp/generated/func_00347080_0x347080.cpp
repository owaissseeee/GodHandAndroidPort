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

// Function: func_00347080
// Address: 0x347080 - 0x3470f0
void func_00347080_0x347080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347080_0x347080");
#endif

    switch (ctx->pc) {
        case 0x3470d8u: goto label_3470d8;
        default: break;
    }

    ctx->pc = 0x347080u;

    // 0x347080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347084: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34708c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x34708cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347090: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x347090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x347094: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x347094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x347098: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x347098u;
    {
        const bool branch_taken_0x347098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347098u;
        // 0x34709c: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347098) {
            ctx->pc = 0x3470C8u;
            goto label_3470c8;
        }
    }
    ctx->pc = 0x3470A0u;
    // 0x3470a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3470A0u;
    {
        const bool branch_taken_0x3470a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470A0u;
        // 0x3470a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470a0) {
            ctx->pc = 0x3470B8u;
            goto label_3470b8;
        }
    }
    ctx->pc = 0x3470A8u;
    // 0x3470a8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3470A8u;
    {
        const bool branch_taken_0x3470a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3470a8) {
            ctx->pc = 0x3470ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3470A8u;
            // 0x3470ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3470D8u;
            goto label_3470d8;
        }
    }
    ctx->pc = 0x3470B0u;
    // 0x3470b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3470B0u;
    {
        const bool branch_taken_0x3470b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470B0u;
        // 0x3470b4: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470b0) {
            ctx->pc = 0x3470D0u;
            goto label_3470d0;
        }
    }
    ctx->pc = 0x3470B8u;
label_3470b8:
    // 0x3470b8: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3470B8u;
    {
        const bool branch_taken_0x3470b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3470BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470B8u;
        // 0x3470bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470b8) {
            ctx->pc = 0x3470DCu;
            goto label_3470dc;
        }
    }
    ctx->pc = 0x3470C0u;
    // 0x3470c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3470C0u;
    {
        const bool branch_taken_0x3470c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470C0u;
        // 0x3470c4: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470c0) {
            ctx->pc = 0x3470D0u;
            goto label_3470d0;
        }
    }
    ctx->pc = 0x3470C8u;
label_3470c8:
    // 0x3470c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3470C8u;
    {
        const bool branch_taken_0x3470c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470C8u;
        // 0x3470cc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470c8) {
            ctx->pc = 0x3470D8u;
            goto label_3470d8;
        }
    }
    ctx->pc = 0x3470D0u;
label_3470d0:
    // 0x3470d0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3470D0u;
    SET_GPR_U32(ctx, 31, 0x3470D8u);
    ctx->pc = 0x3470D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470D0u;
    // 0x3470d4: 0x248488d8  addiu       $a0, $a0, -0x7728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3470D0u, 0x3470D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3470D8u;
label_3470d8:
    // 0x3470d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3470d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3470dc:
    // 0x3470dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3470dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3470e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3470e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3470e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3470E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3470E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470E4u;
        // 0x3470e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3470E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3470ECu;
    // 0x3470ec: 0x0  nop
    ctx->pc = 0x3470ecu;
    // NOP
    ctx->pc = 0x3470f0u;
}
