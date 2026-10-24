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
// Function: ChkMastCannonBallHit__15cR301CannonGame
// Address: 0x79c590 - 0x79c7e0
void ChkMastCannonBallHit__15cR301CannonGame_0x79c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkMastCannonBallHit__15cR301CannonGame_0x79c590");
#endif

    switch (ctx->pc) {
        case 0x79c5ecu: goto label_79c5ec;
        case 0x79c61cu: goto label_79c61c;
        case 0x79c63cu: goto label_79c63c;
        case 0x79c664u: goto label_79c664;
        case 0x79c698u: goto label_79c698;
        case 0x79c784u: goto label_79c784;
        default: break;
    }

    ctx->pc = 0x79c590u;

    // 0x79c590: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79c594: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x79c594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x79c598: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x79c59c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79c59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c5a0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79c5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x79c5a4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x79c5a8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x79c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x79c5ac: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x79c5b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x79c5b4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x79c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x79c5b8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x79c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x79c5bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79c5c0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x79c5c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x79c5c4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x79c5c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x79c5c8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x79c5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x79c5cc: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x79c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x79c5d0: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x79C5D0u;
    {
        const bool branch_taken_0x79c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5D0u;
        // 0x79c5d4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5d0) {
            ctx->pc = 0x79C7A8u;
            goto label_79c7a8;
        }
    }
    ctx->pc = 0x79C5D8u;
    // 0x79c5d8: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x79c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x79c5dc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x79C5DCu;
    {
        const bool branch_taken_0x79c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5DCu;
        // 0x79c5e0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5dc) {
            ctx->pc = 0x79C66Cu;
            goto label_79c66c;
        }
    }
    ctx->pc = 0x79C5E4u;
    // 0x79c5e4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x79C5E4u;
    {
        const bool branch_taken_0x79c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5E4u;
        // 0x79c5e8: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5e4) {
            ctx->pc = 0x79C7A8u;
            goto label_79c7a8;
        }
    }
    ctx->pc = 0x79C5ECu;
label_79c5ec:
    // 0x79c5ec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79c5ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c5f0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79c5f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79c5f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79c5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79c5fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c600: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x79c600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x79c604: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79c608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c60c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79c60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c610: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79c610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c614: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x79C614u;
    SET_GPR_U32(ctx, 31, 0x79C61Cu);
    ctx->pc = 0x79C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C614u;
    // 0x79c618: 0x3d68021  addu        $s0, $fp, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79C614u, 0x79C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C61Cu;
label_79c61c:
    // 0x79c61c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79c620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c624: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79c628: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79c628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c630: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x79c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x79c634: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79C634u;
    SET_GPR_U32(ctx, 31, 0x79C63Cu);
    ctx->pc = 0x79C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C634u;
    // 0x79c638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79C634u, 0x79C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C63Cu;
label_79c63c:
    // 0x79c63c: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x79c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x79c640: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x79c640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c644: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x79c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x79c648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79c64c: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x79c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
    // 0x79c650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c654: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x79c654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x79c658: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x79c658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x79c65c: 0xc1e6ca8  jal         func_79B2A0
    ctx->pc = 0x79C65Cu;
    SET_GPR_U32(ctx, 31, 0x79C664u);
    ctx->pc = 0x79C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C65Cu;
    // 0x79c660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A0u, 0x79C65Cu, 0x79C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C664u;
label_79c664:
    // 0x79c664: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x79C664u;
    {
        const bool branch_taken_0x79c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C664u;
        // 0x79c668: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c664) {
            ctx->pc = 0x79C7A4u;
            goto label_79c7a4;
        }
    }
    ctx->pc = 0x79C66Cu;
label_79c66c:
    // 0x79c66c: 0x265e004c  addiu       $fp, $s2, 0x4C
    ctx->pc = 0x79c66cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x79c670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79c674: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79c674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79c678: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79c678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79c67c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79c67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79c680: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x79c680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c684: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x79c684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c688: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79c688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c68c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x79c68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c690: 0x26540060  addiu       $s4, $s2, 0x60
    ctx->pc = 0x79c690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x79c694: 0x0  nop
    ctx->pc = 0x79c694u;
    // NOP
label_79c698:
    // 0x79c698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79c698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79c69c: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x79C69Cu;
    {
        const bool branch_taken_0x79c69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C69Cu;
        // 0x79c6a0: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c69c) {
            ctx->pc = 0x79C794u;
            goto label_79c794;
        }
    }
    ctx->pc = 0x79C6A4u;
    // 0x79c6a4: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x79c6a4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c6a8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x79c6a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x79c6ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c6b0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x79C6B0u;
    {
        const bool branch_taken_0x79c6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c6b0) {
            ctx->pc = 0x79C6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C6B0u;
            // 0x79c6b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C798u;
            goto label_79c798;
        }
    }
    ctx->pc = 0x79C6B8u;
    // 0x79c6b8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x79c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x79c6bc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79c6c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79c6c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c6c4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79c6c8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79c6cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c6d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79C6D0u;
    {
        const bool branch_taken_0x79c6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6D0u;
        // 0x79c6d4: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6d0) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C6D8u;
    // 0x79c6d8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79c6dc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79C6DCu;
    {
        const bool branch_taken_0x79c6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6DCu;
        // 0x79c6e0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6dc) {
            ctx->pc = 0x79C72Cu;
            goto label_79c72c;
        }
    }
    ctx->pc = 0x79C6E4u;
    // 0x79c6e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c6e8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x79c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79c6ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79c6f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x79c6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x79c6f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c6f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79C6F8u;
    {
        const bool branch_taken_0x79c6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6F8u;
        // 0x79c6fc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6f8) {
            ctx->pc = 0x79C72Cu;
            goto label_79c72c;
        }
    }
    ctx->pc = 0x79C700u;
label_79c700:
    // 0x79c700: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x79c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x79c704: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x79c704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c708: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x79c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x79c70c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79c710: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x79c710u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x79c714: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x79c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c718: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x79c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79c71c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x79c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79c720: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x79c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79c724: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x79c724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x79c728: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x79c728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_79c72c:
    // 0x79c72c: 0xc7b40014  lwc1        $f20, 0x14($sp)
    ctx->pc = 0x79c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79c730: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x79c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x79c734: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79c734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x79c738: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79c73c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79c73cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c740: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79c740u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c744: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79c744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79c748: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79c74c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x79c74cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79c750: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79c754: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x79c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79c758: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x79c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c75c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79c75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x79c760: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x79c760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x79c764: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x79c764u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79c768: 0x460c0004  c1          0xC0004
    ctx->pc = 0x79c768u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x79c76c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x79c76cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79c770: 0x0  nop
    ctx->pc = 0x79c770u;
    // NOP
    // 0x79c774: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x79C774u;
    {
        const bool branch_taken_0x79c774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79c774) {
            ctx->pc = 0x79C784u;
            goto label_79c784;
        }
    }
    ctx->pc = 0x79C77Cu;
    // 0x79c77c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79C77Cu;
    SET_GPR_U32(ctx, 31, 0x79C784u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79C77Cu, 0x79C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C784u;
label_79c784:
    // 0x79c784: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x79c784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79c788: 0x0  nop
    ctx->pc = 0x79c788u;
    // NOP
    // 0x79c78c: 0x4501ff97  bc1t        . + 4 + (-0x69 << 2)
    ctx->pc = 0x79C78Cu;
    {
        const bool branch_taken_0x79c78c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79c78c) {
            ctx->pc = 0x79C5ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c5ec;
        }
    }
    ctx->pc = 0x79C794u;
label_79c794:
    // 0x79c794: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79c794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_79c798:
    // 0x79c798: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x79c798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x79c79c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x79C79Cu;
    {
        const bool branch_taken_0x79c79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C79Cu;
        // 0x79c7a0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c79c) {
            ctx->pc = 0x79C698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c698;
        }
    }
    ctx->pc = 0x79C7A4u;
label_79c7a4:
    // 0x79c7a4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79c7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79c7a8:
    // 0x79c7a8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79c7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79c7ac: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79c7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79c7b0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79c7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79c7b4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79c7b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c7b8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79c7b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c7bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79c7bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c7c0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x79c7c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c7c4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x79c7c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c7c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c7cc: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x79c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79c7d0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x79c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79c7d4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x79c7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79c7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C7D8u;
        // 0x79c7dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C7E0u;
}
} // namespace gh_r301
