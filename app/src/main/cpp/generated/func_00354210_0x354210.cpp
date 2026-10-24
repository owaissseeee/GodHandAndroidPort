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

// Function: func_00354210
// Address: 0x354210 - 0x3542b8
void func_00354210_0x354210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354210_0x354210");
#endif

    switch (ctx->pc) {
        case 0x35424cu: goto label_35424c;
        case 0x354260u: goto label_354260;
        case 0x354284u: goto label_354284;
        case 0x3542a0u: goto label_3542a0;
        default: break;
    }

    ctx->pc = 0x354210u;

    // 0x354210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x354214: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x354214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x354218: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x354218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35421c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x354220: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x354220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354224: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x354224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x354228: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x354228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35422c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x35422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x354230: 0x8c921fc0  lw          $s2, 0x1FC0($a0)
    ctx->pc = 0x354230u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x354234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x354234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354238: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x354238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35423c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35423Cu;
    {
        const bool branch_taken_0x35423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35423Cu;
        // 0x354240: 0x26441094  addiu       $a0, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35423c) {
            ctx->pc = 0x35424Cu;
            goto label_35424c;
        }
    }
    ctx->pc = 0x354244u;
    // 0x354244: 0xc0d510c  jal         func_354430
    ctx->pc = 0x354244u;
    SET_GPR_U32(ctx, 31, 0x35424Cu);
    ctx->pc = 0x354248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354244u;
    // 0x354248: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354430u, 0x354244u, 0x35424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35424Cu;
label_35424c:
    // 0x35424c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354254: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x354254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x354258: 0xc0d50ae  jal         func_3542B8
    ctx->pc = 0x354258u;
    SET_GPR_U32(ctx, 31, 0x354260u);
    ctx->pc = 0x35425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354258u;
    // 0x35425c: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3542B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3542B8u, 0x354258u, 0x354260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354260u;
label_354260:
    // 0x354260: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x354260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354264: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x354264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x354268: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x354268u;
    {
        const bool branch_taken_0x354268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354268u;
        // 0x35426c: 0x26451094  addiu       $a1, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354268) {
            ctx->pc = 0x354298u;
            goto label_354298;
        }
    }
    ctx->pc = 0x354270u;
    // 0x354270: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x354270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x354274: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x354274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x354278: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x354278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35427c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x35427Cu;
    SET_GPR_U32(ctx, 31, 0x354284u);
    ctx->pc = 0x354280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35427Cu;
    // 0x354280: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x35427Cu, 0x354284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354284u;
label_354284:
    // 0x354284: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x354284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x354288: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x354288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35428c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35428Cu;
    {
        const bool branch_taken_0x35428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35428Cu;
        // 0x354290: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35428c) {
            ctx->pc = 0x3542A0u;
            goto label_3542a0;
        }
    }
    ctx->pc = 0x354294u;
    // 0x354294: 0x0  nop
    ctx->pc = 0x354294u;
    // NOP
label_354298:
    // 0x354298: 0xc0d510c  jal         func_354430
    ctx->pc = 0x354298u;
    SET_GPR_U32(ctx, 31, 0x3542A0u);
    ctx->pc = 0x35429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354298u;
    // 0x35429c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354430u, 0x354298u, 0x3542A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542A0u;
label_3542a0:
    // 0x3542a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3542a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3542a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3542a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3542a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3542a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3542ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3542acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3542b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3542B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3542B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542B0u;
        // 0x3542b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3542B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3542B8u;
}
