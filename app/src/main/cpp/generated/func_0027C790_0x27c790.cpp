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

// Function: func_0027C790
// Address: 0x27c790 - 0x27c888
void func_0027C790_0x27c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027C790_0x27c790");
#endif

    switch (ctx->pc) {
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c818u: goto label_27c818;
        case 0x27c848u: goto label_27c848;
        case 0x27c85cu: goto label_27c85c;
        default: break;
    }

    ctx->pc = 0x27c790u;

    // 0x27c790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c794: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27c798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7a0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c7a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C7A4u;
    {
        const bool branch_taken_0x27c7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7A4u;
        // 0x27c7a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7a4) {
            ctx->pc = 0x27C7BCu;
            goto label_27c7bc;
        }
    }
    ctx->pc = 0x27C7ACu;
    // 0x27c7ac: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27C7ACu;
    {
        const bool branch_taken_0x27c7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c7ac) {
            ctx->pc = 0x27C854u;
            goto label_27c854;
        }
    }
    ctx->pc = 0x27C7B4u;
    // 0x27c7b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27C7B4u;
    {
        const bool branch_taken_0x27c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7B4u;
        // 0x27c7b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7b4) {
            ctx->pc = 0x27C878u;
            goto label_27c878;
        }
    }
    ctx->pc = 0x27C7BCu;
label_27c7bc:
    // 0x27c7bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c7c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c7c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c7c8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27c7cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c7ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c7d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c7d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27c7d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7dc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27C7DCu;
    SET_GPR_U32(ctx, 31, 0x27C7E4u);
    ctx->pc = 0x27C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7DCu;
    // 0x27c7e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27C7DCu, 0x27C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7E4u;
label_27c7e4:
    // 0x27c7e4: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x27c7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27c7e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27C7E8u;
    {
        const bool branch_taken_0x27c7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7E8u;
        // 0x27c7ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7e8) {
            ctx->pc = 0x27C820u;
            goto label_27c820;
        }
    }
    ctx->pc = 0x27C7F0u;
    // 0x27c7f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c7fc: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x27c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x27c800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c804: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x27c804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x27c808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c80c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c810: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C810u;
    SET_GPR_U32(ctx, 31, 0x27C818u);
    ctx->pc = 0x27C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C810u;
    // 0x27c814: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C810u, 0x27C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C818u;
label_27c818:
    // 0x27c818: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C818u;
    {
        const bool branch_taken_0x27c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C818u;
        // 0x27c81c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c818) {
            ctx->pc = 0x27C84Cu;
            goto label_27c84c;
        }
    }
    ctx->pc = 0x27C820u;
label_27c820:
    // 0x27c820: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c82c: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x27c82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x27c830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c834: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x27c834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27c838: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c83c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c840: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C840u;
    SET_GPR_U32(ctx, 31, 0x27C848u);
    ctx->pc = 0x27C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C840u;
    // 0x27c844: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C840u, 0x27C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C848u;
label_27c848:
    // 0x27c848: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27c848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27c84c:
    // 0x27c84c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c850: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27c850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27c854:
    // 0x27c854: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C854u;
    SET_GPR_U32(ctx, 31, 0x27C85Cu);
    ctx->pc = 0x27C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C854u;
    // 0x27c858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C854u, 0x27C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C85Cu;
label_27c85c:
    // 0x27c85c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C85Cu;
    {
        const bool branch_taken_0x27c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c85c) {
            ctx->pc = 0x27C860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C85Cu;
            // 0x27c860: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C878u;
            goto label_27c878;
        }
    }
    ctx->pc = 0x27C864u;
    // 0x27c864: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27c864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c868: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27c868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c86c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27c86cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c870: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27c870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27c874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c878:
    // 0x27c878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C87Cu;
        // 0x27c880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C884u;
    // 0x27c884: 0x0  nop
    ctx->pc = 0x27c884u;
    // NOP
    ctx->pc = 0x27c888u;
}
