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

// Function: ForwardInitObject_316A10
// Address: 0x316a10 - 0x316a80
void ForwardInitObject_316A10_0x316a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316A10_0x316a10");
#endif

    switch (ctx->pc) {
        case 0x316a44u: goto label_316a44;
        case 0x316a5cu: goto label_316a5c;
        case 0x316a64u: goto label_316a64;
        default: break;
    }

    ctx->pc = 0x316a10u;

    // 0x316a10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316a14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316a18: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316a1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316a20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316a24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316a28: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316A28u;
    {
        const bool branch_taken_0x316a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A28u;
        // 0x316a2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a28) {
            ctx->pc = 0x316A6Cu;
            goto label_316a6c;
        }
    }
    ctx->pc = 0x316A30u;
    // 0x316a30: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316a34: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x316a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x316a38: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316a3c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316A3Cu;
    SET_GPR_U32(ctx, 31, 0x316A44u);
    ctx->pc = 0x316A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A3Cu;
    // 0x316a40: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316A3Cu, 0x316A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A44u;
label_316a44:
    // 0x316a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a48: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316A48u;
    {
        const bool branch_taken_0x316a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A48u;
        // 0x316a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a48) {
            ctx->pc = 0x316A6Cu;
            goto label_316a6c;
        }
    }
    ctx->pc = 0x316A50u;
    // 0x316a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a54: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316A54u;
    SET_GPR_U32(ctx, 31, 0x316A5Cu);
    ctx->pc = 0x316A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A54u;
    // 0x316a58: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316A54u, 0x316A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A5Cu;
label_316a5c:
    // 0x316a5c: 0xc05bf20  jal         func_16FC80
    ctx->pc = 0x316A5Cu;
    SET_GPR_U32(ctx, 31, 0x316A64u);
    ctx->pc = 0x316A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A5Cu;
    // 0x316a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FC80u, 0x316A5Cu, 0x316A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A64u;
label_316a64:
    // 0x316a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316A64u;
    {
        const bool branch_taken_0x316a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A64u;
        // 0x316a68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a64) {
            ctx->pc = 0x316A74u;
            goto label_316a74;
        }
    }
    ctx->pc = 0x316A6Cu;
label_316a6c:
    // 0x316a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316a74:
    // 0x316a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a78: 0x3e00008  jr          $ra
    ctx->pc = 0x316A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A78u;
        // 0x316a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316A80u;
}
