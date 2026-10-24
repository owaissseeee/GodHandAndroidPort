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

// Function: func_0031D658
// Address: 0x31d658 - 0x31d6e8
void func_0031D658_0x31d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D658_0x31d658");
#endif

    switch (ctx->pc) {
        case 0x31d690u: goto label_31d690;
        case 0x31d6b0u: goto label_31d6b0;
        default: break;
    }

    ctx->pc = 0x31d658u;

    // 0x31d658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31d65c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31d660: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31d664: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31d664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d668: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31d66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d678: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x31d678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31d67c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31D67Cu;
    {
        const bool branch_taken_0x31d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D67Cu;
        // 0x31d680: 0x30b300ff  andi        $s3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d67c) {
            ctx->pc = 0x31D6C4u;
            goto label_31d6c4;
        }
    }
    ctx->pc = 0x31D684u;
    // 0x31d684: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x31d684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31d688: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31d688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31d68c: 0x0  nop
    ctx->pc = 0x31d68cu;
    // NOP
label_31d690:
    // 0x31d690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31d690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d694: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31d694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d698: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31d698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31d69c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x31d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x31d6a0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x31d6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x31d6a4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x31d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d6a8: 0xc0c74f4  jal         func_31D3D0
    ctx->pc = 0x31D6A8u;
    SET_GPR_U32(ctx, 31, 0x31D6B0u);
    ctx->pc = 0x31D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6A8u;
    // 0x31d6ac: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D3D0u, 0x31D6A8u, 0x31D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6B0u;
label_31d6b0:
    // 0x31d6b0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x31d6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31d6b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31d6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d6b8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x31D6B8u;
    {
        const bool branch_taken_0x31d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d6b8) {
            ctx->pc = 0x31D6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D6B8u;
            // 0x31d6bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d690;
        }
    }
    ctx->pc = 0x31D6C0u;
    // 0x31d6c0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x31d6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_31d6c4:
    // 0x31d6c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31d6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d6c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31d6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d6d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31d6d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6D8u;
        // 0x31d6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D6E0u;
    // 0x31d6e0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x31d6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31d6e4: 0x0  nop
    ctx->pc = 0x31d6e4u;
    // NOP
    ctx->pc = 0x31d6e8u;
}
