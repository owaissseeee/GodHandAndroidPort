#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcChangeThreadPriority
// Address: 0x7cd638 - 0x7cd6f8
void sceMcChangeThreadPriority_0x7cd638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcChangeThreadPriority_0x7cd638");
#endif

    switch (ctx->pc) {
        case 0x7cd674u: goto label_7cd674;
        case 0x7cd6b8u: goto label_7cd6b8;
        case 0x7cd6c8u: goto label_7cd6c8;
        default: break;
    }

    ctx->pc = 0x7cd638u;

    // 0x7cd638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7cd638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7cd63c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd640: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cd640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cd644: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cd644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cd648: 0x24711980  addiu       $s1, $v1, 0x1980
    ctx->pc = 0x7cd648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x7cd64c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7cd64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7cd650: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cd650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cd654: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x7cd654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cd658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD658u;
    {
        const bool branch_taken_0x7cd658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD658u;
        // 0x7cd65c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd658) {
            ctx->pc = 0x7CD668u;
            goto label_7cd668;
        }
    }
    ctx->pc = 0x7CD660u;
    // 0x7cd660: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x7CD660u;
    {
        const bool branch_taken_0x7cd660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD660u;
        // 0x7cd664: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd660) {
            ctx->pc = 0x7CD6DCu;
            goto label_7cd6dc;
        }
    }
    ctx->pc = 0x7CD668u;
label_7cd668:
    // 0x7cd668: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cd668u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cd66c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CD66Cu;
    SET_GPR_U32(ctx, 31, 0x7CD674u);
    ctx->pc = 0x7CD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD66Cu;
    // 0x7cd670: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CD66Cu, 0x7CD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD674u;
label_7cd674:
    // 0x7cd674: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD674u;
    {
        const bool branch_taken_0x7cd674 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD674u;
        // 0x7cd678: 0x3c07007d  lui         $a3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd674) {
            ctx->pc = 0x7CD684u;
            goto label_7cd684;
        }
    }
    ctx->pc = 0x7CD67Cu;
    // 0x7cd67c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7CD67Cu;
    {
        const bool branch_taken_0x7cd67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD67Cu;
        // 0x7cd680: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd67c) {
            ctx->pc = 0x7CD6DCu;
            goto label_7cd6dc;
        }
    }
    ctx->pc = 0x7CD684u;
label_7cd684:
    // 0x7cd684: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cd684u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cd688: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7cd688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7cd68c: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cd68cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cd690: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x7cd690u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x7cd694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cd694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd698: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cd698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cd69c: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cd69cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cd6a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cd6a4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x7cd6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7cd6a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cd6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cd6ac: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cd6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cd6b0: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CD6B0u;
    SET_GPR_U32(ctx, 31, 0x7CD6B8u);
    ctx->pc = 0x7CD6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD6B0u;
    // 0x7cd6b4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CD6B0u, 0x7CD6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD6B8u;
label_7cd6b8:
    // 0x7cd6b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CD6B8u;
    {
        const bool branch_taken_0x7cd6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD6B8u;
        // 0x7cd6bc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd6b8) {
            ctx->pc = 0x7CD6D0u;
            goto label_7cd6d0;
        }
    }
    ctx->pc = 0x7CD6C0u;
    // 0x7cd6c0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD6C0u;
    SET_GPR_U32(ctx, 31, 0x7CD6C8u);
    ctx->pc = 0x7CD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD6C0u;
    // 0x7cd6c4: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD6C0u, 0x7CD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD6C8u;
label_7cd6c8:
    // 0x7cd6c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD6C8u;
    {
        const bool branch_taken_0x7cd6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD6C8u;
        // 0x7cd6cc: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd6c8) {
            ctx->pc = 0x7CD6DCu;
            goto label_7cd6dc;
        }
    }
    ctx->pc = 0x7CD6D0u;
label_7cd6d0:
    // 0x7cd6d0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd6d4: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cd6d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cd6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cd6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cd6dc:
    // 0x7cd6dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7cd6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cd6e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cd6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd6e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cd6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cd6e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cd6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cd6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD6ECu;
        // 0x7cd6f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD6F4u;
    // 0x7cd6f4: 0x0  nop
    ctx->pc = 0x7cd6f4u;
    // NOP
    ctx->pc = 0x7cd6f8u;
}
} // namespace gh_mcport
