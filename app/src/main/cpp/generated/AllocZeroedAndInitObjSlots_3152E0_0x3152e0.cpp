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

// Function: AllocZeroedAndInitObjSlots_3152E0
// Address: 0x3152e0 - 0x315350
void AllocZeroedAndInitObjSlots_3152E0_0x3152e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitObjSlots_3152E0_0x3152e0");
#endif

    switch (ctx->pc) {
        case 0x315314u: goto label_315314;
        case 0x31532cu: goto label_31532c;
        case 0x315334u: goto label_315334;
        default: break;
    }

    ctx->pc = 0x3152e0u;

    // 0x3152e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3152e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3152e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3152e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3152e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3152ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3152ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3152f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3152f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3152f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3152f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3152f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3152F8u;
    {
        const bool branch_taken_0x3152f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3152FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152F8u;
        // 0x3152fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152f8) {
            ctx->pc = 0x31533Cu;
            goto label_31533c;
        }
    }
    ctx->pc = 0x315300u;
    // 0x315300: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315304: 0x240409e0  addiu       $a0, $zero, 0x9E0
    ctx->pc = 0x315304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    // 0x315308: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31530c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31530Cu;
    SET_GPR_U32(ctx, 31, 0x315314u);
    ctx->pc = 0x315310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31530Cu;
    // 0x315310: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31530Cu, 0x315314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315314u;
label_315314:
    // 0x315314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315318: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315318u;
    {
        const bool branch_taken_0x315318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315318u;
        // 0x31531c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315318) {
            ctx->pc = 0x31533Cu;
            goto label_31533c;
        }
    }
    ctx->pc = 0x315320u;
    // 0x315320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315324: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315324u;
    SET_GPR_U32(ctx, 31, 0x31532Cu);
    ctx->pc = 0x315328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315324u;
    // 0x315328: 0x240609e0  addiu       $a2, $zero, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315324u, 0x31532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31532Cu;
label_31532c:
    // 0x31532c: 0xc067912  jal         func_19E448
    ctx->pc = 0x31532Cu;
    SET_GPR_U32(ctx, 31, 0x315334u);
    ctx->pc = 0x315330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31532Cu;
    // 0x315330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E448u, 0x31532Cu, 0x315334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315334u;
label_315334:
    // 0x315334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315334u;
    {
        const bool branch_taken_0x315334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315334u;
        // 0x315338: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315334) {
            ctx->pc = 0x315344u;
            goto label_315344;
        }
    }
    ctx->pc = 0x31533Cu;
label_31533c:
    // 0x31533c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315344:
    // 0x315344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315348: 0x3e00008  jr          $ra
    ctx->pc = 0x315348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315348u;
        // 0x31534c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315350u;
}
