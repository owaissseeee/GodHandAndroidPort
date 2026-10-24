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

// Function: dpdiv
// Address: 0x31e5f0 - 0x31e758
void dpdiv_0x31e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x31e5f0");
#endif

    switch (ctx->pc) {
        case 0x31e610u: goto label_31e610;
        case 0x31e620u: goto label_31e620;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e748u: goto label_31e748;
        default: break;
    }

    ctx->pc = 0x31e5f0u;

    // 0x31e5f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31e5f4: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x31e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x31e5f8: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x31e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x31e5fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31e600: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x31e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x31e604: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31e608: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E608u;
    SET_GPR_U32(ctx, 31, 0x31E610u);
    ctx->pc = 0x31E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E608u;
    // 0x31e60c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E608u, 0x31E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E610u;
label_31e610:
    // 0x31e610: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31e610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e614: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x31e614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x31e618: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E618u;
    SET_GPR_U32(ctx, 31, 0x31E620u);
    ctx->pc = 0x31E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E618u;
    // 0x31e61c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E618u, 0x31E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E620u;
label_31e620:
    // 0x31e620: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x31e620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e624: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x31e624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e628: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E628u;
    {
        const bool branch_taken_0x31e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E628u;
        // 0x31e62c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e628) {
            ctx->pc = 0x31E638u;
            goto label_31e638;
        }
    }
    ctx->pc = 0x31E630u;
    // 0x31e630: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x31E630u;
    {
        const bool branch_taken_0x31e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E630u;
        // 0x31e634: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e630) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E638u;
label_31e638:
    // 0x31e638: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x31e638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e63c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x31e63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e640: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x31E640u;
    {
        const bool branch_taken_0x31e640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E640u;
        // 0x31e644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e640) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E648u;
    // 0x31e648: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e64c: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x31e64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x31e650: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x31e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x31e654: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x31e654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x31e658: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E658u;
    {
        const bool branch_taken_0x31e658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E658u;
        // 0x31e65c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e658) {
            ctx->pc = 0x31E66Cu;
            goto label_31e66c;
        }
    }
    ctx->pc = 0x31E660u;
    // 0x31e660: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x31e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x31e664: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E664u;
    {
        const bool branch_taken_0x31e664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E664u;
        // 0x31e668: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e664) {
            ctx->pc = 0x31E680u;
            goto label_31e680;
        }
    }
    ctx->pc = 0x31E66Cu;
label_31e66c:
    // 0x31e66c: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x31E66Cu;
    {
        const bool branch_taken_0x31e66c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x31E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E66Cu;
        // 0x31e670: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e66c) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E674u;
    // 0x31e674: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31e674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31e678: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31E678u;
    {
        const bool branch_taken_0x31e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E678u;
        // 0x31e67c: 0x24445bd0  addiu       $a0, $v0, 0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e678) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E680u;
label_31e680:
    // 0x31e680: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E680u;
    {
        const bool branch_taken_0x31e680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E680u;
        // 0x31e684: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e680) {
            ctx->pc = 0x31E698u;
            goto label_31e698;
        }
    }
    ctx->pc = 0x31E688u;
    // 0x31e688: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x31e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x31e68c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e690: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x31E690u;
    {
        const bool branch_taken_0x31e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E690u;
        // 0x31e694: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e690) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E698u;
label_31e698:
    // 0x31e698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E698u;
    {
        const bool branch_taken_0x31e698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E698u;
        // 0x31e69c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e698) {
            ctx->pc = 0x31E6B0u;
            goto label_31e6b0;
        }
    }
    ctx->pc = 0x31E6A0u;
    // 0x31e6a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31e6a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e6a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x31E6A8u;
    {
        const bool branch_taken_0x31e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6A8u;
        // 0x31e6ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6a8) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E6B0u;
label_31e6b0:
    // 0x31e6b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e6b4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x31e6b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e6b8: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x31e6b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e6bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31e6c0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x31e6c0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x31e6c4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E6C4u;
    {
        const bool branch_taken_0x31e6c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6C4u;
        // 0x31e6c8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6c4) {
            ctx->pc = 0x31E6DCu;
            goto label_31e6dc;
        }
    }
    ctx->pc = 0x31E6CCu;
    // 0x31e6cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31e6d0: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x31e6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x31e6d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x31e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x31e6d8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x31e6d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_31e6dc:
    // 0x31e6dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x31e6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31e6e0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x31e6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x31e6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31E6E4u;
    {
        const bool branch_taken_0x31e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6E4u;
        // 0x31e6e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6e4) {
            ctx->pc = 0x31E6F4u;
            goto label_31e6f4;
        }
    }
    ctx->pc = 0x31E6ECu;
    // 0x31e6ec: 0x0  nop
    ctx->pc = 0x31e6ecu;
    // NOP
label_31e6f0:
    // 0x31e6f0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x31e6f0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_31e6f4:
    // 0x31e6f4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E6F4u;
    {
        const bool branch_taken_0x31e6f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6f4) {
            ctx->pc = 0x31E6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E6F4u;
            // 0x31e6f8: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E708u;
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E6FCu;
    // 0x31e6fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x31e6fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x31e700: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x31e700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x31e704: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x31e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_31e708:
    // 0x31e708: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31E708u;
    {
        const bool branch_taken_0x31e708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E708u;
        // 0x31e70c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e708) {
            ctx->pc = 0x31E6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e6f0;
        }
    }
    ctx->pc = 0x31E710u;
    // 0x31e710: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x31e710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x31e714: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x31e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31e718: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E718u;
    {
        const bool branch_taken_0x31e718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e718) {
            ctx->pc = 0x31E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E718u;
            // 0x31e71c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E73Cu;
            goto label_31e73c;
        }
    }
    ctx->pc = 0x31E720u;
    // 0x31e720: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x31e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x31e724: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E724u;
    {
        const bool branch_taken_0x31e724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E724u;
        // 0x31e728: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e724) {
            ctx->pc = 0x31E734u;
            goto label_31e734;
        }
    }
    ctx->pc = 0x31E72Cu;
    // 0x31e72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E72Cu;
    {
        const bool branch_taken_0x31e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E72Cu;
        // 0x31e730: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e72c) {
            ctx->pc = 0x31E738u;
            goto label_31e738;
        }
    }
    ctx->pc = 0x31E734u;
label_31e734:
    // 0x31e734: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x31e734u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_31e738:
    // 0x31e738: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x31e738u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_31e73c:
    // 0x31e73c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31e73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e740:
    // 0x31e740: 0xc0c779e  jal         func_31DE78
    ctx->pc = 0x31E740u;
    SET_GPR_U32(ctx, 31, 0x31E748u);
    ctx->pc = 0x31DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE78u, 0x31E740u, 0x31E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E748u;
label_31e748:
    // 0x31e748: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31e748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e74c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x31e74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e750: 0x3e00008  jr          $ra
    ctx->pc = 0x31E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E750u;
        // 0x31e754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E758u;
}
