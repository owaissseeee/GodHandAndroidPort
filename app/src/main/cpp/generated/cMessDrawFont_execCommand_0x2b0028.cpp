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

// Function: cMessDrawFont_execCommand
// Address: 0x2b0028 - 0x2b00a0
void cMessDrawFont_execCommand_0x2b0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_execCommand_0x2b0028");
#endif

    switch (ctx->pc) {
        case 0x2b0074u: goto label_2b0074;
        case 0x2b0084u: goto label_2b0084;
        case 0x2b0094u: goto label_2b0094;
        default: break;
    }

    ctx->pc = 0x2b0028u;

    // 0x2b0028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b002c: 0x34069400  ori         $a2, $zero, 0x9400
    ctx->pc = 0x2b002cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x2b0030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0034: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x2b0034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2b0038: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b0038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b003c: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2b003cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b0040: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B0040u;
    {
        const bool branch_taken_0x2b0040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0040u;
        // 0x2b0044: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0040) {
            ctx->pc = 0x2B008Cu;
            goto label_2b008c;
        }
    }
    ctx->pc = 0x2B0048u;
    // 0x2b0048: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0048u;
    {
        const bool branch_taken_0x2b0048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0048u;
        // 0x2b004c: 0x3402a800  ori         $v0, $zero, 0xA800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0048) {
            ctx->pc = 0x2B0064u;
            goto label_2b0064;
        }
    }
    ctx->pc = 0x2B0050u;
    // 0x2b0050: 0x34029300  ori         $v0, $zero, 0x9300
    ctx->pc = 0x2b0050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    // 0x2b0054: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0054u;
    {
        const bool branch_taken_0x2b0054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0054u;
        // 0x2b0058: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0054) {
            ctx->pc = 0x2B007Cu;
            goto label_2b007c;
        }
    }
    ctx->pc = 0x2B005Cu;
    // 0x2b005c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B005Cu;
    {
        const bool branch_taken_0x2b005c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b005c) {
            ctx->pc = 0x2B0098u;
            goto label_2b0098;
        }
    }
    ctx->pc = 0x2B0064u;
label_2b0064:
    // 0x2b0064: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0064u;
    {
        const bool branch_taken_0x2b0064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0064u;
        // 0x2b0068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0064) {
            ctx->pc = 0x2B0098u;
            goto label_2b0098;
        }
    }
    ctx->pc = 0x2B006Cu;
    // 0x2b006c: 0xc0ac028  jal         func_2B00A0
    ctx->pc = 0x2B006Cu;
    SET_GPR_U32(ctx, 31, 0x2B0074u);
    ctx->pc = 0x2B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B00A0u, 0x2B006Cu, 0x2B0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0074u;
label_2b0074:
    // 0x2b0074: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0074u;
    {
        const bool branch_taken_0x2b0074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0074u;
        // 0x2b0078: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0074) {
            ctx->pc = 0x2B0098u;
            goto label_2b0098;
        }
    }
    ctx->pc = 0x2B007Cu;
label_2b007c:
    // 0x2b007c: 0xc0ac082  jal         func_2B0208
    ctx->pc = 0x2B007Cu;
    SET_GPR_U32(ctx, 31, 0x2B0084u);
    ctx->pc = 0x2B0208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0208u, 0x2B007Cu, 0x2B0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0084u;
label_2b0084:
    // 0x2b0084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0084u;
    {
        const bool branch_taken_0x2b0084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0084u;
        // 0x2b0088: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0084) {
            ctx->pc = 0x2B0098u;
            goto label_2b0098;
        }
    }
    ctx->pc = 0x2B008Cu;
label_2b008c:
    // 0x2b008c: 0xc0ac108  jal         func_2B0420
    ctx->pc = 0x2B008Cu;
    SET_GPR_U32(ctx, 31, 0x2B0094u);
    ctx->pc = 0x2B0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0420u, 0x2B008Cu, 0x2B0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0094u;
label_2b0094:
    // 0x2b0094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0098:
    // 0x2b0098: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0098u;
        // 0x2b009c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B00A0u;
}
