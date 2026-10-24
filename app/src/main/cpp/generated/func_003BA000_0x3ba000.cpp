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

// Function: func_003BA000
// Address: 0x3ba000 - 0x3ba058
void func_003BA000_0x3ba000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA000_0x3ba000");
#endif

    switch (ctx->pc) {
        case 0x3ba038u: goto label_3ba038;
        case 0x3ba040u: goto label_3ba040;
        default: break;
    }

    ctx->pc = 0x3ba000u;

    // 0x3ba000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ba004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ba008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba00c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BA00Cu;
    {
        const bool branch_taken_0x3ba00c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA00Cu;
        // 0x3ba010: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba00c) {
            ctx->pc = 0x3BA030u;
            goto label_3ba030;
        }
    }
    ctx->pc = 0x3BA014u;
    // 0x3ba014: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ba018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba01c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ba01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ba020: 0x248408d8  addiu       $a0, $a0, 0x8D8
    ctx->pc = 0x3ba020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2264));
    // 0x3ba024: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA024u;
    ctx->pc = 0x3BA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA024u;
    // 0x3ba028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA024u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA02Cu;
    // 0x3ba02c: 0x0  nop
    ctx->pc = 0x3ba02cu;
    // NOP
label_3ba030:
    // 0x3ba030: 0xc0ee816  jal         func_3BA058
    ctx->pc = 0x3BA030u;
    SET_GPR_U32(ctx, 31, 0x3BA038u);
    ctx->pc = 0x3BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA058u, 0x3BA030u, 0x3BA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA038u;
label_3ba038:
    // 0x3ba038: 0xc0ee7ee  jal         func_3B9FB8
    ctx->pc = 0x3BA038u;
    SET_GPR_U32(ctx, 31, 0x3BA040u);
    ctx->pc = 0x3BA03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA038u;
    // 0x3ba03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9FB8u, 0x3BA038u, 0x3BA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA040u;
label_3ba040:
    // 0x3ba040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba044: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ba044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3ba048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ba048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ba04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ba04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba050: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA050u;
        // 0x3ba054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA058u;
}
