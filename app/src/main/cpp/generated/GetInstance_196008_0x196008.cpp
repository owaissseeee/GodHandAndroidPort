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

// Function: GetInstance_196008
// Address: 0x196008 - 0x196058
void GetInstance_196008_0x196008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstance_196008_0x196008");
#endif

    switch (ctx->pc) {
        case 0x19602cu: goto label_19602c;
        case 0x196044u: goto label_196044;
        default: break;
    }

    ctx->pc = 0x196008u;

    // 0x196008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19600c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x196010: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196014: 0x8c625cd8  lw          $v0, 0x5CD8($v1)
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785CD8u));
    // 0x196018: 0x24705cd8  addiu       $s0, $v1, 0x5CD8
    ctx->pc = 0x196018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23768));
    // 0x19601c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19601Cu;
    {
        const bool branch_taken_0x19601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19601Cu;
        // 0x196020: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19601c) {
            ctx->pc = 0x196044u;
            goto label_196044;
        }
    }
    ctx->pc = 0x196024u;
    // 0x196024: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x196024u;
    SET_GPR_U32(ctx, 31, 0x19602Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x196024u, 0x19602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19602Cu;
label_19602c:
    // 0x19602c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19602cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x196030: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x196030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x196034: 0x24a54dc8  addiu       $a1, $a1, 0x4DC8
    ctx->pc = 0x196034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19912));
    // 0x196038: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x196038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x19603c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19603Cu;
    SET_GPR_U32(ctx, 31, 0x196044u);
    ctx->pc = 0x196040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19603Cu;
    // 0x196040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19603Cu, 0x196044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196044u;
label_196044:
    // 0x196044: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19604c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196050: 0x3e00008  jr          $ra
    ctx->pc = 0x196050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196050u;
        // 0x196054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196058u;
}
