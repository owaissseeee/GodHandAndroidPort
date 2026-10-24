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

// Function: func_003382A0
// Address: 0x3382a0 - 0x338338
void func_003382A0_0x3382a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003382A0_0x3382a0");
#endif

    switch (ctx->pc) {
        case 0x338300u: goto label_338300;
        case 0x338310u: goto label_338310;
        default: break;
    }

    ctx->pc = 0x3382a0u;

    // 0x3382a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3382a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3382a4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3382a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3382a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3382a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3382ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3382acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3382b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3382b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3382b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3382b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3382b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3382b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3382bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3382bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3382c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3382c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3382c4: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x3382c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x3382c8: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3382C8u;
    {
        const bool branch_taken_0x3382c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3382CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382C8u;
        // 0x3382cc: 0x82440052  lb          $a0, 0x52($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382c8) {
            ctx->pc = 0x3382E0u;
            goto label_3382e0;
        }
    }
    ctx->pc = 0x3382D0u;
    // 0x3382d0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3382d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3382d4: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x3382d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3382d8: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3382D8u;
    {
        const bool branch_taken_0x3382d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3382DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382D8u;
        // 0x3382dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382d8) {
            ctx->pc = 0x338320u;
            goto label_338320;
        }
    }
    ctx->pc = 0x3382E0u;
label_3382e0:
    // 0x3382e0: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3382E0u;
    {
        const bool branch_taken_0x3382e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3382E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382E0u;
        // 0x3382e4: 0xa2450058  sb          $a1, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382e0) {
            ctx->pc = 0x33831Cu;
            goto label_33831c;
        }
    }
    ctx->pc = 0x3382E8u;
    // 0x3382e8: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3382E8u;
    {
        const bool branch_taken_0x3382e8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3382ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382E8u;
        // 0x3382ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382e8) {
            ctx->pc = 0x338320u;
            goto label_338320;
        }
    }
    ctx->pc = 0x3382F0u;
    // 0x3382f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3382f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3382f4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3382f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3382f8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x3382f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3382fc: 0x0  nop
    ctx->pc = 0x3382fcu;
    // NOP
label_338300:
    // 0x338300: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338304: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x338304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x338308: 0xc0d00c6  jal         func_340318
    ctx->pc = 0x338308u;
    SET_GPR_U32(ctx, 31, 0x338310u);
    ctx->pc = 0x33830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338308u;
    // 0x33830c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340318u, 0x338308u, 0x338310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338310u;
label_338310:
    // 0x338310: 0xa2530059  sb          $s3, 0x59($s2)
    ctx->pc = 0x338310u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 19));
    // 0x338314: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x338314u;
    {
        const bool branch_taken_0x338314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x338318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338314u;
        // 0x338318: 0xa2400058  sb          $zero, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338314) {
            ctx->pc = 0x338300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338300;
        }
    }
    ctx->pc = 0x33831Cu;
label_33831c:
    // 0x33831c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33831cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338320:
    // 0x338320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338328: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x338328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33832c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338330: 0x3e00008  jr          $ra
    ctx->pc = 0x338330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338330u;
        // 0x338334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338338u;
}
