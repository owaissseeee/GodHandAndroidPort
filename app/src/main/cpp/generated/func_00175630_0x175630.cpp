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

// Function: func_00175630
// Address: 0x175630 - 0x1756d8
void func_00175630_0x175630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175630_0x175630");
#endif

    switch (ctx->pc) {
        case 0x175670u: goto label_175670;
        case 0x175684u: goto label_175684;
        case 0x1756a8u: goto label_1756a8;
        case 0x1756b8u: goto label_1756b8;
        default: break;
    }

    ctx->pc = 0x175630u;

    // 0x175630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x175630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x175634: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x175634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x175638: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x175638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17563c: 0x244211d8  addiu       $v0, $v0, 0x11D8
    ctx->pc = 0x17563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4568));
    // 0x175640: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x175640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x175644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175648: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x175648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17564c: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x175650: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x175650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x175654: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175658: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x175658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17565c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x17565cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x175660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175664: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x175664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175668: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x175668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x17566c: 0x0  nop
    ctx->pc = 0x17566cu;
    // NOP
label_175670:
    // 0x175670: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x175670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175674: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x175674u;
    {
        const bool branch_taken_0x175674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x175674) {
            ctx->pc = 0x175678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175674u;
            // 0x175678: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17568Cu;
            goto label_17568c;
        }
    }
    ctx->pc = 0x17567Cu;
    // 0x17567c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x17567Cu;
    SET_GPR_U32(ctx, 31, 0x175684u);
    ctx->pc = 0x175680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17567Cu;
    // 0x175680: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x17567Cu, 0x175684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175684u;
label_175684:
    // 0x175684: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x175684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x175688: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x175688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17568c:
    // 0x17568c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17568Cu;
    {
        const bool branch_taken_0x17568c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x175690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17568Cu;
        // 0x175690: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17568c) {
            ctx->pc = 0x175670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175670;
        }
    }
    ctx->pc = 0x175694u;
    // 0x175694: 0x8e450608  lw          $a1, 0x608($s2)
    ctx->pc = 0x175694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x175698: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175698u;
    {
        const bool branch_taken_0x175698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175698u;
        // 0x17569c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175698) {
            ctx->pc = 0x1756ACu;
            goto label_1756ac;
        }
    }
    ctx->pc = 0x1756A0u;
    // 0x1756a0: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1756A0u;
    SET_GPR_U32(ctx, 31, 0x1756A8u);
    ctx->pc = 0x1756A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756A0u;
    // 0x1756a4: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1756A0u, 0x1756A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756A8u;
label_1756a8:
    // 0x1756a8: 0xae400608  sw          $zero, 0x608($s2)
    ctx->pc = 0x1756a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 0));
label_1756ac:
    // 0x1756ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1756acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756b0: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1756B0u;
    SET_GPR_U32(ctx, 31, 0x1756B8u);
    ctx->pc = 0x1756B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756B0u;
    // 0x1756b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1756B0u, 0x1756B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756B8u;
label_1756b8:
    // 0x1756b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1756b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1756bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1756bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1756c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1756c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1756c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1756c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1756c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1756c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1756cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1756ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1756D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1756D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756D0u;
        // 0x1756d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1756D8u;
}
