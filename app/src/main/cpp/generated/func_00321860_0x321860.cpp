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

// Function: func_00321860
// Address: 0x321860 - 0x3218b0
void func_00321860_0x321860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00321860_0x321860");
#endif

    switch (ctx->pc) {
        case 0x321884u: goto label_321884;
        case 0x32189cu: goto label_32189c;
        default: break;
    }

    ctx->pc = 0x321860u;

    // 0x321860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321864: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x321864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x321868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32186c: 0x8c6266f8  lw          $v0, 0x66F8($v1)
    ctx->pc = 0x32186cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7866F8u));
    // 0x321870: 0x247066f8  addiu       $s0, $v1, 0x66F8
    ctx->pc = 0x321870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26360));
    // 0x321874: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x321874u;
    {
        const bool branch_taken_0x321874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321874u;
        // 0x321878: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321874) {
            ctx->pc = 0x32189Cu;
            goto label_32189c;
        }
    }
    ctx->pc = 0x32187Cu;
    // 0x32187c: 0xc0c863e  jal         func_3218F8
    ctx->pc = 0x32187Cu;
    SET_GPR_U32(ctx, 31, 0x321884u);
    ctx->pc = 0x3218F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218F8u, 0x32187Cu, 0x321884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321884u;
label_321884:
    // 0x321884: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x321884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x321888: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x321888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x32188c: 0x24a512a0  addiu       $a1, $a1, 0x12A0
    ctx->pc = 0x32188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4768));
    // 0x321890: 0x24c60da8  addiu       $a2, $a2, 0xDA8
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3496));
    // 0x321894: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x321894u;
    SET_GPR_U32(ctx, 31, 0x32189Cu);
    ctx->pc = 0x321898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321894u;
    // 0x321898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x321894u, 0x32189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32189Cu;
label_32189c:
    // 0x32189c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32189cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3218a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3218a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3218a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3218a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3218A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3218ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218A8u;
        // 0x3218ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3218A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3218B0u;
}
