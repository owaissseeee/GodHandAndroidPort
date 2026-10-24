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

// Function: _sceMpegWaitIpuIdle
// Address: 0x39e7c0 - 0x39e928
void _sceMpegWaitIpuIdle_0x39e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegWaitIpuIdle_0x39e7c0");
#endif

    switch (ctx->pc) {
        case 0x39e848u: goto label_39e848;
        case 0x39e8a4u: goto label_39e8a4;
        case 0x39e8c8u: goto label_39e8c8;
        case 0x39e8dcu: goto label_39e8dc;
        default: break;
    }

    ctx->pc = 0x39e7c0u;

    // 0x39e7c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x39e7c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e7c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e7cc: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39e7d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x39e7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x39e7d4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x39e7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x39e7d8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x39e7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x39e7dc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x39e7dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x39e7e0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x39e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x39e7e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7e8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x39e7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x39e7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7f0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x39e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x39e7f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39e7f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39e7fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39e800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39e800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39e804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e804u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39e808: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39e80c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x39e80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x39e810: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x39E810u;
    {
        const bool branch_taken_0x39e810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e810) {
            ctx->pc = 0x39E814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E810u;
            // 0x39e814: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E8F8u;
            goto label_39e8f8;
        }
    }
    ctx->pc = 0x39E818u;
    // 0x39e818: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x39e818u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x39e81c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x39e81cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x39e820: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x39e820u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x39e824: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x39e824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x39e828: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x39e828u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x39e82c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x39e82cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x39e830: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x39e830u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x39e834: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x39e834u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x39e838: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x39e838u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x39e83c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x39e83cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x39e840: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x39e840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x39e844: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x39e844u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_39e848:
    // 0x39e848: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x39e848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39e84c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x39e84cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x39e850: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x39e850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x39e854: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x39e854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x39e858: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x39e858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x39e85c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x39e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x39e860: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x39e860u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x39e864: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e868: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x39e868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x39e86c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E86Cu;
    {
        const bool branch_taken_0x39e86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x39E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E86Cu;
        // 0x39e870: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e86c) {
            ctx->pc = 0x39E884u;
            goto label_39e884;
        }
    }
    ctx->pc = 0x39E874u;
    // 0x39e874: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E874u;
    {
        const bool branch_taken_0x39e874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x39e874) {
            ctx->pc = 0x39E878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E874u;
            // 0x39e878: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E888u;
            goto label_39e888;
        }
    }
    ctx->pc = 0x39E87Cu;
    // 0x39e87c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x39E87Cu;
    {
        const bool branch_taken_0x39e87c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x39e87c) {
            ctx->pc = 0x39E880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E87Cu;
            // 0x39e880: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E8B4u;
            goto label_39e8b4;
        }
    }
    ctx->pc = 0x39E884u;
label_39e884:
    // 0x39e884: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x39e884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_39e888:
    // 0x39e888: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39E888u;
    {
        const bool branch_taken_0x39e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E888u;
        // 0x39e88c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e888) {
            ctx->pc = 0x39E8B4u;
            goto label_39e8b4;
        }
    }
    ctx->pc = 0x39E890u;
    // 0x39e890: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E894u;
    {
        const bool branch_taken_0x39e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E894u;
        // 0x39e898: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e894) {
            ctx->pc = 0x39E8B4u;
            goto label_39e8b4;
        }
    }
    ctx->pc = 0x39E89Cu;
    // 0x39e89c: 0xc0e6ae6  jal         func_39AB98
    ctx->pc = 0x39E89Cu;
    SET_GPR_U32(ctx, 31, 0x39E8A4u);
    ctx->pc = 0x39E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E89Cu;
    // 0x39e8a0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB98u, 0x39E89Cu, 0x39E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8A4u;
label_39e8a4:
    // 0x39e8a4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x39e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39e8a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x39E8A8u;
    {
        const bool branch_taken_0x39e8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8A8u;
        // 0x39e8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8a8) {
            ctx->pc = 0x39E8D4u;
            goto label_39e8d4;
        }
    }
    ctx->pc = 0x39E8B0u;
    // 0x39e8b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x39e8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39e8b4:
    // 0x39e8b4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x39e8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x39e8b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39E8B8u;
    {
        const bool branch_taken_0x39e8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8B8u;
        // 0x39e8bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8b8) {
            ctx->pc = 0x39E8E4u;
            goto label_39e8e4;
        }
    }
    ctx->pc = 0x39E8C0u;
    // 0x39e8c0: 0xc0e6ae6  jal         func_39AB98
    ctx->pc = 0x39E8C0u;
    SET_GPR_U32(ctx, 31, 0x39E8C8u);
    ctx->pc = 0x39E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E8C0u;
    // 0x39e8c4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB98u, 0x39E8C0u, 0x39E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8C8u;
label_39e8c8:
    // 0x39e8c8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x39e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39e8cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E8CCu;
    {
        const bool branch_taken_0x39e8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8CCu;
        // 0x39e8d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8cc) {
            ctx->pc = 0x39E8E4u;
            goto label_39e8e4;
        }
    }
    ctx->pc = 0x39E8D4u;
label_39e8d4:
    // 0x39e8d4: 0xc0e708a  jal         func_39C228
    ctx->pc = 0x39E8D4u;
    SET_GPR_U32(ctx, 31, 0x39E8DCu);
    ctx->pc = 0x39C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C228u, 0x39E8D4u, 0x39E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E8DCu;
label_39e8dc:
    // 0x39e8dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39E8DCu;
    {
        const bool branch_taken_0x39e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8DCu;
        // 0x39e8e0: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8dc) {
            ctx->pc = 0x39E8F8u;
            goto label_39e8f8;
        }
    }
    ctx->pc = 0x39E8E4u;
label_39e8e4:
    // 0x39e8e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39e8e8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x39e8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x39e8ec: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x39E8ECu;
    {
        const bool branch_taken_0x39e8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x39e8ec) {
            ctx->pc = 0x39E848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e848;
        }
    }
    ctx->pc = 0x39E8F4u;
    // 0x39e8f4: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x39e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_39e8f8:
    // 0x39e8f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39e8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39e8fc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x39e8fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39e900: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x39e900u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39e904: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x39e904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e908: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39e908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e90c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39e90cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e910: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39e910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39e914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e918: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39e918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e920: 0x3e00008  jr          $ra
    ctx->pc = 0x39E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E920u;
        // 0x39e924: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E928u;
}
