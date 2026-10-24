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

// Function: cDamageGive_SetDmgGiveHitVecDir
// Address: 0x1fd338 - 0x1fd3b8
void cDamageGive_SetDmgGiveHitVecDir_0x1fd338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageGive_SetDmgGiveHitVecDir_0x1fd338");
#endif

    switch (ctx->pc) {
        case 0x1fd370u: goto label_1fd370;
        case 0x1fd384u: goto label_1fd384;
        default: break;
    }

    ctx->pc = 0x1fd338u;

    // 0x1fd338: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fd338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fd33c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1fd33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1fd340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd344: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1fd344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1fd348: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fd348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fd34c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1fd34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fd350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fd354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fd358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd35c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1fd35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1fd360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd364: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fd364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1fd368: 0xc051dca  jal         func_147728
    ctx->pc = 0x1FD368u;
    SET_GPR_U32(ctx, 31, 0x1FD370u);
    ctx->pc = 0x1FD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD368u;
    // 0x1fd36c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1FD368u, 0x1FD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD370u;
label_1fd370:
    // 0x1fd370: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1fd370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd374: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd37c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1FD37Cu;
    SET_GPR_U32(ctx, 31, 0x1FD384u);
    ctx->pc = 0x1FD380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD37Cu;
    // 0x1fd380: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1FD37Cu, 0x1FD384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD384u;
label_1fd384:
    // 0x1fd384: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1fd384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fd388: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD388u;
    {
        const bool branch_taken_0x1fd388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD388u;
        // 0x1fd38c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd388) {
            ctx->pc = 0x1FD3A4u;
            goto label_1fd3a4;
        }
    }
    ctx->pc = 0x1FD390u;
    // 0x1fd390: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1fd390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd394: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1fd394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1fd398: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1fd398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1fd39c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1fd39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd3a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fd3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fd3a4:
    // 0x1fd3a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1fd3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd3a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1fd3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd3ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fd3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3B0u;
        // 0x1fd3b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD3B8u;
}
