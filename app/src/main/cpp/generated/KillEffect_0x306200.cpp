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

// Function: KillEffect
// Address: 0x306200 - 0x3062a8
void KillEffect_0x306200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KillEffect_0x306200");
#endif

    switch (ctx->pc) {
        case 0x306264u: goto label_306264;
        case 0x306278u: goto label_306278;
        case 0x306288u: goto label_306288;
        case 0x306294u: goto label_306294;
        default: break;
    }

    ctx->pc = 0x306200u;

    // 0x306200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306204: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x306204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x306208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30620c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30620cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306214: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306214u;
    {
        const bool branch_taken_0x306214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x306218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306214u;
        // 0x306218: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306214) {
            ctx->pc = 0x306228u;
            goto label_306228;
        }
    }
    ctx->pc = 0x30621Cu;
    // 0x30621c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x306220: 0x5222001d  beql        $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x306220u;
    {
        const bool branch_taken_0x306220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x306220) {
            ctx->pc = 0x306224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306220u;
            // 0x306224: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x306228u;
label_306228:
    // 0x306228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30622c: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30622Cu;
    {
        const bool branch_taken_0x30622c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x306230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30622Cu;
        // 0x306230: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30622c) {
            ctx->pc = 0x30626Cu;
            goto label_30626c;
        }
    }
    ctx->pc = 0x306234u;
    // 0x306234: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x306234u;
    {
        const bool branch_taken_0x306234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306234) {
            ctx->pc = 0x306238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306234u;
            // 0x306238: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30624Cu;
            goto label_30624c;
        }
    }
    ctx->pc = 0x30623Cu;
    // 0x30623c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30623Cu;
    {
        const bool branch_taken_0x30623c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x306240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30623Cu;
        // 0x306240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30623c) {
            ctx->pc = 0x30625Cu;
            goto label_30625c;
        }
    }
    ctx->pc = 0x306244u;
    // 0x306244: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x306244u;
    {
        const bool branch_taken_0x306244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306244u;
        // 0x306248: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306244) {
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x30624Cu;
label_30624c:
    // 0x30624c: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30624Cu;
    {
        const bool branch_taken_0x30624c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x306250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30624Cu;
        // 0x306250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30624c) {
            ctx->pc = 0x306280u;
            goto label_306280;
        }
    }
    ctx->pc = 0x306254u;
    // 0x306254: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x306254u;
    {
        const bool branch_taken_0x306254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306254u;
        // 0x306258: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306254) {
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x30625Cu;
label_30625c:
    // 0x30625c: 0xc0c027e  jal         func_3009F8
    ctx->pc = 0x30625Cu;
    SET_GPR_U32(ctx, 31, 0x306264u);
    ctx->pc = 0x306260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30625Cu;
    // 0x306260: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3009F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3009F8u, 0x30625Cu, 0x306264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306264u;
label_306264:
    // 0x306264: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x306264u;
    {
        const bool branch_taken_0x306264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306264u;
        // 0x306268: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306264) {
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x30626Cu;
label_30626c:
    // 0x30626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306270: 0xc0bed70  jal         func_2FB5C0
    ctx->pc = 0x306270u;
    SET_GPR_U32(ctx, 31, 0x306278u);
    ctx->pc = 0x306274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306270u;
    // 0x306274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5C0u, 0x306270u, 0x306278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306278u;
label_306278:
    // 0x306278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x306278u;
    {
        const bool branch_taken_0x306278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306278u;
        // 0x30627c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306278) {
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x306280u;
label_306280:
    // 0x306280: 0xc0bed70  jal         func_2FB5C0
    ctx->pc = 0x306280u;
    SET_GPR_U32(ctx, 31, 0x306288u);
    ctx->pc = 0x306284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306280u;
    // 0x306284: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5C0u, 0x306280u, 0x306288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306288u;
label_306288:
    // 0x306288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30628c: 0xc0c027e  jal         func_3009F8
    ctx->pc = 0x30628Cu;
    SET_GPR_U32(ctx, 31, 0x306294u);
    ctx->pc = 0x306290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30628Cu;
    // 0x306290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3009F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3009F8u, 0x30628Cu, 0x306294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306294u;
label_306294:
    // 0x306294: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x306294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306298:
    // 0x306298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30629c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3062a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3062A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3062A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062A0u;
        // 0x3062a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3062A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3062A8u;
}
