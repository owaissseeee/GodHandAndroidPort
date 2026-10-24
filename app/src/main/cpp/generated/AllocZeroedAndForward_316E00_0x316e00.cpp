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

// Function: AllocZeroedAndForward_316E00
// Address: 0x316e00 - 0x316e70
void AllocZeroedAndForward_316E00_0x316e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316E00_0x316e00");
#endif

    switch (ctx->pc) {
        case 0x316e34u: goto label_316e34;
        case 0x316e4cu: goto label_316e4c;
        case 0x316e54u: goto label_316e54;
        default: break;
    }

    ctx->pc = 0x316e00u;

    // 0x316e00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316e04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316e08: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316e08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316e0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316e10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316e14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316e18: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316E18u;
    {
        const bool branch_taken_0x316e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E18u;
        // 0x316e1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e18) {
            ctx->pc = 0x316E5Cu;
            goto label_316e5c;
        }
    }
    ctx->pc = 0x316E20u;
    // 0x316e20: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316e20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316e24: 0x24040780  addiu       $a0, $zero, 0x780
    ctx->pc = 0x316e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    // 0x316e28: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316e2c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316E2Cu;
    SET_GPR_U32(ctx, 31, 0x316E34u);
    ctx->pc = 0x316E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E2Cu;
    // 0x316e30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316E2Cu, 0x316E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E34u;
label_316e34:
    // 0x316e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316E38u;
    {
        const bool branch_taken_0x316e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E38u;
        // 0x316e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e38) {
            ctx->pc = 0x316E5Cu;
            goto label_316e5c;
        }
    }
    ctx->pc = 0x316E40u;
    // 0x316e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e44: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316E44u;
    SET_GPR_U32(ctx, 31, 0x316E4Cu);
    ctx->pc = 0x316E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E44u;
    // 0x316e48: 0x24060780  addiu       $a2, $zero, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316E44u, 0x316E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E4Cu;
label_316e4c:
    // 0x316e4c: 0xc05c6c4  jal         func_171B10
    ctx->pc = 0x316E4Cu;
    SET_GPR_U32(ctx, 31, 0x316E54u);
    ctx->pc = 0x316E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E4Cu;
    // 0x316e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B10u, 0x316E4Cu, 0x316E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E54u;
label_316e54:
    // 0x316e54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316E54u;
    {
        const bool branch_taken_0x316e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E54u;
        // 0x316e58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e54) {
            ctx->pc = 0x316E64u;
            goto label_316e64;
        }
    }
    ctx->pc = 0x316E5Cu;
label_316e5c:
    // 0x316e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316e64:
    // 0x316e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316e68: 0x3e00008  jr          $ra
    ctx->pc = 0x316E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E68u;
        // 0x316e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316E70u;
}
