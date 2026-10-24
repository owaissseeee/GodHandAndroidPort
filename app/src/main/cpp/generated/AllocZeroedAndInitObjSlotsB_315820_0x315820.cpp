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

// Function: AllocZeroedAndInitObjSlotsB_315820
// Address: 0x315820 - 0x315890
void AllocZeroedAndInitObjSlotsB_315820_0x315820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitObjSlotsB_315820_0x315820");
#endif

    switch (ctx->pc) {
        case 0x315854u: goto label_315854;
        case 0x31586cu: goto label_31586c;
        case 0x315874u: goto label_315874;
        default: break;
    }

    ctx->pc = 0x315820u;

    // 0x315820: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315828: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31582c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315834: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315838: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315838u;
    {
        const bool branch_taken_0x315838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315838u;
        // 0x31583c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315838) {
            ctx->pc = 0x31587Cu;
            goto label_31587c;
        }
    }
    ctx->pc = 0x315840u;
    // 0x315840: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315844: 0x24040da0  addiu       $a0, $zero, 0xDA0
    ctx->pc = 0x315844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3488));
    // 0x315848: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31584c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31584Cu;
    SET_GPR_U32(ctx, 31, 0x315854u);
    ctx->pc = 0x315850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31584Cu;
    // 0x315850: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31584Cu, 0x315854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315854u;
label_315854:
    // 0x315854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315858: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315858u;
    {
        const bool branch_taken_0x315858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315858u;
        // 0x31585c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315858) {
            ctx->pc = 0x31587Cu;
            goto label_31587c;
        }
    }
    ctx->pc = 0x315860u;
    // 0x315860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315864: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315864u;
    SET_GPR_U32(ctx, 31, 0x31586Cu);
    ctx->pc = 0x315868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315864u;
    // 0x315868: 0x24060da0  addiu       $a2, $zero, 0xDA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315864u, 0x31586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31586Cu;
label_31586c:
    // 0x31586c: 0xc06835a  jal         func_1A0D68
    ctx->pc = 0x31586Cu;
    SET_GPR_U32(ctx, 31, 0x315874u);
    ctx->pc = 0x315870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31586Cu;
    // 0x315870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D68u, 0x31586Cu, 0x315874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315874u;
label_315874:
    // 0x315874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315874u;
    {
        const bool branch_taken_0x315874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315874u;
        // 0x315878: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315874) {
            ctx->pc = 0x315884u;
            goto label_315884;
        }
    }
    ctx->pc = 0x31587Cu;
label_31587c:
    // 0x31587c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31587cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315880: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315884:
    // 0x315884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315888: 0x3e00008  jr          $ra
    ctx->pc = 0x315888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315888u;
        // 0x31588c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315890u;
}
