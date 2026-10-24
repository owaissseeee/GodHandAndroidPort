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

// Function: ForwardInitBuffer_3144E0
// Address: 0x3144e0 - 0x314550
void ForwardInitBuffer_3144E0_0x3144e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3144E0_0x3144e0");
#endif

    switch (ctx->pc) {
        case 0x314514u: goto label_314514;
        case 0x31452cu: goto label_31452c;
        case 0x314534u: goto label_314534;
        default: break;
    }

    ctx->pc = 0x3144e0u;

    // 0x3144e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3144e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3144e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3144e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3144e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3144e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3144ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3144ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3144f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3144f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3144f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3144f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3144f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3144F8u;
    {
        const bool branch_taken_0x3144f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3144FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144F8u;
        // 0x3144fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144f8) {
            ctx->pc = 0x31453Cu;
            goto label_31453c;
        }
    }
    ctx->pc = 0x314500u;
    // 0x314500: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314504: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x314504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x314508: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31450c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31450Cu;
    SET_GPR_U32(ctx, 31, 0x314514u);
    ctx->pc = 0x314510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31450Cu;
    // 0x314510: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31450Cu, 0x314514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314514u;
label_314514:
    // 0x314514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314518: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314518u;
    {
        const bool branch_taken_0x314518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314518u;
        // 0x31451c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314518) {
            ctx->pc = 0x31453Cu;
            goto label_31453c;
        }
    }
    ctx->pc = 0x314520u;
    // 0x314520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314524: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314524u;
    SET_GPR_U32(ctx, 31, 0x31452Cu);
    ctx->pc = 0x314528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314524u;
    // 0x314528: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314524u, 0x31452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31452Cu;
label_31452c:
    // 0x31452c: 0xc064bda  jal         func_192F68
    ctx->pc = 0x31452Cu;
    SET_GPR_U32(ctx, 31, 0x314534u);
    ctx->pc = 0x314530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31452Cu;
    // 0x314530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F68u, 0x31452Cu, 0x314534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314534u;
label_314534:
    // 0x314534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314534u;
    {
        const bool branch_taken_0x314534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314534u;
        // 0x314538: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314534) {
            ctx->pc = 0x314544u;
            goto label_314544;
        }
    }
    ctx->pc = 0x31453Cu;
label_31453c:
    // 0x31453c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31453cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314540: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314544:
    // 0x314544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314548: 0x3e00008  jr          $ra
    ctx->pc = 0x314548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314548u;
        // 0x31454c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314550u;
}
