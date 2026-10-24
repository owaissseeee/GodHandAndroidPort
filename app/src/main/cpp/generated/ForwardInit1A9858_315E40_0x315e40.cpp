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

// Function: ForwardInit1A9858_315E40
// Address: 0x315e40 - 0x315eb0
void ForwardInit1A9858_315E40_0x315e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A9858_315E40_0x315e40");
#endif

    switch (ctx->pc) {
        case 0x315e74u: goto label_315e74;
        case 0x315e8cu: goto label_315e8c;
        case 0x315e94u: goto label_315e94;
        default: break;
    }

    ctx->pc = 0x315e40u;

    // 0x315e40: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315e44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315e48: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315e4c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315e54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315e58: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315E58u;
    {
        const bool branch_taken_0x315e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E58u;
        // 0x315e5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e58) {
            ctx->pc = 0x315E9Cu;
            goto label_315e9c;
        }
    }
    ctx->pc = 0x315E60u;
    // 0x315e60: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315e64: 0x24040a00  addiu       $a0, $zero, 0xA00
    ctx->pc = 0x315e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x315e68: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315e6c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315E6Cu;
    SET_GPR_U32(ctx, 31, 0x315E74u);
    ctx->pc = 0x315E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E6Cu;
    // 0x315e70: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315E6Cu, 0x315E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E74u;
label_315e74:
    // 0x315e74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e78: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315E78u;
    {
        const bool branch_taken_0x315e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E78u;
        // 0x315e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e78) {
            ctx->pc = 0x315E9Cu;
            goto label_315e9c;
        }
    }
    ctx->pc = 0x315E80u;
    // 0x315e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315E84u;
    SET_GPR_U32(ctx, 31, 0x315E8Cu);
    ctx->pc = 0x315E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E84u;
    // 0x315e88: 0x24060a00  addiu       $a2, $zero, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315E84u, 0x315E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E8Cu;
label_315e8c:
    // 0x315e8c: 0xc06a616  jal         func_1A9858
    ctx->pc = 0x315E8Cu;
    SET_GPR_U32(ctx, 31, 0x315E94u);
    ctx->pc = 0x315E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E8Cu;
    // 0x315e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9858u, 0x315E8Cu, 0x315E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E94u;
label_315e94:
    // 0x315e94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315E94u;
    {
        const bool branch_taken_0x315e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E94u;
        // 0x315e98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e94) {
            ctx->pc = 0x315EA4u;
            goto label_315ea4;
        }
    }
    ctx->pc = 0x315E9Cu;
label_315e9c:
    // 0x315e9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315ea4:
    // 0x315ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x315EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EA8u;
        // 0x315eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315EB0u;
}
