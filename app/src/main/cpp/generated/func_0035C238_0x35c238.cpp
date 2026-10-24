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

// Function: func_0035C238
// Address: 0x35c238 - 0x35c2d0
void func_0035C238_0x35c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C238_0x35c238");
#endif

    switch (ctx->pc) {
        case 0x35c238u: goto label_35c238;
        case 0x35c23cu: goto label_35c23c;
        case 0x35c240u: goto label_35c240;
        case 0x35c244u: goto label_35c244;
        case 0x35c248u: goto label_35c248;
        case 0x35c24cu: goto label_35c24c;
        case 0x35c250u: goto label_35c250;
        case 0x35c254u: goto label_35c254;
        case 0x35c258u: goto label_35c258;
        case 0x35c25cu: goto label_35c25c;
        case 0x35c260u: goto label_35c260;
        case 0x35c264u: goto label_35c264;
        case 0x35c268u: goto label_35c268;
        case 0x35c26cu: goto label_35c26c;
        case 0x35c270u: goto label_35c270;
        case 0x35c274u: goto label_35c274;
        case 0x35c278u: goto label_35c278;
        case 0x35c27cu: goto label_35c27c;
        case 0x35c280u: goto label_35c280;
        case 0x35c284u: goto label_35c284;
        case 0x35c288u: goto label_35c288;
        case 0x35c28cu: goto label_35c28c;
        case 0x35c290u: goto label_35c290;
        case 0x35c294u: goto label_35c294;
        case 0x35c298u: goto label_35c298;
        case 0x35c29cu: goto label_35c29c;
        case 0x35c2a0u: goto label_35c2a0;
        case 0x35c2a4u: goto label_35c2a4;
        case 0x35c2a8u: goto label_35c2a8;
        case 0x35c2acu: goto label_35c2ac;
        case 0x35c2b0u: goto label_35c2b0;
        case 0x35c2b4u: goto label_35c2b4;
        case 0x35c2b8u: goto label_35c2b8;
        case 0x35c2bcu: goto label_35c2bc;
        case 0x35c2c0u: goto label_35c2c0;
        case 0x35c2c4u: goto label_35c2c4;
        case 0x35c2c8u: goto label_35c2c8;
        case 0x35c2ccu: goto label_35c2cc;
        default: break;
    }

    ctx->pc = 0x35c238u;

label_35c238:
    // 0x35c238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35c23c:
    // 0x35c23c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_35c240:
    // 0x35c240: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35c240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c244:
    // 0x35c244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35c248:
    // 0x35c248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c24c:
    // 0x35c24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35c250:
    // 0x35c250: 0x26501f30  addiu       $s0, $s2, 0x1F30
    ctx->pc = 0x35c250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7984));
label_35c254:
    // 0x35c254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35c258:
    // 0x35c258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c25c:
    // 0x35c25c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_35c260:
    // 0x35c260: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x35c260u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_35c264:
    // 0x35c264: 0x0  nop
    ctx->pc = 0x35c264u;
    // NOP
label_35c268:
    // 0x35c268: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x35c268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_35c26c:
    // 0x35c26c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_35c270:
    if (ctx->pc == 0x35C270u) {
        ctx->pc = 0x35C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C26Cu;
        // 0x35c270: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C274u;
        goto label_35c274;
    }
    ctx->pc = 0x35C26Cu;
    {
        const bool branch_taken_0x35c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C26Cu;
        // 0x35c270: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c26c) {
            ctx->pc = 0x35C2B0u;
            goto label_35c2b0;
        }
    }
    ctx->pc = 0x35C274u;
label_35c274:
    // 0x35c274: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_35c278:
    // 0x35c278: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x35c278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_35c27c:
    // 0x35c27c: 0x0  nop
    ctx->pc = 0x35c27cu;
    // NOP
label_35c280:
    // 0x35c280: 0x0  nop
    ctx->pc = 0x35c280u;
    // NOP
label_35c284:
    // 0x35c284: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_35c288:
    if (ctx->pc == 0x35C288u) {
        ctx->pc = 0x35C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C284u;
        // 0x35c288: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C28Cu;
        goto label_35c28c;
    }
    ctx->pc = 0x35C284u;
    {
        const bool branch_taken_0x35c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C284u;
        // 0x35c288: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c284) {
            ctx->pc = 0x35C268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c268;
        }
    }
    ctx->pc = 0x35C28Cu;
label_35c28c:
    // 0x35c28c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35c290:
    // 0x35c290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35c294:
    // 0x35c294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c298:
    // 0x35c298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c29c:
    // 0x35c29c: 0x40f809  jalr        $v0
label_35c2a0:
    if (ctx->pc == 0x35C2A0u) {
        ctx->pc = 0x35C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C29Cu;
        // 0x35c2a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C2A4u;
        goto label_35c2a4;
    }
    ctx->pc = 0x35C29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35C2A4u);
        ctx->pc = 0x35C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C29Cu;
        // 0x35c2a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C29Cu, 0x35C2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35C2A4u;
label_35c2a4:
    // 0x35c2a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35c2a8:
    // 0x35c2a8: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
label_35c2ac:
    if (ctx->pc == 0x35C2ACu) {
        ctx->pc = 0x35C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2A8u;
        // 0x35c2ac: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C2B0u;
        goto label_35c2b0;
    }
    ctx->pc = 0x35C2A8u;
    {
        const bool branch_taken_0x35c2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2A8u;
        // 0x35c2ac: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c2a8) {
            ctx->pc = 0x35C26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c26c;
        }
    }
    ctx->pc = 0x35C2B0u;
label_35c2b0:
    // 0x35c2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35c2b4:
    // 0x35c2b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35c2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c2b8:
    // 0x35c2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_35c2bc:
    // 0x35c2bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35c2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c2c0:
    // 0x35c2c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35c2c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35c2c4:
    // 0x35c2c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35c2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35c2c8:
    // 0x35c2c8: 0x3e00008  jr          $ra
label_35c2cc:
    if (ctx->pc == 0x35C2CCu) {
        ctx->pc = 0x35C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2C8u;
        // 0x35c2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C2D0u;
        goto label_fallthrough_0x35c2c8;
    }
    ctx->pc = 0x35C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2C8u;
        // 0x35c2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35c2c8:
    ctx->pc = 0x35C2D0u;
}
