#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ExecCountDownAnim__16r301CannonGameId
// Address: 0x79d5a0 - 0x79da30
void ExecCountDownAnim__16r301CannonGameId_0x79d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecCountDownAnim__16r301CannonGameId_0x79d5a0");
#endif

    switch (ctx->pc) {
        case 0x79d66cu: goto label_79d66c;
        case 0x79d688u: goto label_79d688;
        case 0x79d694u: goto label_79d694;
        case 0x79d6b8u: goto label_79d6b8;
        case 0x79d728u: goto label_79d728;
        case 0x79d744u: goto label_79d744;
        case 0x79d750u: goto label_79d750;
        case 0x79d78cu: goto label_79d78c;
        case 0x79d7b0u: goto label_79d7b0;
        case 0x79d820u: goto label_79d820;
        case 0x79d83cu: goto label_79d83c;
        case 0x79d848u: goto label_79d848;
        case 0x79d884u: goto label_79d884;
        case 0x79d8a8u: goto label_79d8a8;
        case 0x79d8b4u: goto label_79d8b4;
        case 0x79d8f0u: goto label_79d8f0;
        case 0x79d974u: goto label_79d974;
        case 0x79d9bcu: goto label_79d9bc;
        case 0x79d9e0u: goto label_79d9e0;
        default: break;
    }

    ctx->pc = 0x79d5a0u;

    // 0x79d5a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79d5a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79d5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79d5a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79d5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79d5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d5b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79d5b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79d5b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79d5bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79d5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d5c4: 0x9e220000  lwu         $v0, 0x0($s1)
    ctx->pc = 0x79d5c4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79d5c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79d5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79d5cc: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x79D5CCu;
    {
        const bool branch_taken_0x79d5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D5CCu;
        // 0x79d5d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d5cc) {
            ctx->pc = 0x79DA0Cu;
            goto label_79da0c;
        }
    }
    ctx->pc = 0x79D5D4u;
    // 0x79d5d4: 0x86230348  lh          $v1, 0x348($s1)
    ctx->pc = 0x79d5d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d5d8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x79d5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x79d5dc: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x79D5DCu;
    {
        const bool branch_taken_0x79d5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D5DCu;
        // 0x79d5e0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d5dc) {
            ctx->pc = 0x79DA0Cu;
            goto label_79da0c;
        }
    }
    ctx->pc = 0x79D5E4u;
    // 0x79d5e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79d5e8: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x79d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x79d5ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79d5f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79d5f4: 0x800008  jr          $a0
    ctx->pc = 0x79D5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79D5FCu: goto label_79d5fc;
            case 0x79D6A0u: goto label_79d6a0;
            case 0x79D798u: goto label_79d798;
            case 0x79D890u: goto label_79d890;
            case 0x79D8FCu: goto label_79d8fc;
            case 0x79D9C8u: goto label_79d9c8;
            case 0x79DA08u: goto label_79da08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D5F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79D5FCu;
label_79d5fc:
    // 0x79d5fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x79d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x79d600: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x79d600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x79d604: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79d604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79d608: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79d60c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x79d60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x79d610: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x79d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x79d614: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x79d614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x79d618: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79d618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79d61c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d620: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x79d620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x79d624: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d628: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x79d628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x79d62c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x79d62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x79d630: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x79d630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x79d634: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79d634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79d638: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x79d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x79d63c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79d640: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79d640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79d644: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x79d644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x79d648: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79d648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79d64c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d650: 0x263001d4  addiu       $s0, $s1, 0x1D4
    ctx->pc = 0x79d650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
    // 0x79d654: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x79d654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x79d658: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79d658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79d65c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d660: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x79d660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79d664: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x79D664u;
    SET_GPR_U32(ctx, 31, 0x79D66Cu);
    ctx->pc = 0x79D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D664u;
    // 0x79d668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x79D664u, 0x79D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D66Cu;
label_79d66c:
    // 0x79d66c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x79d66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x79d670: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79d670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79d674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d678: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79d678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79d67c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79d67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79d680: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x79D680u;
    SET_GPR_U32(ctx, 31, 0x79D688u);
    ctx->pc = 0x79D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D680u;
    // 0x79d684: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x79D680u, 0x79D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D688u;
label_79d688:
    // 0x79d688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d68c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D68Cu;
    SET_GPR_U32(ctx, 31, 0x79D694u);
    ctx->pc = 0x79D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D68Cu;
    // 0x79d690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D68Cu, 0x79D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D694u;
label_79d694:
    // 0x79d694: 0x96220348  lhu         $v0, 0x348($s1)
    ctx->pc = 0x79d694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d698: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x79D698u;
    {
        const bool branch_taken_0x79d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D698u;
        // 0x79d69c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d698) {
            ctx->pc = 0x79D97Cu;
            goto label_79d97c;
        }
    }
    ctx->pc = 0x79D6A0u;
label_79d6a0:
    // 0x79d6a0: 0x8623034a  lh          $v1, 0x34A($s1)
    ctx->pc = 0x79d6a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
    // 0x79d6a4: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x79D6A4u;
    {
        const bool branch_taken_0x79d6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D6A4u;
        // 0x79d6a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d6a4) {
            ctx->pc = 0x79D75Cu;
            goto label_79d75c;
        }
    }
    ctx->pc = 0x79D6ACu;
    // 0x79d6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79d6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d6b0: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D6B0u;
    SET_GPR_U32(ctx, 31, 0x79D6B8u);
    ctx->pc = 0x79D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D6B0u;
    // 0x79d6b4: 0x262401d4  addiu       $a0, $s1, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D6B0u, 0x79D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D6B8u;
label_79d6b8:
    // 0x79d6b8: 0x26300158  addiu       $s0, $s1, 0x158
    ctx->pc = 0x79d6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x79d6bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x79d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x79d6c0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x79d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x79d6c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79d6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79d6c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79d6cc: 0x2653024  and         $a2, $s3, $a1
    ctx->pc = 0x79d6ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x79d6d0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x79d6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x79d6d4: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x79d6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x79d6d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79d6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79d6dc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x79d6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x79d6e0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d6e4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d6e8: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x79d6e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x79d6ec: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x79d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x79d6f0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x79d6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x79d6f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d6f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d6f8: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x79d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x79d6fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79d6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79d700: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d704: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x79d704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x79d708: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79d70c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79d70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79d710: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x79d710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x79d714: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79d714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79d718: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79d718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79d71c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x79d71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79d720: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x79D720u;
    SET_GPR_U32(ctx, 31, 0x79D728u);
    ctx->pc = 0x79D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D720u;
    // 0x79d724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x79D720u, 0x79D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D728u;
label_79d728:
    // 0x79d728: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x79d728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x79d72c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79d72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79d730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d734: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79d734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79d738: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79d73c: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x79D73Cu;
    SET_GPR_U32(ctx, 31, 0x79D744u);
    ctx->pc = 0x79D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D73Cu;
    // 0x79d740: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x79D73Cu, 0x79D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D744u;
label_79d744:
    // 0x79d744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d748: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D748u;
    SET_GPR_U32(ctx, 31, 0x79D750u);
    ctx->pc = 0x79D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D748u;
    // 0x79d74c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D748u, 0x79D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D750u;
label_79d750:
    // 0x79d750: 0x96220348  lhu         $v0, 0x348($s1)
    ctx->pc = 0x79d750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d754: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x79D754u;
    {
        const bool branch_taken_0x79d754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D754u;
        // 0x79d758: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d754) {
            ctx->pc = 0x79D97Cu;
            goto label_79d97c;
        }
    }
    ctx->pc = 0x79D75Cu;
label_79d75c:
    // 0x79d75c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79D75Cu;
    {
        const bool branch_taken_0x79d75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d75c) {
            ctx->pc = 0x79D760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D75Cu;
            // 0x79d760: 0x9622034a  lhu         $v0, 0x34A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D790u;
            goto label_79d790;
        }
    }
    ctx->pc = 0x79D764u;
    // 0x79d764: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79d768: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79d768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79d76c: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x79d76cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x79d770: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79d774: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79d778: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x79d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x79d77c: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x79d77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x79d780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79d780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d784: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79D784u;
    SET_GPR_U32(ctx, 31, 0x79D78Cu);
    ctx->pc = 0x79D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D784u;
    // 0x79d788: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79D784u, 0x79D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D78Cu;
label_79d78c:
    // 0x79d78c: 0x9622034a  lhu         $v0, 0x34A($s1)
    ctx->pc = 0x79d78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
label_79d790:
    // 0x79d790: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x79D790u;
    {
        const bool branch_taken_0x79d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D790u;
        // 0x79d794: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d790) {
            ctx->pc = 0x79DA04u;
            goto label_79da04;
        }
    }
    ctx->pc = 0x79D798u;
label_79d798:
    // 0x79d798: 0x8623034a  lh          $v1, 0x34A($s1)
    ctx->pc = 0x79d798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
    // 0x79d79c: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x79D79Cu;
    {
        const bool branch_taken_0x79d79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D79Cu;
        // 0x79d7a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d79c) {
            ctx->pc = 0x79D854u;
            goto label_79d854;
        }
    }
    ctx->pc = 0x79D7A4u;
    // 0x79d7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79d7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d7a8: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D7A8u;
    SET_GPR_U32(ctx, 31, 0x79D7B0u);
    ctx->pc = 0x79D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D7A8u;
    // 0x79d7ac: 0x26240158  addiu       $a0, $s1, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D7A8u, 0x79D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D7B0u;
label_79d7b0:
    // 0x79d7b0: 0x263000dc  addiu       $s0, $s1, 0xDC
    ctx->pc = 0x79d7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x79d7b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x79d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x79d7b8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x79d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x79d7bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79d7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79d7c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79d7c4: 0x2a53024  and         $a2, $s5, $a1
    ctx->pc = 0x79d7c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
    // 0x79d7c8: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x79d7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x79d7cc: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x79d7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x79d7d0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79d7d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79d7d4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x79d7d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x79d7d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d7d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d7dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d7dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d7e0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x79d7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x79d7e4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x79d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x79d7e8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x79d7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x79d7ec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d7f0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x79d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x79d7f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79d7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79d7f8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d7fc: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x79d7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x79d800: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79d800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79d804: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79d804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79d808: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x79d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x79d80c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79d80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79d810: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79d810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79d814: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x79d814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79d818: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x79D818u;
    SET_GPR_U32(ctx, 31, 0x79D820u);
    ctx->pc = 0x79D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D818u;
    // 0x79d81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x79D818u, 0x79D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D820u;
label_79d820:
    // 0x79d820: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x79d820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x79d824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79d824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79d828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d82c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79d830: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79d830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79d834: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x79D834u;
    SET_GPR_U32(ctx, 31, 0x79D83Cu);
    ctx->pc = 0x79D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D834u;
    // 0x79d838: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x79D834u, 0x79D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D83Cu;
label_79d83c:
    // 0x79d83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d840: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D840u;
    SET_GPR_U32(ctx, 31, 0x79D848u);
    ctx->pc = 0x79D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D840u;
    // 0x79d844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D840u, 0x79D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D848u;
label_79d848:
    // 0x79d848: 0x96220348  lhu         $v0, 0x348($s1)
    ctx->pc = 0x79d848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d84c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x79D84Cu;
    {
        const bool branch_taken_0x79d84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D84Cu;
        // 0x79d850: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d84c) {
            ctx->pc = 0x79D97Cu;
            goto label_79d97c;
        }
    }
    ctx->pc = 0x79D854u;
label_79d854:
    // 0x79d854: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79D854u;
    {
        const bool branch_taken_0x79d854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d854) {
            ctx->pc = 0x79D858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D854u;
            // 0x79d858: 0x9622034a  lhu         $v0, 0x34A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D888u;
            goto label_79d888;
        }
    }
    ctx->pc = 0x79D85Cu;
    // 0x79d85c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79d860: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79d860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79d864: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x79d864u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x79d868: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79d868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79d86c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79d870: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x79d870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x79d874: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x79d874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x79d878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79d878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d87c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79D87Cu;
    SET_GPR_U32(ctx, 31, 0x79D884u);
    ctx->pc = 0x79D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D87Cu;
    // 0x79d880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79D87Cu, 0x79D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D884u;
label_79d884:
    // 0x79d884: 0x9622034a  lhu         $v0, 0x34A($s1)
    ctx->pc = 0x79d884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
label_79d888:
    // 0x79d888: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x79D888u;
    {
        const bool branch_taken_0x79d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D888u;
        // 0x79d88c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d888) {
            ctx->pc = 0x79DA04u;
            goto label_79da04;
        }
    }
    ctx->pc = 0x79D890u;
label_79d890:
    // 0x79d890: 0x8623034a  lh          $v1, 0x34A($s1)
    ctx->pc = 0x79d890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
    // 0x79d894: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79D894u;
    {
        const bool branch_taken_0x79d894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D894u;
        // 0x79d898: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d894) {
            ctx->pc = 0x79D8C0u;
            goto label_79d8c0;
        }
    }
    ctx->pc = 0x79D89Cu;
    // 0x79d89c: 0x262400dc  addiu       $a0, $s1, 0xDC
    ctx->pc = 0x79d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x79d8a0: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D8A0u;
    SET_GPR_U32(ctx, 31, 0x79D8A8u);
    ctx->pc = 0x79D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D8A0u;
    // 0x79d8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D8A0u, 0x79D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D8A8u;
label_79d8a8:
    // 0x79d8a8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x79d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x79d8ac: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D8ACu;
    SET_GPR_U32(ctx, 31, 0x79D8B4u);
    ctx->pc = 0x79D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D8ACu;
    // 0x79d8b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D8ACu, 0x79D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D8B4u;
label_79d8b4:
    // 0x79d8b4: 0x96220348  lhu         $v0, 0x348($s1)
    ctx->pc = 0x79d8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d8b8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x79D8B8u;
    {
        const bool branch_taken_0x79d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D8B8u;
        // 0x79d8bc: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d8b8) {
            ctx->pc = 0x79D97Cu;
            goto label_79d97c;
        }
    }
    ctx->pc = 0x79D8C0u;
label_79d8c0:
    // 0x79d8c0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79D8C0u;
    {
        const bool branch_taken_0x79d8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d8c0) {
            ctx->pc = 0x79D8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D8C0u;
            // 0x79d8c4: 0x9622034a  lhu         $v0, 0x34A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D8F4u;
            goto label_79d8f4;
        }
    }
    ctx->pc = 0x79D8C8u;
    // 0x79d8c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79d8cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79d8d0: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x79d8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x79d8d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79d8d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79d8dc: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x79d8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x79d8e0: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x79d8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x79d8e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79d8e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d8e8: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79D8E8u;
    SET_GPR_U32(ctx, 31, 0x79D8F0u);
    ctx->pc = 0x79D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D8E8u;
    // 0x79d8ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79D8E8u, 0x79D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D8F0u;
label_79d8f0:
    // 0x79d8f0: 0x9622034a  lhu         $v0, 0x34A($s1)
    ctx->pc = 0x79d8f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
label_79d8f4:
    // 0x79d8f4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79D8F4u;
    {
        const bool branch_taken_0x79d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D8F4u;
        // 0x79d8f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d8f4) {
            ctx->pc = 0x79DA04u;
            goto label_79da04;
        }
    }
    ctx->pc = 0x79D8FCu;
label_79d8fc:
    // 0x79d8fc: 0x8623034a  lh          $v1, 0x34A($s1)
    ctx->pc = 0x79d8fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
    // 0x79d900: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79D900u;
    {
        const bool branch_taken_0x79d900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D900u;
        // 0x79d904: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d900) {
            ctx->pc = 0x79D98Cu;
            goto label_79d98c;
        }
    }
    ctx->pc = 0x79D908u;
    // 0x79d908: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x79d908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x79d90c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x79d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x79d910: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x79d910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x79d914: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79d918: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x79d918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x79d91c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x79d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x79d920: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x79d920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x79d924: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x79d924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x79d928: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79d928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79d92c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d930: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d934: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x79d934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x79d938: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x79d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x79d93c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x79d93cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x79d940: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79d940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79d944: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x79d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x79d948: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79d948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79d94c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79d94cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79d950: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x79d950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x79d954: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79d954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79d958: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79d958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79d95c: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x79d95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x79d960: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x79d960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x79d964: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79d964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79d968: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x79d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x79d96c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x79D96Cu;
    SET_GPR_U32(ctx, 31, 0x79D974u);
    ctx->pc = 0x79D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D96Cu;
    // 0x79d970: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x79D96Cu, 0x79D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D974u;
label_79d974:
    // 0x79d974: 0x96220348  lhu         $v0, 0x348($s1)
    ctx->pc = 0x79d974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d978: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x79d978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79d97c:
    // 0x79d97c: 0xa623034a  sh          $v1, 0x34A($s1)
    ctx->pc = 0x79d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 842), (uint16_t)GPR_U32(ctx, 3));
    // 0x79d980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79d984: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79D984u;
    {
        const bool branch_taken_0x79d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D984u;
        // 0x79d988: 0xa6220348  sh          $v0, 0x348($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 840), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d984) {
            ctx->pc = 0x79DA08u;
            goto label_79da08;
        }
    }
    ctx->pc = 0x79D98Cu;
label_79d98c:
    // 0x79d98c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79D98Cu;
    {
        const bool branch_taken_0x79d98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d98c) {
            ctx->pc = 0x79D990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D98Cu;
            // 0x79d990: 0x9622034a  lhu         $v0, 0x34A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D9C0u;
            goto label_79d9c0;
        }
    }
    ctx->pc = 0x79D994u;
    // 0x79d994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79d998: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79d998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79d99c: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x79d99cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x79d9a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79d9a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79d9a8: 0x240600b1  addiu       $a2, $zero, 0xB1
    ctx->pc = 0x79d9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x79d9ac: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x79d9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x79d9b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79d9b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d9b4: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79D9B4u;
    SET_GPR_U32(ctx, 31, 0x79D9BCu);
    ctx->pc = 0x79D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D9B4u;
    // 0x79d9b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79D9B4u, 0x79D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D9BCu;
label_79d9bc:
    // 0x79d9bc: 0x9622034a  lhu         $v0, 0x34A($s1)
    ctx->pc = 0x79d9bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
label_79d9c0:
    // 0x79d9c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79D9C0u;
    {
        const bool branch_taken_0x79d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D9C0u;
        // 0x79d9c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d9c0) {
            ctx->pc = 0x79DA04u;
            goto label_79da04;
        }
    }
    ctx->pc = 0x79D9C8u;
label_79d9c8:
    // 0x79d9c8: 0x8622034a  lh          $v0, 0x34A($s1)
    ctx->pc = 0x79d9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
    // 0x79d9cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79D9CCu;
    {
        const bool branch_taken_0x79d9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D9CCu;
        // 0x79d9d0: 0x9623034a  lhu         $v1, 0x34A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 842)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d9cc) {
            ctx->pc = 0x79DA00u;
            goto label_79da00;
        }
    }
    ctx->pc = 0x79D9D4u;
    // 0x79d9d4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x79d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x79d9d8: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D9D8u;
    SET_GPR_U32(ctx, 31, 0x79D9E0u);
    ctx->pc = 0x79D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D9D8u;
    // 0x79d9dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D9D8u, 0x79D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D9E0u;
label_79d9e0:
    // 0x79d9e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x79d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79d9e4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x79d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x79d9e8: 0x96230348  lhu         $v1, 0x348($s1)
    ctx->pc = 0x79d9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x79d9ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79d9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79d9f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x79d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x79d9f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79D9F8u;
    {
        const bool branch_taken_0x79d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D9F8u;
        // 0x79d9fc: 0xa6230348  sh          $v1, 0x348($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 840), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d9f8) {
            ctx->pc = 0x79DA08u;
            goto label_79da08;
        }
    }
    ctx->pc = 0x79DA00u;
label_79da00:
    // 0x79da00: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x79da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_79da04:
    // 0x79da04: 0xa622034a  sh          $v0, 0x34A($s1)
    ctx->pc = 0x79da04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 842), (uint16_t)GPR_U32(ctx, 2));
label_79da08:
    // 0x79da08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79da08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79da0c:
    // 0x79da0c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79da0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79da10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79da10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79da14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79da14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79da18: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79da18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79da1c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79da1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79da20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79da24: 0x3e00008  jr          $ra
    ctx->pc = 0x79DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA24u;
        // 0x79da28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DA2Cu;
    // 0x79da2c: 0x0  nop
    ctx->pc = 0x79da2cu;
    // NOP
    ctx->pc = 0x79da30u;
}
} // namespace gh_r301
