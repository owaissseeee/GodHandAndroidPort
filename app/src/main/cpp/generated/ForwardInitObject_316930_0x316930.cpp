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

// Function: ForwardInitObject_316930
// Address: 0x316930 - 0x3169a0
void ForwardInitObject_316930_0x316930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316930_0x316930");
#endif

    switch (ctx->pc) {
        case 0x316964u: goto label_316964;
        case 0x31697cu: goto label_31697c;
        case 0x316984u: goto label_316984;
        default: break;
    }

    ctx->pc = 0x316930u;

    // 0x316930: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316934: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316938: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31693c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31693cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316940: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316944: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316948: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316948u;
    {
        const bool branch_taken_0x316948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316948u;
        // 0x31694c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316948) {
            ctx->pc = 0x31698Cu;
            goto label_31698c;
        }
    }
    ctx->pc = 0x316950u;
    // 0x316950: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316954: 0x24040980  addiu       $a0, $zero, 0x980
    ctx->pc = 0x316954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x316958: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31695c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31695Cu;
    SET_GPR_U32(ctx, 31, 0x316964u);
    ctx->pc = 0x316960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31695Cu;
    // 0x316960: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31695Cu, 0x316964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316964u;
label_316964:
    // 0x316964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316968: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316968u;
    {
        const bool branch_taken_0x316968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316968u;
        // 0x31696c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316968) {
            ctx->pc = 0x31698Cu;
            goto label_31698c;
        }
    }
    ctx->pc = 0x316970u;
    // 0x316970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316974: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316974u;
    SET_GPR_U32(ctx, 31, 0x31697Cu);
    ctx->pc = 0x316978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316974u;
    // 0x316978: 0x24060980  addiu       $a2, $zero, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316974u, 0x31697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31697Cu;
label_31697c:
    // 0x31697c: 0xc05bda6  jal         func_16F698
    ctx->pc = 0x31697Cu;
    SET_GPR_U32(ctx, 31, 0x316984u);
    ctx->pc = 0x316980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31697Cu;
    // 0x316980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F698u, 0x31697Cu, 0x316984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316984u;
label_316984:
    // 0x316984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316984u;
    {
        const bool branch_taken_0x316984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316984u;
        // 0x316988: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316984) {
            ctx->pc = 0x316994u;
            goto label_316994;
        }
    }
    ctx->pc = 0x31698Cu;
label_31698c:
    // 0x31698c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31698cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316994:
    // 0x316994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316998: 0x3e00008  jr          $ra
    ctx->pc = 0x316998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316998u;
        // 0x31699c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3169A0u;
}
