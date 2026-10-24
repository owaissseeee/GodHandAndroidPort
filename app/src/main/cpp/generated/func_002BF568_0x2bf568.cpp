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

// Function: func_002BF568
// Address: 0x2bf568 - 0x2bf700
void func_002BF568_0x2bf568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF568_0x2bf568");
#endif

    switch (ctx->pc) {
        case 0x2bf5ccu: goto label_2bf5cc;
        case 0x2bf5d4u: goto label_2bf5d4;
        case 0x2bf620u: goto label_2bf620;
        case 0x2bf668u: goto label_2bf668;
        case 0x2bf678u: goto label_2bf678;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf6a0u: goto label_2bf6a0;
        case 0x2bf6b8u: goto label_2bf6b8;
        case 0x2bf6c0u: goto label_2bf6c0;
        case 0x2bf6e0u: goto label_2bf6e0;
        default: break;
    }

    ctx->pc = 0x2bf568u;

    // 0x2bf568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf56c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bf570: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bf570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2bf574: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x2bf574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x2bf578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf57c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bf57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2bf580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bf584: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2bf584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2bf588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF588u;
    {
        const bool branch_taken_0x2bf588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF588u;
        // 0x2bf58c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf588) {
            ctx->pc = 0x2BF5A0u;
            goto label_2bf5a0;
        }
    }
    ctx->pc = 0x2BF590u;
    // 0x2bf590: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2bf590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2bf594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf598: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2BF598u;
    {
        const bool branch_taken_0x2bf598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF598u;
        // 0x2bf59c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf598) {
            ctx->pc = 0x2BF6E4u;
            goto label_2bf6e4;
        }
    }
    ctx->pc = 0x2BF5A0u;
label_2bf5a0:
    // 0x2bf5a0: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x2bf5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf5a4: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x2bf5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x2bf5a8: 0x26727a84  addiu       $s2, $s3, 0x7A84
    ctx->pc = 0x2bf5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 31364));
    // 0x2bf5ac: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2bf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2bf5b0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2bf5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x2bf5b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2bf5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2bf5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bf5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf5c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bf5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bf5c4: 0xc0afe00  jal         func_2BF800
    ctx->pc = 0x2BF5C4u;
    SET_GPR_U32(ctx, 31, 0x2BF5CCu);
    ctx->pc = 0x2BF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5C4u;
    // 0x2bf5c8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF800u, 0x2BF5C4u, 0x2BF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5CCu;
label_2bf5cc:
    // 0x2bf5cc: 0xc0afde0  jal         func_2BF780
    ctx->pc = 0x2BF5CCu;
    SET_GPR_U32(ctx, 31, 0x2BF5D4u);
    ctx->pc = 0x2BF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5CCu;
    // 0x2bf5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF780u, 0x2BF5CCu, 0x2BF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5D4u;
label_2bf5d4:
    // 0x2bf5d4: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2bf5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bf5d8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2bf5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf5dc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x2bf5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf5e0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x2bf5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf5e4: 0x1450003e  bne         $v0, $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2BF5E4u;
    {
        const bool branch_taken_0x2bf5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5E4u;
        // 0x2bf5e8: 0xa2200003  sb          $zero, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5e4) {
            ctx->pc = 0x2BF6E0u;
            goto label_2bf6e0;
        }
    }
    ctx->pc = 0x2BF5ECu;
    // 0x2bf5ec: 0x8e42ffa0  lw          $v0, -0x60($s2)
    ctx->pc = 0x2bf5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967200)));
    // 0x2bf5f0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2bf5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2bf5f4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2bf5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2bf5f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf5fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bf5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf600: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2bf600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2bf604: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2bf604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf608: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bf608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2bf60c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2bf60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2bf610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf614: 0xae42ffa0  sw          $v0, -0x60($s2)
    ctx->pc = 0x2bf614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967200), GPR_U32(ctx, 2));
    // 0x2bf618: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x2BF618u;
    SET_GPR_U32(ctx, 31, 0x2BF620u);
    ctx->pc = 0x2BF61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF618u;
    // 0x2bf61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x2BF618u, 0x2BF620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF620u;
label_2bf620:
    // 0x2bf620: 0x2651fa1c  addiu       $s1, $s2, -0x5E4
    ctx->pc = 0x2bf620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965788));
    // 0x2bf624: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2bf628: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2bf62c: 0x8e627a84  lw          $v0, 0x7A84($s3)
    ctx->pc = 0x2bf62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
    // 0x2bf630: 0x2406bfff  addiu       $a2, $zero, -0x4001
    ctx->pc = 0x2bf630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2bf634: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2bf634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2bf638: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bf638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bf63c: 0x962705b4  lhu         $a3, 0x5B4($s1)
    ctx->pc = 0x2bf63cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x2bf640: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2bf640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2bf644: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x2bf644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x2bf648: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2bf648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2bf64c: 0xae627a84  sw          $v0, 0x7A84($s3)
    ctx->pc = 0x2bf64cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31364), GPR_U32(ctx, 2));
    // 0x2bf650: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2bf650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2bf654: 0x14e30014  bne         $a3, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BF654u;
    {
        const bool branch_taken_0x2bf654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF654u;
        // 0x2bf658: 0xae0400b0  sw          $a0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf654) {
            ctx->pc = 0x2BF6A8u;
            goto label_2bf6a8;
        }
    }
    ctx->pc = 0x2BF65Cu;
    // 0x2bf65c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2bf660: 0xc0b0210  jal         func_2C0840
    ctx->pc = 0x2BF660u;
    SET_GPR_U32(ctx, 31, 0x2BF668u);
    ctx->pc = 0x2BF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF660u;
    // 0x2bf664: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0840u, 0x2BF660u, 0x2BF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF668u;
label_2bf668:
    // 0x2bf668: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2bf668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2bf66c: 0x963205b4  lhu         $s2, 0x5B4($s1)
    ctx->pc = 0x2bf66cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x2bf670: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BF670u;
    SET_GPR_U32(ctx, 31, 0x2BF678u);
    ctx->pc = 0x2BF674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF670u;
    // 0x2bf674: 0x26103ec0  addiu       $s0, $s0, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BF670u, 0x2BF678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF678u;
label_2bf678:
    // 0x2bf678: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BF678u;
    SET_GPR_U32(ctx, 31, 0x2BF680u);
    ctx->pc = 0x2BF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF678u;
    // 0x2bf67c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BF678u, 0x2BF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF680u;
label_2bf680:
    // 0x2bf680: 0x8e2600f0  lw          $a2, 0xF0($s1)
    ctx->pc = 0x2bf680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2bf684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf688: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2bf688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf68c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf690: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bf690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf694: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2bf694u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2bf698: 0xc07ffcc  jal         func_1FFF30
    ctx->pc = 0x2BF698u;
    SET_GPR_U32(ctx, 31, 0x2BF6A0u);
    ctx->pc = 0x2BF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF698u;
    // 0x2bf69c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF30u, 0x2BF698u, 0x2BF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6A0u;
label_2bf6a0:
    // 0x2bf6a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BF6A0u;
    {
        const bool branch_taken_0x2bf6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A0u;
        // 0x2bf6a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6a0) {
            ctx->pc = 0x2BF6E4u;
            goto label_2bf6e4;
        }
    }
    ctx->pc = 0x2BF6A8u;
label_2bf6a8:
    // 0x2bf6a8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2bf6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2bf6ac: 0x963205b4  lhu         $s2, 0x5B4($s1)
    ctx->pc = 0x2bf6acu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x2bf6b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BF6B0u;
    SET_GPR_U32(ctx, 31, 0x2BF6B8u);
    ctx->pc = 0x2BF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6B0u;
    // 0x2bf6b4: 0x26103ec0  addiu       $s0, $s0, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BF6B0u, 0x2BF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6B8u;
label_2bf6b8:
    // 0x2bf6b8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BF6B8u;
    SET_GPR_U32(ctx, 31, 0x2BF6C0u);
    ctx->pc = 0x2BF6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6B8u;
    // 0x2bf6bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BF6B8u, 0x2BF6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6C0u;
label_2bf6c0:
    // 0x2bf6c0: 0x8e2600f0  lw          $a2, 0xF0($s1)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2bf6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6c8: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2bf6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf6cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bf6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6d4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2bf6d8: 0xc07ffcc  jal         func_1FFF30
    ctx->pc = 0x2BF6D8u;
    SET_GPR_U32(ctx, 31, 0x2BF6E0u);
    ctx->pc = 0x2BF6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6D8u;
    // 0x2bf6dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF30u, 0x2BF6D8u, 0x2BF6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6E0u;
label_2bf6e0:
    // 0x2bf6e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bf6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bf6e4:
    // 0x2bf6e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bf6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf6e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf6ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2bf6ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6F4u;
        // 0x2bf6f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF6FCu;
    // 0x2bf6fc: 0x0  nop
    ctx->pc = 0x2bf6fcu;
    // NOP
    ctx->pc = 0x2bf700u;
}
