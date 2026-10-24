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

// Function: func_00170050
// Address: 0x170050 - 0x170130
void func_00170050_0x170050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170050_0x170050");
#endif

    switch (ctx->pc) {
        case 0x170068u: goto label_170068;
        case 0x170094u: goto label_170094;
        case 0x1700d8u: goto label_1700d8;
        case 0x170118u: goto label_170118;
        default: break;
    }

    ctx->pc = 0x170050u;

    // 0x170050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170054: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x170054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x170058: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x170058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17005c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x170060: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x170060u;
    SET_GPR_U32(ctx, 31, 0x170068u);
    ctx->pc = 0x170064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170060u;
    // 0x170064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x170060u, 0x170068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170068u;
label_170068:
    // 0x170068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17006c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17006cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170070: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170074: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x170074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x170078: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x17007c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x17007cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x170080: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x170080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x170084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170088: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x170088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17008c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x17008Cu;
    SET_GPR_U32(ctx, 31, 0x170094u);
    ctx->pc = 0x170090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17008Cu;
    // 0x170090: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x17008Cu, 0x170094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170094u;
label_170094:
    // 0x170094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170098: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x170098u;
    {
        const bool branch_taken_0x170098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170098u;
        // 0x17009c: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170098) {
            ctx->pc = 0x1700D8u;
            goto label_1700d8;
        }
    }
    ctx->pc = 0x1700A0u;
    // 0x1700a0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1700a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1700a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1700a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1700a8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1700a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1700ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1700b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1700b4: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1700b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1700b8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1700b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1700bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1700bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1700c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1700c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700c4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1700c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1700c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1700c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1700cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1700ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1700d0: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1700D0u;
    SET_GPR_U32(ctx, 31, 0x1700D8u);
    ctx->pc = 0x1700D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700D0u;
    // 0x1700d4: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1700D0u, 0x1700D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700D8u;
label_1700d8:
    // 0x1700d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1700dc: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x1700dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1700e0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1700e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1700e4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1700e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1700e8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1700e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1700ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1700f0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1700f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1700f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1700f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700f8: 0xae0005ec  sw          $zero, 0x5EC($s0)
    ctx->pc = 0x1700f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
    // 0x1700fc: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1700fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x170100: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x170100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x170104: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x170104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x170108: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x170108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x17010c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x17010cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x170110: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x170110u;
    SET_GPR_U32(ctx, 31, 0x170118u);
    ctx->pc = 0x170114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170110u;
    // 0x170114: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x170110u, 0x170118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170118u;
label_170118:
    // 0x170118: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17011c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170124: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x170124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170128: 0x3e00008  jr          $ra
    ctx->pc = 0x170128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170128u;
        // 0x17012c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170130u;
}
