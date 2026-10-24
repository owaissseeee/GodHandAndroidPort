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

// Function: func_0038B8B0
// Address: 0x38b8b0 - 0x38b900
void func_0038B8B0_0x38b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B8B0_0x38b8b0");
#endif

    switch (ctx->pc) {
        case 0x38b8d4u: goto label_38b8d4;
        case 0x38b8ecu: goto label_38b8ec;
        default: break;
    }

    ctx->pc = 0x38b8b0u;

    // 0x38b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38b8b4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x38b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x38b8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b8bc: 0x8c626768  lw          $v0, 0x6768($v1)
    ctx->pc = 0x38b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786768u));
    // 0x38b8c0: 0x24706768  addiu       $s0, $v1, 0x6768
    ctx->pc = 0x38b8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26472));
    // 0x38b8c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B8C4u;
    {
        const bool branch_taken_0x38b8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8C4u;
        // 0x38b8c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8c4) {
            ctx->pc = 0x38B8ECu;
            goto label_38b8ec;
        }
    }
    ctx->pc = 0x38B8CCu;
    // 0x38b8cc: 0xc0e2fa6  jal         func_38BE98
    ctx->pc = 0x38B8CCu;
    SET_GPR_U32(ctx, 31, 0x38B8D4u);
    ctx->pc = 0x38BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BE98u, 0x38B8CCu, 0x38B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B8D4u;
label_38b8d4:
    // 0x38b8d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38b8d8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x38b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x38b8dc: 0x24a5d350  addiu       $a1, $a1, -0x2CB0
    ctx->pc = 0x38b8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
    // 0x38b8e0: 0x24c66778  addiu       $a2, $a2, 0x6778
    ctx->pc = 0x38b8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26488));
    // 0x38b8e4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x38B8E4u;
    SET_GPR_U32(ctx, 31, 0x38B8ECu);
    ctx->pc = 0x38B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B8E4u;
    // 0x38b8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x38B8E4u, 0x38B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B8ECu;
label_38b8ec:
    // 0x38b8ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38b8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8F8u;
        // 0x38b8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B900u;
}
