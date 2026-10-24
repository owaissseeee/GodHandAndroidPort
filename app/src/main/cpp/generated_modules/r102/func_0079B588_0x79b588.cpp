#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079B588
// Address: 0x79b588 - 0x79b7a0
void func_0079B588_0x79b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B588_0x79b588");
#endif

    switch (ctx->pc) {
        case 0x79b5ecu: goto label_79b5ec;
        case 0x79b5f8u: goto label_79b5f8;
        case 0x79b60cu: goto label_79b60c;
        case 0x79b628u: goto label_79b628;
        case 0x79b634u: goto label_79b634;
        case 0x79b648u: goto label_79b648;
        case 0x79b680u: goto label_79b680;
        case 0x79b6a0u: goto label_79b6a0;
        case 0x79b6c8u: goto label_79b6c8;
        case 0x79b6d8u: goto label_79b6d8;
        case 0x79b6e4u: goto label_79b6e4;
        case 0x79b730u: goto label_79b730;
        case 0x79b740u: goto label_79b740;
        case 0x79b748u: goto label_79b748;
        case 0x79b760u: goto label_79b760;
        case 0x79b76cu: goto label_79b76c;
        default: break;
    }

    ctx->pc = 0x79b588u;

    // 0x79b588: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79b58c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79b590: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79b590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x79b594: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x79b594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x79b598: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x79b598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x79b59c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x79b5a0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x79b5a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5a4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x79b5a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x79b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x79b5ac: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x79b5b0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x79b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x79b5b4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x79b5b8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x79b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x79b5bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79b5c0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x79b5c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x79b5c4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b5c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b5cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79b5d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B5D0u;
    {
        const bool branch_taken_0x79b5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5D0u;
        // 0x79b5d4: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5d0) {
            ctx->pc = 0x79B5F8u;
            goto label_79b5f8;
        }
    }
    ctx->pc = 0x79B5D8u;
    // 0x79b5d8: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b5dc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b5e0: 0x24a5b438  addiu       $a1, $a1, -0x4BC8
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
    // 0x79b5e4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79B5E4u;
    SET_GPR_U32(ctx, 31, 0x79B5ECu);
    ctx->pc = 0x79B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E4u;
    // 0x79b5e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79B5E4u, 0x79B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5ECu;
label_79b5ec:
    // 0x79b5ec: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b5f0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B5F0u;
    SET_GPR_U32(ctx, 31, 0x79B5F8u);
    ctx->pc = 0x79B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5F0u;
    // 0x79b5f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B5F0u, 0x79B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5F8u;
label_79b5f8:
    // 0x79b5f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b600: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b600u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b604: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x79B604u;
    SET_GPR_U32(ctx, 31, 0x79B60Cu);
    ctx->pc = 0x79B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B604u;
    // 0x79b608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79B604u, 0x79B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B60Cu;
label_79b60c:
    // 0x79b60c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x79b610: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b614: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x79b614u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x79b618: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79b618u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x79b61c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x79b61cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B620u;
    {
        const bool branch_taken_0x79b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B620u;
        // 0x79b624: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b620) {
            ctx->pc = 0x79B634u;
            goto label_79b634;
        }
    }
    ctx->pc = 0x79B628u;
label_79b628:
    // 0x79b628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b62c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B62Cu;
    SET_GPR_U32(ctx, 31, 0x79B634u);
    ctx->pc = 0x79B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B62Cu;
    // 0x79b630: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B62Cu, 0x79B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B634u;
label_79b634:
    // 0x79b634: 0x2650ea60  addiu       $s0, $s2, -0x15A0
    ctx->pc = 0x79b634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x79b638: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79b638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79b63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b640: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B640u;
    SET_GPR_U32(ctx, 31, 0x79B648u);
    ctx->pc = 0x79B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B640u;
    // 0x79b644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B640u, 0x79B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B648u;
label_79b648:
    // 0x79b648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b64c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B64Cu;
    {
        const bool branch_taken_0x79b64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B64Cu;
        // 0x79b650: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b64c) {
            ctx->pc = 0x79B628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b628;
        }
    }
    ctx->pc = 0x79B654u;
    // 0x79b654: 0x8fc48658  lw          $a0, -0x79A8($fp)
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
    // 0x79b658: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x79b65c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b664: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79b664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79b668: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b66c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79b66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b674: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x79b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x79b678: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B678u;
    SET_GPR_U32(ctx, 31, 0x79B680u);
    ctx->pc = 0x79B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B678u;
    // 0x79b67c: 0x26d06ab0  addiu       $s0, $s6, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B678u, 0x79B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B680u;
label_79b680:
    // 0x79b680: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b684: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b688: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b68c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x79b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79b690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b694: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b694u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b698: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B698u;
    SET_GPR_U32(ctx, 31, 0x79B6A0u);
    ctx->pc = 0x79B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B698u;
    // 0x79b69c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B698u, 0x79B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6A0u;
label_79b6a0:
    // 0x79b6a0: 0x8ee3c000  lw          $v1, -0x4000($s7)
    ctx->pc = 0x79b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950912)));
    // 0x79b6a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b6a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b6ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b6b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b6bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b6c0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B6C0u;
    SET_GPR_U32(ctx, 31, 0x79B6C8u);
    ctx->pc = 0x79B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6C0u;
    // 0x79b6c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B6C0u, 0x79B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6C8u;
label_79b6c8:
    // 0x79b6c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b6cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6d0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B6D0u;
    SET_GPR_U32(ctx, 31, 0x79B6D8u);
    ctx->pc = 0x79B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6D0u;
    // 0x79b6d4: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B6D0u, 0x79B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6D8u;
label_79b6d8:
    // 0x79b6d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6dc: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x79B6DCu;
    SET_GPR_U32(ctx, 31, 0x79B6E4u);
    ctx->pc = 0x79B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6DCu;
    // 0x79b6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79B6DCu, 0x79B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6E4u;
label_79b6e4:
    // 0x79b6e4: 0x3c01c13b  lui         $at, 0xC13B
    ctx->pc = 0x79b6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49467 << 16));
    // 0x79b6e8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79b6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79b6ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b6f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79b6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79b6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79b6f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79b6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79b6fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b704: 0x3c01c09c  lui         $at, 0xC09C
    ctx->pc = 0x79b704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49308 << 16));
    // 0x79b708: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79b708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x79b70c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b710: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b71c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x79b71cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79b720: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x79b720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x79b724: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x79b724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x79b728: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x79B728u;
    SET_GPR_U32(ctx, 31, 0x79B730u);
    ctx->pc = 0x79B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B728u;
    // 0x79b72c: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79B728u, 0x79B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B730u;
label_79b730:
    // 0x79b730: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b734: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79b734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79b738: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B738u;
    SET_GPR_U32(ctx, 31, 0x79B740u);
    ctx->pc = 0x79B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B738u;
    // 0x79b73c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B738u, 0x79B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B740u;
label_79b740:
    // 0x79b740: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B740u;
    SET_GPR_U32(ctx, 31, 0x79B748u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B740u, 0x79B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B748u;
label_79b748:
    // 0x79b748: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b74c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b750: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b750u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b754: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b758: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B758u;
    SET_GPR_U32(ctx, 31, 0x79B760u);
    ctx->pc = 0x79B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B758u;
    // 0x79b75c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B758u, 0x79B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B760u;
label_79b760:
    // 0x79b760: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b764: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B764u;
    SET_GPR_U32(ctx, 31, 0x79B76Cu);
    ctx->pc = 0x79B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B764u;
    // 0x79b768: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B764u, 0x79B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B76Cu;
label_79b76c:
    // 0x79b76c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79b76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b770: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79b770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b774: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79b774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b778: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79b778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b77c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79b77cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b780: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79b780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b784: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79b784u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b788: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x79b788u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b78c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x79b78cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79b790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b794: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x79b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b798: 0x3e00008  jr          $ra
    ctx->pc = 0x79B798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B798u;
        // 0x79b79c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B7A0u;
}
} // namespace gh_r102
