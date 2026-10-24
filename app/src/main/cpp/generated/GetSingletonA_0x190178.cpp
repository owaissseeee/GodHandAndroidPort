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

// Function: GetSingletonA
// Address: 0x190178 - 0x1901c8
void GetSingletonA_0x190178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingletonA_0x190178");
#endif

    switch (ctx->pc) {
        case 0x19019cu: goto label_19019c;
        case 0x1901b4u: goto label_1901b4;
        default: break;
    }

    ctx->pc = 0x190178u;

    // 0x190178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19017c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x190180: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x190184: 0x8c625bd8  lw          $v0, 0x5BD8($v1)
    ctx->pc = 0x190184u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785BD8u));
    // 0x190188: 0x24705bd8  addiu       $s0, $v1, 0x5BD8
    ctx->pc = 0x190188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23512));
    // 0x19018c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19018Cu;
    {
        const bool branch_taken_0x19018c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19018Cu;
        // 0x190190: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19018c) {
            ctx->pc = 0x1901B4u;
            goto label_1901b4;
        }
    }
    ctx->pc = 0x190194u;
    // 0x190194: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x190194u;
    SET_GPR_U32(ctx, 31, 0x19019Cu);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x190194u, 0x19019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19019Cu;
label_19019c:
    // 0x19019c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19019cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1901a0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1901a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1901a4: 0x24a53f00  addiu       $a1, $a1, 0x3F00
    ctx->pc = 0x1901a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    // 0x1901a8: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x1901a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x1901ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1901ACu;
    SET_GPR_U32(ctx, 31, 0x1901B4u);
    ctx->pc = 0x1901B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901ACu;
    // 0x1901b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1901ACu, 0x1901B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901B4u;
label_1901b4:
    // 0x1901b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1901b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1901b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1901bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1901bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1901c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1901C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901C0u;
        // 0x1901c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901C8u;
}
