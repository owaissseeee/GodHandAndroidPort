#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B540
// Address: 0x79b540 - 0x79b768
void func_0079B540_0x79b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B540_0x79b540");
#endif

    switch (ctx->pc) {
        case 0x79b540u: goto label_79b540;
        case 0x79b544u: goto label_79b544;
        case 0x79b548u: goto label_79b548;
        case 0x79b54cu: goto label_79b54c;
        case 0x79b550u: goto label_79b550;
        case 0x79b554u: goto label_79b554;
        case 0x79b558u: goto label_79b558;
        case 0x79b55cu: goto label_79b55c;
        case 0x79b560u: goto label_79b560;
        case 0x79b564u: goto label_79b564;
        case 0x79b568u: goto label_79b568;
        case 0x79b56cu: goto label_79b56c;
        case 0x79b570u: goto label_79b570;
        case 0x79b574u: goto label_79b574;
        case 0x79b578u: goto label_79b578;
        case 0x79b57cu: goto label_79b57c;
        case 0x79b580u: goto label_79b580;
        case 0x79b584u: goto label_79b584;
        case 0x79b588u: goto label_79b588;
        case 0x79b58cu: goto label_79b58c;
        case 0x79b590u: goto label_79b590;
        case 0x79b594u: goto label_79b594;
        case 0x79b598u: goto label_79b598;
        case 0x79b59cu: goto label_79b59c;
        case 0x79b5a0u: goto label_79b5a0;
        case 0x79b5a4u: goto label_79b5a4;
        case 0x79b5a8u: goto label_79b5a8;
        case 0x79b5acu: goto label_79b5ac;
        case 0x79b5b0u: goto label_79b5b0;
        case 0x79b5b4u: goto label_79b5b4;
        case 0x79b5b8u: goto label_79b5b8;
        case 0x79b5bcu: goto label_79b5bc;
        case 0x79b5c0u: goto label_79b5c0;
        case 0x79b5c4u: goto label_79b5c4;
        case 0x79b5c8u: goto label_79b5c8;
        case 0x79b5ccu: goto label_79b5cc;
        case 0x79b5d0u: goto label_79b5d0;
        case 0x79b5d4u: goto label_79b5d4;
        case 0x79b5d8u: goto label_79b5d8;
        case 0x79b5dcu: goto label_79b5dc;
        case 0x79b5e0u: goto label_79b5e0;
        case 0x79b5e4u: goto label_79b5e4;
        case 0x79b5e8u: goto label_79b5e8;
        case 0x79b5ecu: goto label_79b5ec;
        case 0x79b5f0u: goto label_79b5f0;
        case 0x79b5f4u: goto label_79b5f4;
        case 0x79b5f8u: goto label_79b5f8;
        case 0x79b5fcu: goto label_79b5fc;
        case 0x79b600u: goto label_79b600;
        case 0x79b604u: goto label_79b604;
        case 0x79b608u: goto label_79b608;
        case 0x79b60cu: goto label_79b60c;
        case 0x79b610u: goto label_79b610;
        case 0x79b614u: goto label_79b614;
        case 0x79b618u: goto label_79b618;
        case 0x79b61cu: goto label_79b61c;
        case 0x79b620u: goto label_79b620;
        case 0x79b624u: goto label_79b624;
        case 0x79b628u: goto label_79b628;
        case 0x79b62cu: goto label_79b62c;
        case 0x79b630u: goto label_79b630;
        case 0x79b634u: goto label_79b634;
        case 0x79b638u: goto label_79b638;
        case 0x79b63cu: goto label_79b63c;
        case 0x79b640u: goto label_79b640;
        case 0x79b644u: goto label_79b644;
        case 0x79b648u: goto label_79b648;
        case 0x79b64cu: goto label_79b64c;
        case 0x79b650u: goto label_79b650;
        case 0x79b654u: goto label_79b654;
        case 0x79b658u: goto label_79b658;
        case 0x79b65cu: goto label_79b65c;
        case 0x79b660u: goto label_79b660;
        case 0x79b664u: goto label_79b664;
        case 0x79b668u: goto label_79b668;
        case 0x79b66cu: goto label_79b66c;
        case 0x79b670u: goto label_79b670;
        case 0x79b674u: goto label_79b674;
        case 0x79b678u: goto label_79b678;
        case 0x79b67cu: goto label_79b67c;
        case 0x79b680u: goto label_79b680;
        case 0x79b684u: goto label_79b684;
        case 0x79b688u: goto label_79b688;
        case 0x79b68cu: goto label_79b68c;
        case 0x79b690u: goto label_79b690;
        case 0x79b694u: goto label_79b694;
        case 0x79b698u: goto label_79b698;
        case 0x79b69cu: goto label_79b69c;
        case 0x79b6a0u: goto label_79b6a0;
        case 0x79b6a4u: goto label_79b6a4;
        case 0x79b6a8u: goto label_79b6a8;
        case 0x79b6acu: goto label_79b6ac;
        case 0x79b6b0u: goto label_79b6b0;
        case 0x79b6b4u: goto label_79b6b4;
        case 0x79b6b8u: goto label_79b6b8;
        case 0x79b6bcu: goto label_79b6bc;
        case 0x79b6c0u: goto label_79b6c0;
        case 0x79b6c4u: goto label_79b6c4;
        case 0x79b6c8u: goto label_79b6c8;
        case 0x79b6ccu: goto label_79b6cc;
        case 0x79b6d0u: goto label_79b6d0;
        case 0x79b6d4u: goto label_79b6d4;
        case 0x79b6d8u: goto label_79b6d8;
        case 0x79b6dcu: goto label_79b6dc;
        case 0x79b6e0u: goto label_79b6e0;
        case 0x79b6e4u: goto label_79b6e4;
        case 0x79b6e8u: goto label_79b6e8;
        case 0x79b6ecu: goto label_79b6ec;
        case 0x79b6f0u: goto label_79b6f0;
        case 0x79b6f4u: goto label_79b6f4;
        case 0x79b6f8u: goto label_79b6f8;
        case 0x79b6fcu: goto label_79b6fc;
        case 0x79b700u: goto label_79b700;
        case 0x79b704u: goto label_79b704;
        case 0x79b708u: goto label_79b708;
        case 0x79b70cu: goto label_79b70c;
        case 0x79b710u: goto label_79b710;
        case 0x79b714u: goto label_79b714;
        case 0x79b718u: goto label_79b718;
        case 0x79b71cu: goto label_79b71c;
        case 0x79b720u: goto label_79b720;
        case 0x79b724u: goto label_79b724;
        case 0x79b728u: goto label_79b728;
        case 0x79b72cu: goto label_79b72c;
        case 0x79b730u: goto label_79b730;
        case 0x79b734u: goto label_79b734;
        case 0x79b738u: goto label_79b738;
        case 0x79b73cu: goto label_79b73c;
        case 0x79b740u: goto label_79b740;
        case 0x79b744u: goto label_79b744;
        case 0x79b748u: goto label_79b748;
        case 0x79b74cu: goto label_79b74c;
        case 0x79b750u: goto label_79b750;
        case 0x79b754u: goto label_79b754;
        case 0x79b758u: goto label_79b758;
        case 0x79b75cu: goto label_79b75c;
        case 0x79b760u: goto label_79b760;
        case 0x79b764u: goto label_79b764;
        default: break;
    }

    ctx->pc = 0x79b540u;

label_79b540:
    // 0x79b540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_79b544:
    // 0x79b544: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_79b548:
    // 0x79b548: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_79b54c:
    // 0x79b54c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_79b550:
    // 0x79b550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b554:
    // 0x79b554: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79b554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b558:
    // 0x79b558: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b55c:
    // 0x79b55c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79b560:
    // 0x79b560: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79b560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_79b564:
    // 0x79b564: 0xc0b0a92  jal         func_2C2A48
label_79b568:
    if (ctx->pc == 0x79B568u) {
        ctx->pc = 0x79B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B564u;
        // 0x79b568: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B56Cu;
        goto label_79b56c;
    }
    ctx->pc = 0x79B564u;
    SET_GPR_U32(ctx, 31, 0x79B56Cu);
    ctx->pc = 0x79B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B564u;
    // 0x79b568: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B564u, 0x79B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B56Cu;
label_79b56c:
    // 0x79b56c: 0xc0b6dac  jal         func_2DB6B0
label_79b570:
    if (ctx->pc == 0x79B570u) {
        ctx->pc = 0x79B574u;
        goto label_79b574;
    }
    ctx->pc = 0x79B56Cu;
    SET_GPR_U32(ctx, 31, 0x79B574u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B56Cu, 0x79B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B574u;
label_79b574:
    // 0x79b574: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x79b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_79b578:
    // 0x79b578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b57c:
    // 0x79b57c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79b580:
    // 0x79b580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b584:
    // 0x79b584: 0xe440054c  swc1        $f0, 0x54C($v0)
    ctx->pc = 0x79b584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
label_79b588:
    // 0x79b588: 0xc0b6dac  jal         func_2DB6B0
label_79b58c:
    if (ctx->pc == 0x79B58Cu) {
        ctx->pc = 0x79B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B588u;
        // 0x79b58c: 0xa0836aa5  sb          $v1, 0x6AA5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 27301), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B590u;
        goto label_79b590;
    }
    ctx->pc = 0x79B588u;
    SET_GPR_U32(ctx, 31, 0x79B590u);
    ctx->pc = 0x79B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B588u;
    // 0x79b58c: 0xa0836aa5  sb          $v1, 0x6AA5($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 27301), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B588u, 0x79B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B590u;
label_79b590:
    // 0x79b590: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79b594:
    // 0x79b594: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_79b598:
    if (ctx->pc == 0x79B598u) {
        ctx->pc = 0x79B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B594u;
        // 0x79b598: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B59Cu;
        goto label_79b59c;
    }
    ctx->pc = 0x79B594u;
    {
        const bool branch_taken_0x79b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B594u;
        // 0x79b598: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b594) {
            ctx->pc = 0x79B5B0u;
            goto label_79b5b0;
        }
    }
    ctx->pc = 0x79B59Cu;
label_79b59c:
    // 0x79b59c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79b5a0:
    // 0x79b5a0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b5a4:
    // 0x79b5a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79b5a8:
    // 0x79b5a8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b5ac:
    // 0x79b5ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b5b0:
    // 0x79b5b0: 0xc0b6db0  jal         func_2DB6C0
label_79b5b4:
    if (ctx->pc == 0x79B5B4u) {
        ctx->pc = 0x79B5B8u;
        goto label_79b5b8;
    }
    ctx->pc = 0x79B5B0u;
    SET_GPR_U32(ctx, 31, 0x79B5B8u);
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x79B5B0u, 0x79B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5B8u;
label_79b5b8:
    // 0x79b5b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79b5b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b5bc:
    // 0x79b5bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79b5c0:
    if (ctx->pc == 0x79B5C0u) {
        ctx->pc = 0x79B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5BCu;
        // 0x79b5c0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5C4u;
        goto label_79b5c4;
    }
    ctx->pc = 0x79B5BCu;
    {
        const bool branch_taken_0x79b5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5BCu;
        // 0x79b5c0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5bc) {
            ctx->pc = 0x79B5D0u;
            goto label_79b5d0;
        }
    }
    ctx->pc = 0x79B5C4u;
label_79b5c4:
    // 0x79b5c4: 0x8c6202f0  lw          $v0, 0x2F0($v1)
    ctx->pc = 0x79b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 752)));
label_79b5c8:
    // 0x79b5c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79b5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79b5cc:
    // 0x79b5cc: 0xac6202f0  sw          $v0, 0x2F0($v1)
    ctx->pc = 0x79b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 752), GPR_U32(ctx, 2));
label_79b5d0:
    // 0x79b5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b5d4:
    // 0x79b5d4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79b5d8:
    // 0x79b5d8: 0xc0b0e6c  jal         func_2C39B0
label_79b5dc:
    if (ctx->pc == 0x79B5DCu) {
        ctx->pc = 0x79B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5D8u;
        // 0x79b5dc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5E0u;
        goto label_79b5e0;
    }
    ctx->pc = 0x79B5D8u;
    SET_GPR_U32(ctx, 31, 0x79B5E0u);
    ctx->pc = 0x79B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5D8u;
    // 0x79b5dc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B5D8u, 0x79B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5E0u;
label_79b5e0:
    // 0x79b5e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b5e4:
    // 0x79b5e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b5e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b5e8:
    // 0x79b5e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79b5ec:
    // 0x79b5ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79b5f0:
    // 0x79b5f0: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_79b5f4:
    // 0x79b5f4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b5f8:
    // 0x79b5f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b5fc:
    // 0x79b5fc: 0xc0b2e28  jal         func_2CB8A0
label_79b600:
    if (ctx->pc == 0x79B600u) {
        ctx->pc = 0x79B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5FCu;
        // 0x79b600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B604u;
        goto label_79b604;
    }
    ctx->pc = 0x79B5FCu;
    SET_GPR_U32(ctx, 31, 0x79B604u);
    ctx->pc = 0x79B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5FCu;
    // 0x79b600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B5FCu, 0x79B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B604u;
label_79b604:
    // 0x79b604: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79b604u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79b608:
    // 0x79b608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b60c:
    // 0x79b60c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b610:
    // 0x79b610: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b614:
    // 0x79b614: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x79b614u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_79b618:
    // 0x79b618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b61c:
    // 0x79b61c: 0xc0c194a  jal         func_306528
label_79b620:
    if (ctx->pc == 0x79B620u) {
        ctx->pc = 0x79B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B61Cu;
        // 0x79b620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B624u;
        goto label_79b624;
    }
    ctx->pc = 0x79B61Cu;
    SET_GPR_U32(ctx, 31, 0x79B624u);
    ctx->pc = 0x79B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B61Cu;
    // 0x79b620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79B61Cu, 0x79B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B624u;
label_79b624:
    // 0x79b624: 0xc0b6dac  jal         func_2DB6B0
label_79b628:
    if (ctx->pc == 0x79B628u) {
        ctx->pc = 0x79B62Cu;
        goto label_79b62c;
    }
    ctx->pc = 0x79B624u;
    SET_GPR_U32(ctx, 31, 0x79B62Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B624u, 0x79B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B62Cu;
label_79b62c:
    // 0x79b62c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b630:
    // 0x79b630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b634:
    // 0x79b634: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x79b634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_79b638:
    // 0x79b638: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x79b638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_79b63c:
    // 0x79b63c: 0xc0f809  jalr        $a2
label_79b640:
    if (ctx->pc == 0x79B640u) {
        ctx->pc = 0x79B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B63Cu;
        // 0x79b640: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B644u;
        goto label_79b644;
    }
    ctx->pc = 0x79B63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79B644u);
        ctx->pc = 0x79B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B63Cu;
        // 0x79b640: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B63Cu, 0x79B644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B644u;
label_79b644:
    // 0x79b644: 0xc0b6db0  jal         func_2DB6C0
label_79b648:
    if (ctx->pc == 0x79B648u) {
        ctx->pc = 0x79B64Cu;
        goto label_79b64c;
    }
    ctx->pc = 0x79B644u;
    SET_GPR_U32(ctx, 31, 0x79B64Cu);
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x79B644u, 0x79B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B64Cu;
label_79b64c:
    // 0x79b64c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b650:
    // 0x79b650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b654:
    // 0x79b654: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_79b658:
    // 0x79b658: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_79b65c:
    // 0x79b65c: 0xc0f809  jalr        $a2
label_79b660:
    if (ctx->pc == 0x79B660u) {
        ctx->pc = 0x79B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B65Cu;
        // 0x79b660: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B664u;
        goto label_79b664;
    }
    ctx->pc = 0x79B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79B664u);
        ctx->pc = 0x79B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B65Cu;
        // 0x79b660: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B65Cu, 0x79B664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B664u;
label_79b664:
    // 0x79b664: 0xc0b6dac  jal         func_2DB6B0
label_79b668:
    if (ctx->pc == 0x79B668u) {
        ctx->pc = 0x79B66Cu;
        goto label_79b66c;
    }
    ctx->pc = 0x79B664u;
    SET_GPR_U32(ctx, 31, 0x79B66Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B664u, 0x79B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B66Cu;
label_79b66c:
    // 0x79b66c: 0xc04ab18  jal         func_12AC60
label_79b670:
    if (ctx->pc == 0x79B670u) {
        ctx->pc = 0x79B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B66Cu;
        // 0x79b670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B674u;
        goto label_79b674;
    }
    ctx->pc = 0x79B66Cu;
    SET_GPR_U32(ctx, 31, 0x79B674u);
    ctx->pc = 0x79B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B66Cu;
    // 0x79b670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC60u, 0x79B66Cu, 0x79B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B674u;
label_79b674:
    // 0x79b674: 0xc0b6dac  jal         func_2DB6B0
label_79b678:
    if (ctx->pc == 0x79B678u) {
        ctx->pc = 0x79B67Cu;
        goto label_79b67c;
    }
    ctx->pc = 0x79B674u;
    SET_GPR_U32(ctx, 31, 0x79B67Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B674u, 0x79B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B67Cu;
label_79b67c:
    // 0x79b67c: 0xc04ae7c  jal         func_12B9F0
label_79b680:
    if (ctx->pc == 0x79B680u) {
        ctx->pc = 0x79B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B67Cu;
        // 0x79b680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B684u;
        goto label_79b684;
    }
    ctx->pc = 0x79B67Cu;
    SET_GPR_U32(ctx, 31, 0x79B684u);
    ctx->pc = 0x79B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B67Cu;
    // 0x79b680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9F0u, 0x79B67Cu, 0x79B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B684u;
label_79b684:
    // 0x79b684: 0xc0b6dac  jal         func_2DB6B0
label_79b688:
    if (ctx->pc == 0x79B688u) {
        ctx->pc = 0x79B68Cu;
        goto label_79b68c;
    }
    ctx->pc = 0x79B684u;
    SET_GPR_U32(ctx, 31, 0x79B68Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B684u, 0x79B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B68Cu;
label_79b68c:
    // 0x79b68c: 0xc04b374  jal         func_12CDD0
label_79b690:
    if (ctx->pc == 0x79B690u) {
        ctx->pc = 0x79B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B68Cu;
        // 0x79b690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B694u;
        goto label_79b694;
    }
    ctx->pc = 0x79B68Cu;
    SET_GPR_U32(ctx, 31, 0x79B694u);
    ctx->pc = 0x79B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B68Cu;
    // 0x79b690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CDD0u, 0x79B68Cu, 0x79B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B694u;
label_79b694:
    // 0x79b694: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79b698:
    // 0x79b698: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x79b698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_79b69c:
    // 0x79b69c: 0xc0b56a8  jal         func_2D5AA0
label_79b6a0:
    if (ctx->pc == 0x79B6A0u) {
        ctx->pc = 0x79B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B69Cu;
        // 0x79b6a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B6A4u;
        goto label_79b6a4;
    }
    ctx->pc = 0x79B69Cu;
    SET_GPR_U32(ctx, 31, 0x79B6A4u);
    ctx->pc = 0x79B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B69Cu;
    // 0x79b6a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B69Cu, 0x79B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6A4u;
label_79b6a4:
    // 0x79b6a4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79b6a8:
    // 0x79b6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b6ac:
    // 0x79b6ac: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79b6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
label_79b6b0:
    // 0x79b6b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79b6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79b6b4:
    // 0x79b6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b6b8:
    // 0x79b6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b6bc:
    // 0x79b6bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b6bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b6c0:
    // 0x79b6c0: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79b6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_79b6c4:
    // 0x79b6c4: 0xc0c1c82  jal         func_307208
label_79b6c8:
    if (ctx->pc == 0x79B6C8u) {
        ctx->pc = 0x79B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6C4u;
        // 0x79b6c8: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B6CCu;
        goto label_79b6cc;
    }
    ctx->pc = 0x79B6C4u;
    SET_GPR_U32(ctx, 31, 0x79B6CCu);
    ctx->pc = 0x79B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6C4u;
    // 0x79b6c8: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79B6C4u, 0x79B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6CCu;
label_79b6cc:
    // 0x79b6cc: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x79b6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_79b6d0:
    // 0x79b6d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_79b6d4:
    if (ctx->pc == 0x79B6D4u) {
        ctx->pc = 0x79B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6D0u;
        // 0x79b6d4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B6D8u;
        goto label_79b6d8;
    }
    ctx->pc = 0x79B6D0u;
    {
        const bool branch_taken_0x79b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6D0u;
        // 0x79b6d4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6d0) {
            ctx->pc = 0x79B6E8u;
            goto label_79b6e8;
        }
    }
    ctx->pc = 0x79B6D8u;
label_79b6d8:
    // 0x79b6d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b6dc:
    // 0x79b6dc: 0xc0b56a8  jal         func_2D5AA0
label_79b6e0:
    if (ctx->pc == 0x79B6E0u) {
        ctx->pc = 0x79B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6DCu;
        // 0x79b6e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B6E4u;
        goto label_79b6e4;
    }
    ctx->pc = 0x79B6DCu;
    SET_GPR_U32(ctx, 31, 0x79B6E4u);
    ctx->pc = 0x79B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6DCu;
    // 0x79b6e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B6DCu, 0x79B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6E4u;
label_79b6e4:
    // 0x79b6e4: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x79b6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_79b6e8:
    // 0x79b6e8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_79b6ec:
    // 0x79b6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79b6f0:
    // 0x79b6f0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79b6f4:
    if (ctx->pc == 0x79B6F4u) {
        ctx->pc = 0x79B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F0u;
        // 0x79b6f4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B6F8u;
        goto label_79b6f8;
    }
    ctx->pc = 0x79B6F0u;
    {
        const bool branch_taken_0x79b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F0u;
        // 0x79b6f4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6f0) {
            ctx->pc = 0x79B6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b6d8;
        }
    }
    ctx->pc = 0x79B6F8u;
label_79b6f8:
    // 0x79b6f8: 0xc0b0f04  jal         func_2C3C10
label_79b6fc:
    if (ctx->pc == 0x79B6FCu) {
        ctx->pc = 0x79B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F8u;
        // 0x79b6fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B700u;
        goto label_79b700;
    }
    ctx->pc = 0x79B6F8u;
    SET_GPR_U32(ctx, 31, 0x79B700u);
    ctx->pc = 0x79B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6F8u;
    // 0x79b6fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B6F8u, 0x79B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B700u;
label_79b700:
    // 0x79b700: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79b700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79b704:
    // 0x79b704: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79b704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79b708:
    // 0x79b708: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x79b708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_79b70c:
    // 0x79b70c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79b70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79b710:
    // 0x79b710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b714:
    // 0x79b714: 0x24050702  addiu       $a1, $zero, 0x702
    ctx->pc = 0x79b714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
label_79b718:
    // 0x79b718: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79b718u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_79b71c:
    // 0x79b71c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b720:
    // 0x79b720: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x79b720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_79b724:
    // 0x79b724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b728:
    // 0x79b728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79b72c:
    // 0x79b72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b730:
    // 0x79b730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b734:
    // 0x79b734: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79b734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b738:
    // 0x79b738: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x79b738u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_79b73c:
    // 0x79b73c: 0xc0b1152  jal         func_2C4548
label_79b740:
    if (ctx->pc == 0x79B740u) {
        ctx->pc = 0x79B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B73Cu;
        // 0x79b740: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B744u;
        goto label_79b744;
    }
    ctx->pc = 0x79B73Cu;
    SET_GPR_U32(ctx, 31, 0x79B744u);
    ctx->pc = 0x79B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B73Cu;
    // 0x79b740: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79B73Cu, 0x79B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B744u;
label_79b744:
    // 0x79b744: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b748:
    // 0x79b748: 0xc0b5692  jal         func_2D5A48
label_79b74c:
    if (ctx->pc == 0x79B74Cu) {
        ctx->pc = 0x79B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B748u;
        // 0x79b74c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B750u;
        goto label_79b750;
    }
    ctx->pc = 0x79B748u;
    SET_GPR_U32(ctx, 31, 0x79B750u);
    ctx->pc = 0x79B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B748u;
    // 0x79b74c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B748u, 0x79B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B750u;
label_79b750:
    // 0x79b750: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79b754:
    // 0x79b754: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79b758:
    // 0x79b758: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79b75c:
    // 0x79b75c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b760:
    // 0x79b760: 0x3e00008  jr          $ra
label_79b764:
    if (ctx->pc == 0x79B764u) {
        ctx->pc = 0x79B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B760u;
        // 0x79b764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B768u;
        goto label_fallthrough_0x79b760;
    }
    ctx->pc = 0x79B760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B760u;
        // 0x79b764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b760:
    ctx->pc = 0x79B768u;
}
} // namespace gh_r700
