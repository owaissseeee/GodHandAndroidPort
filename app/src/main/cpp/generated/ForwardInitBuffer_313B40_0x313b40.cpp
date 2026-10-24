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

// Function: ForwardInitBuffer_313B40
// Address: 0x313b40 - 0x313bb0
void ForwardInitBuffer_313B40_0x313b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313B40_0x313b40");
#endif

    switch (ctx->pc) {
        case 0x313b74u: goto label_313b74;
        case 0x313b8cu: goto label_313b8c;
        case 0x313b94u: goto label_313b94;
        default: break;
    }

    ctx->pc = 0x313b40u;

    // 0x313b40: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313b44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313b48: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313b48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313b4c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313b50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313b54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313b58: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313B58u;
    {
        const bool branch_taken_0x313b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B58u;
        // 0x313b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b58) {
            ctx->pc = 0x313B9Cu;
            goto label_313b9c;
        }
    }
    ctx->pc = 0x313B60u;
    // 0x313b60: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313b64: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x313b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x313b68: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313b6c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313B6Cu;
    SET_GPR_U32(ctx, 31, 0x313B74u);
    ctx->pc = 0x313B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B6Cu;
    // 0x313b70: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313B6Cu, 0x313B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B74u;
label_313b74:
    // 0x313b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b78: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313B78u;
    {
        const bool branch_taken_0x313b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B78u;
        // 0x313b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b78) {
            ctx->pc = 0x313B9Cu;
            goto label_313b9c;
        }
    }
    ctx->pc = 0x313B80u;
    // 0x313b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313B84u;
    SET_GPR_U32(ctx, 31, 0x313B8Cu);
    ctx->pc = 0x313B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B84u;
    // 0x313b88: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313B84u, 0x313B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B8Cu;
label_313b8c:
    // 0x313b8c: 0xc061dd4  jal         func_187750
    ctx->pc = 0x313B8Cu;
    SET_GPR_U32(ctx, 31, 0x313B94u);
    ctx->pc = 0x313B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B8Cu;
    // 0x313b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187750u, 0x313B8Cu, 0x313B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B94u;
label_313b94:
    // 0x313b94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313B94u;
    {
        const bool branch_taken_0x313b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B94u;
        // 0x313b98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b94) {
            ctx->pc = 0x313BA4u;
            goto label_313ba4;
        }
    }
    ctx->pc = 0x313B9Cu;
label_313b9c:
    // 0x313b9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ba0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313ba4:
    // 0x313ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x313BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BA8u;
        // 0x313bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313BB0u;
}
