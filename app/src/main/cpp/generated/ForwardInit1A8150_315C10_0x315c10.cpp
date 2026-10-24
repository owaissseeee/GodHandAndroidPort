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

// Function: ForwardInit1A8150_315C10
// Address: 0x315c10 - 0x315c80
void ForwardInit1A8150_315C10_0x315c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A8150_315C10_0x315c10");
#endif

    switch (ctx->pc) {
        case 0x315c44u: goto label_315c44;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c64u: goto label_315c64;
        default: break;
    }

    ctx->pc = 0x315c10u;

    // 0x315c10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315c14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315c18: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315c18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315c1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315c20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315c24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315c28: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315C28u;
    {
        const bool branch_taken_0x315c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C28u;
        // 0x315c2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c28) {
            ctx->pc = 0x315C6Cu;
            goto label_315c6c;
        }
    }
    ctx->pc = 0x315C30u;
    // 0x315c30: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315c34: 0x240406b0  addiu       $a0, $zero, 0x6B0
    ctx->pc = 0x315c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    // 0x315c38: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315c3c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315C3Cu;
    SET_GPR_U32(ctx, 31, 0x315C44u);
    ctx->pc = 0x315C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C3Cu;
    // 0x315c40: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315C3Cu, 0x315C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C44u;
label_315c44:
    // 0x315c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315c48: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315C48u;
    {
        const bool branch_taken_0x315c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C48u;
        // 0x315c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c48) {
            ctx->pc = 0x315C6Cu;
            goto label_315c6c;
        }
    }
    ctx->pc = 0x315C50u;
    // 0x315c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315c54: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315C54u;
    SET_GPR_U32(ctx, 31, 0x315C5Cu);
    ctx->pc = 0x315C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C54u;
    // 0x315c58: 0x240606b0  addiu       $a2, $zero, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315C54u, 0x315C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C5Cu;
label_315c5c:
    // 0x315c5c: 0xc06a054  jal         func_1A8150
    ctx->pc = 0x315C5Cu;
    SET_GPR_U32(ctx, 31, 0x315C64u);
    ctx->pc = 0x315C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C5Cu;
    // 0x315c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8150u, 0x315C5Cu, 0x315C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C64u;
label_315c64:
    // 0x315c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315C64u;
    {
        const bool branch_taken_0x315c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C64u;
        // 0x315c68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c64) {
            ctx->pc = 0x315C74u;
            goto label_315c74;
        }
    }
    ctx->pc = 0x315C6Cu;
label_315c6c:
    // 0x315c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315c70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315c74:
    // 0x315c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315c78: 0x3e00008  jr          $ra
    ctx->pc = 0x315C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C78u;
        // 0x315c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315C80u;
}
