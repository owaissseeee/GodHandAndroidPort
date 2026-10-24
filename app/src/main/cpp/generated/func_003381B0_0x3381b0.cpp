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

// Function: func_003381B0
// Address: 0x3381b0 - 0x3382a0
void func_003381B0_0x3381b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003381B0_0x3381b0");
#endif

    switch (ctx->pc) {
        case 0x338200u: goto label_338200;
        case 0x338210u: goto label_338210;
        case 0x338244u: goto label_338244;
        case 0x338258u: goto label_338258;
        case 0x338268u: goto label_338268;
        default: break;
    }

    ctx->pc = 0x3381b0u;

    // 0x3381b0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3381b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3381b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3381b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3381b8: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x3381b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x3381bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3381bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3381c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3381c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3381c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3381c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3381c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3381c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3381cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3381ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3381d0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3381D0u;
    {
        const bool branch_taken_0x3381d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3381D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381D0u;
        // 0x3381d4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381d0) {
            ctx->pc = 0x3381E8u;
            goto label_3381e8;
        }
    }
    ctx->pc = 0x3381D8u;
    // 0x3381d8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3381d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3381dc: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x3381dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3381e0: 0x58600027  blezl       $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3381E0u;
    {
        const bool branch_taken_0x3381e0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3381e0) {
            ctx->pc = 0x3381E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3381E0u;
            // 0x3381e4: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338280u;
            goto label_338280;
        }
    }
    ctx->pc = 0x3381E8u;
label_3381e8:
    // 0x3381e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3381e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3381ec: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3381ECu;
    {
        const bool branch_taken_0x3381ec = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3381F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381ECu;
        // 0x3381f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381ec) {
            ctx->pc = 0x338224u;
            goto label_338224;
        }
    }
    ctx->pc = 0x3381F4u;
    // 0x3381f4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3381f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3381f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3381f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3381fc: 0x0  nop
    ctx->pc = 0x3381fcu;
    // NOP
label_338200:
    // 0x338200: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338200u;
    {
        const bool branch_taken_0x338200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338200u;
        // 0x338204: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338200) {
            ctx->pc = 0x338214u;
            goto label_338214;
        }
    }
    ctx->pc = 0x338208u;
    // 0x338208: 0xc0d00b8  jal         func_3402E0
    ctx->pc = 0x338208u;
    SET_GPR_U32(ctx, 31, 0x338210u);
    ctx->pc = 0x3402E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3402E0u, 0x338208u, 0x338210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338210u;
label_338210:
    // 0x338210: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x338210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_338214:
    // 0x338214: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x338214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x338218: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x338218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33821c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33821Cu;
    {
        const bool branch_taken_0x33821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33821c) {
            ctx->pc = 0x338220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33821Cu;
            // 0x338220: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338200;
        }
    }
    ctx->pc = 0x338224u;
label_338224:
    // 0x338224: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x338224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x338228: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x338228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33822c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33822cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x338230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x338238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33823c: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x33823Cu;
    SET_GPR_U32(ctx, 31, 0x338244u);
    ctx->pc = 0x338240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33823Cu;
    // 0x338240: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33823Cu, 0x338244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338244u;
label_338244:
    // 0x338244: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x338244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338248: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x338248u;
    {
        const bool branch_taken_0x338248 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x33824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338248u;
        // 0x33824c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338248) {
            ctx->pc = 0x33827Cu;
            goto label_33827c;
        }
    }
    ctx->pc = 0x338250u;
    // 0x338250: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x338250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x338254: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338258:
    // 0x338258: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338258u;
    {
        const bool branch_taken_0x338258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338258u;
        // 0x33825c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338258) {
            ctx->pc = 0x33826Cu;
            goto label_33826c;
        }
    }
    ctx->pc = 0x338260u;
    // 0x338260: 0xc0cdce6  jal         func_337398
    ctx->pc = 0x338260u;
    SET_GPR_U32(ctx, 31, 0x338268u);
    ctx->pc = 0x337398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337398u, 0x338260u, 0x338268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338268u;
label_338268:
    // 0x338268: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x338268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33826c:
    // 0x33826c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33826cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x338270: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x338270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x338274: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x338274u;
    {
        const bool branch_taken_0x338274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338274) {
            ctx->pc = 0x338278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338274u;
            // 0x338278: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338258;
        }
    }
    ctx->pc = 0x33827Cu;
label_33827c:
    // 0x33827c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x33827cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_338280:
    // 0x338280: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x338280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338284: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x338284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338288: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x338288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33828c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33828cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x338290: 0x3e00008  jr          $ra
    ctx->pc = 0x338290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338290u;
        // 0x338294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338298u;
    // 0x338298: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x338298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33829c: 0x0  nop
    ctx->pc = 0x33829cu;
    // NOP
    ctx->pc = 0x3382a0u;
}
