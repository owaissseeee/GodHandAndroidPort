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

// Function: GetInstanceD_198F68
// Address: 0x198f68 - 0x198fb8
void GetInstanceD_198F68_0x198f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstanceD_198F68_0x198f68");
#endif

    switch (ctx->pc) {
        case 0x198f8cu: goto label_198f8c;
        case 0x198fa4u: goto label_198fa4;
        default: break;
    }

    ctx->pc = 0x198f68u;

    // 0x198f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198f6c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x198f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x198f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198f74: 0x8c625d08  lw          $v0, 0x5D08($v1)
    ctx->pc = 0x198f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785D08u));
    // 0x198f78: 0x24705d08  addiu       $s0, $v1, 0x5D08
    ctx->pc = 0x198f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23816));
    // 0x198f7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198F7Cu;
    {
        const bool branch_taken_0x198f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F7Cu;
        // 0x198f80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f7c) {
            ctx->pc = 0x198FA4u;
            goto label_198fa4;
        }
    }
    ctx->pc = 0x198F84u;
    // 0x198f84: 0xc070006  jal         func_1C0018
    ctx->pc = 0x198F84u;
    SET_GPR_U32(ctx, 31, 0x198F8Cu);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x198F84u, 0x198F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F8Cu;
label_198f8c:
    // 0x198f8c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x198f90: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x198f94: 0x24a550b8  addiu       $a1, $a1, 0x50B8
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20664));
    // 0x198f98: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x198f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x198f9c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x198F9Cu;
    SET_GPR_U32(ctx, 31, 0x198FA4u);
    ctx->pc = 0x198FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F9Cu;
    // 0x198fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x198F9Cu, 0x198FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FA4u;
label_198fa4:
    // 0x198fa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x198FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FB0u;
        // 0x198fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198FB8u;
}
