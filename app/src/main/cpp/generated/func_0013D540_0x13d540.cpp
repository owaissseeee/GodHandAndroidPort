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

// Function: func_0013D540
// Address: 0x13d540 - 0x13d698
void func_0013D540_0x13d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D540_0x13d540");
#endif

    switch (ctx->pc) {
        case 0x13d568u: goto label_13d568;
        case 0x13d570u: goto label_13d570;
        case 0x13d5d0u: goto label_13d5d0;
        case 0x13d5e0u: goto label_13d5e0;
        case 0x13d5f0u: goto label_13d5f0;
        case 0x13d644u: goto label_13d644;
        case 0x13d650u: goto label_13d650;
        case 0x13d65cu: goto label_13d65c;
        case 0x13d670u: goto label_13d670;
        case 0x13d678u: goto label_13d678;
        default: break;
    }

    ctx->pc = 0x13d540u;

    // 0x13d540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d548: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13d54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d550: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13d554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13d554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d558: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13d55c: 0x26510094  addiu       $s1, $s2, 0x94
    ctx->pc = 0x13d55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
    // 0x13d560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d568:
    // 0x13d568: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13D568u;
    SET_GPR_U32(ctx, 31, 0x13D570u);
    ctx->pc = 0x13D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D568u;
    // 0x13d56c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13D568u, 0x13D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D570u;
label_13d570:
    // 0x13d570: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13d574: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13d574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13d578: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x13d578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x13d57c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13d57cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d580: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13d580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13d584: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x13d584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x13d588: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13D588u;
    {
        const bool branch_taken_0x13d588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D588u;
        // 0x13d58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d588) {
            ctx->pc = 0x13D568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d568;
        }
    }
    ctx->pc = 0x13D590u;
    // 0x13d590: 0x96430092  lhu         $v1, 0x92($s2)
    ctx->pc = 0x13d590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x13d594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d598: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13D598u;
    {
        const bool branch_taken_0x13d598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D598u;
        // 0x13d59c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d598) {
            ctx->pc = 0x13D5D8u;
            goto label_13d5d8;
        }
    }
    ctx->pc = 0x13D5A0u;
    // 0x13d5a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D5A0u;
    {
        const bool branch_taken_0x13d5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5A0u;
        // 0x13d5a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5a0) {
            ctx->pc = 0x13D5B8u;
            goto label_13d5b8;
        }
    }
    ctx->pc = 0x13D5A8u;
    // 0x13d5a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D5A8u;
    {
        const bool branch_taken_0x13d5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5A8u;
        // 0x13d5ac: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5a8) {
            ctx->pc = 0x13D5C8u;
            goto label_13d5c8;
        }
    }
    ctx->pc = 0x13D5B0u;
    // 0x13d5b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13D5B0u;
    {
        const bool branch_taken_0x13d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5B0u;
        // 0x13d5b4: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5b0) {
            ctx->pc = 0x13D5F8u;
            goto label_13d5f8;
        }
    }
    ctx->pc = 0x13D5B8u;
label_13d5b8:
    // 0x13d5b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13D5B8u;
    {
        const bool branch_taken_0x13d5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5B8u;
        // 0x13d5bc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5b8) {
            ctx->pc = 0x13D5E8u;
            goto label_13d5e8;
        }
    }
    ctx->pc = 0x13D5C0u;
    // 0x13d5c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13D5C0u;
    {
        const bool branch_taken_0x13d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5C0u;
        // 0x13d5c4: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5c0) {
            ctx->pc = 0x13D5F8u;
            goto label_13d5f8;
        }
    }
    ctx->pc = 0x13D5C8u;
label_13d5c8:
    // 0x13d5c8: 0xc04f5a6  jal         func_13D698
    ctx->pc = 0x13D5C8u;
    SET_GPR_U32(ctx, 31, 0x13D5D0u);
    ctx->pc = 0x13D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5C8u;
    // 0x13d5cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D698u, 0x13D5C8u, 0x13D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5D0u;
label_13d5d0:
    // 0x13d5d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D5D0u;
    {
        const bool branch_taken_0x13d5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5D0u;
        // 0x13d5d4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5d0) {
            ctx->pc = 0x13D5F4u;
            goto label_13d5f4;
        }
    }
    ctx->pc = 0x13D5D8u;
label_13d5d8:
    // 0x13d5d8: 0xc04f5ec  jal         func_13D7B0
    ctx->pc = 0x13D5D8u;
    SET_GPR_U32(ctx, 31, 0x13D5E0u);
    ctx->pc = 0x13D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5D8u;
    // 0x13d5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D7B0u, 0x13D5D8u, 0x13D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5E0u;
label_13d5e0:
    // 0x13d5e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13D5E0u;
    {
        const bool branch_taken_0x13d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5E0u;
        // 0x13d5e4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5e0) {
            ctx->pc = 0x13D5F4u;
            goto label_13d5f4;
        }
    }
    ctx->pc = 0x13D5E8u;
label_13d5e8:
    // 0x13d5e8: 0xc04f6a6  jal         func_13DA98
    ctx->pc = 0x13D5E8u;
    SET_GPR_U32(ctx, 31, 0x13D5F0u);
    ctx->pc = 0x13D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5E8u;
    // 0x13d5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DA98u, 0x13D5E8u, 0x13D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5F0u;
label_13d5f0:
    // 0x13d5f0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x13d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_13d5f4:
    // 0x13d5f4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x13d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_13d5f8:
    // 0x13d5f8: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x13d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x13d5fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13d600: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13d600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x13d604: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13D604u;
    {
        const bool branch_taken_0x13d604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D604u;
        // 0x13d608: 0x3c060800  lui         $a2, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d604) {
            ctx->pc = 0x13D644u;
            goto label_13d644;
        }
    }
    ctx->pc = 0x13D60Cu;
    // 0x13d60c: 0x8e450098  lw          $a1, 0x98($s2)
    ctx->pc = 0x13d60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x13d610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d614: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13d618: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13d61c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13d620: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x13d624: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13d628: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13d62c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13d630: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x13d634: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13d638: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13d638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13d63c: 0xc04f6d4  jal         func_13DB50
    ctx->pc = 0x13D63Cu;
    SET_GPR_U32(ctx, 31, 0x13D644u);
    ctx->pc = 0x13D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D63Cu;
    // 0x13d640: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DB50u, 0x13D63Cu, 0x13D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D644u;
label_13d644:
    // 0x13d644: 0x265300d0  addiu       $s3, $s2, 0xD0
    ctx->pc = 0x13d644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x13d648: 0x26500120  addiu       $s0, $s2, 0x120
    ctx->pc = 0x13d648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x13d64c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x13d64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13d650:
    // 0x13d650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d654: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x13D654u;
    SET_GPR_U32(ctx, 31, 0x13D65Cu);
    ctx->pc = 0x13D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D654u;
    // 0x13d658: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x13D654u, 0x13D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D65Cu;
label_13d65c:
    // 0x13d65c: 0x0  nop
    ctx->pc = 0x13d65cu;
    // NOP
    // 0x13d660: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13D660u;
    {
        const bool branch_taken_0x13d660 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x13D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D660u;
        // 0x13d664: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d660) {
            ctx->pc = 0x13D650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d650;
        }
    }
    ctx->pc = 0x13D668u;
    // 0x13d668: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13D668u;
    SET_GPR_U32(ctx, 31, 0x13D670u);
    ctx->pc = 0x13D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D668u;
    // 0x13d66c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13D668u, 0x13D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D670u;
label_13d670:
    // 0x13d670: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13D670u;
    SET_GPR_U32(ctx, 31, 0x13D678u);
    ctx->pc = 0x13D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D670u;
    // 0x13d674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13D670u, 0x13D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D678u;
label_13d678:
    // 0x13d678: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13d678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d67c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13d67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d684: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13d684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d68c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D68Cu;
        // 0x13d690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D694u;
    // 0x13d694: 0x0  nop
    ctx->pc = 0x13d694u;
    // NOP
    ctx->pc = 0x13d698u;
}
