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

// Function: func_0032E620
// Address: 0x32e620 - 0x32e720
void func_0032E620_0x32e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E620_0x32e620");
#endif

    switch (ctx->pc) {
        case 0x32e620u: goto label_32e620;
        case 0x32e624u: goto label_32e624;
        case 0x32e628u: goto label_32e628;
        case 0x32e62cu: goto label_32e62c;
        case 0x32e630u: goto label_32e630;
        case 0x32e634u: goto label_32e634;
        case 0x32e638u: goto label_32e638;
        case 0x32e63cu: goto label_32e63c;
        case 0x32e640u: goto label_32e640;
        case 0x32e644u: goto label_32e644;
        case 0x32e648u: goto label_32e648;
        case 0x32e64cu: goto label_32e64c;
        case 0x32e650u: goto label_32e650;
        case 0x32e654u: goto label_32e654;
        case 0x32e658u: goto label_32e658;
        case 0x32e65cu: goto label_32e65c;
        case 0x32e660u: goto label_32e660;
        case 0x32e664u: goto label_32e664;
        case 0x32e668u: goto label_32e668;
        case 0x32e66cu: goto label_32e66c;
        case 0x32e670u: goto label_32e670;
        case 0x32e674u: goto label_32e674;
        case 0x32e678u: goto label_32e678;
        case 0x32e67cu: goto label_32e67c;
        case 0x32e680u: goto label_32e680;
        case 0x32e684u: goto label_32e684;
        case 0x32e688u: goto label_32e688;
        case 0x32e68cu: goto label_32e68c;
        case 0x32e690u: goto label_32e690;
        case 0x32e694u: goto label_32e694;
        case 0x32e698u: goto label_32e698;
        case 0x32e69cu: goto label_32e69c;
        case 0x32e6a0u: goto label_32e6a0;
        case 0x32e6a4u: goto label_32e6a4;
        case 0x32e6a8u: goto label_32e6a8;
        case 0x32e6acu: goto label_32e6ac;
        case 0x32e6b0u: goto label_32e6b0;
        case 0x32e6b4u: goto label_32e6b4;
        case 0x32e6b8u: goto label_32e6b8;
        case 0x32e6bcu: goto label_32e6bc;
        case 0x32e6c0u: goto label_32e6c0;
        case 0x32e6c4u: goto label_32e6c4;
        case 0x32e6c8u: goto label_32e6c8;
        case 0x32e6ccu: goto label_32e6cc;
        case 0x32e6d0u: goto label_32e6d0;
        case 0x32e6d4u: goto label_32e6d4;
        case 0x32e6d8u: goto label_32e6d8;
        case 0x32e6dcu: goto label_32e6dc;
        case 0x32e6e0u: goto label_32e6e0;
        case 0x32e6e4u: goto label_32e6e4;
        case 0x32e6e8u: goto label_32e6e8;
        case 0x32e6ecu: goto label_32e6ec;
        case 0x32e6f0u: goto label_32e6f0;
        case 0x32e6f4u: goto label_32e6f4;
        case 0x32e6f8u: goto label_32e6f8;
        case 0x32e6fcu: goto label_32e6fc;
        case 0x32e700u: goto label_32e700;
        case 0x32e704u: goto label_32e704;
        case 0x32e708u: goto label_32e708;
        case 0x32e70cu: goto label_32e70c;
        case 0x32e710u: goto label_32e710;
        case 0x32e714u: goto label_32e714;
        case 0x32e718u: goto label_32e718;
        case 0x32e71cu: goto label_32e71c;
        default: break;
    }

    ctx->pc = 0x32e620u;

label_32e620:
    // 0x32e620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32e624:
    // 0x32e624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32e628:
    // 0x32e628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32e62c:
    // 0x32e62c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32e630:
    // 0x32e630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32e630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e634:
    // 0x32e634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32e638:
    // 0x32e638: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_32e63c:
    // 0x32e63c: 0xc0c9fea  jal         func_327FA8
label_32e640:
    if (ctx->pc == 0x32E640u) {
        ctx->pc = 0x32E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E63Cu;
        // 0x32e640: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E644u;
        goto label_32e644;
    }
    ctx->pc = 0x32E63Cu;
    SET_GPR_U32(ctx, 31, 0x32E644u);
    ctx->pc = 0x32E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E63Cu;
    // 0x32e640: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FA8u, 0x32E63Cu, 0x32E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E644u;
label_32e644:
    // 0x32e644: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x32e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_32e648:
    // 0x32e648: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e64c:
    // 0x32e64c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32e650:
    // 0x32e650: 0x40f809  jalr        $v0
label_32e654:
    if (ctx->pc == 0x32E654u) {
        ctx->pc = 0x32E658u;
        goto label_32e658;
    }
    ctx->pc = 0x32E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32E658u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E650u, 0x32E658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32E658u;
label_32e658:
    // 0x32e658: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x32e658u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_32e65c:
    // 0x32e65c: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
label_32e660:
    if (ctx->pc == 0x32E660u) {
        ctx->pc = 0x32E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E65Cu;
        // 0x32e660: 0x8e0701d8  lw          $a3, 0x1D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E664u;
        goto label_32e664;
    }
    ctx->pc = 0x32E65Cu;
    {
        const bool branch_taken_0x32e65c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x32e65c) {
            ctx->pc = 0x32E660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E65Cu;
            // 0x32e660: 0x8e0701d8  lw          $a3, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E698u;
            goto label_32e698;
        }
    }
    ctx->pc = 0x32E664u;
label_32e664:
    // 0x32e664: 0x26110094  addiu       $s1, $s0, 0x94
    ctx->pc = 0x32e664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_32e668:
    // 0x32e668: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e66c:
    // 0x32e66c: 0x0  nop
    ctx->pc = 0x32e66cu;
    // NOP
label_32e670:
    // 0x32e670: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32e670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_32e674:
    // 0x32e674: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e678:
    // 0x32e678: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x32e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_32e67c:
    // 0x32e67c: 0x60f809  jalr        $v1
label_32e680:
    if (ctx->pc == 0x32E680u) {
        ctx->pc = 0x32E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E67Cu;
        // 0x32e680: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E684u;
        goto label_32e684;
    }
    ctx->pc = 0x32E67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32E684u);
        ctx->pc = 0x32E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E67Cu;
        // 0x32e680: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E67Cu, 0x32E684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32E684u;
label_32e684:
    // 0x32e684: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x32e684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_32e688:
    // 0x32e688: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32e688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32e68c:
    // 0x32e68c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_32e690:
    if (ctx->pc == 0x32E690u) {
        ctx->pc = 0x32E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E68Cu;
        // 0x32e690: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E694u;
        goto label_32e694;
    }
    ctx->pc = 0x32E68Cu;
    {
        const bool branch_taken_0x32e68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e68c) {
            ctx->pc = 0x32E690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E68Cu;
            // 0x32e690: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e670;
        }
    }
    ctx->pc = 0x32E694u;
label_32e694:
    // 0x32e694: 0x8e0701d8  lw          $a3, 0x1D8($s0)
    ctx->pc = 0x32e694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_32e698:
    // 0x32e698: 0x8e0801dc  lw          $t0, 0x1DC($s0)
    ctx->pc = 0x32e698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
label_32e69c:
    // 0x32e69c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e6a0:
    // 0x32e6a0: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x32e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_32e6a4:
    // 0x32e6a4: 0xc0c9f86  jal         func_327E18
label_32e6a8:
    if (ctx->pc == 0x32E6A8u) {
        ctx->pc = 0x32E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6A4u;
        // 0x32e6a8: 0x8e0601d4  lw          $a2, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6ACu;
        goto label_32e6ac;
    }
    ctx->pc = 0x32E6A4u;
    SET_GPR_U32(ctx, 31, 0x32E6ACu);
    ctx->pc = 0x32E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6A4u;
    // 0x32e6a8: 0x8e0601d4  lw          $a2, 0x1D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327E18u, 0x32E6A4u, 0x32E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6ACu;
label_32e6ac:
    // 0x32e6ac: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x32e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_32e6b0:
    // 0x32e6b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e6b4:
    // 0x32e6b4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_32e6b8:
    // 0x32e6b8: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x32e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_32e6bc:
    // 0x32e6bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x32e6bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_32e6c0:
    // 0x32e6c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_32e6c4:
    // 0x32e6c4: 0xc0ca320  jal         func_328C80
label_32e6c8:
    if (ctx->pc == 0x32E6C8u) {
        ctx->pc = 0x32E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6C4u;
        // 0x32e6c8: 0x52843  sra         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6CCu;
        goto label_32e6cc;
    }
    ctx->pc = 0x32E6C4u;
    SET_GPR_U32(ctx, 31, 0x32E6CCu);
    ctx->pc = 0x32E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6C4u;
    // 0x32e6c8: 0x52843  sra         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x32E6C4u, 0x32E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6CCu;
label_32e6cc:
    // 0x32e6cc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e6d0:
    // 0x32e6d0: 0xc0ca036  jal         func_3280D8
label_32e6d4:
    if (ctx->pc == 0x32E6D4u) {
        ctx->pc = 0x32E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6D0u;
        // 0x32e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6D8u;
        goto label_32e6d8;
    }
    ctx->pc = 0x32E6D0u;
    SET_GPR_U32(ctx, 31, 0x32E6D8u);
    ctx->pc = 0x32E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6D0u;
    // 0x32e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x32E6D0u, 0x32E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6D8u;
label_32e6d8:
    // 0x32e6d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32e6dc:
    // 0x32e6dc: 0xc0ca112  jal         func_328448
label_32e6e0:
    if (ctx->pc == 0x32E6E0u) {
        ctx->pc = 0x32E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6DCu;
        // 0x32e6e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6E4u;
        goto label_32e6e4;
    }
    ctx->pc = 0x32E6DCu;
    SET_GPR_U32(ctx, 31, 0x32E6E4u);
    ctx->pc = 0x32E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6DCu;
    // 0x32e6e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32E6DCu, 0x32E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6E4u;
label_32e6e4:
    // 0x32e6e4: 0xc0ca072  jal         func_3281C8
label_32e6e8:
    if (ctx->pc == 0x32E6E8u) {
        ctx->pc = 0x32E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6E4u;
        // 0x32e6e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6ECu;
        goto label_32e6ec;
    }
    ctx->pc = 0x32E6E4u;
    SET_GPR_U32(ctx, 31, 0x32E6ECu);
    ctx->pc = 0x32E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6E4u;
    // 0x32e6e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x32E6E4u, 0x32E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6ECu;
label_32e6ec:
    // 0x32e6ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32e6f0:
    // 0x32e6f0: 0xc0cbd2e  jal         func_32F4B8
label_32e6f4:
    if (ctx->pc == 0x32E6F4u) {
        ctx->pc = 0x32E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6F0u;
        // 0x32e6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6F8u;
        goto label_32e6f8;
    }
    ctx->pc = 0x32E6F0u;
    SET_GPR_U32(ctx, 31, 0x32E6F8u);
    ctx->pc = 0x32E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6F0u;
    // 0x32e6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4B8u, 0x32E6F0u, 0x32E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6F8u;
label_32e6f8:
    // 0x32e6f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32e6fc:
    // 0x32e6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32e700:
    // 0x32e700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32e704:
    // 0x32e704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32e704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32e708:
    // 0x32e708: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32e70c:
    // 0x32e70c: 0x80cbd1c  j           func_32F470
label_32e710:
    if (ctx->pc == 0x32E710u) {
        ctx->pc = 0x32E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E70Cu;
        // 0x32e710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E714u;
        goto label_32e714;
    }
    ctx->pc = 0x32E70Cu;
    ctx->pc = 0x32E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E70Cu;
    // 0x32e710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F470u, 0x32E70Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E714u;
label_32e714:
    // 0x32e714: 0x0  nop
    ctx->pc = 0x32e714u;
    // NOP
label_32e718:
    // 0x32e718: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32e71c:
    // 0x32e71c: 0x0  nop
    ctx->pc = 0x32e71cu;
    // NOP
    ctx->pc = 0x32e720u;
}
