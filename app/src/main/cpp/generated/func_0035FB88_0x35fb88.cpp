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

// Function: func_0035FB88
// Address: 0x35fb88 - 0x35fbd8
void func_0035FB88_0x35fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FB88_0x35fb88");
#endif

    switch (ctx->pc) {
        case 0x35fbacu: goto label_35fbac;
        case 0x35fbb4u: goto label_35fbb4;
        default: break;
    }

    ctx->pc = 0x35fb88u;

    // 0x35fb88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fb8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35fb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35fb94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35FB94u;
    {
        const bool branch_taken_0x35fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB94u;
        // 0x35fb98: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb94) {
            ctx->pc = 0x35FBC8u;
            goto label_35fbc8;
        }
    }
    ctx->pc = 0x35FB9Cu;
    // 0x35fb9c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x35fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x35fba0: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x35fba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x35fba4: 0xc0d7fec  jal         func_35FFB0
    ctx->pc = 0x35FBA4u;
    SET_GPR_U32(ctx, 31, 0x35FBACu);
    ctx->pc = 0x35FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBA4u;
    // 0x35fba8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FFB0u, 0x35FBA4u, 0x35FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBACu;
label_35fbac:
    // 0x35fbac: 0xc0db2e6  jal         func_36CB98
    ctx->pc = 0x35FBACu;
    SET_GPR_U32(ctx, 31, 0x35FBB4u);
    ctx->pc = 0x35FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBACu;
    // 0x35fbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CB98u, 0x35FBACu, 0x35FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBB4u;
label_35fbb4:
    // 0x35fbb4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35fbb8: 0x2463e338  addiu       $v1, $v1, -0x1CC8
    ctx->pc = 0x35fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959928));
    // 0x35fbbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE338u));
    // 0x35fbc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35fbc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fbc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EE338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE338u, _value); } while (0);
label_35fbc8:
    // 0x35fbc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35fbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fbcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35fbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35fbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x35FBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBD0u;
        // 0x35fbd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FBD8u;
}
