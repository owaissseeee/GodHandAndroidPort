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

// Function: GetOrInit_D_00785C28_192960
// Address: 0x192960 - 0x1929b0
void GetOrInit_D_00785C28_192960_0x192960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_D_00785C28_192960_0x192960");
#endif

    switch (ctx->pc) {
        case 0x192984u: goto label_192984;
        case 0x19299cu: goto label_19299c;
        default: break;
    }

    ctx->pc = 0x192960u;

    // 0x192960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192964: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x192964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x192968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19296c: 0x8c625c28  lw          $v0, 0x5C28($v1)
    ctx->pc = 0x19296cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C28u));
    // 0x192970: 0x24705c28  addiu       $s0, $v1, 0x5C28
    ctx->pc = 0x192970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23592));
    // 0x192974: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192974u;
    {
        const bool branch_taken_0x192974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192974u;
        // 0x192978: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192974) {
            ctx->pc = 0x19299Cu;
            goto label_19299c;
        }
    }
    ctx->pc = 0x19297Cu;
    // 0x19297c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x19297Cu;
    SET_GPR_U32(ctx, 31, 0x192984u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x19297Cu, 0x192984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192984u;
label_192984:
    // 0x192984: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x192984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x192988: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x192988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19298c: 0x24a543d8  addiu       $a1, $a1, 0x43D8
    ctx->pc = 0x19298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17368));
    // 0x192990: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x192994: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x192994u;
    SET_GPR_U32(ctx, 31, 0x19299Cu);
    ctx->pc = 0x192998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192994u;
    // 0x192998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x192994u, 0x19299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19299Cu;
label_19299c:
    // 0x19299c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19299cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1929a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1929a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1929a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1929a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1929A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1929ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929A8u;
        // 0x1929ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1929B0u;
}
