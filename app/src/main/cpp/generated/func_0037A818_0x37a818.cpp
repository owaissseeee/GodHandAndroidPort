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

// Function: func_0037A818
// Address: 0x37a818 - 0x37a8f8
void func_0037A818_0x37a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A818_0x37a818");
#endif

    switch (ctx->pc) {
        case 0x37a848u: goto label_37a848;
        case 0x37a874u: goto label_37a874;
        case 0x37a8b8u: goto label_37a8b8;
        case 0x37a8ccu: goto label_37a8cc;
        case 0x37a8dcu: goto label_37a8dc;
        default: break;
    }

    ctx->pc = 0x37a818u;

    // 0x37a818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37a818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37a81c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37a820: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37a824: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37a824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a828: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37a82c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a830: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x37a830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37a834: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A834u;
    {
        const bool branch_taken_0x37a834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A834u;
        // 0x37a838: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a834) {
            ctx->pc = 0x37A854u;
            goto label_37a854;
        }
    }
    ctx->pc = 0x37A83Cu;
    // 0x37a83c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37a840: 0xc0dea3e  jal         func_37A8F8
    ctx->pc = 0x37A840u;
    SET_GPR_U32(ctx, 31, 0x37A848u);
    ctx->pc = 0x37A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A840u;
    // 0x37a844: 0x80460000  lb          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A8F8u, 0x37A840u, 0x37A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A848u;
label_37a848:
    // 0x37a848: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37a84c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x37a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a850: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x37a850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_37a854:
    // 0x37a854: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x37a854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a858: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x37A858u;
    {
        const bool branch_taken_0x37a858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x37a858) {
            ctx->pc = 0x37A85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A858u;
            // 0x37a85c: 0x82230007  lb          $v1, 0x7($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A880u;
            goto label_37a880;
        }
    }
    ctx->pc = 0x37A860u;
    // 0x37a860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37a864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37a868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a86c: 0xc0dea3e  jal         func_37A8F8
    ctx->pc = 0x37A86Cu;
    SET_GPR_U32(ctx, 31, 0x37A874u);
    ctx->pc = 0x37A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A86Cu;
    // 0x37a870: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A8F8u, 0x37A86Cu, 0x37A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A874u;
label_37a874:
    // 0x37a874: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37a878: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x37a878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37a87c: 0x82230007  lb          $v1, 0x7($s1)
    ctx->pc = 0x37a87cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_37a880:
    // 0x37a880: 0x1072000f  beq         $v1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x37A880u;
    {
        const bool branch_taken_0x37a880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x37A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A880u;
        // 0x37a884: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a880) {
            ctx->pc = 0x37A8C0u;
            goto label_37a8c0;
        }
    }
    ctx->pc = 0x37A888u;
    // 0x37a888: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A888u;
    {
        const bool branch_taken_0x37a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a888) {
            ctx->pc = 0x37A88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A888u;
            // 0x37a88c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A8A0u;
            goto label_37a8a0;
        }
    }
    ctx->pc = 0x37A890u;
    // 0x37a890: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A890u;
    {
        const bool branch_taken_0x37a890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A890u;
        // 0x37a894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a890) {
            ctx->pc = 0x37A8B0u;
            goto label_37a8b0;
        }
    }
    ctx->pc = 0x37A898u;
    // 0x37a898: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37A898u;
    {
        const bool branch_taken_0x37a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A898u;
        // 0x37a89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a898) {
            ctx->pc = 0x37A8E0u;
            goto label_37a8e0;
        }
    }
    ctx->pc = 0x37A8A0u;
label_37a8a0:
    // 0x37a8a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37A8A0u;
    {
        const bool branch_taken_0x37a8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8A0u;
        // 0x37a8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8a0) {
            ctx->pc = 0x37A8D4u;
            goto label_37a8d4;
        }
    }
    ctx->pc = 0x37A8A8u;
    // 0x37a8a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37A8A8u;
    {
        const bool branch_taken_0x37a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8A8u;
        // 0x37a8ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8a8) {
            ctx->pc = 0x37A8E0u;
            goto label_37a8e0;
        }
    }
    ctx->pc = 0x37A8B0u;
label_37a8b0:
    // 0x37a8b0: 0xc0dea72  jal         func_37A9C8
    ctx->pc = 0x37A8B0u;
    SET_GPR_U32(ctx, 31, 0x37A8B8u);
    ctx->pc = 0x37A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8B0u;
    // 0x37a8b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A9C8u, 0x37A8B0u, 0x37A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8B8u;
label_37a8b8:
    // 0x37a8b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37A8B8u;
    {
        const bool branch_taken_0x37a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8B8u;
        // 0x37a8bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8b8) {
            ctx->pc = 0x37A8E0u;
            goto label_37a8e0;
        }
    }
    ctx->pc = 0x37A8C0u;
label_37a8c0:
    // 0x37a8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a8c4: 0xc0deaac  jal         func_37AAB0
    ctx->pc = 0x37A8C4u;
    SET_GPR_U32(ctx, 31, 0x37A8CCu);
    ctx->pc = 0x37A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8C4u;
    // 0x37a8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AAB0u, 0x37A8C4u, 0x37A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8CCu;
label_37a8cc:
    // 0x37a8cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37A8CCu;
    {
        const bool branch_taken_0x37a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8CCu;
        // 0x37a8d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8cc) {
            ctx->pc = 0x37A8E0u;
            goto label_37a8e0;
        }
    }
    ctx->pc = 0x37A8D4u;
label_37a8d4:
    // 0x37a8d4: 0xc0deac0  jal         func_37AB00
    ctx->pc = 0x37A8D4u;
    SET_GPR_U32(ctx, 31, 0x37A8DCu);
    ctx->pc = 0x37A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8D4u;
    // 0x37a8d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AB00u, 0x37A8D4u, 0x37A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8DCu;
label_37a8dc:
    // 0x37a8dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37a8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37a8e0:
    // 0x37a8e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37a8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a8e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37a8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x37A8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8ECu;
        // 0x37a8f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A8F4u;
    // 0x37a8f4: 0x0  nop
    ctx->pc = 0x37a8f4u;
    // NOP
    ctx->pc = 0x37a8f8u;
}
