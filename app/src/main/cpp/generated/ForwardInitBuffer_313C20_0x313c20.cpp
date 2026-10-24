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

// Function: ForwardInitBuffer_313C20
// Address: 0x313c20 - 0x313c90
void ForwardInitBuffer_313C20_0x313c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313C20_0x313c20");
#endif

    switch (ctx->pc) {
        case 0x313c54u: goto label_313c54;
        case 0x313c6cu: goto label_313c6c;
        case 0x313c74u: goto label_313c74;
        default: break;
    }

    ctx->pc = 0x313c20u;

    // 0x313c20: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313c24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313c28: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313c2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313c30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313c34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313c38: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313C38u;
    {
        const bool branch_taken_0x313c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C38u;
        // 0x313c3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c38) {
            ctx->pc = 0x313C7Cu;
            goto label_313c7c;
        }
    }
    ctx->pc = 0x313C40u;
    // 0x313c40: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313c40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313c44: 0x24040850  addiu       $a0, $zero, 0x850
    ctx->pc = 0x313c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2128));
    // 0x313c48: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313c4c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313C4Cu;
    SET_GPR_U32(ctx, 31, 0x313C54u);
    ctx->pc = 0x313C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C4Cu;
    // 0x313c50: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313C4Cu, 0x313C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C54u;
label_313c54:
    // 0x313c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c58: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313C58u;
    {
        const bool branch_taken_0x313c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C58u;
        // 0x313c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c58) {
            ctx->pc = 0x313C7Cu;
            goto label_313c7c;
        }
    }
    ctx->pc = 0x313C60u;
    // 0x313c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c64: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313C64u;
    SET_GPR_U32(ctx, 31, 0x313C6Cu);
    ctx->pc = 0x313C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C64u;
    // 0x313c68: 0x24060850  addiu       $a2, $zero, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313C64u, 0x313C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C6Cu;
label_313c6c:
    // 0x313c6c: 0xc061f22  jal         func_187C88
    ctx->pc = 0x313C6Cu;
    SET_GPR_U32(ctx, 31, 0x313C74u);
    ctx->pc = 0x313C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C6Cu;
    // 0x313c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187C88u, 0x313C6Cu, 0x313C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C74u;
label_313c74:
    // 0x313c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313C74u;
    {
        const bool branch_taken_0x313c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C74u;
        // 0x313c78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c74) {
            ctx->pc = 0x313C84u;
            goto label_313c84;
        }
    }
    ctx->pc = 0x313C7Cu;
label_313c7c:
    // 0x313c7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313c84:
    // 0x313c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313c88: 0x3e00008  jr          $ra
    ctx->pc = 0x313C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C88u;
        // 0x313c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313C90u;
}
