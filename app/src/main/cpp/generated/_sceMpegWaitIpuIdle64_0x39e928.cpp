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

// Function: _sceMpegWaitIpuIdle64
// Address: 0x39e928 - 0x39eaa8
void _sceMpegWaitIpuIdle64_0x39e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegWaitIpuIdle64_0x39e928");
#endif

    switch (ctx->pc) {
        case 0x39e9b8u: goto label_39e9b8;
        case 0x39ea14u: goto label_39ea14;
        case 0x39ea38u: goto label_39ea38;
        case 0x39ea4cu: goto label_39ea4c;
        default: break;
    }

    ctx->pc = 0x39e928u;

    // 0x39e928: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39e928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x39e92c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e934: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39e938: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x39e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x39e93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e940: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x39e940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x39e944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e948: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x39e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x39e94c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x39e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x39e950: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x39e950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x39e954: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39e958: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39e95c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39e95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39e960: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39e964: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x39e964u;
    SET_GPR_U64(ctx, 17, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x39e968: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x39E968u;
    {
        const bool branch_taken_0x39e968 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x39e968) {
            ctx->pc = 0x39E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E968u;
            // 0x39e96c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EA74u;
            goto label_39ea74;
        }
    }
    ctx->pc = 0x39E970u;
    // 0x39e970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e974: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39e978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e978u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39e97c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x39e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x39e980: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x39E980u;
    {
        const bool branch_taken_0x39e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e980) {
            ctx->pc = 0x39E984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E980u;
            // 0x39e984: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EA74u;
            goto label_39ea74;
        }
    }
    ctx->pc = 0x39E988u;
    // 0x39e988: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x39e988u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x39e98c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x39e98cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x39e990: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x39e990u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x39e994: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x39e994u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x39e998: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x39e998u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x39e99c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x39e99cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x39e9a0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x39e9a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x39e9a4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x39e9a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x39e9a8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x39e9a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x39e9ac: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x39e9acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x39e9b0: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x39e9b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x39e9b4: 0x0  nop
    ctx->pc = 0x39e9b4u;
    // NOP
label_39e9b8:
    // 0x39e9b8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x39e9bc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x39e9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x39e9c0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x39e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x39e9c4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x39e9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x39e9c8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x39e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x39e9cc: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x39e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x39e9d0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x39e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x39e9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e9d8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x39e9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x39e9dc: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E9DCu;
    {
        const bool branch_taken_0x39e9dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x39E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9DCu;
        // 0x39e9e0: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e9dc) {
            ctx->pc = 0x39E9F4u;
            goto label_39e9f4;
        }
    }
    ctx->pc = 0x39E9E4u;
    // 0x39e9e4: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E9E4u;
    {
        const bool branch_taken_0x39e9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x39e9e4) {
            ctx->pc = 0x39E9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E9E4u;
            // 0x39e9e8: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E9F8u;
            goto label_39e9f8;
        }
    }
    ctx->pc = 0x39E9ECu;
    // 0x39e9ec: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x39E9ECu;
    {
        const bool branch_taken_0x39e9ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x39e9ec) {
            ctx->pc = 0x39E9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E9ECu;
            // 0x39e9f0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EA24u;
            goto label_39ea24;
        }
    }
    ctx->pc = 0x39E9F4u;
label_39e9f4:
    // 0x39e9f4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x39e9f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_39e9f8:
    // 0x39e9f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39E9F8u;
    {
        const bool branch_taken_0x39e9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9F8u;
        // 0x39e9fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e9f8) {
            ctx->pc = 0x39EA24u;
            goto label_39ea24;
        }
    }
    ctx->pc = 0x39EA00u;
    // 0x39ea00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x39ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39ea04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39EA04u;
    {
        const bool branch_taken_0x39ea04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA04u;
        // 0x39ea08: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea04) {
            ctx->pc = 0x39EA24u;
            goto label_39ea24;
        }
    }
    ctx->pc = 0x39EA0Cu;
    // 0x39ea0c: 0xc0e6ae6  jal         func_39AB98
    ctx->pc = 0x39EA0Cu;
    SET_GPR_U32(ctx, 31, 0x39EA14u);
    ctx->pc = 0x39EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA0Cu;
    // 0x39ea10: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB98u, 0x39EA0Cu, 0x39EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA14u;
label_39ea14:
    // 0x39ea14: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x39ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39ea18: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x39EA18u;
    {
        const bool branch_taken_0x39ea18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA18u;
        // 0x39ea1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea18) {
            ctx->pc = 0x39EA44u;
            goto label_39ea44;
        }
    }
    ctx->pc = 0x39EA20u;
    // 0x39ea20: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x39ea20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39ea24:
    // 0x39ea24: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x39ea24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x39ea28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39EA28u;
    {
        const bool branch_taken_0x39ea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA28u;
        // 0x39ea2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea28) {
            ctx->pc = 0x39EA54u;
            goto label_39ea54;
        }
    }
    ctx->pc = 0x39EA30u;
    // 0x39ea30: 0xc0e6ae6  jal         func_39AB98
    ctx->pc = 0x39EA30u;
    SET_GPR_U32(ctx, 31, 0x39EA38u);
    ctx->pc = 0x39EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EA30u;
    // 0x39ea34: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB98u, 0x39EA30u, 0x39EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA38u;
label_39ea38:
    // 0x39ea38: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x39ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39ea3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EA3Cu;
    {
        const bool branch_taken_0x39ea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA3Cu;
        // 0x39ea40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea3c) {
            ctx->pc = 0x39EA54u;
            goto label_39ea54;
        }
    }
    ctx->pc = 0x39EA44u;
label_39ea44:
    // 0x39ea44: 0xc0e708a  jal         func_39C228
    ctx->pc = 0x39EA44u;
    SET_GPR_U32(ctx, 31, 0x39EA4Cu);
    ctx->pc = 0x39C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C228u, 0x39EA44u, 0x39EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EA4Cu;
label_39ea4c:
    // 0x39ea4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39EA4Cu;
    {
        const bool branch_taken_0x39ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA4Cu;
        // 0x39ea50: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea4c) {
            ctx->pc = 0x39EA74u;
            goto label_39ea74;
        }
    }
    ctx->pc = 0x39EA54u;
label_39ea54:
    // 0x39ea54: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x39ea54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39ea58: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EA58u;
    {
        const bool branch_taken_0x39ea58 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x39ea58) {
            ctx->pc = 0x39EA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EA58u;
            // 0x39ea5c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EA74u;
            goto label_39ea74;
        }
    }
    ctx->pc = 0x39EA60u;
    // 0x39ea60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39ea64: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x39ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x39ea68: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x39EA68u;
    {
        const bool branch_taken_0x39ea68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ea68) {
            ctx->pc = 0x39E9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e9b8;
        }
    }
    ctx->pc = 0x39EA70u;
    // 0x39ea70: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x39ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_39ea74:
    // 0x39ea74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39ea74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ea78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39ea78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39ea7c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x39ea7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39ea80: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x39ea80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39ea84: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x39ea84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39ea88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39ea88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39ea8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39ea8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39ea90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39ea90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39ea94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39ea94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ea98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39ea98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ea9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ea9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x39EAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAA0u;
        // 0x39eaa4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EAA8u;
}
