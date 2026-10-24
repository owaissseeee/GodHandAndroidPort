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

// Function: func_001F72C0
// Address: 0x1f72c0 - 0x1f7360
void func_001F72C0_0x1f72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F72C0_0x1f72c0");
#endif

    switch (ctx->pc) {
        case 0x1f72d4u: goto label_1f72d4;
        case 0x1f72f0u: goto label_1f72f0;
        default: break;
    }

    ctx->pc = 0x1f72c0u;

    // 0x1f72c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f72c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f72c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f72c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f72c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f72c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f72cc: 0xc07ddf4  jal         func_1F77D0
    ctx->pc = 0x1F72CCu;
    SET_GPR_U32(ctx, 31, 0x1F72D4u);
    ctx->pc = 0x1F72D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F72CCu;
    // 0x1f72d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77D0u, 0x1F72CCu, 0x1F72D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F72D4u;
label_1f72d4:
    // 0x1f72d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1f72d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f72d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f72dc: 0x24070031  addiu       $a3, $zero, 0x31
    ctx->pc = 0x1f72dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1f72e0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1f72e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f72e4: 0x26100104  addiu       $s0, $s0, 0x104
    ctx->pc = 0x1f72e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x1f72e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f72e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72ec: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x1f72ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
label_1f72f0:
    // 0x1f72f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f72f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f72f8: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x1f72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x1f72fc: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x1f72fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f7300: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f7300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f7304: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f7304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1f7308: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f7308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f730c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1f730cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1f7310: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1f7310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1f7314: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x1f7314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x1f7318: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1f7318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1f731c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1f731cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1f7320: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f7320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1f7324: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x1f7324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x1f7328: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1f7328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f732c: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x1f732cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7330: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x1f7330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7334: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x1f7334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7338: 0xa2000036  sb          $zero, 0x36($s0)
    ctx->pc = 0x1f7338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f733c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1f733cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1f7340: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1f7340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1f7344: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1f7344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1f7348: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1F7348u;
    {
        const bool branch_taken_0x1f7348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7348u;
        // 0x1f734c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7348) {
            ctx->pc = 0x1F72F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f72f0;
        }
    }
    ctx->pc = 0x1F7350u;
    // 0x1f7350: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f7350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7358: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7358u;
        // 0x1f735c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7360u;
}
