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

// Function: ForwardInitObject_316770
// Address: 0x316770 - 0x3167e0
void ForwardInitObject_316770_0x316770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316770_0x316770");
#endif

    switch (ctx->pc) {
        case 0x3167a4u: goto label_3167a4;
        case 0x3167bcu: goto label_3167bc;
        case 0x3167c4u: goto label_3167c4;
        default: break;
    }

    ctx->pc = 0x316770u;

    // 0x316770: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316774: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316778: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316778u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31677c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31677cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316780: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316784: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316788: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316788u;
    {
        const bool branch_taken_0x316788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316788u;
        // 0x31678c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316788) {
            ctx->pc = 0x3167CCu;
            goto label_3167cc;
        }
    }
    ctx->pc = 0x316790u;
    // 0x316790: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316794: 0x24040910  addiu       $a0, $zero, 0x910
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    // 0x316798: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31679c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31679Cu;
    SET_GPR_U32(ctx, 31, 0x3167A4u);
    ctx->pc = 0x3167A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31679Cu;
    // 0x3167a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31679Cu, 0x3167A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167A4u;
label_3167a4:
    // 0x3167a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3167a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3167A8u;
    {
        const bool branch_taken_0x3167a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3167ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167A8u;
        // 0x3167ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167a8) {
            ctx->pc = 0x3167CCu;
            goto label_3167cc;
        }
    }
    ctx->pc = 0x3167B0u;
    // 0x3167b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3167b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3167B4u;
    SET_GPR_U32(ctx, 31, 0x3167BCu);
    ctx->pc = 0x3167B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167B4u;
    // 0x3167b8: 0x24060910  addiu       $a2, $zero, 0x910 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3167B4u, 0x3167BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167BCu;
label_3167bc:
    // 0x3167bc: 0xc06f794  jal         func_1BDE50
    ctx->pc = 0x3167BCu;
    SET_GPR_U32(ctx, 31, 0x3167C4u);
    ctx->pc = 0x3167C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167BCu;
    // 0x3167c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE50u, 0x3167BCu, 0x3167C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167C4u;
label_3167c4:
    // 0x3167c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3167C4u;
    {
        const bool branch_taken_0x3167c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3167C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167C4u;
        // 0x3167c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167c4) {
            ctx->pc = 0x3167D4u;
            goto label_3167d4;
        }
    }
    ctx->pc = 0x3167CCu;
label_3167cc:
    // 0x3167cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3167ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3167d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3167d4:
    // 0x3167d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3167d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3167d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3167D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167D8u;
        // 0x3167dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3167D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3167E0u;
}
