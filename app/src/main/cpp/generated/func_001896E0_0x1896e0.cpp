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

// Function: func_001896E0
// Address: 0x1896e0 - 0x1897b8
void func_001896E0_0x1896e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001896E0_0x1896e0");
#endif

    switch (ctx->pc) {
        case 0x189718u: goto label_189718;
        case 0x189724u: goto label_189724;
        default: break;
    }

    ctx->pc = 0x1896e0u;

    // 0x1896e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1896e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1896e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1896e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1896e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1896ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1896f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1896f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1896f4: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x1896f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1896f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1896f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1896fc: 0x26120cd2  addiu       $s2, $s0, 0xCD2
    ctx->pc = 0x1896fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3282));
    // 0x189700: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x189700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x189704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x189704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189708: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x189708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18970c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x18970cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189714: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x189714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189718:
    // 0x189718: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x189718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18971c: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18971Cu;
    SET_GPR_U32(ctx, 31, 0x189724u);
    ctx->pc = 0x189720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18971Cu;
    // 0x189720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18971Cu, 0x189724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189724u;
label_189724:
    // 0x189724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189728: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x189728u;
    {
        const bool branch_taken_0x189728 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x189728) {
            ctx->pc = 0x18972Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189728u;
            // 0x18972c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189784u;
            goto label_189784;
        }
    }
    ctx->pc = 0x189730u;
    // 0x189730: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x189730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x189734: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x189734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189738: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x18973c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18973cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189740: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x189740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x189744: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x189744u;
    {
        const bool branch_taken_0x189744 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x189748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189744u;
        // 0x189748: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189744) {
            ctx->pc = 0x189770u;
            goto label_189770;
        }
    }
    ctx->pc = 0x18974Cu;
    // 0x18974c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x18974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x189750: 0xa2130cd6  sb          $s3, 0xCD6($s0)
    ctx->pc = 0x189750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3286), (uint8_t)GPR_U32(ctx, 19));
    // 0x189754: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x189754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x189758: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x189758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x18975c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18975cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x189760: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x189760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x189764: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x189764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x189768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189768u;
    {
        const bool branch_taken_0x189768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189768u;
        // 0x18976c: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189768) {
            ctx->pc = 0x189780u;
            goto label_189780;
        }
    }
    ctx->pc = 0x189770u;
label_189770:
    // 0x189770: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x189770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x189774: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x189774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x189778: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x189778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18977c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18977cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_189780:
    // 0x189780: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x189780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_189784:
    // 0x189784: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x189788: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x189788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18978c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18978Cu;
    {
        const bool branch_taken_0x18978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18978Cu;
        // 0x189790: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18978c) {
            ctx->pc = 0x189718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189718;
        }
    }
    ctx->pc = 0x189794u;
    // 0x189794: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x189794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189798: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x189798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18979c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18979cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1897a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1897a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1897a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1897a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1897a8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1897a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1897ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1897acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1897b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1897B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1897B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897B0u;
        // 0x1897b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1897B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1897B8u;
}
