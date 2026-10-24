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

// Function: viBufAddDMA
// Address: 0x355c88 - 0x355e88
void viBufAddDMA_0x355c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufAddDMA_0x355c88");
#endif

    switch (ctx->pc) {
        case 0x355cc0u: goto label_355cc0;
        case 0x355cd4u: goto label_355cd4;
        case 0x355ce8u: goto label_355ce8;
        case 0x355d08u: goto label_355d08;
        case 0x355db8u: goto label_355db8;
        case 0x355dc8u: goto label_355dc8;
        case 0x355df4u: goto label_355df4;
        case 0x355e4cu: goto label_355e4c;
        case 0x355e54u: goto label_355e54;
        default: break;
    }

    ctx->pc = 0x355c88u;

    // 0x355c88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x355c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x355c8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x355c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x355c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x355c98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x355c98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x355ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x355ca4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x355ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x355ca8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x355ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x355cac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x355cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x355cb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x355cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x355cb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x355cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x355cb8: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x355CB8u;
    SET_GPR_U32(ctx, 31, 0x355CC0u);
    ctx->pc = 0x355CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CB8u;
    // 0x355cbc: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x355CB8u, 0x355CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CC0u;
label_355cc0:
    // 0x355cc0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x355cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x355cc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x355CC4u;
    {
        const bool branch_taken_0x355cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355cc4) {
            ctx->pc = 0x355CE0u;
            goto label_355ce0;
        }
    }
    ctx->pc = 0x355CCCu;
    // 0x355ccc: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x355CCCu;
    SET_GPR_U32(ctx, 31, 0x355CD4u);
    ctx->pc = 0x355CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CCCu;
    // 0x355cd0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x355CCCu, 0x355CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CD4u;
label_355cd4:
    // 0x355cd4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x355CD4u;
    {
        const bool branch_taken_0x355cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CD4u;
        // 0x355cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cd4) {
            ctx->pc = 0x355E58u;
            goto label_355e58;
        }
    }
    ctx->pc = 0x355CDCu;
    // 0x355cdc: 0x0  nop
    ctx->pc = 0x355cdcu;
    // NOP
label_355ce0:
    // 0x355ce0: 0xc0d5620  jal         func_355880
    ctx->pc = 0x355CE0u;
    SET_GPR_U32(ctx, 31, 0x355CE8u);
    ctx->pc = 0x355CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CE0u;
    // 0x355ce4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355880u, 0x355CE0u, 0x355CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CE8u;
label_355ce8:
    // 0x355ce8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x355ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x355cec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x355cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x355cf0: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x355cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x355cf4: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x355cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x355cf8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x355cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x355cfc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x355cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x355d00: 0xc0d55f2  jal         func_3557C8
    ctx->pc = 0x355D00u;
    SET_GPR_U32(ctx, 31, 0x355D08u);
    ctx->pc = 0x355D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355D00u;
    // 0x355d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557C8u, 0x355D00u, 0x355D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D08u;
label_355d08:
    // 0x355d08: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x355d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x355d0c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x355d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x355d10: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x355d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x355d14: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x355D14u;
    {
        const bool branch_taken_0x355d14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d14) {
            ctx->pc = 0x355D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355D14u;
            // 0x355d18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x355D1Cu;
            goto label_355d1c;
        }
    }
    ctx->pc = 0x355D1Cu;
label_355d1c:
    // 0x355d1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355d20: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x355d20u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355d24: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x355d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x355d28: 0x2010  mfhi        $a0
    ctx->pc = 0x355d28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x355d2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x355d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x355d30: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x355d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x355d34: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x355d34u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355d38: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x355d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x355d3c: 0x2810  mfhi        $a1
    ctx->pc = 0x355d3cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x355d40: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x355d44: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x355d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x355d48: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x355d48u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355d4c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x355d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x355d50: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x355d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x355d54: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x355d58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x355d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d5c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x355d5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x355d60: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x355d60u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x355d64: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x355d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x355d68: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x355d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x355d6c: 0x8010  mfhi        $s0
    ctx->pc = 0x355d6cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x355d70: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x355D70u;
    {
        const bool branch_taken_0x355d70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x355D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D70u;
        // 0x355d74: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d70) {
            ctx->pc = 0x355DB8u;
            goto label_355db8;
        }
    }
    ctx->pc = 0x355D78u;
    // 0x355d78: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x355d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x355d7c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x355d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x355d80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x355d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x355d84: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x355D84u;
    {
        const bool branch_taken_0x355d84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d84) {
            ctx->pc = 0x355D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355D84u;
            // 0x355d88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x355D8Cu;
            goto label_355d8c;
        }
    }
    ctx->pc = 0x355D8Cu;
label_355d8c:
    // 0x355d8c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x355d8cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355d90: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x355d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355d94: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x355d94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x355d98: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x355d98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355d9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x355d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355da0: 0x2010  mfhi        $a0
    ctx->pc = 0x355da0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x355da4: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x355da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x355da8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x355da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x355dac: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x355dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x355db0: 0xc0d563a  jal         func_3558E8
    ctx->pc = 0x355DB0u;
    SET_GPR_U32(ctx, 31, 0x355DB8u);
    ctx->pc = 0x355DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DB0u;
    // 0x355db4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3558E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3558E8u, 0x355DB0u, 0x355DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DB8u;
label_355db8:
    // 0x355db8: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x355DB8u;
    {
        const bool branch_taken_0x355db8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x355DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DB8u;
        // 0x355dbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355db8) {
            ctx->pc = 0x355E1Cu;
            goto label_355e1c;
        }
    }
    ctx->pc = 0x355DC0u;
    // 0x355dc0: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x355dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x355dc4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x355dc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_355dc8:
    // 0x355dc8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x355dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x355dcc: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x355dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x355dd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x355dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355dd4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x355dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x355dd8: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x355dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x355ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x355ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355de0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x355de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x355de4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x355de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x355de8: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x355de8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x355dec: 0xc0d563a  jal         func_3558E8
    ctx->pc = 0x355DECu;
    SET_GPR_U32(ctx, 31, 0x355DF4u);
    ctx->pc = 0x355DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DECu;
    // 0x355df0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3558E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3558E8u, 0x355DECu, 0x355DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DF4u;
label_355df4:
    // 0x355df4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x355df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x355df8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x355df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x355dfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x355dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x355e00: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x355e00u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x355e04: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x355e04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355e08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x355E08u;
    {
        const bool branch_taken_0x355e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e08) {
            ctx->pc = 0x355E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355E08u;
            // 0x355e0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x355E10u;
            goto label_355e10;
        }
    }
    ctx->pc = 0x355E10u;
label_355e10:
    // 0x355e10: 0x2010  mfhi        $a0
    ctx->pc = 0x355e10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x355e14: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x355E14u;
    {
        const bool branch_taken_0x355e14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x355E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E14u;
        // 0x355e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e14) {
            ctx->pc = 0x355DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355dc8;
        }
    }
    ctx->pc = 0x355E1Cu;
label_355e1c:
    // 0x355e1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x355e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x355e20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x355e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x355e24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x355E24u;
    {
        const bool branch_taken_0x355e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E24u;
        // 0x355e28: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e24) {
            ctx->pc = 0x355E4Cu;
            goto label_355e4c;
        }
    }
    ctx->pc = 0x355E2Cu;
    // 0x355e2c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x355E2Cu;
    {
        const bool branch_taken_0x355e2c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E2Cu;
        // 0x355e30: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e2c) {
            ctx->pc = 0x355E44u;
            goto label_355e44;
        }
    }
    ctx->pc = 0x355E34u;
    // 0x355e34: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x355e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x355e38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x355e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x355e3c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x355e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x355e40: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x355e40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_355e44:
    // 0x355e44: 0xc0d5620  jal         func_355880
    ctx->pc = 0x355E44u;
    SET_GPR_U32(ctx, 31, 0x355E4Cu);
    ctx->pc = 0x355E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355E44u;
    // 0x355e48: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x355880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355880u, 0x355E44u, 0x355E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E4Cu;
label_355e4c:
    // 0x355e4c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x355E4Cu;
    SET_GPR_U32(ctx, 31, 0x355E54u);
    ctx->pc = 0x355E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355E4Cu;
    // 0x355e50: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x355E4Cu, 0x355E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E54u;
label_355e54:
    // 0x355e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355e58:
    // 0x355e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355e5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x355e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355e60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x355e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355e64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x355e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355e68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x355e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355e6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x355e6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355e70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x355e70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355e74: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x355e74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x355e78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x355e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x355E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E7Cu;
        // 0x355e80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355E84u;
    // 0x355e84: 0x0  nop
    ctx->pc = 0x355e84u;
    // NOP
    ctx->pc = 0x355e88u;
}
