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

// Function: func_0037E908
// Address: 0x37e908 - 0x37eda8
void func_0037E908_0x37e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E908_0x37e908");
#endif

    switch (ctx->pc) {
        case 0x37e96cu: goto label_37e96c;
        case 0x37e9b4u: goto label_37e9b4;
        case 0x37ea14u: goto label_37ea14;
        case 0x37ea5cu: goto label_37ea5c;
        case 0x37eaa4u: goto label_37eaa4;
        case 0x37eb08u: goto label_37eb08;
        case 0x37eb28u: goto label_37eb28;
        case 0x37eb38u: goto label_37eb38;
        case 0x37eba0u: goto label_37eba0;
        case 0x37ebbcu: goto label_37ebbc;
        case 0x37ebccu: goto label_37ebcc;
        case 0x37ebd4u: goto label_37ebd4;
        case 0x37ebf8u: goto label_37ebf8;
        case 0x37ec1cu: goto label_37ec1c;
        case 0x37ec38u: goto label_37ec38;
        case 0x37ec74u: goto label_37ec74;
        case 0x37ec90u: goto label_37ec90;
        case 0x37ecbcu: goto label_37ecbc;
        case 0x37ecf8u: goto label_37ecf8;
        case 0x37ed58u: goto label_37ed58;
        default: break;
    }

    ctx->pc = 0x37e908u;

    // 0x37e908: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37e90c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x37e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x37e910: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37e914: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37e918: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37e91c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37e91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e920: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37e924: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37e928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37e92c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x37e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x37e930: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x37e930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37e934: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x37e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x37e938: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x37e938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x37e93c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x37e93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37e940: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37e940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37e944: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x37e944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37e948: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x37e948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37e94c: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x37e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x37e950: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x37e950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x37e954: 0x2439821  addu        $s3, $s2, $v1
    ctx->pc = 0x37e954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x37e958: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37e95c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E95Cu;
    {
        const bool branch_taken_0x37e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E95Cu;
        // 0x37e960: 0x26740010  addiu       $s4, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e95c) {
            ctx->pc = 0x37E974u;
            goto label_37e974;
        }
    }
    ctx->pc = 0x37E964u;
    // 0x37e964: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37E964u;
    SET_GPR_U32(ctx, 31, 0x37E96Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37E964u, 0x37E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E96Cu;
label_37e96c:
    // 0x37e96c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37E96Cu;
    {
        const bool branch_taken_0x37e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E96Cu;
        // 0x37e970: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e96c) {
            ctx->pc = 0x37E984u;
            goto label_37e984;
        }
    }
    ctx->pc = 0x37E974u;
label_37e974:
    // 0x37e974: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37e978: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x37e978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e97c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37e980: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37e980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37e984:
    // 0x37e984: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x37e984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x37e988: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x37e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x37e98c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x37e98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37e990: 0x92500005  lbu         $s0, 0x5($s2)
    ctx->pc = 0x37e990u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37e994: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x37e994u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e998: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e99c: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37e9a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37e9a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E9A4u;
    {
        const bool branch_taken_0x37e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e9a4) {
            ctx->pc = 0x37E9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E9A4u;
            // 0x37e9a8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E9BCu;
            goto label_37e9bc;
        }
    }
    ctx->pc = 0x37E9ACu;
    // 0x37e9ac: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37E9ACu;
    SET_GPR_U32(ctx, 31, 0x37E9B4u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37E9ACu, 0x37E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E9B4u;
label_37e9b4:
    // 0x37e9b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37E9B4u;
    {
        const bool branch_taken_0x37e9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9B4u;
        // 0x37e9b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9b4) {
            ctx->pc = 0x37E9C4u;
            goto label_37e9c4;
        }
    }
    ctx->pc = 0x37E9BCu;
label_37e9bc:
    // 0x37e9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37e9c0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37e9c4:
    // 0x37e9c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37e9c8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x37e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x37e9cc: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x37e9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x37e9d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x37e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37e9d4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x37e9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37e9d8: 0x10700026  beq         $v1, $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x37E9D8u;
    {
        const bool branch_taken_0x37e9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x37E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9D8u;
        // 0x37e9dc: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9d8) {
            ctx->pc = 0x37EA74u;
            goto label_37ea74;
        }
    }
    ctx->pc = 0x37E9E0u;
    // 0x37e9e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x37e9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37e9e4: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37e9e8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37e9ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e9f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37E9F0u;
    {
        const bool branch_taken_0x37e9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9F0u;
        // 0x37e9f4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9f0) {
            ctx->pc = 0x37EA40u;
            goto label_37ea40;
        }
    }
    ctx->pc = 0x37E9F8u;
    // 0x37e9f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37e9fc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ea00: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37ea00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37ea04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EA04u;
    {
        const bool branch_taken_0x37ea04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA04u;
        // 0x37ea08: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea04) {
            ctx->pc = 0x37EA1Cu;
            goto label_37ea1c;
        }
    }
    ctx->pc = 0x37EA0Cu;
    // 0x37ea0c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37EA0Cu;
    SET_GPR_U32(ctx, 31, 0x37EA14u);
    ctx->pc = 0x37EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA0Cu;
    // 0x37ea10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37EA0Cu, 0x37EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA14u;
label_37ea14:
    // 0x37ea14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37EA14u;
    {
        const bool branch_taken_0x37ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA14u;
        // 0x37ea18: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea14) {
            ctx->pc = 0x37EA44u;
            goto label_37ea44;
        }
    }
    ctx->pc = 0x37EA1Cu;
label_37ea1c:
    // 0x37ea1c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37ea20: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37ea24: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37ea28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ea2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37ea30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37ea34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ea38: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37ea3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37ea40:
    // 0x37ea40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37ea44:
    // 0x37ea44: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37ea48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37ea4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EA4Cu;
    {
        const bool branch_taken_0x37ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ea4c) {
            ctx->pc = 0x37EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EA4Cu;
            // 0x37ea50: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37EA64u;
            goto label_37ea64;
        }
    }
    ctx->pc = 0x37EA54u;
    // 0x37ea54: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37EA54u;
    SET_GPR_U32(ctx, 31, 0x37EA5Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37EA54u, 0x37EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA5Cu;
label_37ea5c:
    // 0x37ea5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37EA5Cu;
    {
        const bool branch_taken_0x37ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA5Cu;
        // 0x37ea60: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea5c) {
            ctx->pc = 0x37EA6Cu;
            goto label_37ea6c;
        }
    }
    ctx->pc = 0x37EA64u;
label_37ea64:
    // 0x37ea64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ea68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37ea6c:
    // 0x37ea6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37ea70: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37ea70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37ea74:
    // 0x37ea74: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37ea78: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37ea7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ea80: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37EA80u;
    {
        const bool branch_taken_0x37ea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA80u;
        // 0x37ea84: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea80) {
            ctx->pc = 0x37EAD0u;
            goto label_37ead0;
        }
    }
    ctx->pc = 0x37EA88u;
    // 0x37ea88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37ea8c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ea90: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37ea90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37ea94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EA94u;
    {
        const bool branch_taken_0x37ea94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA94u;
        // 0x37ea98: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea94) {
            ctx->pc = 0x37EAACu;
            goto label_37eaac;
        }
    }
    ctx->pc = 0x37EA9Cu;
    // 0x37ea9c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37EA9Cu;
    SET_GPR_U32(ctx, 31, 0x37EAA4u);
    ctx->pc = 0x37EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA9Cu;
    // 0x37eaa0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37EA9Cu, 0x37EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EAA4u;
label_37eaa4:
    // 0x37eaa4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37EAA4u;
    {
        const bool branch_taken_0x37eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAA4u;
        // 0x37eaa8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eaa4) {
            ctx->pc = 0x37EAD4u;
            goto label_37ead4;
        }
    }
    ctx->pc = 0x37EAACu;
label_37eaac:
    // 0x37eaac: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37eab0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37eab4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37eab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37eabc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37eac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37eac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37eac8: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37eacc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37ead0:
    // 0x37ead0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x37ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37ead4:
    // 0x37ead4: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37ead8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EAD8u;
    {
        const bool branch_taken_0x37ead8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAD8u;
        // 0x37eadc: 0x92500005  lbu         $s0, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ead8) {
            ctx->pc = 0x37EAECu;
            goto label_37eaec;
        }
    }
    ctx->pc = 0x37EAE0u;
    // 0x37eae0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37eae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37EAE4u;
    {
        const bool branch_taken_0x37eae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAE4u;
        // 0x37eae8: 0x2451c208  addiu       $s1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eae4) {
            ctx->pc = 0x37EAF8u;
            goto label_37eaf8;
        }
    }
    ctx->pc = 0x37EAECu;
label_37eaec:
    // 0x37eaec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37eaf0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37eaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37eaf4: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x37eaf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37eaf8:
    // 0x37eaf8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x37eaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37eafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb00: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37EB00u;
    SET_GPR_U32(ctx, 31, 0x37EB08u);
    ctx->pc = 0x37EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB00u;
    // 0x37eb04: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37EB00u, 0x37EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EB08u;
label_37eb08:
    // 0x37eb08: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x37eb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37eb0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37eb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37eb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x37eb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb1c: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x37eb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37eb20: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37EB20u;
    SET_GPR_U32(ctx, 31, 0x37EB28u);
    ctx->pc = 0x37EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB20u;
    // 0x37eb24: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37EB20u, 0x37EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EB28u;
label_37eb28:
    // 0x37eb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37eb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb30: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x37EB30u;
    SET_GPR_U32(ctx, 31, 0x37EB38u);
    ctx->pc = 0x37EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB30u;
    // 0x37eb34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x37EB30u, 0x37EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EB38u;
label_37eb38:
    // 0x37eb38: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x37EB38u;
    {
        const bool branch_taken_0x37eb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37eb38) {
            ctx->pc = 0x37EB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EB38u;
            // 0x37eb3c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37EB80u;
            goto label_37eb80;
        }
    }
    ctx->pc = 0x37EB40u;
    // 0x37eb40: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x37eb40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37eb44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x37eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37eb48: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37eb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37eb4c: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x37eb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37eb50: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37eb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37eb54: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37eb58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37eb5c: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x37EB5Cu;
    {
        const bool branch_taken_0x37eb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB5Cu;
        // 0x37eb60: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb5c) {
            ctx->pc = 0x37ED84u;
            goto label_37ed84;
        }
    }
    ctx->pc = 0x37EB64u;
    // 0x37eb64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37eb68: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37eb6c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37eb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37eb70: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x37EB70u;
    {
        const bool branch_taken_0x37eb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB70u;
        // 0x37eb74: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb70) {
            ctx->pc = 0x37ED50u;
            goto label_37ed50;
        }
    }
    ctx->pc = 0x37EB78u;
    // 0x37eb78: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x37EB78u;
    {
        const bool branch_taken_0x37eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB78u;
        // 0x37eb7c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb78) {
            ctx->pc = 0x37ED64u;
            goto label_37ed64;
        }
    }
    ctx->pc = 0x37EB80u;
label_37eb80:
    // 0x37eb80: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x37eb84: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x37eb84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x37eb88: 0x9465215e  lhu         $a1, 0x215E($v1)
    ctx->pc = 0x37eb88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x3F215Eu));
    // 0x37eb8c: 0xa6650004  sh          $a1, 0x4($s3)
    ctx->pc = 0x37eb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x37eb90: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37eb94: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x37eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x37eb98: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x37EB98u;
    SET_GPR_U32(ctx, 31, 0x37EBA0u);
    ctx->pc = 0x37EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB98u;
    // 0x37eb9c: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x37EB98u, 0x37EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBA0u;
label_37eba0:
    // 0x37eba0: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x37eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37eba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37eba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eba8: 0xa662000a  sh          $v0, 0xA($s3)
    ctx->pc = 0x37eba8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ebac: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x37ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37ebb0: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x37ebb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ebb4: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x37EBB4u;
    SET_GPR_U32(ctx, 31, 0x37EBBCu);
    ctx->pc = 0x37EBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EBB4u;
    // 0x37ebb8: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x37EBB4u, 0x37EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBBCu;
label_37ebbc:
    // 0x37ebbc: 0x8666000a  lh          $a2, 0xA($s3)
    ctx->pc = 0x37ebbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x37ebc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ebc4: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x37EBC4u;
    SET_GPR_U32(ctx, 31, 0x37EBCCu);
    ctx->pc = 0x37EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EBC4u;
    // 0x37ebc8: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x37EBC4u, 0x37EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBCCu;
label_37ebcc:
    // 0x37ebcc: 0xc0caa62  jal         func_32A988
    ctx->pc = 0x37EBCCu;
    SET_GPR_U32(ctx, 31, 0x37EBD4u);
    ctx->pc = 0x37EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EBCCu;
    // 0x37ebd0: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A988u, 0x37EBCCu, 0x37EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBD4u;
label_37ebd4:
    // 0x37ebd4: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x37ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x37ebd8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x37ebdc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x37ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x37ebe0: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x37ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x37ebe4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB174u));
    // 0x37ebe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EBE8u;
    {
        const bool branch_taken_0x37ebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBE8u;
        // 0x37ebec: 0x2470c210  addiu       $s0, $v1, -0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebe8) {
            ctx->pc = 0x37EC00u;
            goto label_37ec00;
        }
    }
    ctx->pc = 0x37EBF0u;
    // 0x37ebf0: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37EBF0u;
    SET_GPR_U32(ctx, 31, 0x37EBF8u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37EBF0u, 0x37EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBF8u;
label_37ebf8:
    // 0x37ebf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37EBF8u;
    {
        const bool branch_taken_0x37ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBF8u;
        // 0x37ebfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebf8) {
            ctx->pc = 0x37EC10u;
            goto label_37ec10;
        }
    }
    ctx->pc = 0x37EC00u;
label_37ec00:
    // 0x37ec00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37ec04: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x37ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x37ec08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ec0c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37ec10:
    // 0x37ec10: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x37ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x37ec14: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37EC14u;
    SET_GPR_U32(ctx, 31, 0x37EC1Cu);
    ctx->pc = 0x37EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC14u;
    // 0x37ec18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37EC14u, 0x37EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC1Cu;
label_37ec1c:
    // 0x37ec1c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x37ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x37ec20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37ec24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37ec24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37ec28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37ec2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec30: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37EC30u;
    SET_GPR_U32(ctx, 31, 0x37EC38u);
    ctx->pc = 0x37EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC30u;
    // 0x37ec34: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37EC30u, 0x37EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC38u;
label_37ec38:
    // 0x37ec38: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x37ec38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37ec3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37ec40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x37ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37ec44: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x37ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x37ec48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37ec4c: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x37ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x37ec50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EC50u;
    {
        const bool branch_taken_0x37ec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EC50u;
        // 0x37ec54: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ec50) {
            ctx->pc = 0x37EC64u;
            goto label_37ec64;
        }
    }
    ctx->pc = 0x37EC58u;
    // 0x37ec58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37ec5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37EC5Cu;
    {
        const bool branch_taken_0x37ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EC5Cu;
        // 0x37ec60: 0x2450c208  addiu       $s0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ec5c) {
            ctx->pc = 0x37EC6Cu;
            goto label_37ec6c;
        }
    }
    ctx->pc = 0x37EC64u;
label_37ec64:
    // 0x37ec64: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37ec64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ec68: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x37ec68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37ec6c:
    // 0x37ec6c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37EC6Cu;
    SET_GPR_U32(ctx, 31, 0x37EC74u);
    ctx->pc = 0x37EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC6Cu;
    // 0x37ec70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37EC6Cu, 0x37EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC74u;
label_37ec74:
    // 0x37ec74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ec78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37ec78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37ec7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37ec84: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x37ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37ec88: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37EC88u;
    SET_GPR_U32(ctx, 31, 0x37EC90u);
    ctx->pc = 0x37EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC88u;
    // 0x37ec8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37EC88u, 0x37EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC90u;
label_37ec90:
    // 0x37ec90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ec94: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37ec98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EC98u;
    {
        const bool branch_taken_0x37ec98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EC98u;
        // 0x37ec9c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ec98) {
            ctx->pc = 0x37ECACu;
            goto label_37ecac;
        }
    }
    ctx->pc = 0x37ECA0u;
    // 0x37eca0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37eca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37ECA4u;
    {
        const bool branch_taken_0x37eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ECA4u;
        // 0x37eca8: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eca4) {
            ctx->pc = 0x37ECB4u;
            goto label_37ecb4;
        }
    }
    ctx->pc = 0x37ECACu;
label_37ecac:
    // 0x37ecac: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ecb0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x37ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37ecb4:
    // 0x37ecb4: 0xc0caf54  jal         func_32BD50
    ctx->pc = 0x37ECB4u;
    SET_GPR_U32(ctx, 31, 0x37ECBCu);
    ctx->pc = 0x37ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECB4u;
    // 0x37ecb8: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BD50u, 0x37ECB4u, 0x37ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ECBCu;
label_37ecbc:
    // 0x37ecbc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ecc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ecc4: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x37ecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ecc8: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37eccc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37ecd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ecd4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37ECD4u;
    {
        const bool branch_taken_0x37ecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ECD4u;
        // 0x37ecd8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ecd4) {
            ctx->pc = 0x37ED24u;
            goto label_37ed24;
        }
    }
    ctx->pc = 0x37ECDCu;
    // 0x37ecdc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37ece0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ece4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37ece4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37ece8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37ECE8u;
    {
        const bool branch_taken_0x37ece8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ECE8u;
        // 0x37ecec: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ece8) {
            ctx->pc = 0x37ED00u;
            goto label_37ed00;
        }
    }
    ctx->pc = 0x37ECF0u;
    // 0x37ecf0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37ECF0u;
    SET_GPR_U32(ctx, 31, 0x37ECF8u);
    ctx->pc = 0x37ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECF0u;
    // 0x37ecf4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37ECF0u, 0x37ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ECF8u;
label_37ecf8:
    // 0x37ecf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37ECF8u;
    {
        const bool branch_taken_0x37ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ECF8u;
        // 0x37ecfc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ecf8) {
            ctx->pc = 0x37ED28u;
            goto label_37ed28;
        }
    }
    ctx->pc = 0x37ED00u;
label_37ed00:
    // 0x37ed00: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37ed04: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37ed08: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37ed0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ed10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37ed14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37ed18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ed1c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37ed20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37ed24:
    // 0x37ed24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37ed28:
    // 0x37ed28: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37ed2c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37ed30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ed34: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37ED34u;
    {
        const bool branch_taken_0x37ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED34u;
        // 0x37ed38: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed34) {
            ctx->pc = 0x37ED84u;
            goto label_37ed84;
        }
    }
    ctx->pc = 0x37ED3Cu;
    // 0x37ed3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37ed40: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ed44: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37ed44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37ed48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37ED48u;
    {
        const bool branch_taken_0x37ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED48u;
        // 0x37ed4c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed48) {
            ctx->pc = 0x37ED60u;
            goto label_37ed60;
        }
    }
    ctx->pc = 0x37ED50u;
label_37ed50:
    // 0x37ed50: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37ED50u;
    SET_GPR_U32(ctx, 31, 0x37ED58u);
    ctx->pc = 0x37ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED50u;
    // 0x37ed54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37ED50u, 0x37ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED58u;
label_37ed58:
    // 0x37ed58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37ED58u;
    {
        const bool branch_taken_0x37ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED58u;
        // 0x37ed5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed58) {
            ctx->pc = 0x37ED88u;
            goto label_37ed88;
        }
    }
    ctx->pc = 0x37ED60u;
label_37ed60:
    // 0x37ed60: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_37ed64:
    // 0x37ed64: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37ed68: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37ed6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ed70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37ed74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37ed78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ed7c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37ed80: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37ed84:
    // 0x37ed84: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37ed84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37ed88:
    // 0x37ed88: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37ed88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37ed8c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37ed8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37ed90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37ed90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ed94: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37ed94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ed98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37ed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x37ED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED9Cu;
        // 0x37eda0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EDA4u;
    // 0x37eda4: 0x0  nop
    ctx->pc = 0x37eda4u;
    // NOP
    ctx->pc = 0x37eda8u;
}
