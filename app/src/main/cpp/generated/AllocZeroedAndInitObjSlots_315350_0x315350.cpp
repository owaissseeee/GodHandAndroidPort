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

// Function: AllocZeroedAndInitObjSlots_315350
// Address: 0x315350 - 0x3153c0
void AllocZeroedAndInitObjSlots_315350_0x315350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitObjSlots_315350_0x315350");
#endif

    switch (ctx->pc) {
        case 0x315384u: goto label_315384;
        case 0x31539cu: goto label_31539c;
        case 0x3153a4u: goto label_3153a4;
        default: break;
    }

    ctx->pc = 0x315350u;

    // 0x315350: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315354: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315358: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31535c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31535cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315364: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315368: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315368u;
    {
        const bool branch_taken_0x315368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315368u;
        // 0x31536c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315368) {
            ctx->pc = 0x3153ACu;
            goto label_3153ac;
        }
    }
    ctx->pc = 0x315370u;
    // 0x315370: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315374: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x315374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x315378: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31537c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31537Cu;
    SET_GPR_U32(ctx, 31, 0x315384u);
    ctx->pc = 0x315380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31537Cu;
    // 0x315380: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31537Cu, 0x315384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315384u;
label_315384:
    // 0x315384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315388: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315388u;
    {
        const bool branch_taken_0x315388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315388u;
        // 0x31538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315388) {
            ctx->pc = 0x3153ACu;
            goto label_3153ac;
        }
    }
    ctx->pc = 0x315390u;
    // 0x315390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315394: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315394u;
    SET_GPR_U32(ctx, 31, 0x31539Cu);
    ctx->pc = 0x315398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315394u;
    // 0x315398: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315394u, 0x31539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31539Cu;
label_31539c:
    // 0x31539c: 0xc0679b0  jal         func_19E6C0
    ctx->pc = 0x31539Cu;
    SET_GPR_U32(ctx, 31, 0x3153A4u);
    ctx->pc = 0x3153A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31539Cu;
    // 0x3153a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E6C0u, 0x31539Cu, 0x3153A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153A4u;
label_3153a4:
    // 0x3153a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3153A4u;
    {
        const bool branch_taken_0x3153a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153A4u;
        // 0x3153a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153a4) {
            ctx->pc = 0x3153B4u;
            goto label_3153b4;
        }
    }
    ctx->pc = 0x3153ACu;
label_3153ac:
    // 0x3153ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3153acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3153b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3153b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3153b4:
    // 0x3153b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3153b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3153b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3153B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3153BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153B8u;
        // 0x3153bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3153B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3153C0u;
}
