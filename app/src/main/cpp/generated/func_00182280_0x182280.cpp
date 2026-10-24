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

// Function: func_00182280
// Address: 0x182280 - 0x182488
void func_00182280_0x182280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182280_0x182280");
#endif

    switch (ctx->pc) {
        case 0x1822acu: goto label_1822ac;
        case 0x1822c0u: goto label_1822c0;
        case 0x1822d0u: goto label_1822d0;
        case 0x1822e0u: goto label_1822e0;
        case 0x1822f0u: goto label_1822f0;
        case 0x182328u: goto label_182328;
        case 0x1823d8u: goto label_1823d8;
        case 0x182440u: goto label_182440;
        case 0x182450u: goto label_182450;
        default: break;
    }

    ctx->pc = 0x182280u;

    // 0x182280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x182284: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x182284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x182288: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x182288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18228c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18228cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182290: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x182290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x182294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x182294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182298: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x18229c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18229Cu;
    {
        const bool branch_taken_0x18229c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18229c) {
            ctx->pc = 0x1822A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18229Cu;
            // 0x1822a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1822B0u;
            goto label_1822b0;
        }
    }
    ctx->pc = 0x1822A4u;
    // 0x1822a4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1822A4u;
    SET_GPR_U32(ctx, 31, 0x1822ACu);
    ctx->pc = 0x1822A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822A4u;
    // 0x1822a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1822A4u, 0x1822ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822ACu;
label_1822ac:
    // 0x1822ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1822acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1822b0:
    // 0x1822b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1822b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1822b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822b8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1822B8u;
    SET_GPR_U32(ctx, 31, 0x1822C0u);
    ctx->pc = 0x1822BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822B8u;
    // 0x1822bc: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1822B8u, 0x1822C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822C0u;
label_1822c0:
    // 0x1822c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1822c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822c4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1822c8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1822C8u;
    SET_GPR_U32(ctx, 31, 0x1822D0u);
    ctx->pc = 0x1822CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822C8u;
    // 0x1822cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1822C8u, 0x1822D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822D0u;
label_1822d0:
    // 0x1822d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1822d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1822d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822d8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1822D8u;
    SET_GPR_U32(ctx, 31, 0x1822E0u);
    ctx->pc = 0x1822DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822D8u;
    // 0x1822dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1822D8u, 0x1822E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822E0u;
label_1822e0:
    // 0x1822e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1822e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822e4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1822e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1822e8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1822E8u;
    SET_GPR_U32(ctx, 31, 0x1822F0u);
    ctx->pc = 0x1822ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822E8u;
    // 0x1822ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1822E8u, 0x1822F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822F0u;
label_1822f0:
    // 0x1822f0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1822f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1822f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1822f8: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1822f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1822fc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1822fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x182300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x182304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182308: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x182308u;
    {
        const bool branch_taken_0x182308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x18230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182308u;
        // 0x18230c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182308) {
            ctx->pc = 0x1823D0u;
            goto label_1823d0;
        }
    }
    ctx->pc = 0x182310u;
    // 0x182310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x182310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182314: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x182314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x182318: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18231c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182320: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x182320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182324: 0x0  nop
    ctx->pc = 0x182324u;
    // NOP
label_182328:
    // 0x182328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18232c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x182330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182330u;
    {
        const bool branch_taken_0x182330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182330u;
        // 0x182334: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182330) {
            ctx->pc = 0x182340u;
            goto label_182340;
        }
    }
    ctx->pc = 0x182338u;
    // 0x182338: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x182338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18233c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182340:
    // 0x182340: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x182344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182344u;
    {
        const bool branch_taken_0x182344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182344u;
        // 0x182348: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182344) {
            ctx->pc = 0x18235Cu;
            goto label_18235c;
        }
    }
    ctx->pc = 0x18234Cu;
    // 0x18234c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x182350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182354u;
    {
        const bool branch_taken_0x182354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182354u;
        // 0x182358: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182354) {
            ctx->pc = 0x182360u;
            goto label_182360;
        }
    }
    ctx->pc = 0x18235Cu;
label_18235c:
    // 0x18235c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182360:
    // 0x182360: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x182364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182368: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x182368u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18236c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x182370: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x182370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x182374: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x182374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182378: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182378u;
    {
        const bool branch_taken_0x182378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182378u;
        // 0x18237c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182378) {
            ctx->pc = 0x182388u;
            goto label_182388;
        }
    }
    ctx->pc = 0x182380u;
    // 0x182380: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x182380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x182384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x182384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182388:
    // 0x182388: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x182388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18238c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18238Cu;
    {
        const bool branch_taken_0x18238c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18238Cu;
        // 0x182390: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18238c) {
            ctx->pc = 0x1823A4u;
            goto label_1823a4;
        }
    }
    ctx->pc = 0x182394u;
    // 0x182394: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x182398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18239c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18239Cu;
    {
        const bool branch_taken_0x18239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18239Cu;
        // 0x1823a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18239c) {
            ctx->pc = 0x1823A8u;
            goto label_1823a8;
        }
    }
    ctx->pc = 0x1823A4u;
label_1823a4:
    // 0x1823a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1823a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1823a8:
    // 0x1823a8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1823a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1823ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1823acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1823b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1823b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1823b4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1823b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1823b8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1823b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1823bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1823BCu;
    {
        const bool branch_taken_0x1823bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823BCu;
        // 0x1823c0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823bc) {
            ctx->pc = 0x1823D0u;
            goto label_1823d0;
        }
    }
    ctx->pc = 0x1823C4u;
    // 0x1823c4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1823c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1823c8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1823C8u;
    {
        const bool branch_taken_0x1823c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1823c8) {
            ctx->pc = 0x1823CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1823C8u;
            // 0x1823cc: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182328;
        }
    }
    ctx->pc = 0x1823D0u;
label_1823d0:
    // 0x1823d0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1823D0u;
    SET_GPR_U32(ctx, 31, 0x1823D8u);
    ctx->pc = 0x1823D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823D0u;
    // 0x1823d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1823D0u, 0x1823D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1823D8u;
label_1823d8:
    // 0x1823d8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1823d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1823dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1823dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1823e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1823e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1823e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1823e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1823e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1823e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1823ec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1823ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1823f0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1823f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1823f4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1823f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1823f8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1823fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1823fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x182400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182404: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x182404u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182408: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x182408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18240c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18240cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x182410: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x182410u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x182414: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x182414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x182418: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x182418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18241c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18241cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182420: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x182420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x182424: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x182424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x182428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18242c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18242cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182430: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182430u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182434: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x182434u;
    {
        const bool branch_taken_0x182434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x182438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182434u;
        // 0x182438: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182434) {
            ctx->pc = 0x18246Cu;
            goto label_18246c;
        }
    }
    ctx->pc = 0x18243Cu;
    // 0x18243c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18243cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182440:
    // 0x182440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182444: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x182444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x182448: 0xc060810  jal         func_182040
    ctx->pc = 0x182448u;
    SET_GPR_U32(ctx, 31, 0x182450u);
    ctx->pc = 0x18244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182448u;
    // 0x18244c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182040u, 0x182448u, 0x182450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182450u;
label_182450:
    // 0x182450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x182454: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x182454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x182458: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182458u;
    {
        const bool branch_taken_0x182458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182458) {
            ctx->pc = 0x18245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182458u;
            // 0x18245c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182470u;
            goto label_182470;
        }
    }
    ctx->pc = 0x182460u;
    // 0x182460: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x182460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182464: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x182464u;
    {
        const bool branch_taken_0x182464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x182468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182464u;
        // 0x182468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182464) {
            ctx->pc = 0x182440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182440;
        }
    }
    ctx->pc = 0x18246Cu;
label_18246c:
    // 0x18246c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18246cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_182470:
    // 0x182470: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x182470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182474: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x182474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x182478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18247c: 0x3e00008  jr          $ra
    ctx->pc = 0x18247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18247Cu;
        // 0x182480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18247Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182484u;
    // 0x182484: 0x0  nop
    ctx->pc = 0x182484u;
    // NOP
    ctx->pc = 0x182488u;
}
