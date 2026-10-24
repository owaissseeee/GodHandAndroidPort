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

// Function: InitObjectSetVtable_4EC68_2FFD48
// Address: 0x2ffd48 - 0x2ffd88
void InitObjectSetVtable_4EC68_2FFD48_0x2ffd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4EC68_2FFD48_0x2ffd48");
#endif

    switch (ctx->pc) {
        case 0x2ffd64u: goto label_2ffd64;
        default: break;
    }

    ctx->pc = 0x2ffd48u;

    // 0x2ffd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffd4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffd50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd54: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFD54u;
    {
        const bool branch_taken_0x2ffd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD54u;
        // 0x2ffd58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd54) {
            ctx->pc = 0x2FFD70u;
            goto label_2ffd70;
        }
    }
    ctx->pc = 0x2FFD5Cu;
    // 0x2ffd5c: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD64u);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFD5Cu, 0x2FFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD64u;
label_2ffd64:
    // 0x2ffd64: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffd68: 0x2463ec68  addiu       $v1, $v1, -0x1398
    ctx->pc = 0x2ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962280));
    // 0x2ffd6c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffd70:
    // 0x2ffd70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffd78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD7Cu;
        // 0x2ffd80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFD84u;
    // 0x2ffd84: 0x0  nop
    ctx->pc = 0x2ffd84u;
    // NOP
    ctx->pc = 0x2ffd88u;
}
