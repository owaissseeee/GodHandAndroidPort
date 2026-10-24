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

// Function: func_00380EB0
// Address: 0x380eb0 - 0x380f10
void func_00380EB0_0x380eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380EB0_0x380eb0");
#endif

    switch (ctx->pc) {
        case 0x380ed0u: goto label_380ed0;
        case 0x380ee8u: goto label_380ee8;
        case 0x380ef0u: goto label_380ef0;
        case 0x380efcu: goto label_380efc;
        default: break;
    }

    ctx->pc = 0x380eb0u;

    // 0x380eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380eb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x380eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x380eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380ebc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x380ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380ec4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x380ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ec8: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x380EC8u;
    SET_GPR_U32(ctx, 31, 0x380ED0u);
    ctx->pc = 0x380ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380EC8u;
    // 0x380ecc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x380EC8u, 0x380ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380ED0u;
label_380ed0:
    // 0x380ed0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x380ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x380ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380ED4u;
    {
        const bool branch_taken_0x380ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380ED4u;
        // 0x380ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ed4) {
            ctx->pc = 0x380EE8u;
            goto label_380ee8;
        }
    }
    ctx->pc = 0x380EDCu;
    // 0x380edc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x380edcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380ee0: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x380EE0u;
    SET_GPR_U32(ctx, 31, 0x380EE8u);
    ctx->pc = 0x380EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380EE0u;
    // 0x380ee4: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x380EE0u, 0x380EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380EE8u;
label_380ee8:
    // 0x380ee8: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x380EE8u;
    SET_GPR_U32(ctx, 31, 0x380EF0u);
    ctx->pc = 0x380EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380EE8u;
    // 0x380eec: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x380EE8u, 0x380EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380EF0u;
label_380ef0:
    // 0x380ef0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x380ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x380ef4: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x380EF4u;
    SET_GPR_U32(ctx, 31, 0x380EFCu);
    ctx->pc = 0x380EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380EF4u;
    // 0x380ef8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x380EF4u, 0x380EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380EFCu;
label_380efc:
    // 0x380efc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x380efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380f08: 0x3e00008  jr          $ra
    ctx->pc = 0x380F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F08u;
        // 0x380f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380F10u;
}
