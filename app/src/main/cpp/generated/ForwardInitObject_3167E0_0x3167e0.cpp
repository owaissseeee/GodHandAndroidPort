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

// Function: ForwardInitObject_3167E0
// Address: 0x3167e0 - 0x316850
void ForwardInitObject_3167E0_0x3167e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_3167E0_0x3167e0");
#endif

    switch (ctx->pc) {
        case 0x316814u: goto label_316814;
        case 0x31682cu: goto label_31682c;
        case 0x316834u: goto label_316834;
        default: break;
    }

    ctx->pc = 0x3167e0u;

    // 0x3167e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3167e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3167e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3167e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3167e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3167ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3167ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3167f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3167f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3167f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3167f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3167f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3167F8u;
    {
        const bool branch_taken_0x3167f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3167FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167F8u;
        // 0x3167fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167f8) {
            ctx->pc = 0x31683Cu;
            goto label_31683c;
        }
    }
    ctx->pc = 0x316800u;
    // 0x316800: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316804: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316808: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31680c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31680Cu;
    SET_GPR_U32(ctx, 31, 0x316814u);
    ctx->pc = 0x316810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31680Cu;
    // 0x316810: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31680Cu, 0x316814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316814u;
label_316814:
    // 0x316814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316818: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316818u;
    {
        const bool branch_taken_0x316818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316818u;
        // 0x31681c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316818) {
            ctx->pc = 0x31683Cu;
            goto label_31683c;
        }
    }
    ctx->pc = 0x316820u;
    // 0x316820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316824: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316824u;
    SET_GPR_U32(ctx, 31, 0x31682Cu);
    ctx->pc = 0x316828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316824u;
    // 0x316828: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316824u, 0x31682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31682Cu;
label_31682c:
    // 0x31682c: 0xc06fa2c  jal         func_1BE8B0
    ctx->pc = 0x31682Cu;
    SET_GPR_U32(ctx, 31, 0x316834u);
    ctx->pc = 0x316830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31682Cu;
    // 0x316830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8B0u, 0x31682Cu, 0x316834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316834u;
label_316834:
    // 0x316834: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316834u;
    {
        const bool branch_taken_0x316834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316834u;
        // 0x316838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316834) {
            ctx->pc = 0x316844u;
            goto label_316844;
        }
    }
    ctx->pc = 0x31683Cu;
label_31683c:
    // 0x31683c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31683cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316840: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316844:
    // 0x316844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316848: 0x3e00008  jr          $ra
    ctx->pc = 0x316848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316848u;
        // 0x31684c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316850u;
}
