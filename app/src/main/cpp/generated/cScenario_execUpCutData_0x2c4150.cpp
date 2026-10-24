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

// Function: cScenario_execUpCutData
// Address: 0x2c4150 - 0x2c41c8
void cScenario_execUpCutData_0x2c4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_execUpCutData_0x2c4150");
#endif

    switch (ctx->pc) {
        case 0x2c4188u: goto label_2c4188;
        case 0x2c41b8u: goto label_2c41b8;
        default: break;
    }

    ctx->pc = 0x2c4150u;

    // 0x2c4150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4158: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c4158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c415c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4164: 0xa60500d8  sh          $a1, 0xD8($s0)
    ctx->pc = 0x2c4164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c4168: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x2c4168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x2c416c: 0xa20800e5  sb          $t0, 0xE5($s0)
    ctx->pc = 0x2c416cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 229), (uint8_t)GPR_U32(ctx, 8));
    // 0x2c4170: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4170u;
    {
        const bool branch_taken_0x2c4170 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4170u;
        // 0x2c4174: 0xa20700e4  sb          $a3, 0xE4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4170) {
            ctx->pc = 0x2C41B0u;
            goto label_2c41b0;
        }
    }
    ctx->pc = 0x2C4178u;
    // 0x2c4178: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c4178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c417c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2c417cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4180: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x2C4180u;
    SET_GPR_U32(ctx, 31, 0x2C4188u);
    ctx->pc = 0x2C4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4180u;
    // 0x2c4184: 0x24a541c8  addiu       $a1, $a1, 0x41C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x2C4180u, 0x2C4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4188u;
label_2c4188:
    // 0x2c4188: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c4188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c418c: 0x520000a  bltz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C418Cu;
    {
        const bool branch_taken_0x2c418c = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2C4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C418Cu;
        // 0x2c4190: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c418c) {
            ctx->pc = 0x2C41B8u;
            goto label_2c41b8;
        }
    }
    ctx->pc = 0x2C4194u;
    // 0x2c4194: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2c4194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c4198: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x2c4198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c419c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c41a0: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x2c41a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2c41a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c41a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c41a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41A8u;
    {
        const bool branch_taken_0x2c41a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41A8u;
        // 0x2c41ac: 0xa0620050  sb          $v0, 0x50($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41a8) {
            ctx->pc = 0x2C41B8u;
            goto label_2c41b8;
        }
    }
    ctx->pc = 0x2C41B0u;
label_2c41b0:
    // 0x2c41b0: 0xc0b1072  jal         func_2C41C8
    ctx->pc = 0x2C41B0u;
    SET_GPR_U32(ctx, 31, 0x2C41B8u);
    ctx->pc = 0x2C41C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C41C8u, 0x2C41B0u, 0x2C41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c41b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c41bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c41bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c41c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C41C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41C0u;
        // 0x2c41c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C41C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C41C8u;
}
