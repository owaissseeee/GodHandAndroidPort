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

// Function: ForwardInit1B0290_316000
// Address: 0x316000 - 0x316070
void ForwardInit1B0290_316000_0x316000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1B0290_316000_0x316000");
#endif

    switch (ctx->pc) {
        case 0x316034u: goto label_316034;
        case 0x31604cu: goto label_31604c;
        case 0x316054u: goto label_316054;
        default: break;
    }

    ctx->pc = 0x316000u;

    // 0x316000: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316004: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316008: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31600c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31600cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316010: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316014: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316018: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316018u;
    {
        const bool branch_taken_0x316018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316018u;
        // 0x31601c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316018) {
            ctx->pc = 0x31605Cu;
            goto label_31605c;
        }
    }
    ctx->pc = 0x316020u;
    // 0x316020: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316024: 0x24040630  addiu       $a0, $zero, 0x630
    ctx->pc = 0x316024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x316028: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31602c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31602Cu;
    SET_GPR_U32(ctx, 31, 0x316034u);
    ctx->pc = 0x316030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31602Cu;
    // 0x316030: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31602Cu, 0x316034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316034u;
label_316034:
    // 0x316034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316038: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316038u;
    {
        const bool branch_taken_0x316038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316038u;
        // 0x31603c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316038) {
            ctx->pc = 0x31605Cu;
            goto label_31605c;
        }
    }
    ctx->pc = 0x316040u;
    // 0x316040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316044: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316044u;
    SET_GPR_U32(ctx, 31, 0x31604Cu);
    ctx->pc = 0x316048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316044u;
    // 0x316048: 0x24060630  addiu       $a2, $zero, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316044u, 0x31604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31604Cu;
label_31604c:
    // 0x31604c: 0xc06c0a4  jal         func_1B0290
    ctx->pc = 0x31604Cu;
    SET_GPR_U32(ctx, 31, 0x316054u);
    ctx->pc = 0x316050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31604Cu;
    // 0x316050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0290u, 0x31604Cu, 0x316054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316054u;
label_316054:
    // 0x316054: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316054u;
    {
        const bool branch_taken_0x316054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316054u;
        // 0x316058: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316054) {
            ctx->pc = 0x316064u;
            goto label_316064;
        }
    }
    ctx->pc = 0x31605Cu;
label_31605c:
    // 0x31605c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31605cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316064:
    // 0x316064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316068: 0x3e00008  jr          $ra
    ctx->pc = 0x316068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316068u;
        // 0x31606c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316070u;
}
