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

// Function: func_0018E9C0
// Address: 0x18e9c0 - 0x18ea10
void func_0018E9C0_0x18e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018E9C0_0x18e9c0");
#endif

    switch (ctx->pc) {
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9fcu: goto label_18e9fc;
        default: break;
    }

    ctx->pc = 0x18e9c0u;

    // 0x18e9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e9c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18e9c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e9cc: 0x8c625b98  lw          $v0, 0x5B98($v1)
    ctx->pc = 0x18e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B98u));
    // 0x18e9d0: 0x24705b98  addiu       $s0, $v1, 0x5B98
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23448));
    // 0x18e9d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E9D4u;
    {
        const bool branch_taken_0x18e9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9D4u;
        // 0x18e9d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9d4) {
            ctx->pc = 0x18E9FCu;
            goto label_18e9fc;
        }
    }
    ctx->pc = 0x18E9DCu;
    // 0x18e9dc: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x18E9DCu;
    SET_GPR_U32(ctx, 31, 0x18E9E4u);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x18E9DCu, 0x18E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9E4u;
label_18e9e4:
    // 0x18e9e4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18e9e8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18e9ec: 0x24a53b70  addiu       $a1, $a1, 0x3B70
    ctx->pc = 0x18e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15216));
    // 0x18e9f0: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x18e9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x18e9f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18E9F4u;
    SET_GPR_U32(ctx, 31, 0x18E9FCu);
    ctx->pc = 0x18E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9F4u;
    // 0x18e9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18E9F4u, 0x18E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9FCu;
label_18e9fc:
    // 0x18e9fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ea04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA08u;
        // 0x18ea0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EA10u;
}
