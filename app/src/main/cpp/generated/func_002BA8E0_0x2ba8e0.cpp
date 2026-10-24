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

// Function: func_002BA8E0
// Address: 0x2ba8e0 - 0x2ba930
void func_002BA8E0_0x2ba8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA8E0_0x2ba8e0");
#endif

    switch (ctx->pc) {
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba91cu: goto label_2ba91c;
        default: break;
    }

    ctx->pc = 0x2ba8e0u;

    // 0x2ba8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba8e4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ba8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ba8e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba8ec: 0x8c626348  lw          $v0, 0x6348($v1)
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786348u));
    // 0x2ba8f0: 0x24706348  addiu       $s0, $v1, 0x6348
    ctx->pc = 0x2ba8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25416));
    // 0x2ba8f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA8F4u;
    {
        const bool branch_taken_0x2ba8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8F4u;
        // 0x2ba8f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8f4) {
            ctx->pc = 0x2BA91Cu;
            goto label_2ba91c;
        }
    }
    ctx->pc = 0x2BA8FCu;
    // 0x2ba8fc: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BA8FCu;
    SET_GPR_U32(ctx, 31, 0x2BA904u);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BA8FCu, 0x2BA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA904u;
label_2ba904:
    // 0x2ba904: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ba904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ba908: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2ba90c: 0x24a5be30  addiu       $a1, $a1, -0x41D0
    ctx->pc = 0x2ba90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950448));
    // 0x2ba910: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2ba910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2ba914: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BA914u;
    SET_GPR_U32(ctx, 31, 0x2BA91Cu);
    ctx->pc = 0x2BA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA914u;
    // 0x2ba918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BA914u, 0x2BA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA91Cu;
label_2ba91c:
    // 0x2ba91c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba928: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA928u;
        // 0x2ba92c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA930u;
}
