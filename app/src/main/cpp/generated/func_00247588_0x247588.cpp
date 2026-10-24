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

// Function: func_00247588
// Address: 0x247588 - 0x247708
void func_00247588_0x247588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247588_0x247588");
#endif

    switch (ctx->pc) {
        case 0x2475a8u: goto label_2475a8;
        case 0x2475fcu: goto label_2475fc;
        case 0x247628u: goto label_247628;
        case 0x247630u: goto label_247630;
        case 0x247650u: goto label_247650;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476acu: goto label_2476ac;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476dcu: goto label_2476dc;
        case 0x2476e8u: goto label_2476e8;
        default: break;
    }

    ctx->pc = 0x247588u;

    // 0x247588: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24758c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x247590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x247590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247594: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x247598: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x247598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24759c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2475a0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2475A0u;
    SET_GPR_U32(ctx, 31, 0x2475A8u);
    ctx->pc = 0x2475A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475A0u;
    // 0x2475a4: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2475A0u, 0x2475A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475A8u;
label_2475a8:
    // 0x2475a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2475a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475ac: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x2475b0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2475b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2475b4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2475b8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2475b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2475bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2475bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2475c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2475c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2475c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2475c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2475cc: 0x922602f6  lbu         $a2, 0x2F6($s1)
    ctx->pc = 0x2475ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2475d0: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2475d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x2475d4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x2475d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x2475d8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2475D8u;
    {
        const bool branch_taken_0x2475d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2475DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475D8u;
        // 0x2475dc: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475d8) {
            ctx->pc = 0x2475F4u;
            goto label_2475f4;
        }
    }
    ctx->pc = 0x2475E0u;
    // 0x2475e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2475e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2475e4: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2475E4u;
    {
        const bool branch_taken_0x2475e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2475E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475E4u;
        // 0x2475e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475e4) {
            ctx->pc = 0x24763Cu;
            goto label_24763c;
        }
    }
    ctx->pc = 0x2475ECu;
    // 0x2475ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2475ECu;
    {
        const bool branch_taken_0x2475ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2475F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475ECu;
        // 0x2475f0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475ec) {
            ctx->pc = 0x2476F0u;
            goto label_2476f0;
        }
    }
    ctx->pc = 0x2475F4u;
label_2475f4:
    // 0x2475f4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2475F4u;
    SET_GPR_U32(ctx, 31, 0x2475FCu);
    ctx->pc = 0x2475F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475F4u;
    // 0x2475f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2475F4u, 0x2475FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475FCu;
label_2475fc:
    // 0x2475fc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2475fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247600: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247604: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x247604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x247608: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24760c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247614: 0x8c452fb4  lw          $a1, 0x2FB4($v0)
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12212)));
    // 0x247618: 0x8c462fb8  lw          $a2, 0x2FB8($v0)
    ctx->pc = 0x247618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12216)));
    // 0x24761c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x247620: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247620u;
    SET_GPR_U32(ctx, 31, 0x247628u);
    ctx->pc = 0x247624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247620u;
    // 0x247624: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247620u, 0x247628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247628u;
label_247628:
    // 0x247628: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x247628u;
    SET_GPR_U32(ctx, 31, 0x247630u);
    ctx->pc = 0x24762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247628u;
    // 0x24762c: 0x8e240708  lw          $a0, 0x708($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x247628u, 0x247630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247630u;
label_247630:
    // 0x247630: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x247630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x247634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247638: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x247638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24763c:
    // 0x24763c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x24763cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x247640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247644: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x247644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x247648: 0xc04e38e  jal         func_138E38
    ctx->pc = 0x247648u;
    SET_GPR_U32(ctx, 31, 0x247650u);
    ctx->pc = 0x24764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247648u;
    // 0x24764c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E38u, 0x247648u, 0x247650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247650u;
label_247650:
    // 0x247650: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x247650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x247654: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x247658: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x247658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x24765c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24765cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247660u;
    {
        const bool branch_taken_0x247660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247660u;
        // 0x247664: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247660) {
            ctx->pc = 0x247674u;
            goto label_247674;
        }
    }
    ctx->pc = 0x247668u;
    // 0x247668: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x247668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x24766c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24766Cu;
    {
        const bool branch_taken_0x24766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24766Cu;
        // 0x247670: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24766c) {
            ctx->pc = 0x247678u;
            goto label_247678;
        }
    }
    ctx->pc = 0x247674u;
label_247674:
    // 0x247674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247678:
    // 0x247678: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x247678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x24767c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x24767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x247680: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x247680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247684: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247684u;
    {
        const bool branch_taken_0x247684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247684u;
        // 0x247688: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247684) {
            ctx->pc = 0x247698u;
            goto label_247698;
        }
    }
    ctx->pc = 0x24768Cu;
    // 0x24768c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x24768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x247690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247690u;
    {
        const bool branch_taken_0x247690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247690u;
        // 0x247694: 0x8c470070  lw          $a3, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247690) {
            ctx->pc = 0x24769Cu;
            goto label_24769c;
        }
    }
    ctx->pc = 0x247698u;
label_247698:
    // 0x247698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24769c:
    // 0x24769c: 0xc04e6da  jal         func_139B68
    ctx->pc = 0x24769Cu;
    SET_GPR_U32(ctx, 31, 0x2476A4u);
    ctx->pc = 0x2476A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24769Cu;
    // 0x2476a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139B68u, 0x24769Cu, 0x2476A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476A4u;
label_2476a4:
    // 0x2476a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2476A4u;
    SET_GPR_U32(ctx, 31, 0x2476ACu);
    ctx->pc = 0x2476A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476A4u;
    // 0x2476a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2476A4u, 0x2476ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476ACu;
label_2476ac:
    // 0x2476ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2476ACu;
    {
        const bool branch_taken_0x2476ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476ACu;
        // 0x2476b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476ac) {
            ctx->pc = 0x2476C8u;
            goto label_2476c8;
        }
    }
    ctx->pc = 0x2476B4u;
    // 0x2476b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2476b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476b8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2476B8u;
    SET_GPR_U32(ctx, 31, 0x2476C0u);
    ctx->pc = 0x2476BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476B8u;
    // 0x2476bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2476B8u, 0x2476C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C0u;
label_2476c0:
    // 0x2476c0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2476C0u;
    SET_GPR_U32(ctx, 31, 0x2476C8u);
    ctx->pc = 0x2476C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476C0u;
    // 0x2476c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2476C0u, 0x2476C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C8u;
label_2476c8:
    // 0x2476c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2476c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2476cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2476ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2476d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2476d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476d4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2476D4u;
    SET_GPR_U32(ctx, 31, 0x2476DCu);
    ctx->pc = 0x2476D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476D4u;
    // 0x2476d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2476D4u, 0x2476DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476DCu;
label_2476dc:
    // 0x2476dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2476dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476e0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2476E0u;
    SET_GPR_U32(ctx, 31, 0x2476E8u);
    ctx->pc = 0x2476E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476E0u;
    // 0x2476e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2476E0u, 0x2476E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476E8u;
label_2476e8:
    // 0x2476e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2476e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2476ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2476ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2476f0:
    // 0x2476f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2476f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2476f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2476f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2476f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2476fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2476FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476FCu;
        // 0x247700: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2476FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247704u;
    // 0x247704: 0x0  nop
    ctx->pc = 0x247704u;
    // NOP
    ctx->pc = 0x247708u;
}
