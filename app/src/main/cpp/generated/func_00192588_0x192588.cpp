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

// Function: func_00192588
// Address: 0x192588 - 0x1926a0
void func_00192588_0x192588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00192588_0x192588");
#endif

    switch (ctx->pc) {
        case 0x19263cu: goto label_19263c;
        default: break;
    }

    ctx->pc = 0x192588u;

    // 0x192588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19258c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x192590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192598: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x192598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x19259c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19259Cu;
    {
        const bool branch_taken_0x19259c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19259Cu;
        // 0x1925a0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19259c) {
            ctx->pc = 0x192690u;
            goto label_192690;
        }
    }
    ctx->pc = 0x1925A4u;
    // 0x1925a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1925a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1925a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1925a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1925ac: 0x260205c0  addiu       $v0, $s0, 0x5C0
    ctx->pc = 0x1925acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x1925b0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1925B0u;
    {
        const bool branch_taken_0x1925b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1925B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925B0u;
        // 0x1925b4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925b0) {
            ctx->pc = 0x1925CCu;
            goto label_1925cc;
        }
    }
    ctx->pc = 0x1925B8u;
    // 0x1925b8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1925b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1925bc: 0xe60005c0  swc1        $f0, 0x5C0($s0)
    ctx->pc = 0x1925bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    // 0x1925c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1925c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1925c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1925c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1925c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1925c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1925cc:
    // 0x1925cc: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x1925ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1925d0: 0x9c630060  lwu         $v1, 0x60($v1)
    ctx->pc = 0x1925d0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1925d4: 0x310bb  dsra        $v0, $v1, 2
    ctx->pc = 0x1925d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
    // 0x1925d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1925d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1925dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1925DCu;
    {
        const bool branch_taken_0x1925dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925DCu;
        // 0x1925e0: 0x311bb  dsra        $v0, $v1, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925dc) {
            ctx->pc = 0x19261Cu;
            goto label_19261c;
        }
    }
    ctx->pc = 0x1925E4u;
    // 0x1925e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1925e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1925e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1925E8u;
    {
        const bool branch_taken_0x1925e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925E8u;
        // 0x1925ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925e8) {
            ctx->pc = 0x192608u;
            goto label_192608;
        }
    }
    ctx->pc = 0x1925F0u;
    // 0x1925f0: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1925f4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1925f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1925f8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1925f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1925fc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1925fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x192600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x192600u;
    {
        const bool branch_taken_0x192600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192600u;
        // 0x192604: 0xae0305b0  sw          $v1, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192600) {
            ctx->pc = 0x192614u;
            goto label_192614;
        }
    }
    ctx->pc = 0x192608u;
label_192608:
    // 0x192608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19260c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19260cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x192610: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x192610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_192614:
    // 0x192614: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x192614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x192618: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x192618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19261c:
    // 0x19261c: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x192620: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x192620u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x192624: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x192624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x192628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19262c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x19262Cu;
    {
        const bool branch_taken_0x19262c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19262c) {
            ctx->pc = 0x192630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19262Cu;
            // 0x192630: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192694u;
            goto label_192694;
        }
    }
    ctx->pc = 0x192634u;
    // 0x192634: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x192634u;
    SET_GPR_U32(ctx, 31, 0x19263Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x192634u, 0x19263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19263Cu;
label_19263c:
    // 0x19263c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x192640: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x192640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x192644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192648: 0x0  nop
    ctx->pc = 0x192648u;
    // NOP
    // 0x19264c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19264cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192650: 0x0  nop
    ctx->pc = 0x192650u;
    // NOP
    // 0x192654: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x192654u;
    {
        const bool branch_taken_0x192654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192654u;
        // 0x192658: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192654) {
            ctx->pc = 0x19267Cu;
            goto label_19267c;
        }
    }
    ctx->pc = 0x19265Cu;
    // 0x19265c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x192660: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x192660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x192664: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x192664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x192668: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x192668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19266c: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x19266cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x192670: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x192670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x192674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192674u;
    {
        const bool branch_taken_0x192674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192674u;
        // 0x192678: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192674) {
            ctx->pc = 0x192690u;
            goto label_192690;
        }
    }
    ctx->pc = 0x19267Cu;
label_19267c:
    // 0x19267c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192680: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x192680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x192684: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x192684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x192688: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x192688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19268c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19268cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_192690:
    // 0x192690: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192694:
    // 0x192694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192698: 0x3e00008  jr          $ra
    ctx->pc = 0x192698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192698u;
        // 0x19269c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926A0u;
}
