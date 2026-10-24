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

// Function: func_003127B0
// Address: 0x3127b0 - 0x3128b0
void func_003127B0_0x3127b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003127B0_0x3127b0");
#endif

    switch (ctx->pc) {
        case 0x3127e8u: goto label_3127e8;
        case 0x312854u: goto label_312854;
        case 0x312868u: goto label_312868;
        case 0x31287cu: goto label_31287c;
        default: break;
    }

    ctx->pc = 0x3127b0u;

    // 0x3127b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3127b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3127b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3127b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3127b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3127b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3127bc: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x3127bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x3127c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3127c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3127c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3127c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3127c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127cc: 0x8e663cf0  lw          $a2, 0x3CF0($s3)
    ctx->pc = 0x3127ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x3127d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3127d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3127d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3127d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3127d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3127d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3127dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3127dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3127e0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3127E0u;
    SET_GPR_U32(ctx, 31, 0x3127E8u);
    ctx->pc = 0x3127E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127E0u;
    // 0x3127e4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3127E0u, 0x3127E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127E8u;
label_3127e8:
    // 0x3127e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3127e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127ec: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3127ECu;
    {
        const bool branch_taken_0x3127ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3127ec) {
            ctx->pc = 0x3127F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127ECu;
            // 0x3127f0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312818u;
            goto label_312818;
        }
    }
    ctx->pc = 0x3127F4u;
    // 0x3127f4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3127f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3127f8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x3127f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3127fc: 0xa2140000  sb          $s4, 0x0($s0)
    ctx->pc = 0x3127fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x312800: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x312800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312804: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x312804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x312808: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x312808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31280c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x312810: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x312810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x312814: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x312814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_312818:
    // 0x312818: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x312818u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31281c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x31281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x312820: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x312824: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x312824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x312828: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x312828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31282c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31282Cu;
    {
        const bool branch_taken_0x31282c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31282Cu;
        // 0x312830: 0x11a080  sll         $s4, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31282c) {
            ctx->pc = 0x312890u;
            goto label_312890;
        }
    }
    ctx->pc = 0x312834u;
    // 0x312834: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x312834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x312838: 0x8e663cf0  lw          $a2, 0x3CF0($s3)
    ctx->pc = 0x312838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15600)));
    // 0x31283c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312840: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x312840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x312844: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x312844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x312848: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x312848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x31284c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31284Cu;
    SET_GPR_U32(ctx, 31, 0x312854u);
    ctx->pc = 0x312850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31284Cu;
    // 0x312850: 0x29880  sll         $s3, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31284Cu, 0x312854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312854u;
label_312854:
    // 0x312854: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x312854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312858: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31285c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312860: 0xc0e947d  jal         func_3A51F4
    ctx->pc = 0x312860u;
    SET_GPR_U32(ctx, 31, 0x312868u);
    ctx->pc = 0x312864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312860u;
    // 0x312864: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x312860u, 0x312868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312868u;
label_312868:
    // 0x312868: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x312868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31286c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31286Cu;
    {
        const bool branch_taken_0x31286c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x312870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31286Cu;
        // 0x312870: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31286c) {
            ctx->pc = 0x312880u;
            goto label_312880;
        }
    }
    ctx->pc = 0x312874u;
    // 0x312874: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x312874u;
    SET_GPR_U32(ctx, 31, 0x31287Cu);
    ctx->pc = 0x312878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312874u;
    // 0x312878: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x312874u, 0x31287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31287Cu;
label_31287c:
    // 0x31287c: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x31287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_312880:
    // 0x312880: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x312880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x312884: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x312884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x312888: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x312888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x31288c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x31288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_312890:
    // 0x312890: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x312890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312894: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x312894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x312898: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x312898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31289c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3128a0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3128a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3128a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3128a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3128a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3128A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128A8u;
        // 0x3128ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3128A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3128B0u;
}
