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

// Function: func_002A52E8
// Address: 0x2a52e8 - 0x2a53a8
void func_002A52E8_0x2a52e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A52E8_0x2a52e8");
#endif

    switch (ctx->pc) {
        case 0x2a5300u: goto label_2a5300;
        default: break;
    }

    ctx->pc = 0x2a52e8u;

    // 0x2a52e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a52e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a52ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a52ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a52f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a52f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a52f8: 0xc0a93cc  jal         func_2A4F30
    ctx->pc = 0x2A52F8u;
    SET_GPR_U32(ctx, 31, 0x2A5300u);
    ctx->pc = 0x2A52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52F8u;
    // 0x2a52fc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4F30u, 0x2A52F8u, 0x2A5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5300u;
label_2a5300:
    // 0x2a5300: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2a5300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5304: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A5304u;
    {
        const bool branch_taken_0x2a5304 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5304u;
        // 0x2a5308: 0x101202  srl         $v0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5304) {
            ctx->pc = 0x2A5398u;
            goto label_2a5398;
        }
    }
    ctx->pc = 0x2A530Cu;
    // 0x2a530c: 0x102c02  srl         $a1, $s0, 16
    ctx->pc = 0x2a530cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x2a5310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5314: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a5314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a5318: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2a5318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2a531c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x2a531cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2a5320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5328: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2a5328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2a532c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2a532cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2a5330: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x2a5330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2a5334: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2a5334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2a5338: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a5338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a533c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2a533cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2a5340: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2a5340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2a5344: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a5344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a5348: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x2a5348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x2a534c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a534cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5350: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2a5350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2a5354: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a5354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a5358: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2a5358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2a535c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x2a535cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x2a5360: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2a5360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2a5364: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2a5364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2a5368: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x2a5368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a536c: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x2a536cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x2a5370: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x2a5370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x2a5374: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2a5374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a5378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a537c: 0xfd250000  sd          $a1, 0x0($t1)
    ctx->pc = 0x2a537cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 5));
    // 0x2a5380: 0xfd220028  sd          $v0, 0x28($t1)
    ctx->pc = 0x2a5380u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 40), GPR_U64(ctx, 2));
    // 0x2a5384: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x2a5384u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x2a5388: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x2a5388u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x2a538c: 0xfd270010  sd          $a3, 0x10($t1)
    ctx->pc = 0x2a538cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 7));
    // 0x2a5390: 0xfd280018  sd          $t0, 0x18($t1)
    ctx->pc = 0x2a5390u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 8));
    // 0x2a5394: 0xfd240020  sd          $a0, 0x20($t1)
    ctx->pc = 0x2a5394u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 4));
label_2a5398:
    // 0x2a5398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a539c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a539cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a53a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A53A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53A0u;
        // 0x2a53a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A53A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A53A8u;
}
