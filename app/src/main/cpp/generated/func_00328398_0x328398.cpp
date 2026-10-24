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

// Function: func_00328398
// Address: 0x328398 - 0x3283e8
void func_00328398_0x328398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328398_0x328398");
#endif

    switch (ctx->pc) {
        case 0x3283b4u: goto label_3283b4;
        case 0x3283b8u: goto label_3283b8;
        case 0x3283c0u: goto label_3283c0;
        default: break;
    }

    ctx->pc = 0x328398u;

    // 0x328398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32839c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3283a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3283a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3283a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3283a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3283a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3283ac: 0xc0ca0b4  jal         func_3282D0
    ctx->pc = 0x3283ACu;
    SET_GPR_U32(ctx, 31, 0x3283B4u);
    ctx->pc = 0x3283B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283ACu;
    // 0x3283b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x3283ACu, 0x3283B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283B4u;
label_3283b4:
    // 0x3283b4: 0x0  nop
    ctx->pc = 0x3283b4u;
    // NOP
label_3283b8:
    // 0x3283b8: 0xc0cfd64  jal         func_33F590
    ctx->pc = 0x3283B8u;
    SET_GPR_U32(ctx, 31, 0x3283C0u);
    ctx->pc = 0x33F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F590u, 0x3283B8u, 0x3283C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283C0u;
label_3283c0:
    // 0x3283c0: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3283c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3283c4: 0x1451fffc  bne         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3283C4u;
    {
        const bool branch_taken_0x3283c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3283c4) {
            ctx->pc = 0x3283B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3283b8;
        }
    }
    ctx->pc = 0x3283CCu;
    // 0x3283cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3283ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3283d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3283D0u;
    {
        const bool branch_taken_0x3283d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3283D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283D0u;
        // 0x3283d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283d0) {
            ctx->pc = 0x3283B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3283b8;
        }
    }
    ctx->pc = 0x3283D8u;
    // 0x3283d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3283d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3283dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3283dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3283e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3283E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3283E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283E0u;
        // 0x3283e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3283E8u;
}
