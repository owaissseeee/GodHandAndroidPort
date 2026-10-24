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

// Function: cOmLifeCounter_checkHit
// Address: 0x172490 - 0x172570
void cOmLifeCounter_checkHit_0x172490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmLifeCounter_checkHit_0x172490");
#endif

    switch (ctx->pc) {
        case 0x1724c8u: goto label_1724c8;
        case 0x1724d4u: goto label_1724d4;
        case 0x172524u: goto label_172524;
        case 0x172544u: goto label_172544;
        case 0x17254cu: goto label_17254c;
        default: break;
    }

    ctx->pc = 0x172490u;

    // 0x172490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x172494: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x172494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x172498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17249c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1724a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1724a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1724a4: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1724a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1724a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1724ac: 0x26120d98  addiu       $s2, $s0, 0xD98
    ctx->pc = 0x1724acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3480));
    // 0x1724b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1724b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1724b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1724b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1724b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1724bc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1724c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1724c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1724c4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1724c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1724c8:
    // 0x1724c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1724cc: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1724CCu;
    SET_GPR_U32(ctx, 31, 0x1724D4u);
    ctx->pc = 0x1724D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724CCu;
    // 0x1724d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1724CCu, 0x1724D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724D4u;
label_1724d4:
    // 0x1724d4: 0x54550014  bnel        $v0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x1724D4u;
    {
        const bool branch_taken_0x1724d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1724d4) {
            ctx->pc = 0x1724D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1724D4u;
            // 0x1724d8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172528u;
            goto label_172528;
        }
    }
    ctx->pc = 0x1724DCu;
    // 0x1724dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1724dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1724e0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1724e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1724e4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1724e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1724e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1724ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1724ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1724f0: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1724F0u;
    {
        const bool branch_taken_0x1724f0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1724F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724F0u;
        // 0x1724f4: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724f0) {
            ctx->pc = 0x17251Cu;
            goto label_17251c;
        }
    }
    ctx->pc = 0x1724F8u;
    // 0x1724f8: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1724fc: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x1724fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x172500: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x172500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x172504: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x172504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x172508: 0xae0205b0  sw          $v0, 0x5B0($s0)
    ctx->pc = 0x172508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
    // 0x17250c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17250cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x172510: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x172510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x172514: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172514u;
    {
        const bool branch_taken_0x172514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172514u;
        // 0x172518: 0xa2130d9a  sb          $s3, 0xD9A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3482), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172514) {
            ctx->pc = 0x172524u;
            goto label_172524;
        }
    }
    ctx->pc = 0x17251Cu;
label_17251c:
    // 0x17251c: 0xc05cc6e  jal         func_1731B8
    ctx->pc = 0x17251Cu;
    SET_GPR_U32(ctx, 31, 0x172524u);
    ctx->pc = 0x172520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17251Cu;
    // 0x172520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1731B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1731B8u, 0x17251Cu, 0x172524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172524u;
label_172524:
    // 0x172524: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x172524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_172528:
    // 0x172528: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x172528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17252c: 0x1a60ffe6  blez        $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17252Cu;
    {
        const bool branch_taken_0x17252c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x172530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17252Cu;
        // 0x172530: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17252c) {
            ctx->pc = 0x1724C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1724c8;
        }
    }
    ctx->pc = 0x172534u;
    // 0x172534: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x172534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x172538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x172538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17253c: 0xc06dfb8  jal         func_1B7EE0
    ctx->pc = 0x17253Cu;
    SET_GPR_U32(ctx, 31, 0x172544u);
    ctx->pc = 0x172540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17253Cu;
    // 0x172540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x17253Cu, 0x172544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172544u;
label_172544:
    // 0x172544: 0xc05cc96  jal         func_173258
    ctx->pc = 0x172544u;
    SET_GPR_U32(ctx, 31, 0x17254Cu);
    ctx->pc = 0x172548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172544u;
    // 0x172548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173258u, 0x172544u, 0x17254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17254Cu;
label_17254c:
    // 0x17254c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17254cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172550: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x172550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172554: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x172554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172558: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17255c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17255cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172560: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x172560u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172568: 0x3e00008  jr          $ra
    ctx->pc = 0x172568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172568u;
        // 0x17256c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172570u;
}
