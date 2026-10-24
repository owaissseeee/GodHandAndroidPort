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

// Function: AllocAndInit8A0_317500
// Address: 0x317500 - 0x317570
void AllocAndInit8A0_317500_0x317500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInit8A0_317500_0x317500");
#endif

    switch (ctx->pc) {
        case 0x317534u: goto label_317534;
        case 0x31754cu: goto label_31754c;
        case 0x317554u: goto label_317554;
        default: break;
    }

    ctx->pc = 0x317500u;

    // 0x317500: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317504: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317508: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317508u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31750c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31750cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317514: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317518: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317518u;
    {
        const bool branch_taken_0x317518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317518u;
        // 0x31751c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317518) {
            ctx->pc = 0x31755Cu;
            goto label_31755c;
        }
    }
    ctx->pc = 0x317520u;
    // 0x317520: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317524: 0x240408a0  addiu       $a0, $zero, 0x8A0
    ctx->pc = 0x317524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    // 0x317528: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31752c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31752Cu;
    SET_GPR_U32(ctx, 31, 0x317534u);
    ctx->pc = 0x317530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31752Cu;
    // 0x317530: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31752Cu, 0x317534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317534u;
label_317534:
    // 0x317534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317538: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317538u;
    {
        const bool branch_taken_0x317538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317538u;
        // 0x31753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317538) {
            ctx->pc = 0x31755Cu;
            goto label_31755c;
        }
    }
    ctx->pc = 0x317540u;
    // 0x317540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317544: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317544u;
    SET_GPR_U32(ctx, 31, 0x31754Cu);
    ctx->pc = 0x317548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317544u;
    // 0x317548: 0x240608a0  addiu       $a2, $zero, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317544u, 0x31754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31754Cu;
label_31754c:
    // 0x31754c: 0xc05f188  jal         func_17C620
    ctx->pc = 0x31754Cu;
    SET_GPR_U32(ctx, 31, 0x317554u);
    ctx->pc = 0x317550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31754Cu;
    // 0x317550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C620u, 0x31754Cu, 0x317554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317554u;
label_317554:
    // 0x317554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317554u;
    {
        const bool branch_taken_0x317554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317554u;
        // 0x317558: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317554) {
            ctx->pc = 0x317564u;
            goto label_317564;
        }
    }
    ctx->pc = 0x31755Cu;
label_31755c:
    // 0x31755c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31755cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317560: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317564:
    // 0x317564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317568: 0x3e00008  jr          $ra
    ctx->pc = 0x317568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317568u;
        // 0x31756c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317570u;
}
