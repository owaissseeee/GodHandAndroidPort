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

// Function: GetOrInit_007857B8_16FC30
// Address: 0x16fc30 - 0x16fc80
void GetOrInit_007857B8_16FC30_0x16fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_007857B8_16FC30_0x16fc30");
#endif

    switch (ctx->pc) {
        case 0x16fc54u: goto label_16fc54;
        case 0x16fc6cu: goto label_16fc6c;
        default: break;
    }

    ctx->pc = 0x16fc30u;

    // 0x16fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fc34: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x16fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x16fc38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16fc3c: 0x8c6257b8  lw          $v0, 0x57B8($v1)
    ctx->pc = 0x16fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7857B8u));
    // 0x16fc40: 0x247057b8  addiu       $s0, $v1, 0x57B8
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22456));
    // 0x16fc44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16FC44u;
    {
        const bool branch_taken_0x16fc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC44u;
        // 0x16fc48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc44) {
            ctx->pc = 0x16FC6Cu;
            goto label_16fc6c;
        }
    }
    ctx->pc = 0x16FC4Cu;
    // 0x16fc4c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x16FC4Cu;
    SET_GPR_U32(ctx, 31, 0x16FC54u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x16FC4Cu, 0x16FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC54u;
label_16fc54:
    // 0x16fc54: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16fc58: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x16fc5c: 0x24a50310  addiu       $a1, $a1, 0x310
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
    // 0x16fc60: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x16fc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x16fc64: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16FC64u;
    SET_GPR_U32(ctx, 31, 0x16FC6Cu);
    ctx->pc = 0x16FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC64u;
    // 0x16fc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16FC64u, 0x16FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC6Cu;
label_16fc6c:
    // 0x16fc6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16fc6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16fc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC78u;
        // 0x16fc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC80u;
}
