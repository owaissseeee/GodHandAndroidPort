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

// Function: AllocZeroedAndSetupFields214And620_315580
// Address: 0x315580 - 0x3155f0
void AllocZeroedAndSetupFields214And620_315580_0x315580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndSetupFields214And620_315580_0x315580");
#endif

    switch (ctx->pc) {
        case 0x3155b4u: goto label_3155b4;
        case 0x3155ccu: goto label_3155cc;
        case 0x3155d4u: goto label_3155d4;
        default: break;
    }

    ctx->pc = 0x315580u;

    // 0x315580: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315584: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315588: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31558c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315594: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315598: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315598u;
    {
        const bool branch_taken_0x315598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315598u;
        // 0x31559c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315598) {
            ctx->pc = 0x3155DCu;
            goto label_3155dc;
        }
    }
    ctx->pc = 0x3155A0u;
    // 0x3155a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3155a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3155a4: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x3155a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x3155a8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3155a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3155ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3155ACu;
    SET_GPR_U32(ctx, 31, 0x3155B4u);
    ctx->pc = 0x3155B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155ACu;
    // 0x3155b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3155ACu, 0x3155B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155B4u;
label_3155b4:
    // 0x3155b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3155b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3155b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3155B8u;
    {
        const bool branch_taken_0x3155b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3155BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155B8u;
        // 0x3155bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3155b8) {
            ctx->pc = 0x3155DCu;
            goto label_3155dc;
        }
    }
    ctx->pc = 0x3155C0u;
    // 0x3155c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3155c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3155c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3155C4u;
    SET_GPR_U32(ctx, 31, 0x3155CCu);
    ctx->pc = 0x3155C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155C4u;
    // 0x3155c8: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3155C4u, 0x3155CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155CCu;
label_3155cc:
    // 0x3155cc: 0xc067faa  jal         func_19FEA8
    ctx->pc = 0x3155CCu;
    SET_GPR_U32(ctx, 31, 0x3155D4u);
    ctx->pc = 0x3155D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155CCu;
    // 0x3155d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FEA8u, 0x3155CCu, 0x3155D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155D4u;
label_3155d4:
    // 0x3155d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3155D4u;
    {
        const bool branch_taken_0x3155d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3155D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155D4u;
        // 0x3155d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3155d4) {
            ctx->pc = 0x3155E4u;
            goto label_3155e4;
        }
    }
    ctx->pc = 0x3155DCu;
label_3155dc:
    // 0x3155dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3155dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3155e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3155e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3155e4:
    // 0x3155e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3155e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3155e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3155E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3155ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155E8u;
        // 0x3155ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3155E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3155F0u;
}
