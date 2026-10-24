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

// Function: AllocZeroedAndInitObjSlots_3157B0
// Address: 0x3157b0 - 0x315820
void AllocZeroedAndInitObjSlots_3157B0_0x3157b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitObjSlots_3157B0_0x3157b0");
#endif

    switch (ctx->pc) {
        case 0x3157e4u: goto label_3157e4;
        case 0x3157fcu: goto label_3157fc;
        case 0x315804u: goto label_315804;
        default: break;
    }

    ctx->pc = 0x3157b0u;

    // 0x3157b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3157b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3157b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3157b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3157b8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3157b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3157bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3157bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3157c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3157c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3157c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3157c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3157c8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3157C8u;
    {
        const bool branch_taken_0x3157c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3157CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157C8u;
        // 0x3157cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157c8) {
            ctx->pc = 0x31580Cu;
            goto label_31580c;
        }
    }
    ctx->pc = 0x3157D0u;
    // 0x3157d0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3157d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3157d4: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x3157d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x3157d8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3157d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3157dc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3157DCu;
    SET_GPR_U32(ctx, 31, 0x3157E4u);
    ctx->pc = 0x3157E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3157DCu;
    // 0x3157e0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3157DCu, 0x3157E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157E4u;
label_3157e4:
    // 0x3157e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3157e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3157e8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3157E8u;
    {
        const bool branch_taken_0x3157e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157E8u;
        // 0x3157ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157e8) {
            ctx->pc = 0x31580Cu;
            goto label_31580c;
        }
    }
    ctx->pc = 0x3157F0u;
    // 0x3157f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3157f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3157f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3157F4u;
    SET_GPR_U32(ctx, 31, 0x3157FCu);
    ctx->pc = 0x3157F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3157F4u;
    // 0x3157f8: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3157F4u, 0x3157FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157FCu;
label_3157fc:
    // 0x3157fc: 0xc0682bc  jal         func_1A0AF0
    ctx->pc = 0x3157FCu;
    SET_GPR_U32(ctx, 31, 0x315804u);
    ctx->pc = 0x315800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3157FCu;
    // 0x315800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AF0u, 0x3157FCu, 0x315804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315804u;
label_315804:
    // 0x315804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315804u;
    {
        const bool branch_taken_0x315804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315804u;
        // 0x315808: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315804) {
            ctx->pc = 0x315814u;
            goto label_315814;
        }
    }
    ctx->pc = 0x31580Cu;
label_31580c:
    // 0x31580c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31580cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315814:
    // 0x315814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315818: 0x3e00008  jr          $ra
    ctx->pc = 0x315818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315818u;
        // 0x31581c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315820u;
}
