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

// Function: cScenario_moveObjPos
// Address: 0x2c4440 - 0x2c4510
void cScenario_moveObjPos_0x2c4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_moveObjPos_0x2c4440");
#endif

    switch (ctx->pc) {
        case 0x2c4440u: goto label_2c4440;
        case 0x2c4444u: goto label_2c4444;
        case 0x2c4448u: goto label_2c4448;
        case 0x2c444cu: goto label_2c444c;
        case 0x2c4450u: goto label_2c4450;
        case 0x2c4454u: goto label_2c4454;
        case 0x2c4458u: goto label_2c4458;
        case 0x2c445cu: goto label_2c445c;
        case 0x2c4460u: goto label_2c4460;
        case 0x2c4464u: goto label_2c4464;
        case 0x2c4468u: goto label_2c4468;
        case 0x2c446cu: goto label_2c446c;
        case 0x2c4470u: goto label_2c4470;
        case 0x2c4474u: goto label_2c4474;
        case 0x2c4478u: goto label_2c4478;
        case 0x2c447cu: goto label_2c447c;
        case 0x2c4480u: goto label_2c4480;
        case 0x2c4484u: goto label_2c4484;
        case 0x2c4488u: goto label_2c4488;
        case 0x2c448cu: goto label_2c448c;
        case 0x2c4490u: goto label_2c4490;
        case 0x2c4494u: goto label_2c4494;
        case 0x2c4498u: goto label_2c4498;
        case 0x2c449cu: goto label_2c449c;
        case 0x2c44a0u: goto label_2c44a0;
        case 0x2c44a4u: goto label_2c44a4;
        case 0x2c44a8u: goto label_2c44a8;
        case 0x2c44acu: goto label_2c44ac;
        case 0x2c44b0u: goto label_2c44b0;
        case 0x2c44b4u: goto label_2c44b4;
        case 0x2c44b8u: goto label_2c44b8;
        case 0x2c44bcu: goto label_2c44bc;
        case 0x2c44c0u: goto label_2c44c0;
        case 0x2c44c4u: goto label_2c44c4;
        case 0x2c44c8u: goto label_2c44c8;
        case 0x2c44ccu: goto label_2c44cc;
        case 0x2c44d0u: goto label_2c44d0;
        case 0x2c44d4u: goto label_2c44d4;
        case 0x2c44d8u: goto label_2c44d8;
        case 0x2c44dcu: goto label_2c44dc;
        case 0x2c44e0u: goto label_2c44e0;
        case 0x2c44e4u: goto label_2c44e4;
        case 0x2c44e8u: goto label_2c44e8;
        case 0x2c44ecu: goto label_2c44ec;
        case 0x2c44f0u: goto label_2c44f0;
        case 0x2c44f4u: goto label_2c44f4;
        case 0x2c44f8u: goto label_2c44f8;
        case 0x2c44fcu: goto label_2c44fc;
        case 0x2c4500u: goto label_2c4500;
        case 0x2c4504u: goto label_2c4504;
        case 0x2c4508u: goto label_2c4508;
        case 0x2c450cu: goto label_2c450c;
        default: break;
    }

    ctx->pc = 0x2c4440u;

label_2c4440:
    // 0x2c4440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c4444:
    // 0x2c4444: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x2c4444u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_2c4448:
    // 0x2c4448: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c4448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c444c:
    // 0x2c444c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2c444cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2c4450:
    // 0x2c4450: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c4450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c4454:
    // 0x2c4454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4458:
    // 0x2c4458: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2c445c:
    // 0x2c445c: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x2c445cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_2c4460:
    // 0x2c4460: 0x38420100  xori        $v0, $v0, 0x100
    ctx->pc = 0x2c4460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)256);
label_2c4464:
    // 0x2c4464: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2c4468:
    if (ctx->pc == 0x2C4468u) {
        ctx->pc = 0x2C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4464u;
        // 0x2c4468: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C446Cu;
        goto label_2c446c;
    }
    ctx->pc = 0x2C4464u;
    {
        const bool branch_taken_0x2c4464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4464u;
        // 0x2c4468: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4464) {
            ctx->pc = 0x2C44D0u;
            goto label_2c44d0;
        }
    }
    ctx->pc = 0x2C446Cu;
label_2c446c:
    // 0x2c446c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c4470:
    // 0x2c4470: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c4470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c4474:
    // 0x2c4474: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c4478:
    // 0x2c4478: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c4478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c447c:
    // 0x2c447c: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x2c447cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2c4480:
    // 0x2c4480: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x2c4480u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2c4484:
    // 0x2c4484: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x2c4484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2c4488:
    // 0x2c4488: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x2c4488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2c448c:
    // 0x2c448c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x2c448cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2c4490:
    // 0x2c4490: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2c4490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2c4494:
    // 0x2c4494: 0x60f809  jalr        $v1
label_2c4498:
    if (ctx->pc == 0x2C4498u) {
        ctx->pc = 0x2C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4494u;
        // 0x2c4498: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C449Cu;
        goto label_2c449c;
    }
    ctx->pc = 0x2C4494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C449Cu);
        ctx->pc = 0x2C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4494u;
        // 0x2c4498: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4494u, 0x2C449Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C449Cu;
label_2c449c:
    // 0x2c449c: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x2c449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2c44a0:
    // 0x2c44a0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c44a4:
    // 0x2c44a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c44a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c44a8:
    // 0x2c44a8: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x2c44a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_2c44ac:
    // 0x2c44ac: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2c44acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2c44b0:
    // 0x2c44b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2c44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2c44b4:
    // 0x2c44b4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2c44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2c44b8:
    // 0x2c44b8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2c44b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2c44bc:
    // 0x2c44bc: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_2c44c0:
    // 0x2c44c0: 0x40f809  jalr        $v0
label_2c44c4:
    if (ctx->pc == 0x2C44C4u) {
        ctx->pc = 0x2C44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44C0u;
        // 0x2c44c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44C8u;
        goto label_2c44c8;
    }
    ctx->pc = 0x2C44C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C44C8u);
        ctx->pc = 0x2C44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44C0u;
        // 0x2c44c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C44C0u, 0x2C44C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C44C8u;
label_2c44c8:
    // 0x2c44c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2c44cc:
    if (ctx->pc == 0x2C44CCu) {
        ctx->pc = 0x2C44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44C8u;
        // 0x2c44cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44D0u;
        goto label_2c44d0;
    }
    ctx->pc = 0x2C44C8u;
    {
        const bool branch_taken_0x2c44c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44C8u;
        // 0x2c44cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44c8) {
            ctx->pc = 0x2C44F8u;
            goto label_2c44f8;
        }
    }
    ctx->pc = 0x2C44D0u;
label_2c44d0:
    // 0x2c44d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c44d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c44d4:
    // 0x2c44d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c44d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c44d8:
    // 0x2c44d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c44d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2c44dc:
    // 0x2c44dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c44dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c44e0:
    // 0x2c44e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c44e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c44e4:
    // 0x2c44e4: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x2c44e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2c44e8:
    // 0x2c44e8: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x2c44e8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2c44ec:
    // 0x2c44ec: 0xc0c71f8  jal         func_31C7E0
label_2c44f0:
    if (ctx->pc == 0x2C44F0u) {
        ctx->pc = 0x2C44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44ECu;
        // 0x2c44f0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44F4u;
        goto label_2c44f4;
    }
    ctx->pc = 0x2C44ECu;
    SET_GPR_U32(ctx, 31, 0x2C44F4u);
    ctx->pc = 0x2C44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44ECu;
    // 0x2c44f0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C7E0u, 0x2C44ECu, 0x2C44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44F4u;
label_2c44f4:
    // 0x2c44f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c44f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c44f8:
    // 0x2c44f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c44f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c44fc:
    // 0x2c44fc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2c44fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c4500:
    // 0x2c4500: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c4504:
    // 0x2c4504: 0x3e00008  jr          $ra
label_2c4508:
    if (ctx->pc == 0x2C4508u) {
        ctx->pc = 0x2C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4504u;
        // 0x2c4508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C450Cu;
        goto label_2c450c;
    }
    ctx->pc = 0x2C4504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4504u;
        // 0x2c4508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C450Cu;
label_2c450c:
    // 0x2c450c: 0x0  nop
    ctx->pc = 0x2c450cu;
    // NOP
    ctx->pc = 0x2c4510u;
}
