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

// Function: func_001C9140
// Address: 0x1c9140 - 0x1c91b0
void func_001C9140_0x1c9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C9140_0x1c9140");
#endif

    switch (ctx->pc) {
        case 0x1c9154u: goto label_1c9154;
        case 0x1c9180u: goto label_1c9180;
        default: break;
    }

    ctx->pc = 0x1c9140u;

    // 0x1c9140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9144: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c9144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c914c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1C914Cu;
    SET_GPR_U32(ctx, 31, 0x1C9154u);
    ctx->pc = 0x1C9150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C914Cu;
    // 0x1c9150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1C914Cu, 0x1C9154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9154u;
label_1c9154:
    // 0x1c9154: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c9154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c9158: 0x2463aa98  addiu       $v1, $v1, -0x5568
    ctx->pc = 0x1c9158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945432));
    // 0x1c915c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1c915cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1c9160: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1c9160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9164: 0xfa000620  sqc2        $vf0, 0x620($s0)
    ctx->pc = 0x1c9164u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9168: 0xfa000640  sqc2        $vf0, 0x640($s0)
    ctx->pc = 0x1c9168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c916c: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x1c916cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9170: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9174: 0x260206b0  addiu       $v0, $s0, 0x6B0
    ctx->pc = 0x1c9174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
    // 0x1c9178: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c917c: 0x0  nop
    ctx->pc = 0x1c917cu;
    // NOP
label_1c9180:
    // 0x1c9180: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1c9180u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9184: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x1c9184u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c9188: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c9188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c918c: 0x0  nop
    ctx->pc = 0x1c918cu;
    // NOP
    // 0x1c9190: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9190u;
    {
        const bool branch_taken_0x1c9190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9190u;
        // 0x1c9194: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9190) {
            ctx->pc = 0x1C9180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9180;
        }
    }
    ctx->pc = 0x1C9198u;
    // 0x1c9198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c9198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c919c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c91a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c91a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c91a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C91A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91A4u;
        // 0x1c91a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C91A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C91ACu;
    // 0x1c91ac: 0x0  nop
    ctx->pc = 0x1c91acu;
    // NOP
    ctx->pc = 0x1c91b0u;
}
