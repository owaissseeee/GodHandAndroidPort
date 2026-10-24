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

// Function: func_00188A18
// Address: 0x188a18 - 0x188a68
void func_00188A18_0x188a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188A18_0x188a18");
#endif

    switch (ctx->pc) {
        case 0x188a3cu: goto label_188a3c;
        case 0x188a54u: goto label_188a54;
        default: break;
    }

    ctx->pc = 0x188a18u;

    // 0x188a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188a1c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x188a20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x188a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x188a24: 0x8c625b18  lw          $v0, 0x5B18($v1)
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B18u));
    // 0x188a28: 0x24705b18  addiu       $s0, $v1, 0x5B18
    ctx->pc = 0x188a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x188a2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188A2Cu;
    {
        const bool branch_taken_0x188a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A2Cu;
        // 0x188a30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a2c) {
            ctx->pc = 0x188A54u;
            goto label_188a54;
        }
    }
    ctx->pc = 0x188A34u;
    // 0x188a34: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x188A34u;
    SET_GPR_U32(ctx, 31, 0x188A3Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x188A34u, 0x188A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A3Cu;
label_188a3c:
    // 0x188a3c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x188a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x188a40: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x188a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x188a44: 0x24a533e8  addiu       $a1, $a1, 0x33E8
    ctx->pc = 0x188a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13288));
    // 0x188a48: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x188a4c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x188A4Cu;
    SET_GPR_U32(ctx, 31, 0x188A54u);
    ctx->pc = 0x188A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A4Cu;
    // 0x188a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x188A4Cu, 0x188A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A54u;
label_188a54:
    // 0x188a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x188a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188a5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x188a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188a60: 0x3e00008  jr          $ra
    ctx->pc = 0x188A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A60u;
        // 0x188a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188A68u;
}
