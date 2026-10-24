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

// Function: AllocZeroedAndForward_316AF0
// Address: 0x316af0 - 0x316b60
void AllocZeroedAndForward_316AF0_0x316af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316AF0_0x316af0");
#endif

    switch (ctx->pc) {
        case 0x316b24u: goto label_316b24;
        case 0x316b3cu: goto label_316b3c;
        case 0x316b44u: goto label_316b44;
        default: break;
    }

    ctx->pc = 0x316af0u;

    // 0x316af0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316af4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316af8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316af8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316afc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316b00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316b04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316b08: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316B08u;
    {
        const bool branch_taken_0x316b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B08u;
        // 0x316b0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b08) {
            ctx->pc = 0x316B4Cu;
            goto label_316b4c;
        }
    }
    ctx->pc = 0x316B10u;
    // 0x316b10: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316b14: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x316b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x316b18: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316b1c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316B1Cu;
    SET_GPR_U32(ctx, 31, 0x316B24u);
    ctx->pc = 0x316B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B1Cu;
    // 0x316b20: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316B1Cu, 0x316B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B24u;
label_316b24:
    // 0x316b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316B28u;
    {
        const bool branch_taken_0x316b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B28u;
        // 0x316b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b28) {
            ctx->pc = 0x316B4Cu;
            goto label_316b4c;
        }
    }
    ctx->pc = 0x316B30u;
    // 0x316b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b34: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316B34u;
    SET_GPR_U32(ctx, 31, 0x316B3Cu);
    ctx->pc = 0x316B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B34u;
    // 0x316b38: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316B34u, 0x316B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B3Cu;
label_316b3c:
    // 0x316b3c: 0xc05c094  jal         func_170250
    ctx->pc = 0x316B3Cu;
    SET_GPR_U32(ctx, 31, 0x316B44u);
    ctx->pc = 0x316B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B3Cu;
    // 0x316b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170250u, 0x316B3Cu, 0x316B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B44u;
label_316b44:
    // 0x316b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316B44u;
    {
        const bool branch_taken_0x316b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B44u;
        // 0x316b48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b44) {
            ctx->pc = 0x316B54u;
            goto label_316b54;
        }
    }
    ctx->pc = 0x316B4Cu;
label_316b4c:
    // 0x316b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316b54:
    // 0x316b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b58: 0x3e00008  jr          $ra
    ctx->pc = 0x316B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B58u;
        // 0x316b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316B60u;
}
