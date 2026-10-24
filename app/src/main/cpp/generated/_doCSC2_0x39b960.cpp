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

// Function: _doCSC2
// Address: 0x39b960 - 0x39bb20
void _doCSC2_0x39b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doCSC2_0x39b960");
#endif

    switch (ctx->pc) {
        case 0x39b9d0u: goto label_39b9d0;
        case 0x39ba00u: goto label_39ba00;
        case 0x39ba1cu: goto label_39ba1c;
        case 0x39ba24u: goto label_39ba24;
        case 0x39ba6cu: goto label_39ba6c;
        case 0x39ba94u: goto label_39ba94;
        case 0x39baa0u: goto label_39baa0;
        case 0x39bad0u: goto label_39bad0;
        case 0x39bad8u: goto label_39bad8;
        case 0x39bafcu: goto label_39bafc;
        case 0x39bb08u: goto label_39bb08;
        default: break;
    }

    ctx->pc = 0x39b960u;

    // 0x39b960: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x39b960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x39b964: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39b964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39b968: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x39b968u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39b96c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x39b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x39b970: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x39b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x39b974: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39b974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b978: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x39b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x39b97c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x39b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x39b980: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x39b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x39b984: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39b984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x39b988: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39b988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x39b98c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39b990: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x39b990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x39b994: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39b998: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39B998u;
    {
        const bool branch_taken_0x39b998 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b998) {
            ctx->pc = 0x39B99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B998u;
            // 0x39b99c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B9A0u;
            goto label_39b9a0;
        }
    }
    ctx->pc = 0x39B9A0u;
label_39b9a0:
    // 0x39b9a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39b9a4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x39b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x39b9a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39b9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b9ac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x39b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x39b9b0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x39b9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39b9b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x39b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x39b9b8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39b9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39b9bc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x39b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x39b9c0: 0x4012  mflo        $t0
    ctx->pc = 0x39b9c0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x39b9c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39b9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x39b9c8: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x39b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x39b9cc: 0x0  nop
    ctx->pc = 0x39b9ccu;
    // NOP
label_39b9d0:
    // 0x39b9d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39b9d4: 0x0  nop
    ctx->pc = 0x39b9d4u;
    // NOP
    // 0x39b9d8: 0x0  nop
    ctx->pc = 0x39b9d8u;
    // NOP
    // 0x39b9dc: 0x0  nop
    ctx->pc = 0x39b9dcu;
    // NOP
    // 0x39b9e0: 0x0  nop
    ctx->pc = 0x39b9e0u;
    // NOP
    // 0x39b9e4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39B9E4u;
    {
        const bool branch_taken_0x39b9e4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39b9e4) {
            ctx->pc = 0x39B9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b9d0;
        }
    }
    ctx->pc = 0x39B9ECu;
    // 0x39b9ec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39b9f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x39b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39b9f4: 0x24a5bff8  addiu       $a1, $a1, -0x4008
    ctx->pc = 0x39b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950904));
    // 0x39b9f8: 0xc0ebe70  jal         func_3AF9C0
    ctx->pc = 0x39B9F8u;
    SET_GPR_U32(ctx, 31, 0x39BA00u);
    ctx->pc = 0x39B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9F8u;
    // 0x39b9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9C0u, 0x39B9F8u, 0x39BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA00u;
label_39ba00:
    // 0x39ba00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39ba00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ba04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39ba08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39ba0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x39ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ba10: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x39ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x39ba14: 0xc0ec204  jal         func_3B0810
    ctx->pc = 0x39BA14u;
    SET_GPR_U32(ctx, 31, 0x39BA1Cu);
    ctx->pc = 0x39BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA14u;
    // 0x39ba18: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0810u, 0x39BA14u, 0x39BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA1Cu;
label_39ba1c:
    // 0x39ba1c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39BA1Cu;
    SET_GPR_U32(ctx, 31, 0x39BA24u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39BA1Cu, 0x39BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA24u;
label_39ba24:
    // 0x39ba24: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x39ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x39ba28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39ba2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39ba2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x39ba30: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x39ba30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x39ba34: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x39ba34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x39ba38: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39ba3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x39ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x39ba40: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x39ba40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x39ba44: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x39ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x39ba48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39ba4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39ba4cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x39ba50: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x39ba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x39ba54: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x39ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39ba58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x39ba58u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3));
    // 0x39ba5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BA5Cu;
    {
        const bool branch_taken_0x39ba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA5Cu;
        // 0x39ba60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba5c) {
            ctx->pc = 0x39BA70u;
            goto label_39ba70;
        }
    }
    ctx->pc = 0x39BA64u;
    // 0x39ba64: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39BA64u;
    SET_GPR_U32(ctx, 31, 0x39BA6Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39BA64u, 0x39BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA6Cu;
label_39ba6c:
    // 0x39ba6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39ba70:
    // 0x39ba70: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x39ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x39ba74: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39ba78: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x39ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x39ba7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x39ba80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39ba80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39ba84: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x39ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x39ba88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39ba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ba8c: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39BA8Cu;
    SET_GPR_U32(ctx, 31, 0x39BA94u);
    ctx->pc = 0x39BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA8Cu;
    // 0x39ba90: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39BA8Cu, 0x39BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA94u;
label_39ba94:
    // 0x39ba94: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x39ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39ba98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x39ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39ba9c: 0x0  nop
    ctx->pc = 0x39ba9cu;
    // NOP
label_39baa0:
    // 0x39baa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x39baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39baa4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39baa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39baa8: 0x0  nop
    ctx->pc = 0x39baa8u;
    // NOP
    // 0x39baac: 0x0  nop
    ctx->pc = 0x39baacu;
    // NOP
    // 0x39bab0: 0x0  nop
    ctx->pc = 0x39bab0u;
    // NOP
    // 0x39bab4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BAB4u;
    {
        const bool branch_taken_0x39bab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bab4) {
            ctx->pc = 0x39BAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39baa0;
        }
    }
    ctx->pc = 0x39BABCu;
    // 0x39babc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BABCu;
    {
        const bool branch_taken_0x39babc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BABCu;
        // 0x39bac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39babc) {
            ctx->pc = 0x39BAD0u;
            goto label_39bad0;
        }
    }
    ctx->pc = 0x39BAC4u;
    // 0x39bac4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39bac8: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39BAC8u;
    SET_GPR_U32(ctx, 31, 0x39BAD0u);
    ctx->pc = 0x39BACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAC8u;
    // 0x39bacc: 0x24a5e5f8  addiu       $a1, $a1, -0x1A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39BAC8u, 0x39BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BAD0u;
label_39bad0:
    // 0x39bad0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39bad4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39bad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_39bad8:
    // 0x39bad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39badc: 0x0  nop
    ctx->pc = 0x39badcu;
    // NOP
    // 0x39bae0: 0x0  nop
    ctx->pc = 0x39bae0u;
    // NOP
    // 0x39bae4: 0x0  nop
    ctx->pc = 0x39bae4u;
    // NOP
    // 0x39bae8: 0x0  nop
    ctx->pc = 0x39bae8u;
    // NOP
    // 0x39baec: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39BAECu;
    {
        const bool branch_taken_0x39baec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39baec) {
            ctx->pc = 0x39BAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bad8;
        }
    }
    ctx->pc = 0x39BAF4u;
    // 0x39baf4: 0xc0ec1ea  jal         func_3B07A8
    ctx->pc = 0x39BAF4u;
    SET_GPR_U32(ctx, 31, 0x39BAFCu);
    ctx->pc = 0x39BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAF4u;
    // 0x39baf8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B07A8u, 0x39BAF4u, 0x39BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BAFCu;
label_39bafc:
    // 0x39bafc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb00: 0xc0ebe74  jal         func_3AF9D0
    ctx->pc = 0x39BB00u;
    SET_GPR_U32(ctx, 31, 0x39BB08u);
    ctx->pc = 0x39BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB00u;
    // 0x39bb04: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9D0u, 0x39BB00u, 0x39BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB08u;
label_39bb08:
    // 0x39bb08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39bb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39bb0c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x39bb0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39bb10: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x39bb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39bb14: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x39bb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x39BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB18u;
        // 0x39bb1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BB20u;
}
