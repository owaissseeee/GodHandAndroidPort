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

// Function: func_00376438
// Address: 0x376438 - 0x376508
void func_00376438_0x376438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376438_0x376438");
#endif

    switch (ctx->pc) {
        case 0x376438u: goto label_376438;
        case 0x37643cu: goto label_37643c;
        case 0x376440u: goto label_376440;
        case 0x376444u: goto label_376444;
        case 0x376448u: goto label_376448;
        case 0x37644cu: goto label_37644c;
        case 0x376450u: goto label_376450;
        case 0x376454u: goto label_376454;
        case 0x376458u: goto label_376458;
        case 0x37645cu: goto label_37645c;
        case 0x376460u: goto label_376460;
        case 0x376464u: goto label_376464;
        case 0x376468u: goto label_376468;
        case 0x37646cu: goto label_37646c;
        case 0x376470u: goto label_376470;
        case 0x376474u: goto label_376474;
        case 0x376478u: goto label_376478;
        case 0x37647cu: goto label_37647c;
        case 0x376480u: goto label_376480;
        case 0x376484u: goto label_376484;
        case 0x376488u: goto label_376488;
        case 0x37648cu: goto label_37648c;
        case 0x376490u: goto label_376490;
        case 0x376494u: goto label_376494;
        case 0x376498u: goto label_376498;
        case 0x37649cu: goto label_37649c;
        case 0x3764a0u: goto label_3764a0;
        case 0x3764a4u: goto label_3764a4;
        case 0x3764a8u: goto label_3764a8;
        case 0x3764acu: goto label_3764ac;
        case 0x3764b0u: goto label_3764b0;
        case 0x3764b4u: goto label_3764b4;
        case 0x3764b8u: goto label_3764b8;
        case 0x3764bcu: goto label_3764bc;
        case 0x3764c0u: goto label_3764c0;
        case 0x3764c4u: goto label_3764c4;
        case 0x3764c8u: goto label_3764c8;
        case 0x3764ccu: goto label_3764cc;
        case 0x3764d0u: goto label_3764d0;
        case 0x3764d4u: goto label_3764d4;
        case 0x3764d8u: goto label_3764d8;
        case 0x3764dcu: goto label_3764dc;
        case 0x3764e0u: goto label_3764e0;
        case 0x3764e4u: goto label_3764e4;
        case 0x3764e8u: goto label_3764e8;
        case 0x3764ecu: goto label_3764ec;
        case 0x3764f0u: goto label_3764f0;
        case 0x3764f4u: goto label_3764f4;
        case 0x3764f8u: goto label_3764f8;
        case 0x3764fcu: goto label_3764fc;
        case 0x376500u: goto label_376500;
        case 0x376504u: goto label_376504;
        default: break;
    }

    ctx->pc = 0x376438u;

label_376438:
    // 0x376438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x376438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_37643c:
    // 0x37643c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_376440:
    // 0x376440: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x376440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_376444:
    // 0x376444: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x376444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_376448:
    // 0x376448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37644c:
    // 0x37644c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_376450:
    // 0x376450: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x376450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_376454:
    // 0x376454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_376458:
    // 0x376458: 0x10000012  b           . + 4 + (0x12 << 2)
label_37645c:
    if (ctx->pc == 0x37645Cu) {
        ctx->pc = 0x37645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376458u;
        // 0x37645c: 0x24522188  addiu       $s2, $v0, 0x2188 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376460u;
        goto label_376460;
    }
    ctx->pc = 0x376458u;
    {
        const bool branch_taken_0x376458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376458u;
        // 0x37645c: 0x24522188  addiu       $s2, $v0, 0x2188 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376458) {
            ctx->pc = 0x3764A4u;
            goto label_3764a4;
        }
    }
    ctx->pc = 0x376460u;
label_376460:
    // 0x376460: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_376464:
    if (ctx->pc == 0x376464u) {
        ctx->pc = 0x376464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376460u;
        // 0x376464: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376468u;
        goto label_376468;
    }
    ctx->pc = 0x376460u;
    {
        const bool branch_taken_0x376460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376460u;
        // 0x376464: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376460) {
            ctx->pc = 0x376474u;
            goto label_376474;
        }
    }
    ctx->pc = 0x376468u;
label_376468:
    // 0x376468: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x376468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_37646c:
    // 0x37646c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x37646cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_376470:
    // 0x376470: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x376470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_376474:
    // 0x376474: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x376474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_376478:
    // 0x376478: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x376478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_37647c:
    // 0x37647c: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x37647cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_376480:
    // 0x376480: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x376480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
label_376484:
    // 0x376484: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x376484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_376488:
    // 0x376488: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_37648c:
    if (ctx->pc == 0x37648Cu) {
        ctx->pc = 0x37648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376488u;
        // 0x37648c: 0xa204003d  sb          $a0, 0x3D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376490u;
        goto label_376490;
    }
    ctx->pc = 0x376488u;
    {
        const bool branch_taken_0x376488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376488u;
        // 0x37648c: 0xa204003d  sb          $a0, 0x3D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376488) {
            ctx->pc = 0x3764B4u;
            goto label_3764b4;
        }
    }
    ctx->pc = 0x376490u;
label_376490:
    // 0x376490: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x376490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_376494:
    // 0x376494: 0x10000016  b           . + 4 + (0x16 << 2)
label_376498:
    if (ctx->pc == 0x376498u) {
        ctx->pc = 0x376498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376494u;
        // 0x376498: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37649Cu;
        goto label_37649c;
    }
    ctx->pc = 0x376494u;
    {
        const bool branch_taken_0x376494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376494u;
        // 0x376498: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376494) {
            ctx->pc = 0x3764F0u;
            goto label_3764f0;
        }
    }
    ctx->pc = 0x37649Cu;
label_37649c:
    // 0x37649c: 0x10000014  b           . + 4 + (0x14 << 2)
label_3764a0:
    if (ctx->pc == 0x3764A0u) {
        ctx->pc = 0x3764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37649Cu;
        // 0x3764a0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764A4u;
        goto label_3764a4;
    }
    ctx->pc = 0x37649Cu;
    {
        const bool branch_taken_0x37649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37649Cu;
        // 0x3764a0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37649c) {
            ctx->pc = 0x3764F0u;
            goto label_3764f0;
        }
    }
    ctx->pc = 0x3764A4u;
label_3764a4:
    // 0x3764a4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3764a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3764a8:
    // 0x3764a8: 0x0  nop
    ctx->pc = 0x3764a8u;
    // NOP
label_3764ac:
    // 0x3764ac: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_3764b0:
    if (ctx->pc == 0x3764B0u) {
        ctx->pc = 0x3764B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764ACu;
        // 0x3764b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764B4u;
        goto label_3764b4;
    }
    ctx->pc = 0x3764ACu;
    {
        const bool branch_taken_0x3764ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3764B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764ACu;
        // 0x3764b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764ac) {
            ctx->pc = 0x37649Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37649c;
        }
    }
    ctx->pc = 0x3764B4u;
label_3764b4:
    // 0x3764b4: 0x8205003c  lb          $a1, 0x3C($s0)
    ctx->pc = 0x3764b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_3764b8:
    // 0x3764b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3764b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3764bc:
    // 0x3764bc: 0x8203003d  lb          $v1, 0x3D($s0)
    ctx->pc = 0x3764bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_3764c0:
    // 0x3764c0: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x3764c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3764c4:
    // 0x3764c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3764c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3764c8:
    // 0x3764c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3764c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3764cc:
    // 0x3764cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3764ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3764d0:
    // 0x3764d0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x3764d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_3764d4:
    // 0x3764d4: 0x40f809  jalr        $v0
label_3764d8:
    if (ctx->pc == 0x3764D8u) {
        ctx->pc = 0x3764D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764D4u;
        // 0x3764d8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3764DCu;
        goto label_3764dc;
    }
    ctx->pc = 0x3764D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3764DCu);
        ctx->pc = 0x3764D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764D4u;
        // 0x3764d8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3764D4u, 0x3764DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3764DCu;
label_3764dc:
    // 0x3764dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3764dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3764e0:
    // 0x3764e0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3764e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3764e4:
    // 0x3764e4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3764e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_3764e8:
    // 0x3764e8: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_3764ec:
    if (ctx->pc == 0x3764ECu) {
        ctx->pc = 0x3764F0u;
        goto label_3764f0;
    }
    ctx->pc = 0x3764E8u;
    {
        const bool branch_taken_0x3764e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3764e8) {
            ctx->pc = 0x376460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376460;
        }
    }
    ctx->pc = 0x3764F0u;
label_3764f0:
    // 0x3764f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3764f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3764f4:
    // 0x3764f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3764f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3764f8:
    // 0x3764f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3764f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3764fc:
    // 0x3764fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3764fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_376500:
    // 0x376500: 0x3e00008  jr          $ra
label_376504:
    if (ctx->pc == 0x376504u) {
        ctx->pc = 0x376504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376500u;
        // 0x376504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x376508u;
        goto label_fallthrough_0x376500;
    }
    ctx->pc = 0x376500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376500u;
        // 0x376504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x376500:
    ctx->pc = 0x376508u;
}
