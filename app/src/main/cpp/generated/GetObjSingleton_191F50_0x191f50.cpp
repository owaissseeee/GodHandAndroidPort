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

// Function: GetObjSingleton_191F50
// Address: 0x191f50 - 0x191fa0
void GetObjSingleton_191F50_0x191f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjSingleton_191F50_0x191f50");
#endif

    switch (ctx->pc) {
        case 0x191f74u: goto label_191f74;
        case 0x191f8cu: goto label_191f8c;
        default: break;
    }

    ctx->pc = 0x191f50u;

    // 0x191f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191f54: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x191f58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191f5c: 0x8c625c08  lw          $v0, 0x5C08($v1)
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C08u));
    // 0x191f60: 0x24705c08  addiu       $s0, $v1, 0x5C08
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23560));
    // 0x191f64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191F64u;
    {
        const bool branch_taken_0x191f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F64u;
        // 0x191f68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f64) {
            ctx->pc = 0x191F8Cu;
            goto label_191f8c;
        }
    }
    ctx->pc = 0x191F6Cu;
    // 0x191f6c: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x191F6Cu;
    SET_GPR_U32(ctx, 31, 0x191F74u);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x191F6Cu, 0x191F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F74u;
label_191f74:
    // 0x191f74: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x191f78: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x191f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x191f7c: 0x24a541d8  addiu       $a1, $a1, 0x41D8
    ctx->pc = 0x191f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16856));
    // 0x191f80: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x191f84: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x191F84u;
    SET_GPR_U32(ctx, 31, 0x191F8Cu);
    ctx->pc = 0x191F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F84u;
    // 0x191f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x191F84u, 0x191F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F8Cu;
label_191f8c:
    // 0x191f8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x191f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191f94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191f98: 0x3e00008  jr          $ra
    ctx->pc = 0x191F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F98u;
        // 0x191f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191FA0u;
}
