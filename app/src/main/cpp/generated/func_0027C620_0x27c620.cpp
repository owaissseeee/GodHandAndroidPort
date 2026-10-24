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

// Function: func_0027C620
// Address: 0x27c620 - 0x27c6d0
void func_0027C620_0x27c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027C620_0x27c620");
#endif

    switch (ctx->pc) {
        case 0x27c678u: goto label_27c678;
        case 0x27c694u: goto label_27c694;
        case 0x27c6a8u: goto label_27c6a8;
        default: break;
    }

    ctx->pc = 0x27c620u;

    // 0x27c620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27c628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c630: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c634: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C634u;
    {
        const bool branch_taken_0x27c634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C634u;
        // 0x27c638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c634) {
            ctx->pc = 0x27C64Cu;
            goto label_27c64c;
        }
    }
    ctx->pc = 0x27C63Cu;
    // 0x27c63c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27C63Cu;
    {
        const bool branch_taken_0x27c63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c63c) {
            ctx->pc = 0x27C6A0u;
            goto label_27c6a0;
        }
    }
    ctx->pc = 0x27C644u;
    // 0x27c644: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C644u;
        // 0x27c648: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C6C4u;
            goto label_27c6c4;
        }
    }
    ctx->pc = 0x27C64Cu;
label_27c64c:
    // 0x27c64c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c654: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c658: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27c658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c65c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x27c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x27c660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c664: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x27c664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x27c668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c66c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c670: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C670u;
    SET_GPR_U32(ctx, 31, 0x27C678u);
    ctx->pc = 0x27C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C670u;
    // 0x27c674: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C670u, 0x27C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C678u;
label_27c678:
    // 0x27c678: 0x8e0915b0  lw          $t1, 0x15B0($s0)
    ctx->pc = 0x27c678u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x27c67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c680: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x27c680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x27c684: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x27c684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27c688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27c688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c68c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x27C68Cu;
    SET_GPR_U32(ctx, 31, 0x27C694u);
    ctx->pc = 0x27C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C68Cu;
    // 0x27c690: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x27C68Cu, 0x27C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C694u;
label_27c694:
    // 0x27c694: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27c694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c69c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27c69cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27c6a0:
    // 0x27c6a0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C6A0u;
    SET_GPR_U32(ctx, 31, 0x27C6A8u);
    ctx->pc = 0x27C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6A0u;
    // 0x27c6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C6A0u, 0x27C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6A8u;
label_27c6a8:
    // 0x27c6a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C6A8u;
    {
        const bool branch_taken_0x27c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6a8) {
            ctx->pc = 0x27C6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C6A8u;
            // 0x27c6ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C6C4u;
            goto label_27c6c4;
        }
    }
    ctx->pc = 0x27C6B0u;
    // 0x27c6b0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c6b4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c6b8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27c6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c6bc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27c6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c6c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27c6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c6c4:
    // 0x27c6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27C6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6C8u;
        // 0x27c6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C6D0u;
}
