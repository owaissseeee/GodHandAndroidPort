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

// Function: cCollisionShape_construct
// Address: 0x2bb160 - 0x2bb1f0
void cCollisionShape_construct_0x2bb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionShape_construct_0x2bb160");
#endif

    switch (ctx->pc) {
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d8u: goto label_2bb1d8;
        default: break;
    }

    ctx->pc = 0x2bb160u;

    // 0x2bb160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bb164: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2bb168: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bb168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2bb16c: 0x2442bed0  addiu       $v0, $v0, -0x4130
    ctx->pc = 0x2bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    // 0x2bb170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb17c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2bb17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb180: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2bb180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2bb184: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2bb184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb188: 0xfa000050  sqc2        $vf0, 0x50($s0)
    ctx->pc = 0x2bb188u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb18c: 0xfa000060  sqc2        $vf0, 0x60($s0)
    ctx->pc = 0x2bb18cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb190: 0xfa0000d0  sqc2        $vf0, 0xD0($s0)
    ctx->pc = 0x2bb190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb194: 0xfa0000f0  sqc2        $vf0, 0xF0($s0)
    ctx->pc = 0x2bb194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb198: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bb198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bb19c: 0x24427ac0  addiu       $v0, $v0, 0x7AC0
    ctx->pc = 0x2bb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31424));
    // 0x2bb1a0: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB1A0u;
    {
        const bool branch_taken_0x2bb1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1A0u;
        // 0x2bb1a4: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1a0) {
            ctx->pc = 0x2BB1B4u;
            goto label_2bb1b4;
        }
    }
    ctx->pc = 0x2BB1A8u;
    // 0x2bb1a8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2bb1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bb1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB1ACu;
    {
        const bool branch_taken_0x2bb1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1ACu;
        // 0x2bb1b0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1ac) {
            ctx->pc = 0x2BB1BCu;
            goto label_2bb1bc;
        }
    }
    ctx->pc = 0x2BB1B4u;
label_2bb1b4:
    // 0x2bb1b4: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2bb1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bb1b8: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2bb1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_2bb1bc:
    // 0x2bb1bc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2bb1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bb1c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bb1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb1c4: 0xc0aec96  jal         func_2BB258
    ctx->pc = 0x2BB1C4u;
    SET_GPR_U32(ctx, 31, 0x2BB1CCu);
    ctx->pc = 0x2BB1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1C4u;
    // 0x2bb1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB258u, 0x2BB1C4u, 0x2BB1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1CCu;
label_2bb1cc:
    // 0x2bb1cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb1d0: 0xc0aeca6  jal         func_2BB298
    ctx->pc = 0x2BB1D0u;
    SET_GPR_U32(ctx, 31, 0x2BB1D8u);
    ctx->pc = 0x2BB1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1D0u;
    // 0x2bb1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB298u, 0x2BB1D0u, 0x2BB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1D8u;
label_2bb1d8:
    // 0x2bb1d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb1e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bb1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E8u;
        // 0x2bb1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB1F0u;
}
