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

// Function: func_0027F5F0
// Address: 0x27f5f0 - 0x27f6b0
void func_0027F5F0_0x27f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F5F0_0x27f5f0");
#endif

    switch (ctx->pc) {
        case 0x27f658u: goto label_27f658;
        case 0x27f688u: goto label_27f688;
        case 0x27f69cu: goto label_27f69c;
        default: break;
    }

    ctx->pc = 0x27f5f0u;

    // 0x27f5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f5f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f5fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f600: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27f600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f604: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F604u;
    {
        const bool branch_taken_0x27f604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F604u;
        // 0x27f608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f604) {
            ctx->pc = 0x27F61Cu;
            goto label_27f61c;
        }
    }
    ctx->pc = 0x27F60Cu;
    // 0x27f60c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27F60Cu;
    {
        const bool branch_taken_0x27f60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f60c) {
            ctx->pc = 0x27F694u;
            goto label_27f694;
        }
    }
    ctx->pc = 0x27F614u;
    // 0x27f614: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27F614u;
    {
        const bool branch_taken_0x27f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F614u;
        // 0x27f618: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f614) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F61Cu;
label_27f61c:
    // 0x27f61c: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x27f61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27f620: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F620u;
    {
        const bool branch_taken_0x27f620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f620) {
            ctx->pc = 0x27F624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F620u;
            // 0x27f624: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F630u;
            goto label_27f630;
        }
    }
    ctx->pc = 0x27F628u;
    // 0x27f628: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F628u;
    {
        const bool branch_taken_0x27f628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F628u;
        // 0x27f62c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f628) {
            ctx->pc = 0x27F660u;
            goto label_27f660;
        }
    }
    ctx->pc = 0x27F630u;
label_27f630:
    // 0x27f630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f638: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f63c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x27f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x27f640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f644: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x27f644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x27f648: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f64c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f650: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F650u;
    SET_GPR_U32(ctx, 31, 0x27F658u);
    ctx->pc = 0x27F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F650u;
    // 0x27f654: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F650u, 0x27F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F658u;
label_27f658:
    // 0x27f658: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27F658u;
    {
        const bool branch_taken_0x27f658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F658u;
        // 0x27f65c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f658) {
            ctx->pc = 0x27F68Cu;
            goto label_27f68c;
        }
    }
    ctx->pc = 0x27F660u;
label_27f660:
    // 0x27f660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f664: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f668: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f66c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x27f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x27f670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f674: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x27f674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x27f678: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f67c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f680: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F680u;
    SET_GPR_U32(ctx, 31, 0x27F688u);
    ctx->pc = 0x27F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F680u;
    // 0x27f684: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F680u, 0x27F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F688u;
label_27f688:
    // 0x27f688: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27f688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27f68c:
    // 0x27f68c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f690: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27f690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27f694:
    // 0x27f694: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27F694u;
    SET_GPR_U32(ctx, 31, 0x27F69Cu);
    ctx->pc = 0x27F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F694u;
    // 0x27f698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27F694u, 0x27F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F69Cu;
label_27f69c:
    // 0x27f69c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f6a0:
    // 0x27f6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6A4u;
        // 0x27f6a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F6ACu;
    // 0x27f6ac: 0x0  nop
    ctx->pc = 0x27f6acu;
    // NOP
    ctx->pc = 0x27f6b0u;
}
