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

// Function: func_001F7680
// Address: 0x1f7680 - 0x1f7798
void func_001F7680_0x1f7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7680_0x1f7680");
#endif

    ctx->pc = 0x1f7680u;

    // 0x1f7680: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f7684: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1f7688: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f7688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f768c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1f768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1f7690: 0x90620094  lbu         $v0, 0x94($v1)
    ctx->pc = 0x1f7690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1f7694: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f7694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f7698: 0xa0620094  sb          $v0, 0x94($v1)
    ctx->pc = 0x1f7698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 148), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f769c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1f76a0: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x1f76a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1f76a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F76A4u;
    {
        const bool branch_taken_0x1f76a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76A4u;
        // 0x1f76a8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76a4) {
            ctx->pc = 0x1F76C4u;
            goto label_1f76c4;
        }
    }
    ctx->pc = 0x1F76ACu;
    // 0x1f76ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f76acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f76b0: 0x2442c260  addiu       $v0, $v0, -0x3DA0
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951520));
    // 0x1f76b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f76b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f76b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f76bc: 0x800008  jr          $a0
    ctx->pc = 0x1F76BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F76C4u: goto label_1f76c4;
            case 0x1F76E4u: goto label_1f76e4;
            case 0x1F7700u: goto label_1f7700;
            case 0x1F7720u: goto label_1f7720;
            case 0x1F7740u: goto label_1f7740;
            case 0x1F774Cu: goto label_1f774c;
            case 0x1F7758u: goto label_1f7758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F76BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F76C4u;
label_1f76c4:
    // 0x1f76c4: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f76c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76cc: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1f76ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1f76d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f76d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f76d4: 0x3c0143a5  lui         $at, 0x43A5
    ctx->pc = 0x1f76d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17317 << 16));
    // 0x1f76d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f76d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f76dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F76DCu;
    {
        const bool branch_taken_0x1f76dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76DCu;
        // 0x1f76e0: 0xa0621415  sb          $v0, 0x1415($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5141), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76dc) {
            ctx->pc = 0x1F7774u;
            goto label_1f7774;
        }
    }
    ctx->pc = 0x1F76E4u;
label_1f76e4:
    // 0x1f76e4: 0x8cc2d6e8  lw          $v0, -0x2918($a2)
    ctx->pc = 0x1f76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f76e8: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1f76e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1f76ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f76ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f76f0: 0x3c0143a5  lui         $at, 0x43A5
    ctx->pc = 0x1f76f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17317 << 16));
    // 0x1f76f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f76f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f76f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1F76F8u;
    {
        const bool branch_taken_0x1f76f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76F8u;
        // 0x1f76fc: 0xa0401415  sb          $zero, 0x1415($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 5141), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76f8) {
            ctx->pc = 0x1F7774u;
            goto label_1f7774;
        }
    }
    ctx->pc = 0x1F7700u;
label_1f7700:
    // 0x1f7700: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f7700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f7704: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7708: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1f770c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f770cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7710: 0x3c0143a5  lui         $at, 0x43A5
    ctx->pc = 0x1f7710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17317 << 16));
    // 0x1f7714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7718: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7718u;
    {
        const bool branch_taken_0x1f7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7718u;
        // 0x1f771c: 0xa0621415  sb          $v0, 0x1415($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5141), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7718) {
            ctx->pc = 0x1F7774u;
            goto label_1f7774;
        }
    }
    ctx->pc = 0x1F7720u;
label_1f7720:
    // 0x1f7720: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f7720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f7724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7728: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1f7728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1f772c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f772cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7730: 0x3c0143a5  lui         $at, 0x43A5
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17317 << 16));
    // 0x1f7734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7738: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7738u;
        // 0x1f773c: 0xa0621415  sb          $v0, 0x1415($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5141), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F7774u;
            goto label_1f7774;
        }
    }
    ctx->pc = 0x1F7740u;
label_1f7740:
    // 0x1f7740: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f7740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f7744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7744u;
    {
        const bool branch_taken_0x1f7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7744u;
        // 0x1f7748: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7744) {
            ctx->pc = 0x1F7760u;
            goto label_1f7760;
        }
    }
    ctx->pc = 0x1F774Cu;
label_1f774c:
    // 0x1f774c: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f7750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7750u;
    {
        const bool branch_taken_0x1f7750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7750u;
        // 0x1f7754: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7750) {
            ctx->pc = 0x1F7760u;
            goto label_1f7760;
        }
    }
    ctx->pc = 0x1F7758u;
label_1f7758:
    // 0x1f7758: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f7758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f775c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7760:
    // 0x1f7760: 0x3c014366  lui         $at, 0x4366
    ctx->pc = 0x1f7760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17254 << 16));
    // 0x1f7764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f7764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7768: 0xa0621415  sb          $v0, 0x1415($v1)
    ctx->pc = 0x1f7768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5141), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f776c: 0x3c014391  lui         $at, 0x4391
    ctx->pc = 0x1f776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17297 << 16));
    // 0x1f7770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7774:
    // 0x1f7774: 0x8cc2d6e8  lw          $v0, -0x2918($a2)
    ctx->pc = 0x1f7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f7778: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1f777c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x1f777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x1f7780: 0xe44100a0  swc1        $f1, 0xA0($v0)
    ctx->pc = 0x1f7780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1f7784: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1f7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1f7788: 0x8cc3d6e8  lw          $v1, -0x2918($a2)
    ctx->pc = 0x1f7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956776)));
    // 0x1f778c: 0x24423011  addiu       $v0, $v0, 0x3011
    ctx->pc = 0x1f778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12305));
    // 0x1f7790: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7790u;
        // 0x1f7794: 0xac621464  sw          $v0, 0x1464($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7798u;
}
