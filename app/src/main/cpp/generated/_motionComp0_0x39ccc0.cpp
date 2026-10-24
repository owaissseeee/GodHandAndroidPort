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

// Function: _motionComp0
// Address: 0x39ccc0 - 0x39cf10
void _motionComp0_0x39ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionComp0_0x39ccc0");
#endif

    switch (ctx->pc) {
        case 0x39cd40u: goto label_39cd40;
        case 0x39cd94u: goto label_39cd94;
        case 0x39cdacu: goto label_39cdac;
        case 0x39cdc8u: goto label_39cdc8;
        case 0x39cdecu: goto label_39cdec;
        default: break;
    }

    ctx->pc = 0x39ccc0u;

    // 0x39ccc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x39ccc4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x39ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x39ccc8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x39ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x39cccc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x39ccccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ccd0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x39ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x39ccd4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x39ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x39ccd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39ccdc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x39ccdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cce0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x39cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x39cce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cce8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x39cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x39ccec: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x39ccecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x39ccf0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x39ccf4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39ccf8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x39ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x39ccfc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x39ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x39cd00: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39cd04: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x39cd04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39cd08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39CD08u;
    {
        const bool branch_taken_0x39cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cd08) {
            ctx->pc = 0x39CD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CD08u;
            // 0x39cd0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CD10u;
            goto label_39cd10;
        }
    }
    ctx->pc = 0x39CD10u;
label_39cd10:
    // 0x39cd10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x39cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cd14: 0x1810  mfhi        $v1
    ctx->pc = 0x39cd14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x39cd18: 0xb812  mflo        $s7
    ctx->pc = 0x39cd18u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x39cd1c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x39cd1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd20: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x39cd20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x39cd24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39CD24u;
    {
        const bool branch_taken_0x39cd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD24u;
        // 0x39cd28: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd24) {
            ctx->pc = 0x39CD70u;
            goto label_39cd70;
        }
    }
    ctx->pc = 0x39CD2Cu;
    // 0x39cd2c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x39cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39cd30: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x39cd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x39cd34: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x39cd34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x39cd38: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x39cd38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x39cd3c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x39cd3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_39cd40:
    // 0x39cd40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39cd44: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x39cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x39cd48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u));
    // 0x39cd4c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x39cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x39cd50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x39cd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39cd54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39CD54u;
    {
        const bool branch_taken_0x39cd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cd54) {
            ctx->pc = 0x39CD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39cd40;
        }
    }
    ctx->pc = 0x39CD5Cu;
    // 0x39cd5c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39cd60: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x39cd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39cd64: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x39cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x39cd68: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x39CD68u;
    {
        const bool branch_taken_0x39cd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD68u;
        // 0x39cd6c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd68) {
            ctx->pc = 0x39CE04u;
            goto label_39ce04;
        }
    }
    ctx->pc = 0x39CD70u;
label_39cd70:
    // 0x39cd70: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x39cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x39cd74: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x39cd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x39cd78: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39CD78u;
    {
        const bool branch_taken_0x39cd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD78u;
        // 0x39cd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd78) {
            ctx->pc = 0x39CDA4u;
            goto label_39cda4;
        }
    }
    ctx->pc = 0x39CD80u;
    // 0x39cd80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39cd84: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x39cd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd88: 0x24a5e6a0  addiu       $a1, $a1, -0x1960
    ctx->pc = 0x39cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    // 0x39cd8c: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39CD8Cu;
    SET_GPR_U32(ctx, 31, 0x39CD94u);
    ctx->pc = 0x39CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD8Cu;
    // 0x39cd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39CD8Cu, 0x39CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD94u;
label_39cd94:
    // 0x39cd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cd98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39cd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd9c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x39CD9Cu;
    {
        const bool branch_taken_0x39cd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD9Cu;
        // 0x39cda0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd9c) {
            ctx->pc = 0x39CEE0u;
            goto label_39cee0;
        }
    }
    ctx->pc = 0x39CDA4u;
label_39cda4:
    // 0x39cda4: 0xc0e716e  jal         func_39C5B8
    ctx->pc = 0x39CDA4u;
    SET_GPR_U32(ctx, 31, 0x39CDACu);
    ctx->pc = 0x39CDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDA4u;
    // 0x39cda8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C5B8u, 0x39CDA4u, 0x39CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDACu;
label_39cdac:
    // 0x39cdac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39cdb0: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x39cdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x39cdb4: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x39cdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x39cdb8: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x39cdb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x39cdbc: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x39cdbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x39cdc0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x39cdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x39cdc4: 0x0  nop
    ctx->pc = 0x39cdc4u;
    // NOP
label_39cdc8:
    // 0x39cdc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39cdcc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x39cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x39cdd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39cdd4: 0x0  nop
    ctx->pc = 0x39cdd4u;
    // NOP
    // 0x39cdd8: 0x0  nop
    ctx->pc = 0x39cdd8u;
    // NOP
    // 0x39cddc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39CDDCu;
    {
        const bool branch_taken_0x39cddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cddc) {
            ctx->pc = 0x39CDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39cdc8;
        }
    }
    ctx->pc = 0x39CDE4u;
    // 0x39cde4: 0xc0e7bda  jal         func_39EF68
    ctx->pc = 0x39CDE4u;
    SET_GPR_U32(ctx, 31, 0x39CDECu);
    ctx->pc = 0x39CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDE4u;
    // 0x39cde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EF68u, 0x39CDE4u, 0x39CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDECu;
label_39cdec:
    // 0x39cdec: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39cdf0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x39cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39cdf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cdf8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x39cdf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39cdfc: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x39cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x39ce00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_39ce04:
    // 0x39ce04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ce08: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39CE08u;
    {
        const bool branch_taken_0x39ce08 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ce08) {
            ctx->pc = 0x39CE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CE08u;
            // 0x39ce0c: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CE34u;
            goto label_39ce34;
        }
    }
    ctx->pc = 0x39CE10u;
    // 0x39ce10: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x39ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x39ce14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39CE14u;
    {
        const bool branch_taken_0x39ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE14u;
        // 0x39ce18: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce14) {
            ctx->pc = 0x39CE30u;
            goto label_39ce30;
        }
    }
    ctx->pc = 0x39CE1Cu;
    // 0x39ce1c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39ce20: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x39ce20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39ce24: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x39ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x39ce28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39CE28u;
    {
        const bool branch_taken_0x39ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE28u;
        // 0x39ce2c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce28) {
            ctx->pc = 0x39CE44u;
            goto label_39ce44;
        }
    }
    ctx->pc = 0x39CE30u;
label_39ce30:
    // 0x39ce30: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_39ce34:
    // 0x39ce34: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x39ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39ce38: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x39ce38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39ce3c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x39ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x39ce40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_39ce44:
    // 0x39ce44: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39ce48: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x39ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39ce4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ce50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ce54: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x39ce54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39ce58: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x39ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x39ce5c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x39ce60: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x39ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39ce64: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39CE64u;
    {
        const bool branch_taken_0x39ce64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE64u;
        // 0x39ce68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce64) {
            ctx->pc = 0x39CEA0u;
            goto label_39cea0;
        }
    }
    ctx->pc = 0x39CE6Cu;
    // 0x39ce6c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x39ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39ce70: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x39ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x39ce74: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x39ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x39ce78: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x39ce78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39ce7c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x39ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x39ce80: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x39ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x39ce84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39ce88: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x39ce88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39ce8c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x39ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x39ce90: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x39ce90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39ce94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ce98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39CE98u;
    {
        const bool branch_taken_0x39ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE98u;
        // 0x39ce9c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ce98) {
            ctx->pc = 0x39CEDCu;
            goto label_39cedc;
        }
    }
    ctx->pc = 0x39CEA0u;
label_39cea0:
    // 0x39cea0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39CEA0u;
    {
        const bool branch_taken_0x39cea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x39cea0) {
            ctx->pc = 0x39CEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CEA0u;
            // 0x39cea4: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CEACu;
            goto label_39ceac;
        }
    }
    ctx->pc = 0x39CEA8u;
    // 0x39cea8: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x39cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_39ceac:
    // 0x39ceac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x39ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x39ceb0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x39ceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x39ceb4: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x39ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39ceb8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x39ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39cebc: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x39cebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x39cec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39cec4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x39cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x39cec8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x39cec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x39cecc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x39ceccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39ced0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x39ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x39ced4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ced8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39cedc:
    // 0x39cedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cee0:
    // 0x39cee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39cee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39cee4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39cee4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39cee8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39cee8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39ceec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39ceecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39cef0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39cef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39cef4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39cef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39cef8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39cef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39cefc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39cefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39cf00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39cf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cf04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39cf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x39CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF08u;
        // 0x39cf0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CF10u;
}
