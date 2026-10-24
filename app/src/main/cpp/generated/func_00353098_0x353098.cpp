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

// Function: func_00353098
// Address: 0x353098 - 0x353250
void func_00353098_0x353098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353098_0x353098");
#endif

    switch (ctx->pc) {
        case 0x3531d8u: goto label_3531d8;
        case 0x353210u: goto label_353210;
        case 0x353240u: goto label_353240;
        default: break;
    }

    ctx->pc = 0x353098u;

    // 0x353098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35309c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x35309cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3530a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3530a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3530a4: 0x8dac1fc0  lw          $t4, 0x1FC0($t5)
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8128)));
    // 0x3530a8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3530a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3530ac: 0x258b0004  addiu       $t3, $t4, 0x4
    ctx->pc = 0x3530acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3530b0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3530b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3530b4: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3530b8: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x3530bc: 0xc72818  mult        $a1, $a2, $a3
    ctx->pc = 0x3530bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3530c0: 0x8dae0038  lw          $t6, 0x38($t5)
    ctx->pc = 0x3530c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 56)));
    // 0x3530c4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3530c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3530c8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3530c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3530cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3530CCu;
    {
        const bool branch_taken_0x3530cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3530D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530CCu;
        // 0x3530d0: 0x8d69001c  lw          $t1, 0x1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3530cc) {
            ctx->pc = 0x3530E8u;
            goto label_3530e8;
        }
    }
    ctx->pc = 0x3530D4u;
    // 0x3530d4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3530d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3530d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3530d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3530dc: 0x34a50f17  ori         $a1, $a1, 0xF17
    ctx->pc = 0x3530dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3863);
    // 0x3530e0: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3530E0u;
    ctx->pc = 0x3530E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3530E0u;
    // 0x3530e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3530E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3530E8u;
label_3530e8:
    // 0x3530e8: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x3530e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x3530ec: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x3530ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3530f0: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x3530f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3530f4: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x3530f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x3530f8: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x3530f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x3530fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3530fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353100: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x353100u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x353104: 0x62903  sra         $a1, $a2, 4
    ctx->pc = 0x353104u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x353108: 0x15c30005  bne         $t6, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x353108u;
    {
        const bool branch_taken_0x353108 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x35310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353108u;
        // 0x35310c: 0x71103  sra         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353108) {
            ctx->pc = 0x353120u;
            goto label_353120;
        }
    }
    ctx->pc = 0x353110u;
    // 0x353110: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x353110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x353114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x353114u;
    {
        const bool branch_taken_0x353114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353114u;
        // 0x353118: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353114) {
            ctx->pc = 0x353130u;
            goto label_353130;
        }
    }
    ctx->pc = 0x35311Cu;
    // 0x35311c: 0x0  nop
    ctx->pc = 0x35311cu;
    // NOP
label_353120:
    // 0x353120: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x353120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x353124: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x353124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x353128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35312c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x35312cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_353130:
    // 0x353130: 0x244a0040  addiu       $t2, $v0, 0x40
    ctx->pc = 0x353130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x353134: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x353134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x353138: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x353138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35313c: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x35313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x353140: 0x2467000f  addiu       $a3, $v1, 0xF
    ctx->pc = 0x353140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x353144: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x353144u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x353148: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x353148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x35314c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x35314cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x353150: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x353150u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x353154: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x353154u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x353158: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x353158u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35315c: 0x15c8000a  bne         $t6, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x35315Cu;
    {
        const bool branch_taken_0x35315c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 8));
        ctx->pc = 0x353160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35315Cu;
        // 0x353160: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35315c) {
            ctx->pc = 0x353188u;
            goto label_353188;
        }
    }
    ctx->pc = 0x353164u;
    // 0x353164: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x353164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x353168: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x353168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x35316c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x35316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x353170: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x353170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x353174: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x353174u;
    {
        const bool branch_taken_0x353174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353174) {
            ctx->pc = 0x3531A8u;
            goto label_3531a8;
        }
    }
    ctx->pc = 0x35317Cu;
    // 0x35317c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35317Cu;
    {
        const bool branch_taken_0x35317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35317Cu;
        // 0x353180: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35317c) {
            ctx->pc = 0x3531C0u;
            goto label_3531c0;
        }
    }
    ctx->pc = 0x353184u;
    // 0x353184: 0x0  nop
    ctx->pc = 0x353184u;
    // NOP
label_353188:
    // 0x353188: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x353188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35318c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x35318cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x353190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x353190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x353194: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x353194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x353198: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x353198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x35319c: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x35319cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3531a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3531A0u;
    {
        const bool branch_taken_0x3531a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531a0) {
            ctx->pc = 0x3531A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3531A0u;
            // 0x3531a4: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3531C0u;
            goto label_3531c0;
        }
    }
    ctx->pc = 0x3531A8u;
label_3531a8:
    // 0x3531a8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3531a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3531ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3531acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3531b0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3531b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3531b4: 0x34a50f18  ori         $a1, $a1, 0xF18
    ctx->pc = 0x3531b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3864);
    // 0x3531b8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3531B8u;
    ctx->pc = 0x3531BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3531B8u;
    // 0x3531bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3531B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3531C0u;
label_3531c0:
    // 0x3531c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3531C0u;
    {
        const bool branch_taken_0x3531c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531c0) {
            ctx->pc = 0x353200u;
            goto label_353200;
        }
    }
    ctx->pc = 0x3531C8u;
    // 0x3531c8: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3531C8u;
    {
        const bool branch_taken_0x3531c8 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x3531CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531C8u;
        // 0x3531cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531c8) {
            ctx->pc = 0x35322Cu;
            goto label_35322c;
        }
    }
    ctx->pc = 0x3531D0u;
    // 0x3531d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3531d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3531d4: 0x25830030  addiu       $v1, $t4, 0x30
    ctx->pc = 0x3531d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_3531d8:
    // 0x3531d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3531d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3531dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3531dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3531e0: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3531e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3531e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3531e8: 0x0  nop
    ctx->pc = 0x3531e8u;
    // NOP
    // 0x3531ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3531ECu;
    {
        const bool branch_taken_0x3531ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531ECu;
        // 0x3531f0: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531ec) {
            ctx->pc = 0x3531D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3531d8;
        }
    }
    ctx->pc = 0x3531F4u;
    // 0x3531f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3531F4u;
    {
        const bool branch_taken_0x3531f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3531F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531F4u;
        // 0x3531f8: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531f4) {
            ctx->pc = 0x353230u;
            goto label_353230;
        }
    }
    ctx->pc = 0x3531FCu;
    // 0x3531fc: 0x0  nop
    ctx->pc = 0x3531fcu;
    // NOP
label_353200:
    // 0x353200: 0x5920000b  blezl       $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x353200u;
    {
        const bool branch_taken_0x353200 = (GPR_S64(ctx, 9) <= 0);
        if (branch_taken_0x353200) {
            ctx->pc = 0x353204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353200u;
            // 0x353204: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353230u;
            goto label_353230;
        }
    }
    ctx->pc = 0x353208u;
    // 0x353208: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x353208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35320c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x35320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_353210:
    // 0x353210: 0x0  nop
    ctx->pc = 0x353210u;
    // NOP
    // 0x353214: 0x0  nop
    ctx->pc = 0x353214u;
    // NOP
    // 0x353218: 0x0  nop
    ctx->pc = 0x353218u;
    // NOP
    // 0x35321c: 0x0  nop
    ctx->pc = 0x35321cu;
    // NOP
    // 0x353220: 0x0  nop
    ctx->pc = 0x353220u;
    // NOP
    // 0x353224: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x353224u;
    {
        const bool branch_taken_0x353224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x353228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353224u;
        // 0x353228: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353224) {
            ctx->pc = 0x353210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353210;
        }
    }
    ctx->pc = 0x35322Cu;
label_35322c:
    // 0x35322c: 0xad890178  sw          $t1, 0x178($t4)
    ctx->pc = 0x35322cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
label_353230:
    // 0x353230: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x353234: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x353234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353238: 0xc0d529c  jal         func_354A70
    ctx->pc = 0x353238u;
    SET_GPR_U32(ctx, 31, 0x353240u);
    ctx->pc = 0x35323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353238u;
    // 0x35323c: 0x25840180  addiu       $a0, $t4, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354A70u, 0x353238u, 0x353240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353240u;
label_353240:
    // 0x353240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353248: 0x3e00008  jr          $ra
    ctx->pc = 0x353248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353248u;
        // 0x35324c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353250u;
}
