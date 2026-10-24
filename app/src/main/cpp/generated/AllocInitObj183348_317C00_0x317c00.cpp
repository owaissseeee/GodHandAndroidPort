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

// Function: AllocInitObj183348_317C00
// Address: 0x317c00 - 0x317c70
void AllocInitObj183348_317C00_0x317c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj183348_317C00_0x317c00");
#endif

    switch (ctx->pc) {
        case 0x317c34u: goto label_317c34;
        case 0x317c4cu: goto label_317c4c;
        case 0x317c54u: goto label_317c54;
        default: break;
    }

    ctx->pc = 0x317c00u;

    // 0x317c00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317c04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317c08: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317c0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317c10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317c14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317c18: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317C18u;
    {
        const bool branch_taken_0x317c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C18u;
        // 0x317c1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c18) {
            ctx->pc = 0x317C5Cu;
            goto label_317c5c;
        }
    }
    ctx->pc = 0x317C20u;
    // 0x317c20: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317c20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317c24: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x317c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x317c28: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317c2c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317C2Cu;
    SET_GPR_U32(ctx, 31, 0x317C34u);
    ctx->pc = 0x317C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C2Cu;
    // 0x317c30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317C2Cu, 0x317C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C34u;
label_317c34:
    // 0x317c34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317C38u;
    {
        const bool branch_taken_0x317c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C38u;
        // 0x317c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c38) {
            ctx->pc = 0x317C5Cu;
            goto label_317c5c;
        }
    }
    ctx->pc = 0x317C40u;
    // 0x317c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c44: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317C44u;
    SET_GPR_U32(ctx, 31, 0x317C4Cu);
    ctx->pc = 0x317C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C44u;
    // 0x317c48: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317C44u, 0x317C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C4Cu;
label_317c4c:
    // 0x317c4c: 0xc060cd2  jal         func_183348
    ctx->pc = 0x317C4Cu;
    SET_GPR_U32(ctx, 31, 0x317C54u);
    ctx->pc = 0x317C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C4Cu;
    // 0x317c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183348u, 0x317C4Cu, 0x317C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C54u;
label_317c54:
    // 0x317c54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317C54u;
    {
        const bool branch_taken_0x317c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C54u;
        // 0x317c58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c54) {
            ctx->pc = 0x317C64u;
            goto label_317c64;
        }
    }
    ctx->pc = 0x317C5Cu;
label_317c5c:
    // 0x317c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317c64:
    // 0x317c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317c68: 0x3e00008  jr          $ra
    ctx->pc = 0x317C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C68u;
        // 0x317c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317C70u;
}
