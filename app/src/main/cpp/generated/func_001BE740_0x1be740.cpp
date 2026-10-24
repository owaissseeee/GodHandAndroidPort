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

// Function: func_001BE740
// Address: 0x1be740 - 0x1be830
void func_001BE740_0x1be740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE740_0x1be740");
#endif

    switch (ctx->pc) {
        case 0x1be768u: goto label_1be768;
        case 0x1be778u: goto label_1be778;
        case 0x1be788u: goto label_1be788;
        case 0x1be798u: goto label_1be798;
        case 0x1be7e8u: goto label_1be7e8;
        case 0x1be7f8u: goto label_1be7f8;
        default: break;
    }

    ctx->pc = 0x1be740u;

    // 0x1be740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be748: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1be748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1be74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be754: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1be754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1be758: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1be758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1be75c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be760: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1BE760u;
    SET_GPR_U32(ctx, 31, 0x1BE768u);
    ctx->pc = 0x1BE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE760u;
    // 0x1be764: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1BE760u, 0x1BE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE768u;
label_1be768:
    // 0x1be768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be76c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1be76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1be770: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1BE770u;
    SET_GPR_U32(ctx, 31, 0x1BE778u);
    ctx->pc = 0x1BE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE770u;
    // 0x1be774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1BE770u, 0x1BE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE778u;
label_1be778:
    // 0x1be778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be77c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be780: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1BE780u;
    SET_GPR_U32(ctx, 31, 0x1BE788u);
    ctx->pc = 0x1BE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE780u;
    // 0x1be784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1BE780u, 0x1BE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE788u;
label_1be788:
    // 0x1be788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be78c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1be78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1be790: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1BE790u;
    SET_GPR_U32(ctx, 31, 0x1BE798u);
    ctx->pc = 0x1BE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE790u;
    // 0x1be794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1BE790u, 0x1BE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE798u;
label_1be798:
    // 0x1be798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1be79c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be7a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1be7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1be7a4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1be7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1be7a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1be7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be7ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1be7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1be7b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1be7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7b4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1be7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1be7b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be7bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1be7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1be7c0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1be7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1be7c4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1be7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1be7c8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1be7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1be7cc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1be7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1be7d0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1be7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1be7d4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1be7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1be7d8: 0x1051000e  beq         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE7D8u;
    {
        const bool branch_taken_0x1be7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D8u;
        // 0x1be7dc: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d8) {
            ctx->pc = 0x1BE814u;
            goto label_1be814;
        }
    }
    ctx->pc = 0x1BE7E0u;
    // 0x1be7e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7e4: 0x0  nop
    ctx->pc = 0x1be7e4u;
    // NOP
label_1be7e8:
    // 0x1be7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1be7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7f0: 0xc06f926  jal         func_1BE498
    ctx->pc = 0x1BE7F0u;
    SET_GPR_U32(ctx, 31, 0x1BE7F8u);
    ctx->pc = 0x1BE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7F0u;
    // 0x1be7f4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE498u, 0x1BE7F0u, 0x1BE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7F8u;
label_1be7f8:
    // 0x1be7f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1be7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1be7fc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1be7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1be800: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE800u;
    {
        const bool branch_taken_0x1be800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be800) {
            ctx->pc = 0x1BE804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE800u;
            // 0x1be804: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE818u;
            goto label_1be818;
        }
    }
    ctx->pc = 0x1BE808u;
    // 0x1be808: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1be808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1be80c: 0x1451fff6  bne         $v0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BE80Cu;
    {
        const bool branch_taken_0x1be80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1BE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE80Cu;
        // 0x1be810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be80c) {
            ctx->pc = 0x1BE7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be7e8;
        }
    }
    ctx->pc = 0x1BE814u;
label_1be814:
    // 0x1be814: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1be814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1be818:
    // 0x1be818: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1be818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be81c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1be81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be824: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE824u;
        // 0x1be828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE82Cu;
    // 0x1be82c: 0x0  nop
    ctx->pc = 0x1be82cu;
    // NOP
    ctx->pc = 0x1be830u;
}
