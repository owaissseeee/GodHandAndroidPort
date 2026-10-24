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

// Function: ResetField214FreeField600D_192FF0
// Address: 0x192ff0 - 0x193050
void ResetField214FreeField600D_192FF0_0x192ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600D_192FF0_0x192ff0");
#endif

    switch (ctx->pc) {
        case 0x19302cu: goto label_19302c;
        case 0x19303cu: goto label_19303c;
        default: break;
    }

    ctx->pc = 0x192ff0u;

    // 0x192ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192ff4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x192ff8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x192ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x192ffc: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x192ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x193000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19300c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x193010: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x193010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x193014: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x193014u;
    {
        const bool branch_taken_0x193014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193014u;
        // 0x193018: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193014) {
            ctx->pc = 0x193030u;
            goto label_193030;
        }
    }
    ctx->pc = 0x19301Cu;
    // 0x19301c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19301cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193020: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x193020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193024: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x193024u;
    SET_GPR_U32(ctx, 31, 0x19302Cu);
    ctx->pc = 0x193028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193024u;
    // 0x193028: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x193024u, 0x19302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19302Cu;
label_19302c:
    // 0x19302c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_193030:
    // 0x193030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193034: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x193034u;
    SET_GPR_U32(ctx, 31, 0x19303Cu);
    ctx->pc = 0x193038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193034u;
    // 0x193038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x193034u, 0x19303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19303Cu;
label_19303c:
    // 0x19303c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19303cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193048: 0x3e00008  jr          $ra
    ctx->pc = 0x193048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193048u;
        // 0x19304c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193050u;
}
