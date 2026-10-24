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

// Function: func_00279390
// Address: 0x279390 - 0x279670
void func_00279390_0x279390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279390_0x279390");
#endif

    switch (ctx->pc) {
        case 0x279460u: goto label_279460;
        case 0x2794d0u: goto label_2794d0;
        case 0x2795b0u: goto label_2795b0;
        case 0x2795c4u: goto label_2795c4;
        case 0x2795d0u: goto label_2795d0;
        case 0x2795e0u: goto label_2795e0;
        case 0x2795f8u: goto label_2795f8;
        case 0x279604u: goto label_279604;
        case 0x279624u: goto label_279624;
        default: break;
    }

    ctx->pc = 0x279390u;

    // 0x279390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x279390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x279394: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x279394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x279398: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x279398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x27939c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x27939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2793a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2793a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2793a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2793a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2793a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2793ac: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2793acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2793b0: 0x8c526a7c  lw          $s2, 0x6A7C($v0)
    ctx->pc = 0x2793b0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x586A7Cu));
    // 0x2793b4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2793b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2793b8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2793b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2793bc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2793bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2793c0: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2793C0u;
    {
        const bool branch_taken_0x2793c0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2793c0) {
            ctx->pc = 0x2793E0u;
            goto label_2793e0;
        }
    }
    ctx->pc = 0x2793C8u;
    // 0x2793c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2793c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2793cc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2793ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2793d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2793d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2793d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2793d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2793d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2793d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2793dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2793dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2793e0:
    // 0x2793e0: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2793E0u;
    {
        const bool branch_taken_0x2793e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2793E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E0u;
        // 0x2793e4: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793e0) {
            ctx->pc = 0x279488u;
            goto label_279488;
        }
    }
    ctx->pc = 0x2793E8u;
    // 0x2793e8: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x2793e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x2793ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2793ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2793f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2793f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2793f4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x2793f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2793f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2793fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2793fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279400: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x279400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x279404: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x279404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x279408: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x279408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27940c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27940cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x279410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x279410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x279414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279418: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x279418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27941c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x27941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x279420: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x279420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x279424: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x279424u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279428: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279428u;
    {
        const bool branch_taken_0x279428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279428u;
        // 0x27942c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279428) {
            ctx->pc = 0x27943Cu;
            goto label_27943c;
        }
    }
    ctx->pc = 0x279430u;
    // 0x279430: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x279434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279434u;
    {
        const bool branch_taken_0x279434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279434u;
        // 0x279438: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279434) {
            ctx->pc = 0x279440u;
            goto label_279440;
        }
    }
    ctx->pc = 0x27943Cu;
label_27943c:
    // 0x27943c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279440:
    // 0x279440: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x279440u;
    {
        const bool branch_taken_0x279440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279440u;
        // 0x279444: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279440) {
            ctx->pc = 0x279488u;
            goto label_279488;
        }
    }
    ctx->pc = 0x279448u;
    // 0x279448: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x279448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27944c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x27944cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279450: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x279450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279458: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x279458u;
    SET_GPR_U32(ctx, 31, 0x279460u);
    ctx->pc = 0x27945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279458u;
    // 0x27945c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x279458u, 0x279460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279460u;
label_279460:
    // 0x279460: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x279460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279464: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x279464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279468: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x279468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27946c: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27946Cu;
    {
        const bool branch_taken_0x27946c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x279470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27946Cu;
        // 0x279470: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27946c) {
            ctx->pc = 0x279488u;
            goto label_279488;
        }
    }
    ctx->pc = 0x279474u;
    // 0x279474: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x279474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279478: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x279478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27947c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x279480: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x279480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x279484: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x279484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_279488:
    // 0x279488: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x279488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x27948c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27948Cu;
    {
        const bool branch_taken_0x27948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27948Cu;
        // 0x279490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27948c) {
            ctx->pc = 0x2794A4u;
            goto label_2794a4;
        }
    }
    ctx->pc = 0x279494u;
    // 0x279494: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x279494u;
    {
        const bool branch_taken_0x279494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279494) {
            ctx->pc = 0x2794DCu;
            goto label_2794dc;
        }
    }
    ctx->pc = 0x27949Cu;
    // 0x27949c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x27949Cu;
    {
        const bool branch_taken_0x27949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27949c) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x2794A4u;
label_2794a4:
    // 0x2794a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2794a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2794a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2794a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2794acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2794b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2794b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2794b4: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2794b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2794b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2794b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794bc: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x2794bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2794c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2794c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2794c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2794c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2794C8u;
    SET_GPR_U32(ctx, 31, 0x2794D0u);
    ctx->pc = 0x2794CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794C8u;
    // 0x2794cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2794C8u, 0x2794D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794D0u;
label_2794d0:
    // 0x2794d0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2794d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2794d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2794d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2794d8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2794d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2794dc:
    // 0x2794dc: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x2794DCu;
    {
        const bool branch_taken_0x2794dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794DCu;
        // 0x2794e0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794dc) {
            ctx->pc = 0x2795C8u;
            goto label_2795c8;
        }
    }
    ctx->pc = 0x2794E4u;
    // 0x2794e4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2794e8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2794e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2794ec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2794ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2794f0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2794f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2794f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2794f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2794f8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2794f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2794fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2794fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279500: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x279500u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279504: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x279504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279508: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x279508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27950c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x279510: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x279510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279514: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x279514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279518: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x279518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27951c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x279520: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x279520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x279524: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x279524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x279528: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x27952c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27952cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x279530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279534: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x279534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279538: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x279538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27953c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x27953cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279540: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x279540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x279544: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x279544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x279548: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x279548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27954c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x27954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279550: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x279550u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279554: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x279554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279558: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x279558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27955c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x27955cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279560: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x279560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279564: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x279564u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279568: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x279568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x27956c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x27956cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x279570: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x279570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x279574: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x279574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279578: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x279578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27957c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x27957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279580: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x279580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279584: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x279584u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279588: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x279588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27958c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27958cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279590: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x279590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279594: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x279594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x279598: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x279598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27959c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x27959cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2795a0: 0xc64d0104  lwc1        $f13, 0x104($s2)
    ctx->pc = 0x2795a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2795a4: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x2795a4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2795a8: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x2795A8u;
    SET_GPR_U32(ctx, 31, 0x2795B0u);
    ctx->pc = 0x2795ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795A8u;
    // 0x2795ac: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x2795A8u, 0x2795B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795B0u;
label_2795b0:
    // 0x2795b0: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x2795b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2795b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2795b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2795b8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2795b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2795bc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2795BCu;
    SET_GPR_U32(ctx, 31, 0x2795C4u);
    ctx->pc = 0x2795C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795BCu;
    // 0x2795c0: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2795BCu, 0x2795C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795C4u;
label_2795c4:
    // 0x2795c4: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2795c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2795c8:
    // 0x2795c8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2795C8u;
    SET_GPR_U32(ctx, 31, 0x2795D0u);
    ctx->pc = 0x2795CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795C8u;
    // 0x2795cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2795C8u, 0x2795D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795D0u;
label_2795d0:
    // 0x2795d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2795D0u;
    {
        const bool branch_taken_0x2795d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795D0u;
        // 0x2795d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795d0) {
            ctx->pc = 0x2795E8u;
            goto label_2795e8;
        }
    }
    ctx->pc = 0x2795D8u;
    // 0x2795d8: 0xc09e66e  jal         func_2799B8
    ctx->pc = 0x2795D8u;
    SET_GPR_U32(ctx, 31, 0x2795E0u);
    ctx->pc = 0x2795DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795D8u;
    // 0x2795dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2799B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2799B8u, 0x2795D8u, 0x2795E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795E0u;
label_2795e0:
    // 0x2795e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2795E0u;
    {
        const bool branch_taken_0x2795e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795E0u;
        // 0x2795e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795e0) {
            ctx->pc = 0x279654u;
            goto label_279654;
        }
    }
    ctx->pc = 0x2795E8u;
label_2795e8:
    // 0x2795e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2795e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2795ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2795ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2795f0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2795F0u;
    SET_GPR_U32(ctx, 31, 0x2795F8u);
    ctx->pc = 0x2795F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795F0u;
    // 0x2795f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2795F0u, 0x2795F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795F8u;
label_2795f8:
    // 0x2795f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2795f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2795fc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2795FCu;
    SET_GPR_U32(ctx, 31, 0x279604u);
    ctx->pc = 0x279600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795FCu;
    // 0x279600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2795FCu, 0x279604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279604u;
label_279604:
    // 0x279604: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x279604u;
    {
        const bool branch_taken_0x279604 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x279608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279604u;
        // 0x279608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279604) {
            ctx->pc = 0x279650u;
            goto label_279650;
        }
    }
    ctx->pc = 0x27960Cu;
    // 0x27960c: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x27960cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
    // 0x279610: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279610u;
    {
        const bool branch_taken_0x279610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x279614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279610u;
        // 0x279614: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279610) {
            ctx->pc = 0x279640u;
            goto label_279640;
        }
    }
    ctx->pc = 0x279618u;
    // 0x279618: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x279618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x27961c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x27961Cu;
    SET_GPR_U32(ctx, 31, 0x279624u);
    ctx->pc = 0x279620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27961Cu;
    // 0x279620: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x27961Cu, 0x279624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279624u;
label_279624:
    // 0x279624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x279624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x279628: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27962c: 0x0  nop
    ctx->pc = 0x27962cu;
    // NOP
    // 0x279630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279634: 0x0  nop
    ctx->pc = 0x279634u;
    // NOP
    // 0x279638: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x279638u;
    {
        const bool branch_taken_0x279638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279638u;
        // 0x27963c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279638) {
            ctx->pc = 0x279650u;
            goto label_279650;
        }
    }
    ctx->pc = 0x279640u;
label_279640:
    // 0x279640: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x279640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x279644: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x279644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x279648: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x279648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27964c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x27964cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_279650:
    // 0x279650: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x279650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_279654:
    // 0x279654: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x279654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x279658: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x279658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27965c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x279660: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x279660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279664: 0x3e00008  jr          $ra
    ctx->pc = 0x279664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279664u;
        // 0x279668: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27966Cu;
    // 0x27966c: 0x0  nop
    ctx->pc = 0x27966cu;
    // NOP
    ctx->pc = 0x279670u;
}
