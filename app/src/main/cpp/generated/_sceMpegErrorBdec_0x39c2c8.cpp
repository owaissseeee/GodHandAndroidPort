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

// Function: _sceMpegErrorBdec
// Address: 0x39c2c8 - 0x39c390
void _sceMpegErrorBdec_0x39c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegErrorBdec_0x39c2c8");
#endif

    switch (ctx->pc) {
        case 0x39c2e4u: goto label_39c2e4;
        case 0x39c2f8u: goto label_39c2f8;
        case 0x39c31cu: goto label_39c31c;
        case 0x39c324u: goto label_39c324;
        case 0x39c374u: goto label_39c374;
        default: break;
    }

    ctx->pc = 0x39c2c8u;

    // 0x39c2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39c2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39c2cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39c2d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x39c2d4: 0x24a5e610  addiu       $a1, $a1, -0x19F0
    ctx->pc = 0x39c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960656));
    // 0x39c2d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39c2dc: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39C2DCu;
    SET_GPR_U32(ctx, 31, 0x39C2E4u);
    ctx->pc = 0x39C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C2DCu;
    // 0x39c2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39C2DCu, 0x39C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C2E4u;
label_39c2e4:
    // 0x39c2e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39c2e8: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x39c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x39c2ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39c2f0: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39C2F0u;
    SET_GPR_U32(ctx, 31, 0x39C2F8u);
    ctx->pc = 0x39C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C2F0u;
    // 0x39c2f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39C2F0u, 0x39C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C2F8u;
label_39c2f8:
    // 0x39c2f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39c2fc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x39c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x39c300: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39c300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39c304: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x39c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x39c308: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x39c308u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5));
    // 0x39c30c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39c310: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39c314: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39C314u;
    SET_GPR_U32(ctx, 31, 0x39C31Cu);
    ctx->pc = 0x39C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C314u;
    // 0x39c318: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39C314u, 0x39C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C31Cu;
label_39c31c:
    // 0x39c31c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39C31Cu;
    SET_GPR_U32(ctx, 31, 0x39C324u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39C31Cu, 0x39C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C324u;
label_39c324:
    // 0x39c324: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x39c324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x39c328: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x39c328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x39c32c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x39c32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x39c330: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x39c330u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x39c334: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39c334u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39c338: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x39c338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x39c33c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39c340: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x39c340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x39c344: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x39c344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x39c348: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x39c348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x39c34c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39c34cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x39c350: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x39c350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x39c354: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x39c354u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x39c358: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39c358u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39c35c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x39c35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x39c360: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39c360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x39c364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C364u;
    {
        const bool branch_taken_0x39c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C364u;
        // 0x39c368: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c364) {
            ctx->pc = 0x39C378u;
            goto label_39c378;
        }
    }
    ctx->pc = 0x39C36Cu;
    // 0x39c36c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39C36Cu;
    SET_GPR_U32(ctx, 31, 0x39C374u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39C36Cu, 0x39C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C374u;
label_39c374:
    // 0x39c374: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39c378:
    // 0x39c378: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39c37c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x39c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x39c380: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39c380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c384: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39c384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39c388: 0x3e00008  jr          $ra
    ctx->pc = 0x39C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C388u;
        // 0x39c38c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C390u;
}
