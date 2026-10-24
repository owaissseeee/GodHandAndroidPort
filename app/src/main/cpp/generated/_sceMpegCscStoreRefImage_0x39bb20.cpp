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

// Function: _sceMpegCscStoreRefImage
// Address: 0x39bb20 - 0x39bff8
void _sceMpegCscStoreRefImage_0x39bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegCscStoreRefImage_0x39bb20");
#endif

    switch (ctx->pc) {
        case 0x39bb6cu: goto label_39bb6c;
        case 0x39bb98u: goto label_39bb98;
        case 0x39bbd8u: goto label_39bbd8;
        case 0x39bc00u: goto label_39bc00;
        case 0x39bc40u: goto label_39bc40;
        case 0x39bc5cu: goto label_39bc5c;
        case 0x39bc64u: goto label_39bc64;
        case 0x39bca0u: goto label_39bca0;
        case 0x39bce0u: goto label_39bce0;
        case 0x39bd04u: goto label_39bd04;
        case 0x39bd48u: goto label_39bd48;
        case 0x39bda4u: goto label_39bda4;
        case 0x39bdb0u: goto label_39bdb0;
        case 0x39bdd8u: goto label_39bdd8;
        case 0x39be0cu: goto label_39be0c;
        case 0x39be14u: goto label_39be14;
        case 0x39be20u: goto label_39be20;
        case 0x39be30u: goto label_39be30;
        case 0x39be70u: goto label_39be70;
        case 0x39be90u: goto label_39be90;
        case 0x39beb4u: goto label_39beb4;
        case 0x39bef8u: goto label_39bef8;
        case 0x39bf54u: goto label_39bf54;
        case 0x39bf60u: goto label_39bf60;
        case 0x39bf88u: goto label_39bf88;
        case 0x39bfbcu: goto label_39bfbc;
        case 0x39bfd0u: goto label_39bfd0;
        default: break;
    }

    ctx->pc = 0x39bb20u;

    // 0x39bb20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x39bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x39bb24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x39bb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bb28: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x39bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x39bb2c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x39bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x39bb30: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x39bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x39bb34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39bb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb38: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x39bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x39bb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39bb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb40: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x39bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x39bb44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb48: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x39bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x39bb4c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x39bb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x39bb50: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x39bb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x39bb54: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x39bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x39bb58: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x39bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x39bb5c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x39bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x39bb60: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x39bb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x39bb64: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39BB64u;
    SET_GPR_U32(ctx, 31, 0x39BB6Cu);
    ctx->pc = 0x39BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB64u;
    // 0x39bb68: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39BB64u, 0x39BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB6Cu;
label_39bb6c:
    // 0x39bb6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bb70: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39bb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39bb74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39bb78: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x39bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x39bb7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BB7Cu;
    {
        const bool branch_taken_0x39bb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB7Cu;
        // 0x39bb80: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb7c) {
            ctx->pc = 0x39BB8Cu;
            goto label_39bb8c;
        }
    }
    ctx->pc = 0x39BB84u;
    // 0x39bb84: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x39bb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x39bb88: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x39bb88u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2));
label_39bb8c:
    // 0x39bb8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bb90: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x39bb90u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x39bb94: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_39bb98:
    // 0x39bb98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bb9c: 0x0  nop
    ctx->pc = 0x39bb9cu;
    // NOP
    // 0x39bba0: 0x0  nop
    ctx->pc = 0x39bba0u;
    // NOP
    // 0x39bba4: 0x0  nop
    ctx->pc = 0x39bba4u;
    // NOP
    // 0x39bba8: 0x0  nop
    ctx->pc = 0x39bba8u;
    // NOP
    // 0x39bbac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BBACu;
    {
        const bool branch_taken_0x39bbac = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39bbac) {
            ctx->pc = 0x39BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bb98;
        }
    }
    ctx->pc = 0x39BBB4u;
    // 0x39bbb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39bbb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bbbc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39bbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39bbc0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39bbc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39bbc4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
    // 0x39bbc8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x39bbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x39bbcc: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x39bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x39bbd0: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x39bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x39bbd4: 0x0  nop
    ctx->pc = 0x39bbd4u;
    // NOP
label_39bbd8:
    // 0x39bbd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39bbdc: 0x0  nop
    ctx->pc = 0x39bbdcu;
    // NOP
    // 0x39bbe0: 0x0  nop
    ctx->pc = 0x39bbe0u;
    // NOP
    // 0x39bbe4: 0x0  nop
    ctx->pc = 0x39bbe4u;
    // NOP
    // 0x39bbe8: 0x0  nop
    ctx->pc = 0x39bbe8u;
    // NOP
    // 0x39bbec: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BBECu;
    {
        const bool branch_taken_0x39bbec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39bbec) {
            ctx->pc = 0x39BBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bbd8;
        }
    }
    ctx->pc = 0x39BBF4u;
    // 0x39bbf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39bbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bbf8: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x39BBF8u;
    SET_GPR_U32(ctx, 31, 0x39BC00u);
    ctx->pc = 0x39BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BBF8u;
    // 0x39bbfc: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x39BBF8u, 0x39BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC00u;
label_39bc00:
    // 0x39bc00: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x39bc00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x39bc04: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x39bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39bc08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39bc0c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x39bc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39bc10: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x39bc10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x39bc14: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x39bc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x39bc18: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x39bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x39bc1c: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x39bc1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x39bc20: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x39BC20u;
    {
        const bool branch_taken_0x39bc20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC20u;
        // 0x39bc24: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc20) {
            ctx->pc = 0x39BE28u;
            goto label_39be28;
        }
    }
    ctx->pc = 0x39BC28u;
    // 0x39bc28: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bc2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39bc30: 0x24a5c140  addiu       $a1, $a1, -0x3EC0
    ctx->pc = 0x39bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951232));
    // 0x39bc34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39bc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc38: 0xc0ebe70  jal         func_3AF9C0
    ctx->pc = 0x39BC38u;
    SET_GPR_U32(ctx, 31, 0x39BC40u);
    ctx->pc = 0x39BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC38u;
    // 0x39bc3c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9C0u, 0x39BC38u, 0x39BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC40u;
label_39bc40:
    // 0x39bc40: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x39bc40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39bc48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39bc4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39bc50: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x39bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x39bc54: 0xc0ec204  jal         func_3B0810
    ctx->pc = 0x39BC54u;
    SET_GPR_U32(ctx, 31, 0x39BC5Cu);
    ctx->pc = 0x39BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC54u;
    // 0x39bc58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0810u, 0x39BC54u, 0x39BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC5Cu;
label_39bc5c:
    // 0x39bc5c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39BC5Cu;
    SET_GPR_U32(ctx, 31, 0x39BC64u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39BC5Cu, 0x39BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC64u;
label_39bc64:
    // 0x39bc64: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x39bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39bc68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bc6c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x39bc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x39bc70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39bc74: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x39bc74u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5));
    // 0x39bc78: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x39bc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x39bc7c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x39bc7cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20));
    // 0x39bc80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bc84: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x39bc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x39bc88: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x39bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x39bc8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39bc8cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4));
    // 0x39bc90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BC90u;
    {
        const bool branch_taken_0x39bc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC90u;
        // 0x39bc94: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc90) {
            ctx->pc = 0x39BCA4u;
            goto label_39bca4;
        }
    }
    ctx->pc = 0x39BC98u;
    // 0x39bc98: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39BC98u;
    SET_GPR_U32(ctx, 31, 0x39BCA0u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39BC98u, 0x39BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCA0u;
label_39bca0:
    // 0x39bca0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x39bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_39bca4:
    // 0x39bca4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x39bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x39bca8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x39bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bcac: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x39bcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x39bcb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39bcb4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x39bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x39bcb8: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x39bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x39bcbc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x39bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x39bcc0: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x39BCC0u;
    {
        const bool branch_taken_0x39bcc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BCC0u;
        // 0x39bcc4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bcc0) {
            ctx->pc = 0x39BDFCu;
            goto label_39bdfc;
        }
    }
    ctx->pc = 0x39BCC8u;
    // 0x39bcc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bccc: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x39bcccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x39bcd0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x39bcd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39bcd4: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x39bcd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x39bcd8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39bcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39bcdc: 0x0  nop
    ctx->pc = 0x39bcdcu;
    // NOP
label_39bce0:
    // 0x39bce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bce4: 0x0  nop
    ctx->pc = 0x39bce4u;
    // NOP
    // 0x39bce8: 0x0  nop
    ctx->pc = 0x39bce8u;
    // NOP
    // 0x39bcec: 0x0  nop
    ctx->pc = 0x39bcecu;
    // NOP
    // 0x39bcf0: 0x0  nop
    ctx->pc = 0x39bcf0u;
    // NOP
    // 0x39bcf4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BCF4u;
    {
        const bool branch_taken_0x39bcf4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39bcf4) {
            ctx->pc = 0x39BCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bce0;
        }
    }
    ctx->pc = 0x39BCFCu;
    // 0x39bcfc: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39BCFCu;
    SET_GPR_U32(ctx, 31, 0x39BD04u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39BCFCu, 0x39BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD04u;
label_39bd04:
    // 0x39bd04: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x39bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x39bd08: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39bd0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39bd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x39bd10: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x39bd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x39bd14: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x39bd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x39bd18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39bd1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x39bd20: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x39bd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x39bd24: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x39bd24u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18));
    // 0x39bd28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bd2c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x39bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x39bd30: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x39bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39bd34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39bd34u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4));
    // 0x39bd38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BD38u;
    {
        const bool branch_taken_0x39bd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD38u;
        // 0x39bd3c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd38) {
            ctx->pc = 0x39BD4Cu;
            goto label_39bd4c;
        }
    }
    ctx->pc = 0x39BD40u;
    // 0x39bd40: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39BD40u;
    SET_GPR_U32(ctx, 31, 0x39BD48u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39BD40u, 0x39BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD48u;
label_39bd48:
    // 0x39bd48: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x39bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_39bd4c:
    // 0x39bd4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39bd50: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x39bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x39bd54: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39bd58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39bd58u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39bd5c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x39bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x39bd60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39bd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39bd64: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x39bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x39bd68: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39BD68u;
    {
        const bool branch_taken_0x39bd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD68u;
        // 0x39bd6c: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd68) {
            ctx->pc = 0x39BD84u;
            goto label_39bd84;
        }
    }
    ctx->pc = 0x39BD70u;
    // 0x39bd70: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x39bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x39bd74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BD74u;
    {
        const bool branch_taken_0x39bd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD74u;
        // 0x39bd78: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd74) {
            ctx->pc = 0x39BD84u;
            goto label_39bd84;
        }
    }
    ctx->pc = 0x39BD7Cu;
    // 0x39bd7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BD7Cu;
    {
        const bool branch_taken_0x39bd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD7Cu;
        // 0x39bd80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd7c) {
            ctx->pc = 0x39BD8Cu;
            goto label_39bd8c;
        }
    }
    ctx->pc = 0x39BD84u;
label_39bd84:
    // 0x39bd84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39BD84u;
    {
        const bool branch_taken_0x39bd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD84u;
        // 0x39bd88: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd84) {
            ctx->pc = 0x39BD90u;
            goto label_39bd90;
        }
    }
    ctx->pc = 0x39BD8Cu;
label_39bd8c:
    // 0x39bd8c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x39bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_39bd90:
    // 0x39bd90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39bd94: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x39bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x39bd98: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x39bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x39bd9c: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39BD9Cu;
    SET_GPR_U32(ctx, 31, 0x39BDA4u);
    ctx->pc = 0x39BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD9Cu;
    // 0x39bda0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39BD9Cu, 0x39BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDA4u;
label_39bda4:
    // 0x39bda4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bda8: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x39bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x39bdac: 0x0  nop
    ctx->pc = 0x39bdacu;
    // NOP
label_39bdb0:
    // 0x39bdb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bdb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x39bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x39bdb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39bdbc: 0x0  nop
    ctx->pc = 0x39bdbcu;
    // NOP
    // 0x39bdc0: 0x0  nop
    ctx->pc = 0x39bdc0u;
    // NOP
    // 0x39bdc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BDC4u;
    {
        const bool branch_taken_0x39bdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bdc4) {
            ctx->pc = 0x39BDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bdb0;
        }
    }
    ctx->pc = 0x39BDCCu;
    // 0x39bdcc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bdd0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39bdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39bdd4: 0x0  nop
    ctx->pc = 0x39bdd4u;
    // NOP
label_39bdd8:
    // 0x39bdd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bddc: 0x0  nop
    ctx->pc = 0x39bddcu;
    // NOP
    // 0x39bde0: 0x0  nop
    ctx->pc = 0x39bde0u;
    // NOP
    // 0x39bde4: 0x0  nop
    ctx->pc = 0x39bde4u;
    // NOP
    // 0x39bde8: 0x0  nop
    ctx->pc = 0x39bde8u;
    // NOP
    // 0x39bdec: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BDECu;
    {
        const bool branch_taken_0x39bdec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39bdec) {
            ctx->pc = 0x39BDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bdd8;
        }
    }
    ctx->pc = 0x39BDF4u;
    // 0x39bdf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39BDF4u;
    {
        const bool branch_taken_0x39bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bdf4) {
            ctx->pc = 0x39BE0Cu;
            goto label_39be0c;
        }
    }
    ctx->pc = 0x39BDFCu;
label_39bdfc:
    // 0x39bdfc: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x39bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x39be00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39be00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be04: 0xc0e6e58  jal         func_39B960
    ctx->pc = 0x39BE04u;
    SET_GPR_U32(ctx, 31, 0x39BE0Cu);
    ctx->pc = 0x39BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE04u;
    // 0x39be08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B960u, 0x39BE04u, 0x39BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE0Cu;
label_39be0c:
    // 0x39be0c: 0xc0ec1ea  jal         func_3B07A8
    ctx->pc = 0x39BE0Cu;
    SET_GPR_U32(ctx, 31, 0x39BE14u);
    ctx->pc = 0x39BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE0Cu;
    // 0x39be10: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B07A8u, 0x39BE0Cu, 0x39BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE14u;
label_39be14:
    // 0x39be14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39be14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be18: 0xc0ebe74  jal         func_3AF9D0
    ctx->pc = 0x39BE18u;
    SET_GPR_U32(ctx, 31, 0x39BE20u);
    ctx->pc = 0x39BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE18u;
    // 0x39be1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9D0u, 0x39BE18u, 0x39BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE20u;
label_39be20:
    // 0x39be20: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x39BE20u;
    {
        const bool branch_taken_0x39be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE20u;
        // 0x39be24: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be20) {
            ctx->pc = 0x39BFC0u;
            goto label_39bfc0;
        }
    }
    ctx->pc = 0x39BE28u;
label_39be28:
    // 0x39be28: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39BE28u;
    SET_GPR_U32(ctx, 31, 0x39BE30u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39BE28u, 0x39BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE30u;
label_39be30:
    // 0x39be30: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x39be30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39be34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39be34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39be38: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x39be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x39be3c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x39be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x39be40: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x39be40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x39be44: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x39be44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x39be48: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x39be48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x39be4c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39be50: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x39be50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x39be54: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x39be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x39be58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x39be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39be5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x39be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x39be60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BE60u;
    {
        const bool branch_taken_0x39be60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE60u;
        // 0x39be64: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be60) {
            ctx->pc = 0x39BE70u;
            goto label_39be70;
        }
    }
    ctx->pc = 0x39BE68u;
    // 0x39be68: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39BE68u;
    SET_GPR_U32(ctx, 31, 0x39BE70u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39BE68u, 0x39BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE70u;
label_39be70:
    // 0x39be70: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x39BE70u;
    {
        const bool branch_taken_0x39be70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE70u;
        // 0x39be74: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be70) {
            ctx->pc = 0x39BFACu;
            goto label_39bfac;
        }
    }
    ctx->pc = 0x39BE78u;
    // 0x39be78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39be78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39be7c: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x39be7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x39be80: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x39be80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39be84: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x39be84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x39be88: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39be88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39be8c: 0x0  nop
    ctx->pc = 0x39be8cu;
    // NOP
label_39be90:
    // 0x39be90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39be94: 0x0  nop
    ctx->pc = 0x39be94u;
    // NOP
    // 0x39be98: 0x0  nop
    ctx->pc = 0x39be98u;
    // NOP
    // 0x39be9c: 0x0  nop
    ctx->pc = 0x39be9cu;
    // NOP
    // 0x39bea0: 0x0  nop
    ctx->pc = 0x39bea0u;
    // NOP
    // 0x39bea4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BEA4u;
    {
        const bool branch_taken_0x39bea4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39bea4) {
            ctx->pc = 0x39BE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39be90;
        }
    }
    ctx->pc = 0x39BEACu;
    // 0x39beac: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39BEACu;
    SET_GPR_U32(ctx, 31, 0x39BEB4u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39BEACu, 0x39BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEB4u;
label_39beb4:
    // 0x39beb4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x39beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x39beb8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39bebc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39bebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x39bec0: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x39bec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x39bec4: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x39bec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x39bec8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39becc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39beccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x39bed0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x39bed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x39bed4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x39bed4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18));
    // 0x39bed8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bedc: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x39bedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x39bee0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x39bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39bee4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39bee4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4));
    // 0x39bee8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BEE8u;
    {
        const bool branch_taken_0x39bee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEE8u;
        // 0x39beec: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bee8) {
            ctx->pc = 0x39BEFCu;
            goto label_39befc;
        }
    }
    ctx->pc = 0x39BEF0u;
    // 0x39bef0: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39BEF0u;
    SET_GPR_U32(ctx, 31, 0x39BEF8u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39BEF0u, 0x39BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEF8u;
label_39bef8:
    // 0x39bef8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x39bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_39befc:
    // 0x39befc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39befcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39bf00: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x39bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x39bf04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39bf08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39bf08u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39bf0c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x39bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x39bf10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39bf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39bf14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x39bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x39bf18: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39BF18u;
    {
        const bool branch_taken_0x39bf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF18u;
        // 0x39bf1c: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf18) {
            ctx->pc = 0x39BF34u;
            goto label_39bf34;
        }
    }
    ctx->pc = 0x39BF20u;
    // 0x39bf20: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x39bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x39bf24: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BF24u;
    {
        const bool branch_taken_0x39bf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF24u;
        // 0x39bf28: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf24) {
            ctx->pc = 0x39BF34u;
            goto label_39bf34;
        }
    }
    ctx->pc = 0x39BF2Cu;
    // 0x39bf2c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BF2Cu;
    {
        const bool branch_taken_0x39bf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF2Cu;
        // 0x39bf30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf2c) {
            ctx->pc = 0x39BF3Cu;
            goto label_39bf3c;
        }
    }
    ctx->pc = 0x39BF34u;
label_39bf34:
    // 0x39bf34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39BF34u;
    {
        const bool branch_taken_0x39bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF34u;
        // 0x39bf38: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf34) {
            ctx->pc = 0x39BF40u;
            goto label_39bf40;
        }
    }
    ctx->pc = 0x39BF3Cu;
label_39bf3c:
    // 0x39bf3c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x39bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_39bf40:
    // 0x39bf40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39bf44: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x39bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x39bf48: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x39bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x39bf4c: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39BF4Cu;
    SET_GPR_U32(ctx, 31, 0x39BF54u);
    ctx->pc = 0x39BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF4Cu;
    // 0x39bf50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39BF4Cu, 0x39BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF54u;
label_39bf54:
    // 0x39bf54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bf58: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x39bf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x39bf5c: 0x0  nop
    ctx->pc = 0x39bf5cu;
    // NOP
label_39bf60:
    // 0x39bf60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bf64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x39bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x39bf68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39bf6c: 0x0  nop
    ctx->pc = 0x39bf6cu;
    // NOP
    // 0x39bf70: 0x0  nop
    ctx->pc = 0x39bf70u;
    // NOP
    // 0x39bf74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BF74u;
    {
        const bool branch_taken_0x39bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bf74) {
            ctx->pc = 0x39BF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bf60;
        }
    }
    ctx->pc = 0x39BF7Cu;
    // 0x39bf7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bf80: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39bf84: 0x0  nop
    ctx->pc = 0x39bf84u;
    // NOP
label_39bf88:
    // 0x39bf88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bf8c: 0x0  nop
    ctx->pc = 0x39bf8cu;
    // NOP
    // 0x39bf90: 0x0  nop
    ctx->pc = 0x39bf90u;
    // NOP
    // 0x39bf94: 0x0  nop
    ctx->pc = 0x39bf94u;
    // NOP
    // 0x39bf98: 0x0  nop
    ctx->pc = 0x39bf98u;
    // NOP
    // 0x39bf9c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BF9Cu;
    {
        const bool branch_taken_0x39bf9c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39bf9c) {
            ctx->pc = 0x39BF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bf88;
        }
    }
    ctx->pc = 0x39BFA4u;
    // 0x39bfa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39BFA4u;
    {
        const bool branch_taken_0x39bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFA4u;
        // 0x39bfa8: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfa4) {
            ctx->pc = 0x39BFC0u;
            goto label_39bfc0;
        }
    }
    ctx->pc = 0x39BFACu;
label_39bfac:
    // 0x39bfac: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x39bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x39bfb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39bfb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bfb4: 0xc0e6e58  jal         func_39B960
    ctx->pc = 0x39BFB4u;
    SET_GPR_U32(ctx, 31, 0x39BFBCu);
    ctx->pc = 0x39BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFB4u;
    // 0x39bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B960u, 0x39BFB4u, 0x39BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFBCu;
label_39bfbc:
    // 0x39bfbc: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x39bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_39bfc0:
    // 0x39bfc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39bfc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39bfc8: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39BFC8u;
    SET_GPR_U32(ctx, 31, 0x39BFD0u);
    ctx->pc = 0x39BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFC8u;
    // 0x39bfcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39BFC8u, 0x39BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFD0u;
label_39bfd0:
    // 0x39bfd0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x39bfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39bfd4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x39bfd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39bfd8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x39bfd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39bfdc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x39bfdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39bfe0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x39bfe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39bfe4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x39bfe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39bfe8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x39bfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39bfec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x39bfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x39BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFF0u;
        // 0x39bff4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BFF8u;
}
