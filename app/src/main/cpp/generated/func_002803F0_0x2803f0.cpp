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

// Function: func_002803F0
// Address: 0x2803f0 - 0x2804f8
void func_002803F0_0x2803f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002803F0_0x2803f0");
#endif

    switch (ctx->pc) {
        case 0x280454u: goto label_280454;
        case 0x280484u: goto label_280484;
        case 0x280494u: goto label_280494;
        case 0x2804bcu: goto label_2804bc;
        case 0x2804d0u: goto label_2804d0;
        default: break;
    }

    ctx->pc = 0x2803f0u;

    // 0x2803f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2803f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2803f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2803f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2803f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2803f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2803fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2803fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280404: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280408: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x280408u;
    {
        const bool branch_taken_0x280408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280408u;
        // 0x28040c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280408) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x280410u;
    // 0x280410: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x280410u;
    {
        const bool branch_taken_0x280410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280410u;
        // 0x280414: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280410) {
            ctx->pc = 0x2804C8u;
            goto label_2804c8;
        }
    }
    ctx->pc = 0x280418u;
    // 0x280418: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x280418u;
    {
        const bool branch_taken_0x280418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280418u;
        // 0x28041c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280418) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x280420u;
label_280420:
    // 0x280420: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x280420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x280424: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280424u;
    {
        const bool branch_taken_0x280424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280424u;
        // 0x280428: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280424) {
            ctx->pc = 0x28045Cu;
            goto label_28045c;
        }
    }
    ctx->pc = 0x28042Cu;
    // 0x28042c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280438: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x280438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x28043c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28043cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280440: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x280440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x280444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280448: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28044c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28044Cu;
    SET_GPR_U32(ctx, 31, 0x280454u);
    ctx->pc = 0x280450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28044Cu;
    // 0x280450: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28044Cu, 0x280454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280454u;
label_280454:
    // 0x280454: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x280454u;
    {
        const bool branch_taken_0x280454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280454u;
        // 0x280458: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280454) {
            ctx->pc = 0x280488u;
            goto label_280488;
        }
    }
    ctx->pc = 0x28045Cu;
label_28045c:
    // 0x28045c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280468: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x28046c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28046cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280470: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x280470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x280474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280478: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28047c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28047Cu;
    SET_GPR_U32(ctx, 31, 0x280484u);
    ctx->pc = 0x280480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28047Cu;
    // 0x280480: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28047Cu, 0x280484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280484u;
label_280484:
    // 0x280484: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x280484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_280488:
    // 0x280488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28048c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x28048Cu;
    SET_GPR_U32(ctx, 31, 0x280494u);
    ctx->pc = 0x280490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28048Cu;
    // 0x280490: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x28048Cu, 0x280494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280494u;
label_280494:
    // 0x280494: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x280498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28049c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x28049cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2804a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2804a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2804a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2804a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2804a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2804acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2804b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2804B4u;
    SET_GPR_U32(ctx, 31, 0x2804BCu);
    ctx->pc = 0x2804B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804B4u;
    // 0x2804b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2804B4u, 0x2804BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804BCu;
label_2804bc:
    // 0x2804bc: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2804bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2804c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2804c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2804c4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2804c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_2804c8:
    // 0x2804c8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2804C8u;
    SET_GPR_U32(ctx, 31, 0x2804D0u);
    ctx->pc = 0x2804CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804C8u;
    // 0x2804cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2804C8u, 0x2804D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804D0u;
label_2804d0:
    // 0x2804d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2804D0u;
    {
        const bool branch_taken_0x2804d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804D0u;
        // 0x2804d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804d0) {
            ctx->pc = 0x2804E8u;
            goto label_2804e8;
        }
    }
    ctx->pc = 0x2804D8u;
    // 0x2804d8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2804d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2804dc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2804dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2804e0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x2804e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2804e4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2804e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2804e8:
    // 0x2804e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2804e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2804ec:
    // 0x2804ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2804ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2804f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2804F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2804F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804F0u;
        // 0x2804f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2804F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2804F8u;
}
