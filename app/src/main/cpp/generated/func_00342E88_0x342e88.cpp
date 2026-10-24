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

// Function: func_00342E88
// Address: 0x342e88 - 0x342f40
void func_00342E88_0x342e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342E88_0x342e88");
#endif

    switch (ctx->pc) {
        case 0x342eb4u: goto label_342eb4;
        case 0x342ec4u: goto label_342ec4;
        case 0x342ed8u: goto label_342ed8;
        case 0x342ee0u: goto label_342ee0;
        default: break;
    }

    ctx->pc = 0x342e88u;

    // 0x342e88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x342e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x342e8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x342e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342e90: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x342e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x342e94: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x342e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x342e98: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x342e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x342e9c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x342e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x342ea0: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x342ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x342ea4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x342ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x342ea8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x342ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x342eac: 0xc0d0af2  jal         func_342BC8
    ctx->pc = 0x342EACu;
    SET_GPR_U32(ctx, 31, 0x342EB4u);
    ctx->pc = 0x342EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342EACu;
    // 0x342eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BC8u, 0x342EACu, 0x342EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EB4u;
label_342eb4:
    // 0x342eb4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x342eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x342eb8: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x342ebc: 0xc0d0b40  jal         func_342D00
    ctx->pc = 0x342EBCu;
    SET_GPR_U32(ctx, 31, 0x342EC4u);
    ctx->pc = 0x342EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342EBCu;
    // 0x342ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D00u, 0x342EBCu, 0x342EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EC4u;
label_342ec4:
    // 0x342ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342ec8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x342ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x342ecc: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x342eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x342ed0: 0xc0d0b94  jal         func_342E50
    ctx->pc = 0x342ED0u;
    SET_GPR_U32(ctx, 31, 0x342ED8u);
    ctx->pc = 0x342ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342ED0u;
    // 0x342ed4: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E50u, 0x342ED0u, 0x342ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ED8u;
label_342ed8:
    // 0x342ed8: 0xc0d0ba0  jal         func_342E80
    ctx->pc = 0x342ED8u;
    SET_GPR_U32(ctx, 31, 0x342EE0u);
    ctx->pc = 0x342EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342ED8u;
    // 0x342edc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E80u, 0x342ED8u, 0x342EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EE0u;
label_342ee0:
    // 0x342ee0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x342ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342ee4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x342ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x342ee8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x342ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x342eec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x342eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342ef0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x342ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x342ef4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x342ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342ef8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x342ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x342efc: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x342efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342f00: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x342f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x342f04: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x342f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x342f08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x342f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x342f0c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x342f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x342f10: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x342f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x342f14: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x342f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x342f18: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x342f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x342f1c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x342f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x342f20: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x342f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342f24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x342f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x342f28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x342f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x342f2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x342f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342f30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x342f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342f34: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x342f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x342f38: 0x3e00008  jr          $ra
    ctx->pc = 0x342F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F38u;
        // 0x342f3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342F40u;
}
