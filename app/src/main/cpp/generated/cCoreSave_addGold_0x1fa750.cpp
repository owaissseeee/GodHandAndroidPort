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

// Function: cCoreSave_addGold
// Address: 0x1fa750 - 0x1fa820
void cCoreSave_addGold_0x1fa750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addGold_0x1fa750");
#endif

    switch (ctx->pc) {
        case 0x1fa7acu: goto label_1fa7ac;
        default: break;
    }

    ctx->pc = 0x1fa750u;

    // 0x1fa750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa754: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fa754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fa758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa764: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa768: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FA768u;
    {
        const bool branch_taken_0x1fa768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA768u;
        // 0x1fa76c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa768) {
            ctx->pc = 0x1FA808u;
            goto label_1fa808;
        }
    }
    ctx->pc = 0x1FA770u;
    // 0x1fa770: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x1fa770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1fa774: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1fa774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fa778: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA778u;
    {
        const bool branch_taken_0x1fa778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA778u;
        // 0x1fa77c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa778) {
            ctx->pc = 0x1FA798u;
            goto label_1fa798;
        }
    }
    ctx->pc = 0x1FA780u;
    // 0x1fa780: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fa780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa784: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x1fa784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x1fa788: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa78c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fa78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1fa790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fa794: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1fa794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_1fa798:
    // 0x1fa798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa79c: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA79Cu;
    {
        const bool branch_taken_0x1fa79c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fa79c) {
            ctx->pc = 0x1FA7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA79Cu;
            // 0x1fa7a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA7B0u;
            goto label_1fa7b0;
        }
    }
    ctx->pc = 0x1FA7A4u;
    // 0x1fa7a4: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x1FA7A4u;
    SET_GPR_U32(ctx, 31, 0x1FA7ACu);
    ctx->pc = 0x1FA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7A4u;
    // 0x1fa7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x1FA7A4u, 0x1FA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7ACu;
label_1fa7ac:
    // 0x1fa7ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fa7b0:
    // 0x1fa7b0: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1fa7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1fa7b4: 0x34a5423f  ori         $a1, $a1, 0x423F
    ctx->pc = 0x1fa7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16959);
    // 0x1fa7b8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1fa7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fa7bc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1fa7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1fa7c0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1fa7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1fa7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa7c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa7cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1fa7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fa7d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA7D0u;
    {
        const bool branch_taken_0x1fa7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7d0) {
            ctx->pc = 0x1FA7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA7D0u;
            // 0x1fa7d4: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA7D8u;
            goto label_1fa7d8;
        }
    }
    ctx->pc = 0x1FA7D8u;
label_1fa7d8:
    // 0x1fa7d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa7dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa7e0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA7E0u;
    {
        const bool branch_taken_0x1fa7e0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fa7e0) {
            ctx->pc = 0x1FA7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA7E0u;
            // 0x1fa7e4: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA7E8u;
            goto label_1fa7e8;
        }
    }
    ctx->pc = 0x1FA7E8u;
label_1fa7e8:
    // 0x1fa7e8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fa7ec: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1fa7f0: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1fa7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x1fa7f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fa7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fa7f8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA7F8u;
    {
        const bool branch_taken_0x1fa7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7f8) {
            ctx->pc = 0x1FA7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA7F8u;
            // 0x1fa7fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA80Cu;
            goto label_1fa80c;
        }
    }
    ctx->pc = 0x1FA800u;
    // 0x1fa800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa804: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x1fa804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_1fa808:
    // 0x1fa808: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fa808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa80c:
    // 0x1fa80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa814: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA814u;
        // 0x1fa818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA81Cu;
    // 0x1fa81c: 0x0  nop
    ctx->pc = 0x1fa81cu;
    // NOP
    ctx->pc = 0x1fa820u;
}
