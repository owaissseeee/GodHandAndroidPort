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

// Function: ForwardInitObject_316380
// Address: 0x316380 - 0x3163f0
void ForwardInitObject_316380_0x316380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316380_0x316380");
#endif

    switch (ctx->pc) {
        case 0x3163b4u: goto label_3163b4;
        case 0x3163ccu: goto label_3163cc;
        case 0x3163d4u: goto label_3163d4;
        default: break;
    }

    ctx->pc = 0x316380u;

    // 0x316380: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316384: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316388: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31638c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31638cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316394: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316398: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316398u;
    {
        const bool branch_taken_0x316398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316398u;
        // 0x31639c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316398) {
            ctx->pc = 0x3163DCu;
            goto label_3163dc;
        }
    }
    ctx->pc = 0x3163A0u;
    // 0x3163a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3163a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3163a4: 0x24040970  addiu       $a0, $zero, 0x970
    ctx->pc = 0x3163a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2416));
    // 0x3163a8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3163a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3163ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3163ACu;
    SET_GPR_U32(ctx, 31, 0x3163B4u);
    ctx->pc = 0x3163B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163ACu;
    // 0x3163b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3163ACu, 0x3163B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163B4u;
label_3163b4:
    // 0x3163b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3163b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3163B8u;
    {
        const bool branch_taken_0x3163b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163B8u;
        // 0x3163bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163b8) {
            ctx->pc = 0x3163DCu;
            goto label_3163dc;
        }
    }
    ctx->pc = 0x3163C0u;
    // 0x3163c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3163c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3163C4u;
    SET_GPR_U32(ctx, 31, 0x3163CCu);
    ctx->pc = 0x3163C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163C4u;
    // 0x3163c8: 0x24060970  addiu       $a2, $zero, 0x970 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3163C4u, 0x3163CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163CCu;
label_3163cc:
    // 0x3163cc: 0xc06ce74  jal         func_1B39D0
    ctx->pc = 0x3163CCu;
    SET_GPR_U32(ctx, 31, 0x3163D4u);
    ctx->pc = 0x3163D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163CCu;
    // 0x3163d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B39D0u, 0x3163CCu, 0x3163D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163D4u;
label_3163d4:
    // 0x3163d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3163D4u;
    {
        const bool branch_taken_0x3163d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163D4u;
        // 0x3163d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163d4) {
            ctx->pc = 0x3163E4u;
            goto label_3163e4;
        }
    }
    ctx->pc = 0x3163DCu;
label_3163dc:
    // 0x3163dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3163dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3163e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3163e4:
    // 0x3163e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3163e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3163e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3163E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3163ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163E8u;
        // 0x3163ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3163E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3163F0u;
}
