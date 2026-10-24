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

// Function: cModel_queuePacket
// Address: 0x14c6b8 - 0x14c7e8
void cModel_queuePacket_0x14c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_queuePacket_0x14c6b8");
#endif

    switch (ctx->pc) {
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c738u: goto label_14c738;
        case 0x14c754u: goto label_14c754;
        case 0x14c778u: goto label_14c778;
        case 0x14c794u: goto label_14c794;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7ccu: goto label_14c7cc;
        default: break;
    }

    ctx->pc = 0x14c6b8u;

    // 0x14c6b8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x14c6bc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c6c0: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x14c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14c6c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14c6c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14c6cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c6d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14c6d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c6e0: 0x26260220  addiu       $a2, $s1, 0x220
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x14c6e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14c6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14c6e8: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x14c6e8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14c6ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14c6f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6f4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14C6F4u;
    SET_GPR_U32(ctx, 31, 0x14C6FCu);
    ctx->pc = 0x14C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6F4u;
    // 0x14c6f8: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14C6F4u, 0x14C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6FCu;
label_14c6fc:
    // 0x14c6fc: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x14c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x14c700: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x14c700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x14c704: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14c708: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14C708u;
    {
        const bool branch_taken_0x14c708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C708u;
        // 0x14c70c: 0x26080070  addiu       $t0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c708) {
            ctx->pc = 0x14C79Cu;
            goto label_14c79c;
        }
    }
    ctx->pc = 0x14C710u;
    // 0x14c710: 0x30624080  andi        $v0, $v1, 0x4080
    ctx->pc = 0x14c710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16512);
    // 0x14c714: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14C714u;
    {
        const bool branch_taken_0x14c714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c714) {
            ctx->pc = 0x14C75Cu;
            goto label_14c75c;
        }
    }
    ctx->pc = 0x14C71Cu;
    // 0x14c71c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C71Cu;
    {
        const bool branch_taken_0x14c71c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C71Cu;
        // 0x14c720: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c71c) {
            ctx->pc = 0x14C740u;
            goto label_14c740;
        }
    }
    ctx->pc = 0x14C724u;
    // 0x14c724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c728: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c72c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14c72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c730: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14C730u;
    SET_GPR_U32(ctx, 31, 0x14C738u);
    ctx->pc = 0x14C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C730u;
    // 0x14c734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14C730u, 0x14C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C738u;
label_14c738:
    // 0x14c738: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14C738u;
    {
        const bool branch_taken_0x14c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C738u;
        // 0x14c73c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c738) {
            ctx->pc = 0x14C7D0u;
            goto label_14c7d0;
        }
    }
    ctx->pc = 0x14C740u;
label_14c740:
    // 0x14c740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c744: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c748: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14c748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c74c: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14C74Cu;
    SET_GPR_U32(ctx, 31, 0x14C754u);
    ctx->pc = 0x14C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C74Cu;
    // 0x14c750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14C74Cu, 0x14C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C754u;
label_14c754:
    // 0x14c754: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14C754u;
    {
        const bool branch_taken_0x14c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C754u;
        // 0x14c758: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c754) {
            ctx->pc = 0x14C7D0u;
            goto label_14c7d0;
        }
    }
    ctx->pc = 0x14C75Cu;
label_14c75c:
    // 0x14c75c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C75Cu;
    {
        const bool branch_taken_0x14c75c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C75Cu;
        // 0x14c760: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c75c) {
            ctx->pc = 0x14C780u;
            goto label_14c780;
        }
    }
    ctx->pc = 0x14C764u;
    // 0x14c764: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c768: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c76c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c770: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14C770u;
    SET_GPR_U32(ctx, 31, 0x14C778u);
    ctx->pc = 0x14C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C770u;
    // 0x14c774: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14C770u, 0x14C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C778u;
label_14c778:
    // 0x14c778: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14C778u;
    {
        const bool branch_taken_0x14c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C778u;
        // 0x14c77c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c778) {
            ctx->pc = 0x14C7D0u;
            goto label_14c7d0;
        }
    }
    ctx->pc = 0x14C780u;
label_14c780:
    // 0x14c780: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14c780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c784: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c788: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c78c: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14C78Cu;
    SET_GPR_U32(ctx, 31, 0x14C794u);
    ctx->pc = 0x14C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C78Cu;
    // 0x14c790: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14C78Cu, 0x14C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C794u;
label_14c794:
    // 0x14c794: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14C794u;
    {
        const bool branch_taken_0x14c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C794u;
        // 0x14c798: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c794) {
            ctx->pc = 0x14C7D0u;
            goto label_14c7d0;
        }
    }
    ctx->pc = 0x14C79Cu;
label_14c79c:
    // 0x14c79c: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C79Cu;
    {
        const bool branch_taken_0x14c79c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C79Cu;
        // 0x14c7a0: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c79c) {
            ctx->pc = 0x14C7BCu;
            goto label_14c7bc;
        }
    }
    ctx->pc = 0x14C7A4u;
    // 0x14c7a4: 0x862602ac  lh          $a2, 0x2AC($s1)
    ctx->pc = 0x14c7a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x14c7a8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c7ac: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14C7ACu;
    SET_GPR_U32(ctx, 31, 0x14C7B4u);
    ctx->pc = 0x14C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7ACu;
    // 0x14c7b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14C7ACu, 0x14C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7B4u;
label_14c7b4:
    // 0x14c7b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14C7B4u;
    {
        const bool branch_taken_0x14c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7B4u;
        // 0x14c7b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7b4) {
            ctx->pc = 0x14C7D0u;
            goto label_14c7d0;
        }
    }
    ctx->pc = 0x14C7BCu;
label_14c7bc:
    // 0x14c7bc: 0x862602ac  lh          $a2, 0x2AC($s1)
    ctx->pc = 0x14c7bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x14c7c0: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14c7c4: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14C7C4u;
    SET_GPR_U32(ctx, 31, 0x14C7CCu);
    ctx->pc = 0x14C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7C4u;
    // 0x14c7c8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14C7C4u, 0x14C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7CCu;
label_14c7cc:
    // 0x14c7cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14c7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c7d0:
    // 0x14c7d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c7d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14c7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14C7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7DCu;
        // 0x14c7e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C7E4u;
    // 0x14c7e4: 0x0  nop
    ctx->pc = 0x14c7e4u;
    // NOP
    ctx->pc = 0x14c7e8u;
}
