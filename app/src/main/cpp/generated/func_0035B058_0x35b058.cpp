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

// Function: func_0035B058
// Address: 0x35b058 - 0x35b0d8
void func_0035B058_0x35b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B058_0x35b058");
#endif

    switch (ctx->pc) {
        case 0x35b07cu: goto label_35b07c;
        case 0x35b0a8u: goto label_35b0a8;
        default: break;
    }

    ctx->pc = 0x35b058u;

    // 0x35b058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b05c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35b060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b064: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35b064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b068: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x35b068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x35b06c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b070: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35b074: 0xc0d6af0  jal         func_35ABC0
    ctx->pc = 0x35B074u;
    SET_GPR_U32(ctx, 31, 0x35B07Cu);
    ctx->pc = 0x35B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B074u;
    // 0x35b078: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ABC0u, 0x35B074u, 0x35B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B07Cu;
label_35b07c:
    // 0x35b07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b084: 0x8e03028c  lw          $v1, 0x28C($s0)
    ctx->pc = 0x35b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x35b088: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B088u;
    {
        const bool branch_taken_0x35b088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B088u;
        // 0x35b08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b088) {
            ctx->pc = 0x35B0A0u;
            goto label_35b0a0;
        }
    }
    ctx->pc = 0x35B090u;
    // 0x35b090: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x35b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x35b094: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x35b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35b098: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B098u;
    {
        const bool branch_taken_0x35b098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B098u;
        // 0x35b09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b098) {
            ctx->pc = 0x35B0BCu;
            goto label_35b0bc;
        }
    }
    ctx->pc = 0x35B0A0u;
label_35b0a0:
    // 0x35b0a0: 0xc0d69f2  jal         func_35A7C8
    ctx->pc = 0x35B0A0u;
    SET_GPR_U32(ctx, 31, 0x35B0A8u);
    ctx->pc = 0x35A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7C8u, 0x35B0A0u, 0x35B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B0A8u;
label_35b0a8:
    // 0x35b0a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b0ac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35b0b0: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x35b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x35b0b4: 0xae030290  sw          $v1, 0x290($s0)
    ctx->pc = 0x35b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
    // 0x35b0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b0bc:
    // 0x35b0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b0c0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x35b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x35b0c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35b0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b0c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B0CCu;
        // 0x35b0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B0D4u;
    // 0x35b0d4: 0x0  nop
    ctx->pc = 0x35b0d4u;
    // NOP
    ctx->pc = 0x35b0d8u;
}
