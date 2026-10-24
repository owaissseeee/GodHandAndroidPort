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

// Function: func_001BF8C8
// Address: 0x1bf8c8 - 0x1bfa58
void func_001BF8C8_0x1bf8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF8C8_0x1bf8c8");
#endif

    switch (ctx->pc) {
        case 0x1bf918u: goto label_1bf918;
        case 0x1bf928u: goto label_1bf928;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bfa38u: goto label_1bfa38;
        default: break;
    }

    ctx->pc = 0x1bf8c8u;

    // 0x1bf8c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bf8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bf8cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1bf8d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bf8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bf8d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bf8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bf8d8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x1bf8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x1bf8dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bf8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1bf8e0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1bf8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bf8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1bf8e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bf8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bf8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bf8f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bf8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf8f8: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1bf8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1bf8fc: 0x92650600  lbu         $a1, 0x600($s3)
    ctx->pc = 0x1bf8fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1536)));
    // 0x1bf900: 0x24841a20  addiu       $a0, $a0, 0x1A20
    ctx->pc = 0x1bf900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    // 0x1bf904: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bf904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bf908: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1bf908u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1bf90c: 0x24a52000  addiu       $a1, $a1, 0x2000
    ctx->pc = 0x1bf90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x1bf910: 0xc051c6a  jal         func_1471A8
    ctx->pc = 0x1BF910u;
    SET_GPR_U32(ctx, 31, 0x1BF918u);
    ctx->pc = 0x1BF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF910u;
    // 0x1bf914: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1471A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1471A8u, 0x1BF910u, 0x1BF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF918u;
label_1bf918:
    // 0x1bf918: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x1bf91c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bf920: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1BF920u;
    SET_GPR_U32(ctx, 31, 0x1BF928u);
    ctx->pc = 0x1BF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF920u;
    // 0x1bf924: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1BF920u, 0x1BF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF928u;
label_1bf928:
    // 0x1bf928: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1bf928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1bf92c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1bf930: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1bf934: 0xdc6201a0  ld          $v0, 0x1A0($v1)
    ctx->pc = 0x1bf934u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x1bf938: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1bf938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1bf93c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF93Cu;
    {
        const bool branch_taken_0x1bf93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf93c) {
            ctx->pc = 0x1BF940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF93Cu;
            // 0x1bf940: 0x8e83d6e8  lw          $v1, -0x2918($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294956776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF970u;
            goto label_1bf970;
        }
    }
    ctx->pc = 0x1BF944u;
    // 0x1bf944: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1bf944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf948: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x1bf94c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x1bf94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_1bf950:
    // 0x1bf950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf954: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1BF954u;
    SET_GPR_U32(ctx, 31, 0x1BF95Cu);
    ctx->pc = 0x1BF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF954u;
    // 0x1bf958: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1BF954u, 0x1BF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF95Cu;
label_1bf95c:
    // 0x1bf95c: 0xde4201a0  ld          $v0, 0x1A0($s2)
    ctx->pc = 0x1bf95cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x1bf960: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1bf960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1bf964: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF964u;
    {
        const bool branch_taken_0x1bf964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF964u;
        // 0x1bf968: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf964) {
            ctx->pc = 0x1BF950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf950;
        }
    }
    ctx->pc = 0x1BF96Cu;
    // 0x1bf96c: 0x8e83d6e8  lw          $v1, -0x2918($s4)
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294956776)));
label_1bf970:
    // 0x1bf970: 0x24631a20  addiu       $v1, $v1, 0x1A20
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
    // 0x1bf974: 0x906200b8  lbu         $v0, 0xB8($v1)
    ctx->pc = 0x1bf974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1bf978: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1bf978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1bf97c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bf97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bf980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF980u;
    {
        const bool branch_taken_0x1bf980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF980u;
        // 0x1bf984: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf980) {
            ctx->pc = 0x1BF998u;
            goto label_1bf998;
        }
    }
    ctx->pc = 0x1BF988u;
    // 0x1bf988: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf98c: 0xa06200b8  sb          $v0, 0xB8($v1)
    ctx->pc = 0x1bf98cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf990: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x1bf990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1bf994: 0x0  nop
    ctx->pc = 0x1bf994u;
    // NOP
label_1bf998:
    // 0x1bf998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf99c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1BF99Cu;
    SET_GPR_U32(ctx, 31, 0x1BF9A4u);
    ctx->pc = 0x1BF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF99Cu;
    // 0x1bf9a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1BF99Cu, 0x1BF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9A4u;
label_1bf9a4:
    // 0x1bf9a4: 0x8e82d6e8  lw          $v0, -0x2918($s4)
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294956776)));
    // 0x1bf9a8: 0x80431ad8  lb          $v1, 0x1AD8($v0)
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x1bf9ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF9ACu;
    {
        const bool branch_taken_0x1bf9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9ACu;
        // 0x1bf9b0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9ac) {
            ctx->pc = 0x1BF998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf998;
        }
    }
    ctx->pc = 0x1BF9B4u;
    // 0x1bf9b4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x1bf9b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9bc: 0x26107a78  addiu       $s0, $s0, 0x7A78
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31352));
    // 0x1bf9c0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf9c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1BF9C4u;
    SET_GPR_U32(ctx, 31, 0x1BF9CCu);
    ctx->pc = 0x1BF9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9C4u;
    // 0x1bf9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1BF9C4u, 0x1BF9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9CCu;
label_1bf9cc:
    // 0x1bf9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9d0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1bf9d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1BF9D4u;
    SET_GPR_U32(ctx, 31, 0x1BF9DCu);
    ctx->pc = 0x1BF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9D4u;
    // 0x1bf9d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1BF9D4u, 0x1BF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9DCu;
label_1bf9dc:
    // 0x1bf9dc: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1bf9e0: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1bf9e4: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF9E4u;
    {
        const bool branch_taken_0x1bf9e4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9e4) {
            ctx->pc = 0x1BFA04u;
            goto label_1bfa04;
        }
    }
    ctx->pc = 0x1BF9ECu;
    // 0x1bf9ec: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bf9f0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1bf9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf9f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf9f8: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x1bf9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1bf9fc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1bf9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x1bfa00: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x1bfa00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_1bfa04:
    // 0x1bfa04: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x1bfa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1bfa08: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1bfa0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bfa10: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1bfa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1bfa14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bfa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bfa18: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1bfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x1bfa1c: 0xa6650602  sh          $a1, 0x602($s3)
    ctx->pc = 0x1bfa1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1538), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bfa20: 0x926202f5  lbu         $v0, 0x2F5($s3)
    ctx->pc = 0x1bfa20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 757)));
    // 0x1bfa24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfa28: 0xa26202f5  sb          $v0, 0x2F5($s3)
    ctx->pc = 0x1bfa28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bfa2c: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1bfa30: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x1BFA30u;
    SET_GPR_U32(ctx, 31, 0x1BFA38u);
    ctx->pc = 0x1BFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA30u;
    // 0x1bfa34: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x1BFA30u, 0x1BFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA38u;
label_1bfa38:
    // 0x1bfa38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bfa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfa3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bfa3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfa40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bfa40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfa44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bfa44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfa48: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1bfa48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfa4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfa50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA50u;
        // 0x1bfa54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFA58u;
}
