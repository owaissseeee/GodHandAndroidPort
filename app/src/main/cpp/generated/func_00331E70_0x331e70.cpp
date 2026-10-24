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

// Function: func_00331E70
// Address: 0x331e70 - 0x331ee8
void func_00331E70_0x331e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331E70_0x331e70");
#endif

    switch (ctx->pc) {
        case 0x331e94u: goto label_331e94;
        case 0x331ea4u: goto label_331ea4;
        case 0x331ec0u: goto label_331ec0;
        case 0x331ec8u: goto label_331ec8;
        default: break;
    }

    ctx->pc = 0x331e70u;

    // 0x331e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331e78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331e80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x331e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331e88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x331e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x331e8c: 0xc0cc750  jal         func_331D40
    ctx->pc = 0x331E8Cu;
    SET_GPR_U32(ctx, 31, 0x331E94u);
    ctx->pc = 0x331E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E8Cu;
    // 0x331e90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D40u, 0x331E8Cu, 0x331E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E94u;
label_331e94:
    // 0x331e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e9c: 0xc0ed366  jal         func_3B4D98
    ctx->pc = 0x331E9Cu;
    SET_GPR_U32(ctx, 31, 0x331EA4u);
    ctx->pc = 0x331EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E9Cu;
    // 0x331ea0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D98u, 0x331E9Cu, 0x331EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331EA4u;
label_331ea4:
    // 0x331ea4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331eac: 0x24844110  addiu       $a0, $a0, 0x4110
    ctx->pc = 0x331eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16656));
    // 0x331eb0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331EB0u;
    {
        const bool branch_taken_0x331eb0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x331EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331EB0u;
        // 0x331eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331eb0) {
            ctx->pc = 0x331EC0u;
            goto label_331ec0;
        }
    }
    ctx->pc = 0x331EB8u;
    // 0x331eb8: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331EB8u;
    SET_GPR_U32(ctx, 31, 0x331EC0u);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331EB8u, 0x331EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331EC0u;
label_331ec0:
    // 0x331ec0: 0xc0cc75e  jal         func_331D78
    ctx->pc = 0x331EC0u;
    SET_GPR_U32(ctx, 31, 0x331EC8u);
    ctx->pc = 0x331D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D78u, 0x331EC0u, 0x331EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331EC8u;
label_331ec8:
    // 0x331ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x331ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331ed4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331ed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331ed8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x331ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x331edc: 0x3e00008  jr          $ra
    ctx->pc = 0x331EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331EDCu;
        // 0x331ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331EE4u;
    // 0x331ee4: 0x0  nop
    ctx->pc = 0x331ee4u;
    // NOP
    ctx->pc = 0x331ee8u;
}
