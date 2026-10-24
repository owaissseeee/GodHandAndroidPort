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

// Function: func_0014C5A0
// Address: 0x14c5a0 - 0x14c6b8
void func_0014C5A0_0x14c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014C5A0_0x14c5a0");
#endif

    switch (ctx->pc) {
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c61cu: goto label_14c61c;
        case 0x14c634u: goto label_14c634;
        case 0x14c654u: goto label_14c654;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c688u: goto label_14c688;
        case 0x14c69cu: goto label_14c69c;
        default: break;
    }

    ctx->pc = 0x14c5a0u;

    // 0x14c5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c5a4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14c5a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14c5ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14c5b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14c5b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14c5b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5bc: 0x8c5076b0  lw          $s0, 0x76B0($v0)
    ctx->pc = 0x14c5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30384)));
    // 0x14c5c0: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14c5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c5cc: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14C5CCu;
    SET_GPR_U32(ctx, 31, 0x14C5D4u);
    ctx->pc = 0x14C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5CCu;
    // 0x14c5d0: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14C5CCu, 0x14C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5D4u;
label_14c5d4:
    // 0x14c5d4: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x14c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x14c5d8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14c5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14c5dc: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x14c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x14c5e0: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x14c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x14c5e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c5e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14c5ec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14c5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c5f0: 0x14a30020  bne         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14C5F0u;
    {
        const bool branch_taken_0x14c5f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F0u;
        // 0x14c5f4: 0x24e80070  addiu       $t0, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5f0) {
            ctx->pc = 0x14C674u;
            goto label_14c674;
        }
    }
    ctx->pc = 0x14C5F8u;
    // 0x14c5f8: 0x30824080  andi        $v0, $a0, 0x4080
    ctx->pc = 0x14c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16512);
    // 0x14c5fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14C5FCu;
    {
        const bool branch_taken_0x14c5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c5fc) {
            ctx->pc = 0x14C63Cu;
            goto label_14c63c;
        }
    }
    ctx->pc = 0x14C604u;
    // 0x14c604: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C604u;
    {
        const bool branch_taken_0x14c604 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C604u;
        // 0x14c608: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c604) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C60Cu;
    // 0x14c60c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c610: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c614: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14C614u;
    SET_GPR_U32(ctx, 31, 0x14C61Cu);
    ctx->pc = 0x14C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C614u;
    // 0x14c618: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14C614u, 0x14C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C61Cu;
label_14c61c:
    // 0x14c61c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14C61Cu;
    {
        const bool branch_taken_0x14c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C61Cu;
        // 0x14c620: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c61c) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C624u;
label_14c624:
    // 0x14c624: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c628: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c62c: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14C62Cu;
    SET_GPR_U32(ctx, 31, 0x14C634u);
    ctx->pc = 0x14C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C62Cu;
    // 0x14c630: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14C62Cu, 0x14C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C634u;
label_14c634:
    // 0x14c634: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14C634u;
    {
        const bool branch_taken_0x14c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C634u;
        // 0x14c638: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c634) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C63Cu;
label_14c63c:
    // 0x14c63c: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C63Cu;
    {
        const bool branch_taken_0x14c63c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C63Cu;
        // 0x14c640: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c63c) {
            ctx->pc = 0x14C65Cu;
            goto label_14c65c;
        }
    }
    ctx->pc = 0x14C644u;
    // 0x14c644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c648: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c64c: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14C64Cu;
    SET_GPR_U32(ctx, 31, 0x14C654u);
    ctx->pc = 0x14C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C64Cu;
    // 0x14c650: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14C64Cu, 0x14C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C654u;
label_14c654:
    // 0x14c654: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14C654u;
    {
        const bool branch_taken_0x14c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C654u;
        // 0x14c658: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c654) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C65Cu;
label_14c65c:
    // 0x14c65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c660: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c664: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14C664u;
    SET_GPR_U32(ctx, 31, 0x14C66Cu);
    ctx->pc = 0x14C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C664u;
    // 0x14c668: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14C664u, 0x14C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C66Cu;
label_14c66c:
    // 0x14c66c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14C66Cu;
    {
        const bool branch_taken_0x14c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C66Cu;
        // 0x14c670: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c66c) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C674u;
label_14c674:
    // 0x14c674: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C674u;
    {
        const bool branch_taken_0x14c674 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C674u;
        // 0x14c678: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c674) {
            ctx->pc = 0x14C690u;
            goto label_14c690;
        }
    }
    ctx->pc = 0x14C67Cu;
    // 0x14c67c: 0x862602ac  lh          $a2, 0x2AC($s1)
    ctx->pc = 0x14c67cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x14c680: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14C680u;
    SET_GPR_U32(ctx, 31, 0x14C688u);
    ctx->pc = 0x14C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C680u;
    // 0x14c684: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14C680u, 0x14C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C688u;
label_14c688:
    // 0x14c688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C688u;
    {
        const bool branch_taken_0x14c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C688u;
        // 0x14c68c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c688) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C690u;
label_14c690:
    // 0x14c690: 0x862602ac  lh          $a2, 0x2AC($s1)
    ctx->pc = 0x14c690u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x14c694: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14C694u;
    SET_GPR_U32(ctx, 31, 0x14C69Cu);
    ctx->pc = 0x14C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C694u;
    // 0x14c698: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14C694u, 0x14C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C69Cu;
label_14c69c:
    // 0x14c69c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14c69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c6a0:
    // 0x14c6a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c6a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14c6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c6a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6ACu;
        // 0x14c6b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C6B4u;
    // 0x14c6b4: 0x0  nop
    ctx->pc = 0x14c6b4u;
    // NOP
    ctx->pc = 0x14c6b8u;
}
