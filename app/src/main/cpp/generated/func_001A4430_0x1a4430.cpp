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

// Function: func_001A4430
// Address: 0x1a4430 - 0x1a4528
void func_001A4430_0x1a4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A4430_0x1a4430");
#endif

    switch (ctx->pc) {
        case 0x1a4444u: goto label_1a4444;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4510u: goto label_1a4510;
        default: break;
    }

    ctx->pc = 0x1a4430u;

    // 0x1a4430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a4438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a443c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A443Cu;
    SET_GPR_U32(ctx, 31, 0x1A4444u);
    ctx->pc = 0x1A4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A443Cu;
    // 0x1a4440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A443Cu, 0x1A4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4444u;
label_1a4444:
    // 0x1a4444: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1a4448: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a4448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a444c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a444cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4450: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a4450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a4454: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a4458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a445c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1a445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1a4460: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a4460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a4464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4468: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1a4468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a446c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a446cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4470: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a4470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a4474: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A4474u;
    SET_GPR_U32(ctx, 31, 0x1A447Cu);
    ctx->pc = 0x1A4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4474u;
    // 0x1a4478: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A4474u, 0x1A447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A447Cu;
label_1a447c:
    // 0x1a447c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A447Cu;
    {
        const bool branch_taken_0x1a447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A447Cu;
        // 0x1a4480: 0xae020764  sw          $v0, 0x764($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a447c) {
            ctx->pc = 0x1A449Cu;
            goto label_1a449c;
        }
    }
    ctx->pc = 0x1A4484u;
    // 0x1a4484: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a4484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4488: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a448c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4490: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a4494: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1A4494u;
    SET_GPR_U32(ctx, 31, 0x1A449Cu);
    ctx->pc = 0x1A4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4494u;
    // 0x1a4498: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1A4494u, 0x1A449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A449Cu;
label_1a449c:
    // 0x1a449c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1a449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1a44a0: 0x26030770  addiu       $v1, $s0, 0x770
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1904));
    // 0x1a44a4: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1a44a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a44a8: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A44A8u;
    {
        const bool branch_taken_0x1a44a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1A44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44A8u;
        // 0x1a44ac: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44a8) {
            ctx->pc = 0x1A44C8u;
            goto label_1a44c8;
        }
    }
    ctx->pc = 0x1A44B0u;
    // 0x1a44b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a44b4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a44b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a44b8: 0xe6000770  swc1        $f0, 0x770($s0)
    ctx->pc = 0x1a44b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1904), bits); }
    // 0x1a44bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1a44bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a44c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a44c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a44c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1a44c8:
    // 0x1a44c8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1a44cc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1a44ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1a44d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a44d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a44d4: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x1a44d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
    // 0x1a44d8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1a44d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1a44dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a44dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a44e0: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x1A44E0u;
    SET_GPR_U32(ctx, 31, 0x1A44E8u);
    ctx->pc = 0x1A44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44E0u;
    // 0x1a44e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x1A44E0u, 0x1A44E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44E8u;
label_1a44e8:
    // 0x1a44e8: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1a44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1a44ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a44ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44f0: 0xa2000762  sb          $zero, 0x762($s0)
    ctx->pc = 0x1a44f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1890), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a44f4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a44f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a44f8: 0xa2000760  sb          $zero, 0x760($s0)
    ctx->pc = 0x1a44f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1888), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a44fc: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x1A44FCu;
    SET_GPR_U32(ctx, 31, 0x1A4504u);
    ctx->pc = 0x1A4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44FCu;
    // 0x1a4500: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x1A44FCu, 0x1A4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4504u;
label_1a4504:
    // 0x1a4504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4508: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x1A4508u;
    SET_GPR_U32(ctx, 31, 0x1A4510u);
    ctx->pc = 0x1A450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4508u;
    // 0x1a450c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x1A4508u, 0x1A4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4510u;
label_1a4510:
    // 0x1a4510: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a451c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A451Cu;
        // 0x1a4520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4524u;
    // 0x1a4524: 0x0  nop
    ctx->pc = 0x1a4524u;
    // NOP
    ctx->pc = 0x1a4528u;
}
