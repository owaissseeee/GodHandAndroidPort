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

// Function: func_00170338
// Address: 0x170338 - 0x170418
void func_00170338_0x170338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170338_0x170338");
#endif

    switch (ctx->pc) {
        case 0x170350u: goto label_170350;
        case 0x17037cu: goto label_17037c;
        case 0x1703c0u: goto label_1703c0;
        case 0x170400u: goto label_170400;
        default: break;
    }

    ctx->pc = 0x170338u;

    // 0x170338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17033c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x170340: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x170340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x170344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x170344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x170348: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x170348u;
    SET_GPR_U32(ctx, 31, 0x170350u);
    ctx->pc = 0x17034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170348u;
    // 0x17034c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x170348u, 0x170350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170350u;
label_170350:
    // 0x170350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170354: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x170354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170358: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x17035c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x170360: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x170360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x170364: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x170364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x170368: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x170368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17036c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17036cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170370: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x170370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x170374: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x170374u;
    SET_GPR_U32(ctx, 31, 0x17037Cu);
    ctx->pc = 0x170378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170374u;
    // 0x170378: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x170374u, 0x17037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17037Cu;
label_17037c:
    // 0x17037c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170380: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x170380u;
    {
        const bool branch_taken_0x170380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170380u;
        // 0x170384: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170380) {
            ctx->pc = 0x1703C0u;
            goto label_1703c0;
        }
    }
    ctx->pc = 0x170388u;
    // 0x170388: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x170388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17038c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x17038cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x170390: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x170390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x170394: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x170394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170398: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x170398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17039c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x17039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1703a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1703a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1703a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1703a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1703a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1703a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703ac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1703acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1703b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1703b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1703b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1703b8: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1703B8u;
    SET_GPR_U32(ctx, 31, 0x1703C0u);
    ctx->pc = 0x1703BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703B8u;
    // 0x1703bc: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1703B8u, 0x1703C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703C0u;
label_1703c0:
    // 0x1703c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1703c4: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1703c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1703cc: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1703ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1703d0: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1703d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1703d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1703d8: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1703d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1703dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1703dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703e0: 0xae0005ec  sw          $zero, 0x5EC($s0)
    ctx->pc = 0x1703e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
    // 0x1703e4: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1703e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1703e8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1703e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1703ec: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1703ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1703f0: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1703f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1703f4: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1703f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1703f8: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1703F8u;
    SET_GPR_U32(ctx, 31, 0x170400u);
    ctx->pc = 0x1703FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703F8u;
    // 0x1703fc: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1703F8u, 0x170400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170400u;
label_170400:
    // 0x170400: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17040c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x17040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170410: 0x3e00008  jr          $ra
    ctx->pc = 0x170410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170410u;
        // 0x170414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170418u;
}
